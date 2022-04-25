/*
    Author: Sai Tej Sunkara
    Date: 25 April 2022
    Topic: Bitwise Operators
    TIme Complexity: Log N (Because a number can have at-most Log N bits in it)
*/
#include<bits/stdc++.h>
#include<algorithm>
#define int long long int
#define endl "\n"
using namespace std;

int solve(int num) {
    int count = 0;
    while(num>0) {
        count+=num&1;
        num = num>>1;
    }
    return count;
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
        cout<<solve(num)<<" ";
    }
    cerr<<((double)clock()-initialTime)/CLOCKS_PER_SEC<<endl;
    return 0;
}