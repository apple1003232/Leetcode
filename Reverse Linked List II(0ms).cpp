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
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        if(head==NULL||head->next==NULL)
          return head;
        if(m==n)
            return head;
        
        
        ListNode* h;
        h = new ListNode (0);
        h->next = head;
        
        ListNode* cur=head;
        ListNode* pre=h;
        ListNode* nex=head;
        ListNode* ps=NULL;
        ListNode* r1 = NULL;
        ListNode* rn = NULL;
        ListNode* pe=NULL;
        
        
        for(int i = 1; i!=n+1; i++){
            nex = nex->next;
            if(i==m){
                ps = pre;
                r1 = cur;
            }
            if(i>m ){
                cur->next = pre;
            }
            
            pre = cur;
            cur = nex;
            
            
            
        }
        pe = nex;
        rn = pre;
        
        ps->next = rn;
        r1->next = pe;
        
        return h->next;
    }
};