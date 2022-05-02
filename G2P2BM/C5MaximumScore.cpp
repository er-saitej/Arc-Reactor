/*
    Author: Sai Tej Sunkara
    Date: 2 May 2022
    Topic: Bitwise Operators Practice
*/
#include<bits/stdc++.h>
#include<algorithm>
#define int long long int
#define endl "\n"
using namespace std;

int addMatrix(vector<vector<int> > grid) {
    int finalResult = 0;
    for(auto x: grid) {
        int length = x.size()-1;
        int result = 0;
        for(auto y: x) {
            if(y&1) {
                result = result + pow(2, length);
            }
            length--;
        }
        finalResult = finalResult + result;
    }
    return finalResult;
}

int solve(vector<vector<int> > grid) {
    set<int, greater<int> > results;
    int i = grid.size();
    int j = grid.at(0).size();
    int length = pow(2, (i+j));
    for(int i=0; i<length; i++) {
        vector<vector<int> > matrix = grid;
        int y = i;
        int position = 0;
        while(y) {
            if(y&1) {
                if(position<matrix.size()) {
                    int index = 0;
                    for(auto x: matrix.at(position)) {
                        if(matrix.at(position).at(index)) matrix.at(position).at(index) = 0;
                        else matrix.at(position).at(index) = 1;
                        index++;
                    }
                }
                else {
                    int tempPosition = position-matrix.size();
                    int index = 0;
                    for(auto x: matrix) {
                        if(matrix.at(index).at(tempPosition)) matrix.at(index).at(tempPosition) = 0;
                        else matrix.at(index).at(tempPosition) = 1;
                        index++;
                    }
                }
            }
            results.insert(addMatrix(matrix));
            position++;
            y = y>>1;
        }
    }
    return *results.begin();
}

int32_t main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);cerr.tie(0);
    clock_t initialTime = clock();
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        freopen("error.txt", "w", stderr);
    #endif
    int test, i,  j, num;
    vector<vector<int> > grid;
    cin>>test;
    while(test--) {
        cin>>i>>j;
        while(i) {
            vector<int> temp;
            for(int k=0; k<j; k++) {
                cin>>num;
                temp.push_back(num);
            }
            grid.push_back(temp);
            i--;
        }
    }
    cout<<solve(grid)<<endl;
    cerr<<((double)clock()-initialTime)/CLOCKS_PER_SEC<<endl;
    return 0;
}