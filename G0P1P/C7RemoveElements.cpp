/*
    Author: Sai Tej Sunkara
    Date: 23 April 2022
    Topic: Practice
*/
#include<bits/stdc++.h>
#include<algorithm>
#define int long long int
#define endl "\n"
using namespace std;

int removeElement(vector<int>& nums, int val) {
    int index = 0;
    int pointer = 0;
    for(auto x: nums) {
        if(x!=val) {
          nums[pointer] = nums[index];
          pointer++;
        }
        index++;
    }
    return pointer;
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
    cin>>num;
    removeElement(nums, num);
    cerr<<((double)clock()-initialTime)/CLOCKS_PER_SEC<<endl;
    return 0;
}