//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;
/* Link list Node */
struct Node {
    int data;
    Node *next;
    Node *arb;

    Node(int x) {
        data = x;
        next = NULL;
        arb = NULL;
    }
};



// } Driver Code Ends
class Solution
{
    public:
    void inserttail(Node *&head,Node* &tail,int data){
        Node* temp=new Node(data);
        if(head==NULL){
            head=temp;
            tail=temp;
        }
        else{
            tail->next=temp;
            tail=temp;
        }
    }
    
    Node *copyList(Node *head)
    {    Node *clonehead=NULL;
         Node *clonetail=NULL;
         Node *temp=head;
         while(temp!=NULL){
             inserttail(clonehead,clonetail,temp->data);
             temp=temp->next;
         }
         Node *t1=head;
         Node *t2=clonehead;
         while(t1!=NULL&&t2!=NULL){
             Node*nex=t1->next;
             t1->next=t2;
             t1=nex;
             nex=t2->next;
             t2->next=t1;
             t2=nex;
         }
         t1=head;
         
         while(t1!= NULL){
             if(t1->next!=NULL){
                 t1->next->arb=t1->arb?t1->arb->next:t1->arb;
                 
             }
             t1=t1->next->next;
         }
         t1=head;
         t2=clonehead;
         while(t1!=NULL&&t2!=NULL){
             t1->next=t2->next;
             t1=t1->next;
             if(t1!=NULL){
                  t2->next=t1->next;
             }
            
             t2=t2->next;
         }
         return clonehead;
         
         
        //Write your code here
    }

};

