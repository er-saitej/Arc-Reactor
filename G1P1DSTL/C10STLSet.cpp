/*
    Author: Sai Tej Sunkara
    Date: 22 April 2022
    Topic: Sets
*/
#include<bits/stdc++.h>
#include<algorithm>
#include<unordered_set>
#define int long long int
#define endl "\n"
using namespace std;

void displaySet(unordered_set<int> set) {
    cout<<"Displaying set"<<endl;
    for(auto x: set) {
        cout<<x<<" ";
    }
    cout<<endl;
}

void deleteElements(unordered_set<int> &set, int element) {
    if(set.count(element)) {
        set.erase(element);
    }
    else {
        cout<<"Element not found"<<endl;
    }
}

void insertElementsToSet(unordered_set<int> &set) {
    int num;
    for(int i=0; i<9; i++) {
        cin>>num;
        cout<<num<<" is inserted into set"<<endl;
        set.insert(num); // Always insert unique values into it.
    }
    displaySet(set);
}

int solve(int num) {
    unordered_set<int> set;
    insertElementsToSet(set);
    deleteElements(set, 2);
    displaySet(set);
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