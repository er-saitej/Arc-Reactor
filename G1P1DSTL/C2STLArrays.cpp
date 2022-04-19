/*
    Author: Sai Tej Sunkara
    Date: 19th April 2022
    Topic: STL Array
*/
#include<bits/stdc++.h>
#include<algorithm>
#include<array>
#define int long long int
#define endl "\n"
using namespace std;

// Always pass template array by reference. If it is passed by value, actual array in template object is not updated since pass by value takes a copy of an object into it.

void displayArray(array<int, 6> &arr) {
    cout<<"Displaying an array"<<endl;
    for(array<int,6>::iterator itr=arr.begin(); itr!=arr.end(); itr++) {
        cout<<*itr<<" ";
    }
    cout<<endl;
}

void inputArray(array<int, 6> &arr) {
    int n;
    for(int i=0; i<arr.size(); i++) {
        cin>>n;
        arr.at(i) = n;
    }
}

void updateArray(array<int, 6> &arr, int index, int value) {
    arr.at(index) = value;
}

int solve(int num) {
    array<int, 6> arr;
    inputArray(arr);
    displayArray(arr);
    updateArray(arr, 4, 10);
    displayArray(arr);
    sort(arr.begin(), arr.end()); // Uses merge sort to sort an elements
    cout<<"Sorted Array"<<endl;
    displayArray(arr);
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