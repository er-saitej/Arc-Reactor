/*
    Author: Sai Tej Sunkara
    Date: 26 April 2022
    Topic: Bitwise Operators
*/
#include<bits/stdc++.h>
#include<map>
#include<set>
#include<algorithm>
#define int long long int
#define endl "\n"
using namespace std;

vector<int> solve(vector<int> num) {
    vector<int> result;
    map<int, multiset<int> > mp;
    for(auto x: num) {
        int bits = 0;
        int y = x;
        while(x) {
            x = (x&(x-1));
            bits++;
        }
        mp[bits].insert(y);
    }
    for(pair<int, multiset<int> > x: mp) {
        for(auto y: x.second) {
            result.push_back(y);
        }
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
    vector<int> arr;
    cin>>test;
    while(test--) {
        cin>>num;
        arr.push_back(num);
    }
    vector<int> result = solve(arr);
    for(auto x: result) {
        cout<<x<<" ";
    }
    cerr<<((double)clock()-initialTime)/CLOCKS_PER_SEC<<endl;
    return 0;
}