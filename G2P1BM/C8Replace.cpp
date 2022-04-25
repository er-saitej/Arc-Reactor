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

int solve(int num1, int num2, int i, int j) {
    int mask11 = ((~0)<<(j+1));
    int mask12 = ~((~0)<<i);
    int mask1 = mask11|mask12;
    num1 = num1&mask1;
    
    int mask2 = ~mask1;
    num2 = num2&mask2;

    return num1|num2;
}

int32_t main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);cerr.tie(0);
    clock_t initialTime = clock();
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        freopen("error.txt", "w", stderr);
    #endif
    int test, num1, num2, i, j;
    cin>>test;
    while(test--) {
        cin>>num1>>num2>>i>>j;
        cout<<solve(num1, num2, i, j)<<endl;
    }
    cerr<<((double)clock()-initialTime)/CLOCKS_PER_SEC<<endl;
    return 0;
}