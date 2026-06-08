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

class List{
    
        Node* head;
        Node* tail;
    public:
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

// Push back function 
        void push_back(int value){
            Node * newNode = new Node(value);

            if(head == NULL){
                head = tail = newNode;
            }else{
                tail->next = newNode;
                tail = newNode;
            }
        }

// print function 
        void printLL(){
            Node* temp = head;
            while(temp!= NULL){
                cout<<temp->data<<" -> ";
                temp = temp->next;
            }
            cout<<"NULL"<<endl;
        }

// Iterative search in LL
        int searchItr(int key){
            Node * temp = head;
            int idx= 0;

            while(temp != NULL){
                if(temp->data == key){
                    return idx;
                }

                temp = temp->next;
                idx ++;
            }
            return -1;
        }


};


int main(){
    List l1;
    l1.push_back(1);
    l1.push_back(2);
    l1.push_back(4);
    l1.push_back(5);
    l1.push_back(6);
    l1.push_back(7);
    l1.push_back(16);
    l1.printLL();

    return 0;
}




