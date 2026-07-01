/* Doubly linked list node class
class Node
{
public:
    int data;
    Node *next, *prev;
    Node(int val) : data(val), next(NULL), prev(NULL)
    {
    }
};
*/

class Solution {
  public:
    
    Node* findRight(Node* head){
        Node* tail = head;
        if(tail == NULL) return NULL;
        
        while(tail->next != NULL){
            tail = tail->next;
        }
        return tail;
    }

    vector<pair<int, int>> findPairsWithGivenSum(Node *head, int target) {
        
        vector<pair<int,int>> ans;
        
        if(head == NULL) return ans;
        
        Node* left = head;
        Node* right = findRight(head);
        
        while(left != NULL && right != NULL && left != right && 
              left->prev != right){
            int sum = left->data + right->data;

            if(sum == target){
                ans.push_back({left->data, right->data});
                left = left->next;
                right = right->prev;
            }
            else if(sum < target){
                left = left->next;
            }
            else{
                right = right->prev;
            }
        }
        
        return ans;
    }
};