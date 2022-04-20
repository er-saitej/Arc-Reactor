/*
    Author: Sai Tej Sunkara
    Date: 20 April 2022
    Topic: Doubly Ended Queue
    Uses: Sliding window problems
    Facts: They may not be stored in a continuous memory locations, internally deque is a complex implementation.
*/
#include<bits/stdc++.h>
#include<deque>
#include<algorithm>
#define int long long int
#define endl "\n"
using namespace std;

void showDeque(deque<int> &deq) {
    cout<<"Displaying deque"<<endl;
    for(deque<int>::iterator itr = deq.begin(); itr!=deq.end(); itr++) {
        cout<<*itr<<" ";
    }
    cout<<endl;
}

void eraseElementInADeque(deque<int> &deq, int index) {
    cout<<"Easing element having index "<<index<<endl;
    deq.erase(deq.begin()+index);
    showDeque(deq);
}

void insertDeque(deque<int> &deq) {
    int num;
    for(int i=0; i<4; i++) {
        cin>>num;
        deq.push_back(num);
        cout<<num<<" is inserted from back of deque and size of deque is "<<deq.size()<<endl;
        showDeque(deq);
    }
    for(int i=0; i<6; i++) {
        cin>>num;
        deq.push_front(num);
        cout<<num<<" is inserted from front of deque and size of deque is "<<deq.size()<<endl;
        showDeque(deq);
    }

}

int solve(int num) {
    deque<int> deq;
    insertDeque(deq);
    showDeque(deq);
    eraseElementInADeque(deq, 3);
    cout<<"Front most element in deque "<<deq.front()<<endl;
    cout<<"Top most element in deque "<<deq.back()<<endl;
    deq.pop_back();
    deq.pop_front();
    cout<<"Popped front and back elements of deque"<<endl;
    showDeque(deq);
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