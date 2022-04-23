/*
    Author: Sai Tej Sunkara
    Date: 22 April 2022
    Topic: Practice
*/
#include<bits/stdc++.h>
#include<unordered_map>
#include<stack>
#include<algorithm>
#define int long long int
#define endl "\n"
using namespace std;

bool isValid(string s) {
    stack<char> stack;
    bool result = true;
    for(auto x:s) {
        if(x=='(' || x=='[' || x=='{') {
            stack.push(x);
        }
        else {
            if(stack.empty()) return false;
            if(x==')') {
                if(stack.top()=='(') stack.pop();
                else result = false;
            }
            if(x==']') {
                if(stack.top()=='[') stack.pop();
                else result = false;
            }
            if(x=='}') {
                if(stack.top()=='{') stack.pop();
                else result = false;
            }
        }
    }
    if(!stack.empty()) return false;
    return result;
}

int32_t main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);cerr.tie(0);
    clock_t initialTime = clock();
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        freopen("error.txt", "w", stderr);
    #endif
    int test;
    string str;
    cin>>test;
    while(test--) {
        cin>>str;
    }
    cout<<endl<<isValid(str)<<endl;
    cerr<<((double)clock()-initialTime)/CLOCKS_PER_SEC<<endl;
    return 0;
}