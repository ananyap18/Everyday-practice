/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *h1, ListNode *h2) {
        ListNode*c1=h1,*c2=h2;
        int a=0,b=0;
        while(c1!=NULL){
            a++;c1=c1->next;
        }
        while(c2!=NULL){
            b++;c2=c2->next;
        }
        a-=b;
        if(a>0) {c1=h1;c2=h2;}
        else {c1=h2;c2=h1;}
        a=abs(a);
        while(a--) c1=c1->next;
        while(c1!=c2) {
            c1=c1->next;
            c2=c2->next;
        }
        return c1;
        
    }
};