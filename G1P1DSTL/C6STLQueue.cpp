/*
    Author: Sai Tej Sunkara
    Date: 20 April 2022
    Topic: Queue
    Functionality: Have restrictions on containers. push and pop will be present. First come First served.
*/
#include<bits/stdc++.h>
#include<algorithm>
#include<queue>
#define int long long int
#define endl "\n"
using namespace std;

void displayQueue(queue<int> que) {
    cout<<"Displaying Queue"<<endl;
    while(!que.empty()) {
        cout<<que.front()<<" ";
        que.pop(); // Pops First come, First out
    }
    cout<<endl;
}

void insertToQueue(queue<int> &que) {
    int num;
    for(int i=0; i<6; i++) {
        cin>>num;
        que.push(num);
        cout<<num<<" is inserted into queue"<<endl;
    }
    displayQueue(que);
}

int solve(int num) {
    queue<int> que;
    insertToQueue(que);
    return num;
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