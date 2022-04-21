/*
    Author: Sai Tej Sunkara
    Date: 21 April 2022
    Topic: Hashing - Maps
    Functionality: Insertion takes O(log n), deletion takes O(log n), query also takes O(log n)
*/
#include<bits/stdc++.h>
#include<vector>
#include<map>
#include<algorithm>
#define int long long int
#define endl "\n"
using namespace std;

void displayMaps(map<int, vector<int> > mp) {
    cout<<"Displaying map"<<endl;
    for(pair<int, vector<int> > x: mp) {
        cout<<x.first<<" ";
        for(auto y: x.second) {
            cout<<y<<" ";
        }
        cout<<endl;
    }
}

void retrieveData(map<int, vector<int> > mp, int key) {
    cout<<"Retrieving data"<<endl;
    if(mp[key].empty()) {
        cout<<"No data present"<<endl;
    }
    else {
        for(auto x: mp[key]) {
            cout<<x<<" ";
        }
        cout<<endl;
    }
    
}

void removeElements(map<int, vector<int> > &mp , int key) {
    mp.erase(key);
    displayMaps(mp);
}

void insertElements(map<int, vector<int> > &mp) {
    int key, value;
    for(int i=0; i<7; i++) {
        cin>>key>>value;
        mp[key].push_back(value);
        cout<<key<<" is key and "<<value<<" is value in map"<<endl;
    }
    displayMaps(mp);
}

int solve(int num) {
    map<int, vector<int> > mp; // Ordered map - uses binary search tree
    insertElements(mp);
    removeElements(mp, 3); // 3 key will be deleted.
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