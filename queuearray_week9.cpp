#include<iostream>
using namespace std;
#define MAX 4
class Queue {
    private:
    int arr[MAX];
    int front,rear;
    public:
    Queue(){
        front=-1;
        rear=-1;
    }

    void enqueue(int val){
        if(rear==MAX-1){
            cout<<"queue overflow\n";
            return;
        }
        if(front==-1)
        front=0;
        arr[++rear]=val;
        cout<<"inserted "<<val<<" successfully\n";
    }

    void dequeue(){
        if(front==-1 || front >rear){
            cout<<"Queue underflow\n";
            return;
        }
        else{
          cout<<"deleted element:"<<arr[front++]<<endl;
        }
       
    }
    void display(){
        if(front==-1||front>rear){
            cout<<"Queue underflow\n";
            return;
        }
        else {
            cout<<"Queue elements are:";
            for(int i=front;i<=rear;i++){
                cout<<arr[i]<<" ";
            }
        }
    }
};
int main (){
    Queue q1;
    q1.dequeue();
    q1.enqueue(10);
    q1.enqueue(20);
    q1.enqueue(30);
    q1.enqueue(40);
    q1.dequeue();
    q1.enqueue(50);
    q1.display();
    return 0;
}