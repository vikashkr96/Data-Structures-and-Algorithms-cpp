#include <iostream>
using namespace std;

int main(){
    int arr[3][3] ;
    int n = 3, m = 3;

    cout<<"Enter values: ";
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin>>arr[i][j];
        }
    }
    
    int sum = 0;
    for(int k = 0; k < n; k++){
        for(int l = 0; l < m; l++){
            sum+= arr[k][l];
            cout<< arr[k][l]<<" , ";
            cout<<"loop runs "<<l+1<<" times and sum till it is : "<<sum<<endl;
        }
    }
    cout<<endl;
    cout<< "sum : "<<sum;

    return 0;
}

