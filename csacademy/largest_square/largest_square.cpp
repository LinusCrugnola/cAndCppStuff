#include <bits/stdc++.h>
using namespace std;

int largestSquare(const vector<vector<int>>& A) {
    
}
   
int main() {
    int N;
    cin >> N;
    vector<vector<int>> A;
    for (int i = 0; i < N; ++i) {
        vector<int> row;
        for (int j = 0; j < N; ++j) {
            int val;
            cin >> val;
            row.push_back(val);
        }
        A.push_back(row);
    }
    
    cout << largestSquare(A) << "\n";
    return 0;
}