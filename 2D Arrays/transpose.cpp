#include <iostream>
#include <vector>
using namespace std;


vector<vector<int>> transpose(vector<vector<int>>& matrix, int n, int m){
    for(int i =0; i < n ; i++){
        for(int j = i+1; j < m; j++){
          swap(matrix[i][j], matrix[j][i]);
        }
    }
    return matrix;
}

int main(){
    vector<vector<int>>arr = {  {1,2,3,4},
                                {5,6,7,8},
                                {9,10,11,12},
                                {13,14,15,16}};

    int n = arr.size(), m = arr[0].size();
    arr = transpose(arr, n ,m);

    for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
        cout << arr[i][j] << " ";
    }
    cout << endl;
    }

    return 0;
}