#include <iostream>
using namespace std;

// this search technique is only used when row wise as well as col wise sorted matrix is given ..
bool stareCase(int matrix[4][4], int n , int m , int target){
    int row = 0, col = m-1;
    
    while(row < n && col >= 0){
        if( matrix[row][col] == target){
            return true;
        }else if(matrix[row][col] < target) {
            row++;
        }else{ 
            col--;
        }
    }
    return false;
}

// starting from another index
bool stareCase1(int matrix[4][4], int n , int m , int target){
    int row = n-1, col = 0;
    
    while(row >= 0 && col < m){
        if( matrix[row][col] == target){
            return true;
        }else if(matrix[row][col] < target) {
            col++;
        }else{ 
            row--;
        }
    }
    return false;
}

int main(){
    int arr[4][4] = {{1,2,3,4},
                    {5,6,7,8},
                    {9,10,11,12},
                    {13,14,15,16}};
    int n = 4, m = 4;
    int key = 31;
    cout<<stareCase(arr,n,m,key);
    cout<<stareCase1(arr,n,m,45);

}
