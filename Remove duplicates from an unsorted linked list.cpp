

    Node * removeDuplicates( Node *head) 
    {
       if(head==NULL&&head->next==NULL){
           return head;
       }
       Node* temp=head;
       while(temp->next!=NULL){
           Node*t=temp->next;
           Node*t2=temp;
           while(t!=NULL){
               if(t->data==temp->data){
                   t2->next=t->next;
                   t=t->next;
               }
               else{
                 t2=t;
                 t=t->next;  
               }
               
               
           }
           if(temp->next!=NULL){
               temp=temp->next;
           }
           
       }
       return head;
     
    }


  Node * removeDuplicates( Node *head) 
    {
       map<int,bool>mpp;
       Node*temp=head;
       Node*t2=temp;
       while(temp!=NULL){
           if(mpp[temp->data]==true){
               t2->next=temp->next;
               temp=temp->next;
           }
           else{
               mpp[temp->data]=true;
               t2=temp;
               temp=temp->next;
           }
       }
       return head;
     
    }
