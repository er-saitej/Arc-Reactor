/*
    Author: Sai Tej Sunkara
    Date: 
    Topic: 
*/
#include<bits/stdc++.h>
#include<unordered_map>
#include<vector>
#include<algorithm>
#define int long long int
#define endl "\n"
using namespace std;

vector<pair<int, int> > solve(vector<int> &v, int target) {
    vector<pair<int, int> > result;
    unordered_map<int, int> mp;
    for(auto x: v) {
        mp[x] = target-x;
        if(mp.count(target-x)) {
            result.push_back(make_pair(x, target-x));
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
    int test, num, target;
    vector<int> v;
    cin>>test;
    while(test--) {
        cin>>num;
        v.push_back(num);
    }
    cin>>target;
    vector<pair<int, int> > result = solve(v, target);
    for(pair<int, int> x: result) {
        cout<<x.first<<" "<<x.second<<endl;
    }
    cerr<<((double)clock()-initialTime)/CLOCKS_PER_SEC<<endl;
    return 0;
}