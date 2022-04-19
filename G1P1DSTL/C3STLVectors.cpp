/*
    Author: Sai Tej Sunkara
    Date: 20th April 2022
    Topic: Vectors
*/
#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
#define int long long int
#define endl "\n"
using namespace std;

void sizeAndCapacity(vector<int> &vec) {
    cout<<"Size of the vector is "<<vec.size()<<" and capacity is "<<vec.capacity()<<endl;
}

void displayVector(vector<int> &vec) {
    cout<<"Displaying vector"<<endl;
    for(vector<int>::iterator itr=vec.begin(); itr!=vec.end(); itr++) {
        cout<<*itr<<" ";
    }
    cout<<endl;
}

void clearVector(vector<int> &vec) {
    cout<<"Clearing vector"<<endl;
    vec.clear();
    displayVector(vec);
}

void insertElements(vector<int> &vec) {
    int num;
    for(int i=0; i<5; i++) {
        cin>>num;
        cout<<num<<" is inserted and ";
        vec.push_back(num);
        sizeAndCapacity(vec);
    }
    displayVector(vec);
}

void popElement(vector<int> &vec) {
    cout<<vec.back()<<" is last element of vector"<<endl;
    vec.pop_back();
    displayVector(vec);
}

void popAllElements(vector<int> &vec) {
    while(!vec.empty()) {
        cout<<vec.back()<<" is last element of vector"<<endl;
        vec.pop_back();
    }
    displayVector(vec);
}

int solve(int num) {
    vector<int> vec;
    insertElements(vec);
    clearVector(vec);
    insertElements(vec);
    popElement(vec);
    popAllElements(vec);
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