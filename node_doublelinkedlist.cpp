#include<iostream>
using namespace std;
struct Node
{
    string data;
    Node*prev;
    Node*next;
};
int main (){
    Node*head=NULL;
    Node*n1=new Node();
    n1->data="Keerthana";
    n1->prev=NULL;
    n1->next=NULL;
    head=n1;
    Node*n2=new Node();
    n2->data="Akanksha";
    n2->prev=n1;
    n2->next=NULL;
    n1->next=n2;
    Node*n3=new Node();
    n3->data="Anushka";
    n3->prev=n2;
    n3->next=NULL;
    n2->next=n3;
    cout<<"forward:";
    Node*temp=head;
    while(temp !=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<"backward:";
    Node*temp1=n3;
    while(temp1 !=NULL){
        cout<<temp1->data<<" ";
        temp1=temp1->prev;
    }
}