#include <iostream>
#include <vector>
#include <climits>
using namespace std;

void trap(vector<int> &heights , int n){

    int leftMax[20000];
    leftMax[0] = heights[0];
    cout << "Left Max: "<<leftMax[0] << ",";
    for(int i = 1; i < n; i++){
        leftMax[i] = max(leftMax[i-1] , heights[i]);
        cout<< leftMax[i] << ",";
    }
    cout<<endl;


    int rightMax[20000];
    rightMax[n-1] = heights[n-1];
    
    for(int i = n-2; i >= 0; i--){
        rightMax[i] = max(rightMax[i+1] , heights[i]);
    }
    cout << "Right Max: ";
    for(int i = 0; i < n; i++){
        cout<< rightMax[i] << ",";
    }
    cout<<endl;

    int totalWater = 0;
    for(int i =0; i<n ; i++){
        int water = min(leftMax[i] , rightMax[i]) - heights[i] ;
        if(water > 0){
            totalWater += water;
        }
    }
    cout<<"Total Water Trapped will be: "<< totalWater <<endl;
}

int main(){
    vector<int>heights = {4,2,0,6,3,2,5};
    int n = heights.size();
    trap(heights , n);
    return 0;
}