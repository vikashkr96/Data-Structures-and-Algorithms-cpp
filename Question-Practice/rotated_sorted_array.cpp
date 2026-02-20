#include <iostream>
#include <vector>
using namespace std;

// we have given a target and search it in a rotated sorted array...

int search(vector<int>&arr , int n, int target){
    int st = 0, end = n-1;
    while(st <= end){
        int mid = st + (end-st)/2;
        if(arr[mid] == target){
            return mid;
        }

        if(arr[st] <= arr[mid]){
           if(target >= arr[st] && target < arr[mid]){
            end = mid - 1;
           }else{
            st = mid + 1;
           }
        }else{
            if(target > arr[mid] && target <= arr[end]){
            st = mid + 1;
           }else{
            end = mid - 1;
           }
        }
    }
    return -1;

}

int main(){
    vector<int>arr = {15,16,20,1,2,3,5,8,12};
    int n = arr.size();
    int target = 3;
    int result = search(arr , n , target);
    cout<< result;
    return 0;
}