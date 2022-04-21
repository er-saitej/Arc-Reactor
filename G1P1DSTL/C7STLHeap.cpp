/*
    Author: Sai Tej Sunkara
    Date: 21 April 2022
    Topic: Heap - Priority Queue
*/
#include<bits/stdc++.h>
#include<algorithm>
#include<queue>
#define int long long int
#define endl "\n"
using namespace std;

void displayMaxHeap(priority_queue<int> heap) { // Heap sort
    cout<<"Displaying heap"<<endl;
    while(!heap.empty()) {
        cout<<heap.top()<<" ";
        heap.pop();
    }
    cout<<endl;
}

void displayMinHeap(priority_queue<int, vector<int>, greater<int> > heap) {
    cout<<"Displaying heap"<<endl;
    while(!heap.empty()) {
        cout<<heap.top()<<" ";
        heap.pop();
    }
    cout<<endl;
}

void insertMaxHeap(priority_queue<int> &heap) {
    int num;
    for(int i=0; i<7; i++) {
        cin>>num;
        heap.push(num);
        cout<<num<<" is inserted into heap"<<endl;
    }
    cout<<endl;
    displayMaxHeap(heap);
}

void insertMinHeap(priority_queue<int, vector<int>, greater<int> > &heap) {
    int num;
    for(int i=0; i<7; i++) {
        cin>>num;
        heap.push(num);
        cout<<num<<" is inserted into heap"<<endl;
    }
    cout<<endl;
    displayMinHeap(heap);
}

int solve(int num) {
    priority_queue<int> maxHeap; // Uses binary search trees for arranging elements in heap order.
    cout<<"Max-Heap"<<endl;
    insertMaxHeap(maxHeap);
    priority_queue<int, vector<int>, greater<int> > minHeap;
    cout<<endl<<"Min-Heap"<<endl;
    insertMinHeap(minHeap);
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