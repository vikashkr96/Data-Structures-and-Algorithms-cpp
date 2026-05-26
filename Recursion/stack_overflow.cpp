#include <iostream>
using namespace std;

void print( ){
    cout<<" hello ....";
    print();
}


int main(){
    print();
    return 0;
}