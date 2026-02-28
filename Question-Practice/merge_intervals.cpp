#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> mergeInterval(vector<vector<int>>& arr) {
    int n = arr.size();
    
    // Sorting intervals based on starting time
    sort(arr.begin(), arr.end());

    vector<vector<int>> ans;

    for (int i = 0; i < n; i++) {
        // If answer is empty OR no overlap
        if (ans.empty() || arr[i][0] > ans.back()[1]) {
            ans.push_back(arr[i]);
        } 
        // Overlapping case
        else {
            ans.back()[1] = max(ans.back()[1], arr[i][1]);
        }
    }

    return ans;
}

int main() {
    vector<vector<int>> arr = {
        {1,3},{2,6},{9,11},{8,10},{2,4},{15,18},{16,17}
    };

    vector<vector<int>> result = mergeInterval(arr);

  
    for (auto interval : result) {
        cout << interval[0] << " " << interval[1] << endl;
    }

    return 0;
}

