/*
    Author: Sai Tej Sunkara
    Date: 22 April 2022
    Topic: Practice
*/
#include<bits/stdc++.h>
#include<algorithm>
#include<queue>
#include<stack>
#define int long long int
#define endl "\n"
using namespace std;

bool isPalindrome(int x) {
    if(x<0) return false;
    if(x<10) return true;
    if(x==0) return true;
    queue<int> que;
    int length = ceil(log10(x)/2);
    int y = log10(x)+1;
    while(length--) {
        int r = x%10;
        que.push(r);
        x = x/10;
    }
    int check = 0;
    int multiplier = 1;
    while(!que.empty()) {
        check = check + que.front();
        que.pop();
        check = check*10;
    }
    check =  check/10;
    if(y%2!=0) {
        check = check/10;
    }
    if(check==x) {
        return true;
    }
    return false;
}

int32_t main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);cerr.tie(0);
    clock_t initialTime = clock();
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        freopen("error.txt", "w", stderr);
    #endif
    int test, num;
    cin>>test;
    while(test--) {
        cin>>num;
        cout<<endl<<isPalindrome(num)<<endl;
    }
    cerr<<((double)clock()-initialTime)/CLOCKS_PER_SEC<<endl;
    return 0;
}