#include <iostream>
using namespace std;

int main (){
    int arr[] = {10, 7, 7, 9, 8, 1, 6};
    
    int n = 7;
    int max = 10;

    cout<< " Original Array: ";
    for(int i=0; i< n; i++){
        cout<< arr[i] <<" ";
    }
    cout<<endl;
    
    // we will make a new array of size max+1 with all elements as 0
    int count[max+1] = {0};
    for(int i = 0; i<n ; i++){
        count[arr[i]] ++ ; 
    }

    int index = 0;
    for(int i=0; i<=max; i++){
        while(count[i] > 0){
            arr[index++] = i;
            count[i]--;
        }
    }

    cout<< " The sorted array: ";
    for(int i=0; i< n; i++){
        cout<< arr[i] <<" ";
    }
    return 0;
}

