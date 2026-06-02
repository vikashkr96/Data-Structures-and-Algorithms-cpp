#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> divisors(int n) {

    vector<int> div;

    for(int i = 1; i <= n; i++) {
        if(n % i == 0) {
            div.push_back(i);
        }
    }

    return div;
}

int main(){
    int n = 200;
    vector<int>ans = divisors(n);
    for(auto& x: ans){
        cout<< x <<"  ";
    }
    return 0;
}
