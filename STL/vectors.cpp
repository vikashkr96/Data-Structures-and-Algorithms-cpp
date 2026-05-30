#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void vectorPractice(){

}

int main() {
    vector<int> v;

    v.push_back(3);
    v.push_back(4);
    v.push_back(7);
    v.push_back(6);

    sort(v.begin(), v.end());

    for (const auto &num : v) {
        cout << num << " ";
    }

    cout << endl;
    cout << v.size();

    return 0;
}