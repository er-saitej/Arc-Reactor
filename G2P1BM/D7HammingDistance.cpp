/*
    Author: Sai Tej Sunkara
    Date: 26 April 2022
    Topic: Bitwise Operators
*/
#include<bits/stdc++.h>
#include<algorithm>
#define int long long int
#define endl "\n"
using namespace std;

int solve(int x, int y) {
    int hammingNumber = x^y;
    int result = 0;
    while(hammingNumber) {
        hammingNumber = hammingNumber&(hammingNumber-1);
        result++;
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
    int test, x, y;
    cin>>test;
    while(test--) {
        cin>>x>>y;
        cout<<solve(x,y)<<endl;
    }
    cerr<<((double)clock()-initialTime)/CLOCKS_PER_SEC<<endl;
    return 0;
}