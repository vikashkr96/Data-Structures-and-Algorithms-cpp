#include <iostream>
#include <list>
using namespace std;

class Node {
    public:
        int data;
        Node* next;
        Node* prev;

    Node(int data){
        this->data = data ;
        next = NULL;
        prev = NULL; 
    }
};

class DoublyList {
    public:
        Node* head;
        Node* tail;

    DoublyList(){
        head = NULL;
        tail = NULL;
    }

    void push_front(int val){
        Node* newNode = new Node(val);

        if(head == NULL){
            head = tail = newNode;
        }else{
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }

    void print(){

        Node* temp = head;

        while(temp){
            cout << temp->data << " <=> ";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
    }

    void pop_front(){
        Node* temp = head;
        head = head->next;
        if(head != NULL){
            head ->prev = NULL;
        }
        temp->next = NULL;
        delete temp;
    }
};

int main(){
    DoublyList dbll;

    dbll.push_front(4);
    dbll.push_front(3);
    dbll.push_front(2);
    dbll.push_front(1);

    dbll.pop_front();
    dbll.pop_front();
    dbll.pop_front();
    dbll.pop_front();

    dbll.print();
    return 0;
}