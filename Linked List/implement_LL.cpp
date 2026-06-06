#include <iostream>
using namespace std;

class Node { // this class for making a single node 
public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
    // destructor for deletion of nodes
    ~Node(){
        // cout<<"~Node "<< data<<"\n";
        if(next != NULL){
            delete next;
            next = NULL;
        }
    }
};

class List { // this class for collection of nodes 
public:
    Node* head;
    Node* tail;

    List(){
        head = NULL;
        tail = NULL;
    }
    // destructor for deleting the lists
    ~List(){
        // cout<<"~List\n";
        if(head != NULL){
            delete head;
            head = NULL;
        }
    }

    // fuction for pushing at front

    void push_front(int val){
        Node* newNode = new Node(val);

        if(head == NULL){
            head = tail = newNode;
        }else{
            newNode -> next = head;
            head = newNode;
        }
    }

    // function for pushing at back 
    void push_back(int val){
        Node* newNode = new Node(val);

        if(head == NULL){
            head = tail = newNode;
        }else{
            tail -> next = newNode;
            tail = newNode; 
        }
         
    }

    // function for printing the linklist sequentially
    void printLL(){
        Node* temp = head;
        while(temp != NULL){
            cout<< temp->data <<" -> ";
            temp = temp->next;
        }
        cout<< "NULL\n";
    }

    // function for inserting element at desired position in LL
    void insertLL(int val, int pos){

        if(pos == 0){
        push_front(val);
        return;
        }

        Node* newNode = new Node(val);

        Node* temp = head;
        for(int i = 0; i < pos-1; i++){

            if(temp == NULL){
                cout << "Position is invalid\n";
                return;
            }

            temp = temp -> next;
            if(temp == NULL){
                cout<<" Position is invalid\n";
                return;
            }
        }

        newNode -> next  = temp -> next;
        temp -> next = newNode; 

        if(newNode->next == NULL){
        tail = newNode;
        }
    }

    // delete from front
    void pop_front(){
        if(head== NULL){
            cout<<"LL is empty\n";
            return;
        }
        Node* temp = head;

        head = head->next;

        
        temp->next = NULL;
        delete temp;
        
    }

    // delete from back
    void pop_back(){
        Node* temp = head;
        while(temp->next->next != NULL){
            temp = temp->next;
        }
        temp->next = NULL;
        delete tail;
        tail = temp;
    }
};


int main(){

    List l1;

    l1.push_front(3);
    l1.push_front(2);
    l1.push_front(1);
    l1.push_back(4);
    // l1.insertLL(100,3);
    l1.printLL();

    // l1.pop_front();
    l1.pop_back();

    l1.printLL();

    return 0;
}

