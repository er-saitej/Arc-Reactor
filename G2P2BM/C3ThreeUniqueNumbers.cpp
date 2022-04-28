/*
    Author: Sai Tej Sunkara
    Date: 27 April 2022
    Topic: Bitwise Operators Practice
*/
#include<bits/stdc++.h>
#include<unordered_map>
#include<algorithm>
#define int long long int
#define endl "\n"
using namespace std;

int solve(vector<int> &nums) {
    int result = 0;
    unordered_map<int, int> ump;
    for(int num: nums) {
        int index = 0;
        while(num) {
            if(num&1) {
                if(!ump.count(index)) {
                    ump[index] = 0;
                }
                ump[index]++;
            }
            num = num>>1;
            index++;
        }
    }
    for(pair<int, int> x: ump) {
        result = result+((x.second%3)*pow(2,x.first));
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