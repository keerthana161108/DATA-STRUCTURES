#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node*next;
};
int main (){
    Node*head=NULL;
    Node*n1=new Node();
    n1->data=10;
    n1->next=NULL;
    head=n1;
    Node*n2=new Node();
    n2->data=20;
    n2->next=NULL;
    n1->next=n2;
    Node*n3=new Node();
    n3->data=30;
    n3->next=NULL;
    n2->next=n3;
    Node*temp=head;
    while(temp !=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}