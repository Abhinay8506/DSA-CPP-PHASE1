/*************************************************
    
    class Node {
        public :

        int data;
        Node *next;

        Node(int data) {
            this -> data = data;
            this -> next = NULL;
        }
    };

*************************************************/
bool looppresent(Node *head){
    if(head==NULL){
        return NULL;
    }
    Node* fast=head;
    Node* slow=head;
    while(fast!=NULL && slow!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
        }
        slow=slow->next;
        if(fast==slow){
            return true;
        }
    }
    return false;
}
Node* floydintersection(Node *head){
    if(head==NULL){
        return NULL;
    }
    if(looppresent(head)){
       Node* fast=head;
       Node* slow=head;
       while(slow!=NULL && fast!=NULL){
           fast=fast->next;
           if(fast!=NULL){
               fast=fast->next;
           }
           slow=slow->next;
           if(fast==slow){
               return slow;
           }
       }
    }
    return NULL;
}
Node* loopstarting(Node*head){
    if(head==NULL){
        return NULL;
    }
    Node* intersection=floydintersection(head);
    Node* slow=head;
    while(slow!=intersection){
        slow=slow->next;
        intersection=intersection->next;
    }
    return slow;
}
Node *removeLoop(Node *head)
{
   if(head==NULL){
       return NULL;
   }
   if(looppresent(head)){

   
   Node* starting=loopstarting(head);
   Node*  temp=starting;
   while(temp->next!=starting){
       temp=temp->next;
   }
   temp->next=NULL;
   }
   return head; 
}
