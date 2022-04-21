/*
    Author: Sai Tej Sunkara
    Date: 21 April 2022
    Topic: Hashing with separate chaining - unordered_maps
*/
#include<bits/stdc++.h>
#include<vector>
#include<unordered_map>
#include<algorithm>
#define int long long int
#define endl "\n"
using namespace std;

void displayunordered_maps(unordered_map<int, vector<int> > mp) {
    cout<<"Displaying unordered_map"<<endl;
    for(pair<int, vector<int> > x: mp) {
        cout<<x.first<<" ";
        for(auto y: x.second) {
            cout<<y<<" ";
        }
        cout<<endl;
    }
}

void retrieveData(unordered_map<int, vector<int> > mp, int key) {
    cout<<"Retrieving data"<<endl;
    if(mp.count(key)) {
        for(auto x: mp[key]) { // To check whether data is available or not
            cout<<x<<" ";
        }
        cout<<endl;
    }
    else {
        cout<<"No data present"<<endl;
    }
}

void removeElements(unordered_map<int, vector<int> > &mp , int key) {
    mp.erase(key);
    displayunordered_maps(mp);
}

void insertElements(unordered_map<int, vector<int> > &mp) {
    int key, value;
    for(int i=0; i<7; i++) {
        cin>>key>>value;
        mp[key].push_back(value);
        cout<<key<<" is key and "<<value<<" is value in unordered_map"<<endl;
    }
    displayunordered_maps(mp);
}

int solve(int num) {
    unordered_map<int, vector<int> > mp;
    insertElements(mp);
    removeElements(mp, 3);
    retrieveData(mp, 6);
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