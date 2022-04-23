/*
    Author: Sai Tej Sunkara
    Date: 22 April 2022
    Topic: Practice
*/
#include<bits/stdc++.h>
#include<unordered_map>
#include<algorithm>
#define int long long int
#define endl "\n"
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
    unordered_map<int, char> mp;
    int smallestStringLength = INT_MAX;
    string result = "";
    string smallestString;
    for(string x: strs) {
        if(x.length()<smallestStringLength) {
            smallestStringLength = x.length();
            smallestString = x;
        }
    }
    int index = 0;
    for(auto x: smallestString) {
        mp[index] = x;
        index++;
    }
    for(auto x: strs) {
        for(int i=0; i<smallestStringLength; i++) {
            if( mp[i] != x[i] ) {
                mp.erase(i);
            }
        }
    }
    for(int i=0; i<smallestStringLength; i++) {
        if(!mp.count(i)) break;
        result = result + mp[i];
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
    int test;
    string str;
    vector<string> strs;
    cin>>test;
    while(test--) {
        cin>>str;
        strs.push_back(str);
    }
    cout<<longestCommonPrefix(strs)<<endl;
    cerr<<((double)clock()-initialTime)/CLOCKS_PER_SEC<<endl;
    return 0;
}