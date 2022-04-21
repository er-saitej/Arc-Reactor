/*
    Author: Sai Tej Sunkara
    Date: 21 April 2022
    Topic: Practice
*/
#include<bits/stdc++.h>
#include<unordered_map>
#include<algorithm>
#define int long long int
#define endl "\n"
using namespace std;

void displayPhoneBook(unordered_map<string, vector<int> > &pb) {
    for(pair<string, vector<int> > x: pb) {
        cout<<x.first<<" ";
        for(int num: x.second) {
            cout<<num<<" ";
        }
        cout<<endl;
    }
}

void insertPhoneNumbers(unordered_map<string, vector<int> > &pb) {
    int test, number, count;
    string name;
    cin>>test;
    while(test--) {
        cin>>name>>count;
        while(count--) {
            cin>>number;
            pb[name].push_back(number);
        }
    }
    displayPhoneBook(pb);
}

int solve(int num) {
    unordered_map<string, vector<int> > phoneBook;
    insertPhoneNumbers(phoneBook);
    return num;
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
    cin>>test;
    while(test--) {
        cout<<solve(INT_MAX)<<endl;
    }
    cerr<<((double)clock()-initialTime)/CLOCKS_PER_SEC<<endl;
    return 0;
}