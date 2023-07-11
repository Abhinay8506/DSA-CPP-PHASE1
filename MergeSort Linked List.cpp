node* findmid(node* head){
        node* slow = head;
    node* fast = head -> next;
    
    while(fast != NULL && fast -> next != NULL) {
        slow = slow -> next;
        fast = fast -> next -> next; 
    }
    return slow;
}
node* merge(node* left,node* right){
    if(left==NULL){
        return right;
    }
    if(right==NULL){
        return left;
    }
    node* temp=new node(-1);
    node* t1=temp;
    while(left!=NULL&&right!=NULL){
        if(left->data<right->data){
            t1->next=left;
            t1=left;
            left=left->next;
        }
        else{
            t1->next=right;
            t1=right;
            right=right->next;
        }
    }
    while(left!=NULL){
        t1->next=left;
        t1=left;
        left=left->next;
    }
    while(right!=NULL){
        t1->next=right;
        t1=right;
        right=right->next;
    }
    temp=temp->next;
    return temp;
}
node* mergeSort(node *head) {
    // Write your code here.
    if(head==NULL || head->next==NULL){
        return head;
    }
    node* mid=findmid(head);
    node* left=head;
    node* right=mid->next;
    mid->next=NULL;
    left=mergeSort(left);
    right=mergeSort(right);
    node* result=merge(left,right);
    return result;

}
