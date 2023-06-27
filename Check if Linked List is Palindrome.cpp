



// } Driver Code Ends
/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/
#include<bits/stdc++.h>

class Solution{
  public:
    //Function to check whether the list is palindrome.
    bool abhinay(vector<int>arr){
        int s=0;
        int e=arr.size()-1;
        while(s<=e){
           if(arr[s]!=arr[e]){
               return false;
           }
           s++;
           e--;
           
        }
        return true;
    }
    bool isPalindrome(Node *head)
    {
        vector<int>arr;
        Node*temp=head;
        while(temp!=NULL){
            arr.push_back(temp->data);
            temp=temp->next;
        }
        return abhinay(arr);
        
    }
};







#include<bits/stdc++.h>

class Solution{
  public:
    //Function to check whether the list is palindrome.
    Node* getmid(Node* head){
     Node*s=head;
     Node*f=head->next;
     while(f!=NULL&&f->next!=NULL){
          f=f->next->next;
          s=s->next;
     }
     return s;
    }
    Node* reverse(Node* head){
       Node* curr=head;
       Node* prev=NULL;
       Node* next=NULL;
       while(curr!=NULL){
          next=curr->next;
          curr->next=prev;
          prev=curr;
          curr=next;
       }
       return prev;
       
    }
    bool isPalindrome(Node *head)
    {
        if(head->next==NULL){
           return true;
        }
        Node* middle=getmid(head);
        Node* temp=middle->next;
        middle->next=reverse(temp);
        Node*head1=head;
        Node*head2=middle->next;
        while(head2!=NULL){
           if(head1->data!=head2->data){
               return false;
           }
           head1=head1->next;
           head2=head2->next;
           
        }
        return true;
        
    }
};



