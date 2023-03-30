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
    ListNode* removeNodes(ListNode* head) {
       stack<int> st;
       ListNode* temp=head;
        while(temp!=NULL)
        {
           while(st.size()>0 and temp->val>st.top())
                st.pop();
            st.push(temp->val);
            temp=temp->next;
        }
        vector<int> ans;
        while(!st.empty())
        {
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        ListNode* head1=new ListNode(-1);
        ListNode* temp1=head1;
        for(int x:ans)
        {
            ListNode* x1=new ListNode(x);
            temp1->next=x1;
            temp1=temp1->next;
        }
        return head1->next;
    }
};