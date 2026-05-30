#include <iostream>
#include <vector>
using namespace std;

void hack(){
    vector<int>v;
    v.push_back(2);
    cout <<v[0]<<endl;
}

int main(){
    hack();
    return 0;
}