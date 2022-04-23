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

int removeDuplicates(vector<int>& nums) {
    int pointer = 0;
    int val = nums[0];
    for(int x: nums) {
        if(x!=val) {
            pointer++;
            nums[pointer] = x;
            val = x;
        }
    }
    pointer++;
    nums.erase(nums.begin()+pointer, nums.end());
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
    cout<<endl<<removeDuplicates(nums)<<endl;
    cerr<<((double)clock()-initialTime)/CLOCKS_PER_SEC<<endl;
    return 0;
}