#include<iostream>
using namespace std;
class student{
    int roll;
    public:
    student(int r){
        //parametarised constructor
        roll=r;
    }
    void display() {
        cout<<"roll="<<roll<<endl;
    }
};
int main (){
    student s1(101);
    s1.display();
    return 0;
}