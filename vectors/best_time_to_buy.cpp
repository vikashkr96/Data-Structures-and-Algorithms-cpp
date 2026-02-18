#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int maxProfit(vector<int> &prices){
    int minPrice = INT_MAX;
    int maxProfit = 0;

    for(int price : prices){
        int profit = price- minPrice;
        minPrice = min(minPrice , price);
        maxProfit = max(maxProfit , profit);
    }
    return maxProfit;
}

int main(){
    vector<int>arr = {7,1,5,3,6,4};
    cout<< maxProfit(arr);
    return 0;
}
