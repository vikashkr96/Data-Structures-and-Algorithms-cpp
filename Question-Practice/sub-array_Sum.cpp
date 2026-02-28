#include <iostream>
#include <vector>
using namespace std;

int subarraySum(vector<int>& nums, int k) {
    int n = nums.size();
    int count = 0;
    for(int i = 0; i < n; i++){
        int sum = 0;
        for(int j = i; j < n; j++){
            sum+= nums[j];
            if(sum == k){
                count++;
            }

        }

    }
    return count;
}

int main(){
    vector<int>arr = {1,2,3,4,5,2,3,6,1,3,6,4,3,7,2,1};
    int k = 10;
    int result = subarraySum(arr, k);
    cout << "Total subarrays = " << result << endl;
    return 0;
}

