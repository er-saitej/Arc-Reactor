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

vector<int> solve(vector<int> &encoded, int first) {
    vector<int> arr;
    arr.push_back(first);
    for(int x: encoded) {
        first = x^first;
        arr.push_back(first);
    }
    return arr;
}

int32_t main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);cerr.tie(0);
    clock_t initialTime = clock();
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        freopen("error.txt", "w", stderr);
    #endif
    int test, num, first;
    vector<int> encoded;
    cin>>test;
    while(test--) {
        cin>>num;
        encoded.push_back(num);
    }
    cin>>first;
    vector<int> arr = solve(encoded, first);
    for(auto x: arr) {
        cout<<x<<" ";
    }
    cerr<<((double)clock()-initialTime)/CLOCKS_PER_SEC<<endl;
    return 0;
}