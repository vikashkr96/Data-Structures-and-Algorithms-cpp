#include <iostream>
#include <vector>
using namespace std;

int main(){

    int a = 10;

    int* ptr = &a;
    cout<<ptr<<endl;

    ptr++;
    cout<< ptr<<endl;

    ptr--;
    cout<< ptr<<endl;

    ptr = ptr-2;
    cout<< ptr<<endl;

    int arr[] = {1,2,3,4};
    cout<< *arr <<endl;     //1
    cout<< *(arr+1) <<endl; //2
    cout<< *(arr+2) <<endl; //3
    cout<< *(arr+3) <<endl; //4

    return 0;
    
}