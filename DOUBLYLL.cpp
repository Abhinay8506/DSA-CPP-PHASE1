#include<bits/stdc++.h>
using namespace std;
class node{
  public:
  
   node* prev; 
   int data;
   node* next;
   node(int x){
    this->data=x;
    this->prev=NULL;
    this->next=NULL;
   }
   ~node(){
      int value=this->data;
      if(this->next==NULL){
        delete next;
        this->next=NULL;
      }
      cout<<"deleted node with data:"<<value<<endl;
    }
};
void insertbegin(node* &tail,node* &head,int x){
    node* temp=new node(x);
    if(head==NULL){
        head=temp;
        tail=temp;
    }
    else{
        temp->next=head;
        head->prev=temp;
        head=temp;
    }
}
void print(node* head){
    node* t=head;
    while(t!=NULL){
        cout<<t->data<<" ";
        t=t->next;
    }
}
void inserttail(node* &tail,node* &head,int x){
    node* temp=new node(x);
    if(tail==head){
        tail=temp;
        head=temp;
    }
    else{
       tail->next=temp;
       temp->prev=tail;
       tail=temp;
    }
}
void insertatpos(node* &tail,node* &head,int pos,int x){
    node* temp=new node(x);
    if(pos==1){
       insertbegin(tail,head,x);
       return;
    }
    node* t=head;
    int cn=1;
    while(cn<pos-1){
        t=t->next;
        cn++;
    }
    if(t->next==NULL){
        inserttail(tail,head,x);
        return;
    }
    temp->next=t->next;
    t->next->prev=temp;
    t->next=temp;
    temp->prev=t;

    
}
void deleteatpos(node* &tail,node* &head,int pos){
    if(pos==1){
        node* temp=head;
        temp->prev=NULL;
        head->next->prev=NULL;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }
    else{
        node* prev1=NULL;
        node* curr=head;
        int cn=1;
        while(cn<=pos-1){
            prev1=curr;
            curr=curr->next;
            cn++;
        }
        if(curr->next==NULL){
            tail=prev1;
            prev1->next=NULL;
            curr->prev=NULL;
            curr->next=NULL;
        }
        else{
        prev1->next=curr->next;
        curr->next->prev=prev1;
        curr->prev=NULL;
        curr->next=NULL;
        }
        delete curr;
    }
}
int main(){
  node* head=NULL;
  node* tail=NULL;
  insertbegin(tail,head,13);
  insertbegin(tail,head,11);
  insertbegin(tail,head,12);
  print(head);
  inserttail(tail,head,14);
  inserttail(tail,head,15);
  print(head);
  insertatpos(tail,head,2,100);
  insertatpos(tail,head,4,200);
  print(head);
  deleteatpos(tail,head,2);
  deleteatpos(tail,head,4);
  print(head);
  deleteatpos(tail,head,1);
  print(head);
  cout<<head->data<<endl;
  deleteatpos(tail,head,4);
  print(head);
  cout<<tail->data;
 

}
