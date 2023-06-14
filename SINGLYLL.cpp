#include<bits/stdc++.h>
using namespace std;
class Node{
   public:
    int data;
    Node* next;
    Node(int x){
        this->data=x;
        this->next=NULL;
    }
    ~Node(){
      int value=this->data;
      if(this->next==NULL){
        delete next;
        this->next=NULL;
      }
      cout<<"deleted node with data:"<<value<<endl;
    }
};
void insertbegin(Node* &head,int x){
    Node* temp=new Node(x);
    temp->next=head;
    head=temp;
}
void inserttail(Node* &tail,int x){
    Node* temp=new Node(x);
    tail->next=temp;
    tail=temp;
}

void print(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    } 
}
void insertpos(Node* head,Node* tail,int pos,int x){
    
    if(pos==1){
        insertbegin(head,x);
        return;
    }
    Node* temp=new Node(x);
    Node* t=head;
    int cn=1;
    while(cn<pos-1){
       t=t->next;
       cn++;
    }
    if(t->next==NULL){
        inserttail(tail,x);
        return;
    }
    temp->next=t->next;
    t->next=temp;

}
void deletenode(int pos,Node* &head,Node* &tail){

    if(pos==1){
        Node* temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;

    }
    else{
        Node* prev=NULL;
        Node* curr=head;
        int cn=1;
        while(cn<=pos){
            prev=curr;
            curr=curr->next;
            cn++;
        }
        if(curr->next==NULL){
            tail=prev;
        }
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;

    }
}
int main(){
    Node* node=new Node(12);
    Node*head=node;
    
    Node*tail=node;
    inserttail(tail,20);
    inserttail(tail,30);
   int x;
   cin>>x;
   int pos;
   cin>>pos;
   /*while(x!=-1){
     inserttail(tail,x);
     cin>>x;
   }*/
   insertpos(head,tail,pos,x);

   print(head);
   int y;
   cin>>y;
   deletenode(pos,head,tail);
   print(head);

}
