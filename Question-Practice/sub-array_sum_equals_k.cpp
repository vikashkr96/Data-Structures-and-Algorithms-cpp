#include <iostream>
#include <vector>
using namespace std;

int longestSubarray(vector<int> &nums, int k) {
    int n = nums.size();

    int left = 0, right = 0;
    long long sum = 0;
    int maxLen = 0;

    while (right < n) {
        sum += nums[right];

        while (left <= right && sum > k) {
            sum -= nums[left];
            left++;
        }

        if (sum == k) {
            maxLen = max(maxLen, right - left + 1);
        }

        right++;
    }

    return maxLen;
}

int main() {
    vector<int> arr = {1,1,5,3,7,1,1,9,2,5,3,1,2,3,4,1,2,3,1,1,1};
    int k = 9;

    cout << longestSubarray(arr, k);

    return 0;
}