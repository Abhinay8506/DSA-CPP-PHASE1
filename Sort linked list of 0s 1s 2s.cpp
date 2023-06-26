/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/

Node* sortList(Node *head){
    // Write your code here.
    int z=0;
    int one=0;
    int two=0;
    Node*t=head;
    while(t!=NULL){
        if(t->data==0){
            z++;
        }
        else if(t->data==1){
            one++;
        }
        else{
            two++;
        }
        t=t->next;
    }
    t=head;
    while(t!=NULL){
        if(z!=0){
            t->data=0;
            z--;
        }
        else if(one!=0){
            t->data=1;
            one--;
        }
        else if(two!=0){
            t->data=2;
            two--;
        }
        t=t->next;
    }
    return head;
}
