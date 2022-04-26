/*
    Author: Sai Tej Sunkara
    Date: 26 April 2022
    Topic: Bitwise Operator
*/
#include<bits/stdc++.h>
#include<algorithm>
#include<set>
#define int long long int
#define endl "\n"
using namespace std;

int solve(int num) {
    int length = 0;
    set<int, greater<int> > set;
    while(num) {
        if(num&1) {
            length++;
        }
        else {
            set.insert(length);
            length = 0;
        }
        num = num>>1;
    }
    set.insert(length);
    return *(set.begin());
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