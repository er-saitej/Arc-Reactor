/*
    Author: Sai Tej Sunkara
    Date: 04/12/22
    Topic: Classical arrays.
*/
#include<bits/stdc++.h>
#include<algorithm>
#define int long long int
#define endl "\n"
using namespace std;

void sizeofArray(int arr[]) {
    int size = sizeof(arr)/sizeof(int);
    cout<<"Size of an array [cannot be determined by functions]: "<<size<<endl<<endl;
}

void displayArray(int arr[], int n) {
    cout<<"Displaying an array: "<<endl;
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl<<endl;
}

void updateArray(int arr[], int index, int number) {
    arr[index] = number; // Actual array is updated since arr is reference here.
}

int solve(int n) {
    int arr[n], number;
    for(int i=0; i<n; i++) {
        cin>>number;
        arr[i] = number;
    }
    int size = sizeof(arr)/sizeof(int);
    cout<<"Size of an array: "<<size<<endl<<endl;
    
    // Arrays are always passed by reference.
    sizeofArray(arr); // Size of array can be only determined by the function or instance scope where array is created. Thus, sending that array to different function cannot determine actual size of an array.
    displayArray(arr, n);
    updateArray(arr, 1, 10);
    displayArray(arr, n);
    return 0;
}

int32_t main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);cerr.tie(0);
    clock_t initialTime = clock();
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        freopen("error.txt", "w", stderr);
    #endif
    int test, size;
    cin>>test;
    while(test--) {
        cin>>size;
        cout<<solve(size)<<endl;
    }
    cerr<<((double)clock()-initialTime)/CLOCKS_PER_SEC;
    return 0;
}