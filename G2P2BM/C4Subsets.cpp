/*
    Author: Sai Tej Sunkara
    Date: 1 May 2022
    Topic: Bitwise Operators Practice - Subsequences of a string
    Functionality - Recursive approach and bitmasking
    Example - subsequences of abc = "", a, b, c, ab, bc, ca, abc - pow(2, 3) subsequences
            - subsequences of ab  = "", a, b, ab - pow(2, 2) subsequences
            - subsequences of abcd  = "", a, b, ab, bc, cd, da, bd, ac, abc, bcd, cda, acd, bda, acd, abcd - pow(2, 4) subsequences
*/
#include<bits/stdc++.h>
#include<algorithm>
#define int long long int
#define endl "\n"
using namespace std;

vector<string> solve(string str) {
    vector<string> results;
    int length = pow(2, str.length());
    for(int i=0; i<length; i++) {
        int y = i;
        string subsequence = "";
        int position = 0;
        while(y) {
            if(y&1) {
                subsequence+=str[position];
            }
            position++;
            y = y>>1;
        }
        results.push_back(subsequence);
    }
    return results;
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
    cin>>test;
    while(test--) {
        cin>>str;
        vector<string> solution = solve(str);
        for(auto x: solution) {
            cout<<x<<" ";
        }
    }
    return 0;
}