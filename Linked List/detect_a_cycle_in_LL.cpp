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

// Detecting a cycle in LL 

bool isCycle(Node* head){
    Node* slow = head;
    Node* fast = head;

    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;

        if(slow == fast){
            return true;
        }
    }

    return false;
}

int main(){
    List l1;
    l1.push_back(1);
    l1.push_back(2);
    l1.push_back(3);
    l1.push_back(4);

    l1.tail->next = l1.head;  

    if(isCycle(l1.head))
        cout << "Cycle detected!";
    else
        cout << "No cycle detected!";

    return 0;
}


 