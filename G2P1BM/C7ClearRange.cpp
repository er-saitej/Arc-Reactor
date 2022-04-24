/*
    Author: Sai Tej Sunkara
    Date: 25 April 2022
    Topic: Practice
*/
#include<bits/stdc++.h>
#include<algorithm>
#define int long long int
#define endl "\n"
using namespace std;

int solve(int num, int i, int j) {
    int mask1 = ((~0)<<(j+1));
    int mask2 = ~((~0)<<i);
    int mask = mask1|mask2;
    return num&mask;
}

int32_t main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);cerr.tie(0);
    clock_t initialTime = clock();
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        freopen("error.txt", "w", stderr);
    #endif
    int test, num, i, j;
    cin>>test;
    while(test--) {
        cin>>num>>i>>j;
        cout<<solve(num, i, j)<<endl;
    }
    cerr<<((double)clock()-initialTime)/CLOCKS_PER_SEC<<endl;
    return 0;
}