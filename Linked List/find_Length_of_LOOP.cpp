#include <iostream>
using namespace std;


struct ListNode
{
    int val;
    ListNode *next;

    ListNode()
    {
        val = 0;
        next = NULL;
    }

    ListNode(int data1)
    {
        val = data1;
        next = NULL;
    }

    ListNode(int data1, ListNode *next1)
    {
        val = data1;
        next = next1;
    }
};


class Solution {
public:

    int findLengthOfLoop(ListNode *head) {

        ListNode* slow = head;
        ListNode* fast = head;

        while(fast != NULL && fast->next != NULL) {

            slow = slow->next;
            fast = fast->next->next;

            if(slow == fast) {
                return getLength(slow);
            }
        }

        return 0;
    }


private:

    int getLength(ListNode* node) {

        int count = 1;
        ListNode* temp = node->next;

        while(temp != node) {

            count++;
            temp = temp->next;
        }

        return count;
    }
};


int main() {

    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    head->next->next->next->next->next = head->next->next->next; // loop formed


    Solution obj;

    cout << "Length of loop: "<< obj.findLengthOfLoop(head) << endl;
    return 0;
}