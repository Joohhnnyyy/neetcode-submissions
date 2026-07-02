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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(!head)return nullptr;
        if( left == right)return head;
        ListNode* curr = head;
        ListNode* leftPrev = nullptr;
        int pos = 1;
        while(pos < left){
            leftPrev = curr;
            curr = curr -> next;
            pos++;
        }
        ListNode* newHead = curr;
        ListNode* prev = nullptr;
        int times = right - left + 1;
        while(times--){
            ListNode* nex = curr -> next;
            curr -> next = prev ;
            prev = curr ;
            curr = nex; 
        }
        if(leftPrev)leftPrev->next = prev;
        newHead -> next = curr;
        return ( leftPrev ? head : prev);
    }
};