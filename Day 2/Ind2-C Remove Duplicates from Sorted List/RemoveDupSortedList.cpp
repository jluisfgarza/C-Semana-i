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
     ListNode* deleteDuplicates(ListNode* head) {
         ListNode *nP = head;
         while (nP) {
             ListNode *nTemp = nP->next;
             while (nTemp && nTemp->val == nP->val) {
                 nTemp = nTemp->next;
             }
             nP->next = nTemp;
             nP = nTemp;
         }
         return head; 
     }
 };
