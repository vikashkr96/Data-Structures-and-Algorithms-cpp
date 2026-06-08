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
            tail= NULL;
        }

        ~List(){
            if(head !=  NULL){
                delete head;
                head = NULL;
            }
        }

        // push_back function 

        void push_back(int value){
            Node* newNode = new Node(value);

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
            while(temp != NULL){
                cout<< temp->data<<" -> ";
                temp = temp->next;
            }
            cout<< "NULL"<<endl;
        }


        // code for removing nth node from last in the LL
        // 1st calculating the size
        int getSize(){
            int sz = 0;
            Node* temp = head;
            while(temp != NULL){
                temp = temp->next;
                sz++;
            }
            return sz;
        }
        void remove_Nth(int n){
            int size = getSize();
            Node* prev = head;

            for(int i = 1; i< size-n; i++){ // stops when i = prev
                prev = prev->next; // so we got the value of prev
            }

            Node* toDel = prev->next;
            cout<<"Going to delete: "<<toDel->data<<endl;

            prev->next = prev->next->next;


        }
        
};

int main(){
    List l1;

    l1.push_back(1);
    l1.push_back(2);
    l1.push_back(3);
    l1.push_back(4);
    l1.push_back(5);
    l1.push_back(6);

    l1.printLL();
    l1.remove_Nth(2);
    l1.printLL();
    return 0;
}