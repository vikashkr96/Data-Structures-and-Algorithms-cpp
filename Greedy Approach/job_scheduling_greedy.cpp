#include <iostream>
#include <algorithm>
using namespace std;

struct Job {
    string id;
    int profit;
    int deadline;
};

bool compare(Job a, Job b){
    return a.profit > b.profit; 
}

int main() {

    Job jobs[] = {{"J1",35,2}, {"J2",30,2}, {"J3",25,1}, {"J4",15,3}, {"J5",20,1}};

    int n = 5;

    sort(jobs, jobs+n, compare);

    int maxDeadline = 3; 
    string arr[4] = {"","","",""};   

    int totalProfit = 0;

    for(int i=0;i<n;i++){
        for(int j=jobs[i].deadline - 1; j >= 0; j--){
            if(arr[j] == ""){
                arr[j] = jobs[i].id;
                totalProfit += jobs[i].profit;
                break;
            }
        }
    }

    cout<<"Jobs scheduled: ";
    for(int i=0;i<=maxDeadline;i++)
        if(arr[i]!="") cout<<arr[i]<<" ";

    cout<<"\nTotal Profit = "<<totalProfit;
}


