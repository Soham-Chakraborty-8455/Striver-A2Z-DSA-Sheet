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
    ListNode* middleNode(ListNode* head) {
        ListNode * temp= head;
        ListNode* itr=head;
        int counter=0;
        while(temp->next!=NULL){
            temp= temp->next;
            counter++;
        }
        int half;
        if (counter%2==0){
            half=counter/2;
        }
        else{
            half=counter/2+1;
        }
        for(int i=0; i<half; i++){
            itr=itr->next;
        }
        head=itr;
        return head;
    }
};