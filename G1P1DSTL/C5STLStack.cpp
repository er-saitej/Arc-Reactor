/*
    Author: Sai Tej Sunkara
    Date: 20 April 2022
    Topic: Stack
    Functionality: Restricted container having processes like push and pop.
*/
#include<bits/stdc++.h>
#include<algorithm>
#include<stack>
#define int long long int
#define endl "\n"
using namespace std;

void displayStack(stack<int> stack) {
    cout<<"Displaying stack"<<endl; // Stack always displays in Last come first served order.
    while(!stack.empty()) {
        cout<<stack.top()<<" ";
        stack.pop();
    }
    cout<<endl;
}

void insertElementsToStack(stack<int> &stack) {
    int num;
    for(int i=0; i<6; i++) {
        cin>>num;
        stack.push(num);
        cout<<num<<" is inserted into stack"<<endl;
    }
    displayStack(stack);
}

int solve(int num) {
    stack<int> stack;
    insertElementsToStack(stack);
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
    cin>>test;
    while(test--) {
        cout<<solve(INT_MAX)<<endl;
    }
    cerr<<((double)clock()-initialTime)/CLOCKS_PER_SEC<<endl;
    return 0;
}