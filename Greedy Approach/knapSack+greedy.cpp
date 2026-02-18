#include <iostream>
#include <algorithm>
using namespace std;

struct Item {
    int profit;
    int weight;
    float ratio;
};

bool cmp(Item a, Item b){
    return a.ratio > b.ratio;
}

int main() {

    int n = 5;
    Item items[n] = {
        {30,2,0},
        {35,3,0},
        {40,3,0},
        {10,1,0},
        {15,1,0}
    };

    // Step 1: Calculate ratio 
    for(int i=0;i<n;i++){
        items[i].ratio = (float)items[i].profit / items[i].weight;
    }

    // Step 2: Sort by ratio
    sort(items, items+n, cmp);

    // Step 3: Knapsack
    int capacity = 6;
    float totalProfit = 0;  

    for(int i=0;i<n;i++){
        if(capacity >= items[i].weight){
            totalProfit += items[i].profit;
            capacity -= items[i].weight;
        }
        else{
            totalProfit += items[i].ratio * capacity;
            break;
        }
    }

    cout<<"Maximum Profit = "<<totalProfit;
}
