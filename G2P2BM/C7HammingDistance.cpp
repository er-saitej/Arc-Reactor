/*
    Author: Sai Tej Sunkara
    Date: 3 May 2022
    Topic: Bitwise Operators Practice
*/
#include<bits/stdc++.h>
#include<algorithm>
#define int long long int
#define endl "\n"
using namespace std;

int solveHammingDistance(int a, int b) {
    int result = a^b;
    int count = 0;
    while(result) {
        if(result&1) count++;
        result = result>>1;
    }
    return count;
}

int solve(vector<int> nums) {
    int distance = 0;
    for(int i=0; i<nums.size()-1; i++) {
        for(int j = i+1; j<nums.size(); j++) {
            distance = distance+solveHammingDistance(nums.at(i), nums.at(j));
        }
    }
    return distance;
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
    cout<<solve(nums)<<endl;
    cerr<<((double)clock()-initialTime)/CLOCKS_PER_SEC<<endl;
    return 0;
}