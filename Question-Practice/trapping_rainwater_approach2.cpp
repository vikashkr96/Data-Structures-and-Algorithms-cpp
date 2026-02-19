#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int trap(vector<int>&heights , int n){
    int ans = 0;
    int l = 0, r = n-1;
    int lMax = 0, rMax = 0;

    while(l < r){
        lMax = max(lMax , heights[l]);
        rMax = max(rMax , heights[r]);
        if(lMax < rMax){
            ans+= (lMax - heights[l]);
            l++;
        }else{
            ans+= (rMax - heights[r]);
            r--;
        }
    }
    return ans;
}

int main(){
    vector<int>heights = {4,2,0,6,3,2,5};
    int n = heights.size();
    int result = trap(heights , n);
    cout<<" Water trapped = " << result;
    return 0;
}