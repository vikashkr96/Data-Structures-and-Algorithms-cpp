#include <iostream>
#include <list>
#include <iterator>
using namespace std;

// existing functions in LL
// push_front(val) - for pushing value at front 
// push_back(val) - for pushing value at back 

// size() - for calculating the size of the LIST 

// front() - head value 
// back() - tail value

// pop_front() - deleting from font 
// pop_back() - deleting from back 



int main(){
    list<int>l1;
    l1.push_front(3);
    l1.push_front(2);
    l1.push_front(1);
    l1.push_back(4);
    l1.push_back(5);

    list<int>::iterator itr;

    for(itr = l1.begin(); itr != l1.end(); itr++){
        cout<< (*itr)<<" -> ";
    }
    cout<<"NULL"<<endl;

    cout<<"Size is : "<<l1.size()<<endl;

    cout<<"Head Value is : "<< l1.front()<<endl;

    cout<<"Tail Value is : "<< l1.back()<<endl;

    l1.pop_back();


    for(itr = l1.begin(); itr != l1.end(); itr++){
        cout<< (*itr)<<" -> ";
    }
    cout<<"NULL"<<endl;


    list<int>::iterator it = l1.begin();
    advance(it, 2); 

    // Insert single element (25) before the 3rd element
    l1.insert(it, 25); 
    

    for(itr = l1.begin(); itr != l1.end(); itr++){
        cout<< (*itr)<<" -> ";
    }
    cout<<"NULL"<<endl;

    // Insert multiple copies of an element
    l1.insert(it, 2, 99); 

    // Print the final list

    for(itr = l1.begin(); itr != l1.end(); itr++){
        cout<< (*itr)<<" -> ";
    }
    cout<<"NULL"<<endl;

    


    return 0;
}