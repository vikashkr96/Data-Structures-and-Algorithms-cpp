#include <iostream>
#include <vector>
using namespace std;

int BruteForce(vector<int>arr, int n){
    for(int val : arr ){
        int freq = 0;
        for( int el : arr){
            if(val == el){
                freq++;
                if(freq > n/2){
                    return val;
                }
            }
        }
    }
    return -1;
}
int MooresAlgo(vector<int>arr, int n){
    int freq = 0 , ans = 0 ; 
    for(int i =0 ; i < n ; i++){
        if(freq == 0){
            ans = arr[i];
        }
        if(ans == arr[i]){
            freq++;
        }else{
            freq--;
        }
    }
    return ans;
}


int main(){
    cout<<"With Its Brute Force Approach:"<<endl;
    vector<int> arr = {6,2,2,6,6,6,8};
    int n = arr.size();
    cout<<BruteForce(arr,n)<<endl<<"With Moore's Voting Algorithm:"<<endl;
    cout<<MooresAlgo(arr,n);
    

}