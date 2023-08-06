class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode*t=node->next;
        while(t!=NULL){
                node->val=t->val;
                if(t->next==NULL){
                    node->next=NULL;
                }
                else{
                    node=node->next;
                }
                
                t=t->next;
            
              
        }

    }
};
