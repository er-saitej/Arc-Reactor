/*
    Author: Sai Tej Sunkara
    Date: 3 May 2022
    Topic: Travelling Salesman
    Usage: Bitwise Operators
    Problem: Find shortest round trip cost on map
    Functionality: Delivery van - warehouse to different locations for delivery with optimal cost
    Also known as Hamiltonian Cycle - Used in vehicle routing, supply chain management
    Approaches for problem - brute force, DP (recursive solution)
    Start from any source and end up in that same selected source - will be same answer
*/
#include<bits/stdc++.h>
#include<algorithm>
#define int long long int
#define endl "\n"
using namespace std;

int solve(int num) {
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