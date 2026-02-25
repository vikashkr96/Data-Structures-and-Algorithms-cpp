#include <iostream>
#include <algorithm>
using namespace std;

struct Activity {
    string id;
    int start;
    int finish;
};

bool compare(Activity a, Activity b){
    return a.finish < b.finish;   // sort by finish time.......
}

int main() {

    Activity act[] = {
        {"A1", 3, 5},
        {"A2", 6, 8},
        {"A3", 4, 7},
        {"A4", 7, 9},
        {"A5", 8, 12},
        {"A6", 13, 15},
        {"A7", 10, 11},
        {"A8", 13, 15},
        {"A9", 14, 15}
        
    };

    int n = 9;

    // Step 1: Sort activities by finish time .......
    sort(act, act + n, compare);

    cout << "Selected Activities: ";

    // Step 2: Pick first activity ......
    int lastFinish = act[0].finish;
    cout << act[0].id << " ";

    // Step 3: Select remaining activities  .......
    for(int i = 1; i < n; i++){
        if(act[i].start >= lastFinish){
            cout << act[i].id << " ";
            lastFinish = act[i].finish;
        }
    }

    return 0;
}
