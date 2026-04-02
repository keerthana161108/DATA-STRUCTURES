#include<iostream>
using namespace std;
//node definition
class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data=val;
        next=NULL;
    }
};

class Queue {
    private:
    Node* front,*rear;
    public:
    Queue(){
        front==NULL;
        rear=NULL;
    }
    void enqueue(int val)
    {
        Node* newNode=new Node(val);
        if(newNode==NULL){
            cout<<"Queue overflow\n";
            return;
        }
        if(rear==NULL){
            rear=front=newNode;
            cout<<"insertion successfull\n";
            return;
        }
        rear->next=newNode;
        rear=rear->next;
        cout<<"insertion successfull\n";
    }

    void display(){
        if(front==NULL){
            cout<<"Queue is empty\n";
            return;
        }
        Node*temp=front;
        while(temp !=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL\n";
    }

    void dequeue(){
        if(front==NULL){
            cout<<"Queue is empty\n";
            return;
        }
        Node* temp=front;
        cout<<"Deleted element:"<<temp->data<<"\n";
        front=front->next;
        delete temp;
    }
};
int main (){
    Queue q2;
    q2.enqueue(10);
    q2.enqueue(20);
    q2.display();
    q2.dequeue();
    q2.display();
    q2.dequeue();
    return 0;
}