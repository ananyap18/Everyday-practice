/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(!head)return head;
        else if(!head->next)return head;
        else{
            ListNode* temp=new ListNode(); temp=head;
            head=head->next;
            while(temp->next){
                ListNode* i=temp->next;ListNode*j=temp->next->next;
                if(!j){
                    temp->next=j;
                    i->next=temp;
                    break;
                }
                else if(!j->next){
                    temp->next=j;
                    i->next=temp;
                    break;
                }
                else{
                    temp->next=j->next;
                    i->next=temp;
                    temp=j;
                }
            }
            return head;
        }
    }
};