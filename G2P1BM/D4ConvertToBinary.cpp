/*
    Author: Sai Tej Sunkara
    Date: 25 April 2022
    Topic: Bitwise Operators
*/
#include<bits/stdc++.h>
#include<algorithm>
#define int long long int
#define endl "\n"
using namespace std;

int solve(int num) {
    int result = 0;
    int tens = 1;
    while(num) {
        result = result + tens*(num&1);
        tens = tens*10;
        num = num>>1;
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
    int test, num;
    cin>>test;
    while(test--) {
        cin>>num;
        cout<<solve(num)<<endl;
    }
    cerr<<((double)clock()-initialTime)/CLOCKS_PER_SEC<<endl;
    return 0;
}