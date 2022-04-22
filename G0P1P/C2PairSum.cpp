/*
    Author: Sai Tej Sunkara
    Date: 22 April 2022
    Topic: Practice
*/
#include<bits/stdc++.h>
#include<unordered_map>
#include<set>
#include<vector>
#include<algorithm>
#define int long long int
#define endl "\n"
using namespace std;

vector<int> solve(vector<int> &nums, int target) {
    vector<int> result;
    unordered_map<int, int> mp;
    unordered_map<int, vector<int> > indices;
    int index = 0;
    for(auto x: nums) {
        indices[x].push_back(index);
        index++;
    }
    for(auto x: nums) {
        if(mp.count(target-x)) {
            if(x!=target-x) {
                result.push_back(indices[x].at(0));
                result.push_back(indices[target-x].at(0));
            }
            else {
                result.push_back(indices[x].at(0));
                result.push_back(indices[x].at(1));
            }
            break;
        }
        mp[x] = target-x;
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
    vector<int> result = solve(v, target);
    for(auto x: result) {
        cout<<x<<" ";
    }
    cerr<<((double)clock()-initialTime)/CLOCKS_PER_SEC<<endl;
    return 0;
}