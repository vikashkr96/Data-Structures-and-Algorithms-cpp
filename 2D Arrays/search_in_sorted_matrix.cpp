#include <iostream>
using namespace std;

// approach 1 O(n*m)

pair<int,int> searchBruteforce(int arr[4][4], int n , int m, int key){
    for(int i = 0; i < n; i++){
        for(int j =0; j < m; j++){
            if(arr[i][j]==key){
                return {i, j};
            }
        }
    }
    return {-1, -1};
}

// approach 2-  O(n * log m) or O(m log n)  -- only for sorted 2-d matrix(when flattened)
bool searchBinarySearch(int arr[4][4], int n , int m, int key){
    int st= 0, end = n*m-1;
    while(st <= end){
        int mid = st + (end -st)/2;
        // conversion of idices 
        int row = mid / m;
        int col = mid % m;
        if(arr[row][col]==key) return true;
        if(arr[row][col]<key){
            st = mid +1;
        }else{
            end = mid-1;
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
    int key = 11;

    pair<int,int> result = searchBruteforce(arr,n,m,key);

    if(result.first != -1)
        cout<<"Found at Row "<<result.first<<" Col "<<result.second<<endl;
    else
        cout<<"Not Found";

    cout<<searchBinarySearch(arr,n,m,key);

    return 0;
}