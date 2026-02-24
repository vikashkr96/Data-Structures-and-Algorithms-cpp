#include <iostream>
#include <vector>
using namespace std;

// brute-force approach for rotation of matrices

vector<vector<int>> rotateMatrix(vector<vector<int>>& matrix, int n, int m) {
    vector<vector<int>>result(n, vector<int>(m));

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            result[j][n-i-1] = matrix[i][j];
        }
    }
    return result;
}

int main(){
    vector<vector<int>>arr = {  {1,2,3,4},
                                {5,6,7,8},
                                {9,10,11,12},
                                {13,14,15,16}};

    int n = arr.size(), m = arr[0].size();
    arr = rotateMatrix(arr, n ,m);

    for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
        cout << arr[i][j] << " ";
    }
    cout << endl;
    }

    return 0;
}