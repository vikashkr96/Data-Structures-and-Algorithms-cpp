#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

        Node(int data){
            this->data = data;
            this->next = NULL;
        }

        ~Node(){
            if(next != NULL){
                delete next;
                next = NULL;
            }
        }
};

class List {
    public:
        Node* head;
        Node* tail;
    

        List(){
            head = NULL;
            tail = NULL;
        }

        ~List(){
            if(head != NULL){
                delete head;
                head = NULL;
            }
        }

        void push_back(int value){
            Node* newNode = new Node(value);

            if(head == NULL){
                head = tail = newNode;
            }else{
                tail->next = newNode;
                tail = newNode;
            }
        }

        void print(){
            Node* temp = head;
            while(temp!= NULL){
                cout<< temp->data <<" -> ";
                temp = temp->next;
            }
            cout<<"Null";
        }
         
};

// Removing a cycle in LL 

bool removeCycle(Node* head){
    Node* slow = head;
    Node* fast = head;
    bool cycle = false;

    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;

        if(slow == fast){
            cycle = true;
            break;
        }
    }

    if(!cycle){
        cout << "Cycle doesn't exist\n";
        return false;
    }

    slow = head;

    // Special case: cycle starts at head
    if(slow == fast){
        while(fast->next != head){
            fast = fast->next;
        }
        fast->next = NULL;
    }
    else{
        Node* prev = NULL;

        while(slow != fast){
            prev = fast;
            slow = slow->next;
            fast = fast->next;
        }

        prev->next = NULL;
    }

    cout << "Cycle removed!\n";
    return true;
}



int main(){
    List l1;
    l1.push_back(1);
    l1.push_back(2);
    l1.push_back(3);
    l1.push_back(4);

    l1.tail->next = l1.head;  

    removeCycle(l1.head);
    l1.print();

    return 0;
}


 