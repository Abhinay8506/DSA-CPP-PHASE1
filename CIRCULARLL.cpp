#include<bits/stdc++.h>
using namespace std;
class node{
  public:
    int data;
    node* next;
    node(int x){
       this->data=x;
       this->next=NULL;
    }
    ~node(){
        int value=this->data;
        while(next!=NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"Deleted node:"<<value<<endl;
    }
};
void insertbegin(node* &tail,int x){
    node* temp=new node(x);
    if(tail==NULL){
        tail=temp;
        temp->next=temp;
    } 
    else{
        temp->next=tail->next;
        tail->next=temp;
    }
}
void insertatpos(node* &tail,int element,int x){
    node* temp=new node(x);
    if(tail->data==element)//single element
    {
       
       temp->next=tail->next;
       tail->next=temp;
    }
    else{
        node* t=tail;
        while(t->data!=element){
           t=t->next;
        }
        temp->next=t->next;
        t->next=temp;
    }

}
void traverse(node* tail){
    node* temp=tail;
    if(tail==NULL){
        cout<<"Empty list\n";
    }
    else{
        do{
            cout<<tail->data<<" ";
            tail=tail->next;
        }while(tail!=temp);
    }
    cout<<endl;
}
void deletionatpos(node* &tail,int value){
    if(tail==NULL){
        cout<<"empty list\n";
        return;
    }
    else{
      node*prev=tail;
      node*curr=prev->next;
      while(curr->data!=value){
        prev=curr;
        curr=curr->next;
      }
      prev->next=curr->next;
      if(prev==curr){//single element
        tail=NULL;
      }
      else if(tail==curr){
        tail=prev;
      }
      curr->next=NULL;
      delete curr;

    }
}


int main(){
    node*tail=NULL;
    insertbegin(tail,10);
    insertbegin(tail,20);
    insertbegin(tail,30);
    traverse(tail);
    insertatpos(tail,10,40);
    traverse(tail);
    insertatpos(tail,20,50);
    traverse(tail);
    cout<<tail->data<<endl;
    deletionatpos(tail,10);
    cout<<tail->data<<endl;
    traverse(tail);
    deletionatpos(tail,20);
    cout<<tail->data<<endl;
    traverse(tail);

}
