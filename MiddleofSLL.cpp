#include<bits/stdc++.h>
Node *findMiddle(Node *head) {
    // Write your code here
    if(head==NULL || head->next==NULL){
        return head;
    }
    /*
    int n=0,pos;
    Node *TEMP=head;
    while(TEMP!=NULL){
        n++;
        TEMP=TEMP->next;
    }
    if(n%2==0){
       pos=(n/2)+1; 
    }
    else{
        pos=(n+1)/2;
    }
    n=1;
    Node *t=head;
    while(n<pos){
     t=t->next;
     n++;
    }
    return t;*/
    if(head->next->next==NULL){
        return head->next;
    }
        Node *fast=head->next;
        Node *slow=head;
        while(fast!=NULL){
          fast=fast->next;
          if(fast!=NULL){
              fast=fast->next;
          }
          slow=slow->next;
        }
        return slow;
        
    
}
