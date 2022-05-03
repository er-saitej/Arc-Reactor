/*
    Author: Sai Tej Sunkara
    Date: 3 May 2022
    Topic: Travelling Salesman
    Usage: Bitwise Operators
    Problem: Find shortest round trip cost on map
    Functionality: Delivery van - warehouse to different locations for delivery with optimal cost
    Also known as Hamiltonian Cycle - Used in vehicle routing, supply chain management
    Approaches for problem - brute force, DP (recursive solution)
    Start from any source and end up in that same selected source - will be same answer
*/
#include<bits/stdc++.h>
#include<algorithm>
#define int long long int
#define endl "\n"
using namespace std;

int travellingSalesman(vector<vector<int> > distance, int currentNode, int visited, int nodes) {
    //base
    if(visited == ~(~0<<nodes)){
        return distance[currentNode][0];
    }
    int answer = INT_MAX;
    for(int i=0; i<nodes; i++) {
        if(!(visited&(1<<i))) {
            int subProblem = distance[currentNode][i] + travellingSalesman(distance, i, visited|(1<<i), nodes);
            answer = min(answer, subProblem);
        }
    }
    return answer;
}

int32_t main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);cerr.tie(0);
    clock_t initialTime = clock();
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        freopen("error.txt", "w", stderr);
    #endif
    int test, nodes, num, rows, cols;
    vector<vector<int> > distance;
    cin>>test>>nodes;
    rows = cols = nodes;
    while(test--) {
        while(rows--) {
            vector<int> row;
            while(cols--) {
                cin>>num;
                row.push_back(num);
            }
            distance.push_back(row);
            cols = nodes;
        }
        cout<<travellingSalesman(distance, 0, 1, nodes)<<endl;
    }
    cerr<<((double)clock()-initialTime)/CLOCKS_PER_SEC<<endl;
    return 0;
}