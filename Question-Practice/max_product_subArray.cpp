#include <iostream>
#include <vector>
#include <climits>
using namespace std;

// Given an integer array nums, find a subarray that has the largest product, and return the product.
// The test cases are generated so that the answer will fit in a 32-bit integer.
// Note that the product of an array with a single element is the value of that element.

int prod(vector<int>&arr , int n){
    int maximum = INT_MIN;
    int suffix = 1, prefix = 1;

    for(int i = 0; i < n ; i++){
        if(prefix == 0) prefix = 1;
        if(suffix == 0) suffix = 1;

        prefix = prefix * arr[i];
        suffix = suffix * arr[n-1-i];

        maximum = max(maximum, max(prefix, suffix));
    }
    return maximum;
}


int main(){
    vector<int>arr = {2,3,-2,4};
    int n = arr.size();
    int result = prod(arr, n);
    cout<< result;
    return 0;
}