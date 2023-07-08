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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;

        int cnt = 0;
        while (temp) {
            temp = temp->next;
            cnt++;
        }

        cnt = cnt - n;
        if (cnt == 0) {
            return head->next;
        }
        
        temp = head;
        while (cnt - 1) {
            temp = temp->next;
            cnt--;
        }

        temp->next = temp->next->next;
        return head;
    }
};