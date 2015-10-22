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
        if(head==NULL)
          return head;
        stack<ListNode*> s;
        int i = 0;
        ListNode* h = new ListNode(0);
        h->next = head;
        ListNode* p;
        p = h;
        ListNode* pe;
        ListNode* ps;
        for(p; p->next != NULL; p = p->next){
            if(i==m-1)
                ps = p;
            if(i>=m-1 && i<=n-1){
                s.push(p->next);
            }
            if(i==n)
             break;
            i++;
        }
        pe = p->next;
        
        while(!s.empty()){
            ps->next = s.top();
            s.pop();
            ps = ps->next;
        }
        ps->next = pe;
        
        return h->next;
        
        
    }
};