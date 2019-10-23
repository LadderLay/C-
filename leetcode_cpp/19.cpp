//在头节点前加一个虚拟节点可避免分类讨论
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *fake = new ListNode(0);
        fake->next = head;
        ListNode *p = fake;
        ListNode *q = fake;
        for(int i=1;i<=n;i++){
            q=q->next;
        }
        while(q->next!=NULL){
            p=p->next;
            q=q->next;
        }
        ListNode *e;
        e=p->next;
        p->next=e->next;
        delete e;
        fake=fake->next;
        return fake;
    }
};