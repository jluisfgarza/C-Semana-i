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
    ListNode *reverseBetween(ListNode *head, int m, int n) {
        //base case
        if(m < 1 || m >= n || !head)
          return head;

        ListNode *temp = new ListNode(0);
        temp ->next = head;
        head = temp;

        // move to (m-1)
        for(int i = 0; i < m-1; i++)
            head = head ->next;

        // reverse list pre with length n-m+1
        ListNode *pre = head ->next, *current = pre ->next;
        for(int i = 0; i < n-m; i++) {
            ListNode *temp = current ->next;
            current ->next = pre;
            pre = current;
            current = temp;
        }

        head ->next ->next = current;
        head ->next = pre;
        head = temp ->next;
        delete temp;
        return head;
    }
};
