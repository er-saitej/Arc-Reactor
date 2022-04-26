/*
    Author: Sai Tej Sunkara
    Date: 26 April 2022
    Topic: Bitwise Operator Problems
*/
#include<bits/stdc++.h>
#include<algorithm>
#define int long long int
#define endl "\n"
using namespace std;

vector<int> solve(vector<int> nums) {
    int result = 0;
    vector<int> actualResult;
    for(auto x: nums) {
        result = result^x;
    }
    int position = 0;
    while(result) {
        if(result&1) {
            break;
        }
        result = result>>1;
        position++;
    }
    vector<int> set1;
    vector<int> set2;
    for(auto x: nums) {
        int y = x;
        y = y>>position;
        if(y&1) {
            set1.push_back(x);
        }
        else {
            set2.push_back(x);
        }
    }
    result = 0;
    for(auto x: set1) {
        result = result^x;
    }
    actualResult.push_back(result);
    result = 0;
    for(auto x: set2) {
        result = result^x;
    }
    actualResult.push_back(result);
    return actualResult;
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
    vector<int> nums;
    cin>>test;
    while(test--) {
        cin>>num;
        nums.push_back(num);
    }
    vector<int> solution = solve(nums);
    for(auto x: solution) {
        cout<<x<<" ";
    }
    cerr<<((double)clock()-initialTime)/CLOCKS_PER_SEC<<endl;
    return 0;
}