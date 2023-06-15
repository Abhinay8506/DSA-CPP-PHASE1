void reverse(LinkedListNode<int> *&head,LinkedListNode<int> *prev,LinkedListNode<int> *curr){
    if(curr==NULL){
        head=prev;
        return;
    }
    LinkedListNode<int> *temp=curr->next;
    reverse(head,curr,temp);
    curr->next=prev;
}
LinkedListNode<int> *reverse2(LinkedListNode<int> *&head){
    if(head==NULL|| head->next==NULL){
        return head;
    }
    LinkedListNode<int> *temp=reverse2(head->next);
    head->next->next=head;
    head->next
}
LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *&head) 
{      /*if(head==NULL || head->next==NULL){
          return head;
       }
       LinkedListNode<int> *prev=NULL;
       LinkedListNode<int> *curr=head;
       LinkedListNode<int> *temp=NULL;
       while(curr!=NULL){
           temp=curr->next;
           curr->next=prev;
           prev=curr;
           curr=temp;
       } 
       return prev;*/
      /* LinkedListNode<int> *prev=NULL;
       LinkedListNode<int> *curr=head;
       reverse(head,prev,curr);
       return head;*/
       return reverse2(head);


}
