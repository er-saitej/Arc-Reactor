/*
    Author: Sai Tej Sunkara
    Date: 21 April 2022
    Topic: Heap - Using Custom Comparator
*/
#include<bits/stdc++.h>
#include<algorithm>
#include<queue>
#define int long long int
#define endl "\n"
using namespace std;

class Compare {
    public:
        bool operator()(int a, int b) {
            return a>b; // Based on return value, heap is converted into max heap or min heap
        }
};

void displayHeap(priority_queue<int, vector<int>, Compare > heap) { // Heap sort
    cout<<"Displaying heap"<<endl;
    while(!heap.empty()) {
        cout<<heap.top()<<" ";
        heap.pop();
    }
    cout<<endl;
}

void insertHeap(priority_queue<int, vector<int>, Compare > &heap) {
    int num;
    for(int i=0; i<7; i++) {
        cin>>num;
        heap.push(num);
        cout<<num<<" is inserted into heap"<<endl;
    }
    cout<<endl;
    displayHeap(heap);
}

int solve(int num) {
    priority_queue<int, vector<int>, Compare > heap;
    insertHeap(heap);
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