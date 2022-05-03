/*
    Author: Sai Tej Sunkara
    Date: 3 May 2022
    Topic: Bitwise Operators Practice
*/
#include<bits/stdc++.h>
#include<algorithm>
#define int long long int
#define endl "\n"
using namespace std;

int solve(int left, int right) {
    int result = left;
    for(int i=left+1; i<right; i++) {
        result = result&i;
        if(result==0) return 0;
    }
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
    int test, left, right;
    cin>>test;
    while(test--) {
        cin>>left>>right;
        cout<<solve(left, right)<<endl;
    }
    cerr<<((double)clock()-initialTime)/CLOCKS_PER_SEC<<endl;
    return 0;
}