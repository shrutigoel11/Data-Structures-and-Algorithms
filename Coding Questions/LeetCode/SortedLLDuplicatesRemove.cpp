#include <iostream>
using namespace std;

 struct ListNode {
     int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };

class Solution {
public:

ListNode *removeDuplicates(ListNode *&head)
{
 if(head==NULL){
     return NULL;
 }
 ListNode* curr=head;
 while( curr != NULL) {
     if(curr->next!=NULL && curr->val==curr->next->val){
         ListNode*curr_next=curr->next->next; // taki piche wali unreachable n ho
          ListNode*curr_delete=curr->next;
         delete (curr_delete);
         curr->next=curr_next;
        
     }
     else{
         curr=curr->next;
     }
 }
 return head;
}
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL){
            return NULL;
        }
        
        removeDuplicates(head);
        return head;
    }
};