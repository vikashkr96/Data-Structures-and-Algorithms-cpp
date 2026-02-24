#include <iostream>
#include <vector>
using namespace std;

// better than brute force...
vector<vector<int>> zeroMatrix(vector<vector<int>>& matrix, int n, int m) {

    vector<int> row(n, 0), col(m, 0);

    // Step 1: mark rows & cols
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(matrix[i][j] == 0){
                row[i] = 1;
                col[j] = 1;
            }
        }
    }

    // Step 2: set zeroes
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(row[i] == 1 || col[j] == 1){
                matrix[i][j] = 0;
            }
        }
    }

    return matrix;
}

int main(){
    vector<vector<int>> arr = {
        {1,2,3,4},
        {5,0,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };

    int n = arr.size();
    int m = arr[0].size();

    zeroMatrix(arr, n ,m);

    for(int i = 0; i < arr.size(); i++){
    for(int j = 0; j < arr[i].size(); j++){
        cout << arr[i][j] << " ";
    }
    cout << endl;
    }

    return 0;
}