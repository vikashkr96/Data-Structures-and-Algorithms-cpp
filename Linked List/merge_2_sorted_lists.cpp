#include <iostream>
using namespace std;

class ListNode {
public:
    int val;
    ListNode* next;

    ListNode(int x) {
        val = x;
        next = NULL;
    }
};


class Solution {
public:

    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* dummy = new ListNode(-1);
        ListNode* temp = dummy;

        while(list1 != NULL && list2 != NULL){
            if(list1->val < list2->val){
                temp->next = list1;
                temp = list1; 
                list1 = list1->next;
            }else{
                temp->next = list2;
                temp = list2; 
                list2 = list2->next;
            }
        }
        // for rest elements (if any, either in list1 or in list 2)
        if(list1) temp->next = list1;
        else temp->next = list2;

        return dummy->next;


    }

};


int main() {

    Solution obj;

    ListNode* a = new ListNode(1);
    a->next = new ListNode(3);
    a->next->next = new ListNode(5);

    ListNode* b = new ListNode(2);
    b->next = new ListNode(4);
    b->next->next = new ListNode(6);


    ListNode* ans = obj.mergeTwoLists(a,b);


    while(ans){
        cout << ans->val << " ";
        ans = ans->next;
    }

    return 0;
}