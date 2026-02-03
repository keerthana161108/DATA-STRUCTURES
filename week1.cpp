#include<iostream>
#include<string>
using namespace std;
class Student{
    private:
    int rollnumber;
    string name;
    float marks;
    public:
    Student()
    {
        rollnumber=0;
        name="";
        marks=0.0;
    }
~Student()
{
    cout<<"student with:"<<rollnumber<<"deleted"<<endl;
}
void input(){
    cout<<"enter your rollnumber:"<<endl;
    cin>>rollnumber;
    cin.ignore();
    cout<<"enter your name:"<<endl;
    getline(cin,name);
    cout<<"enter your marks:"<<endl;
    cin>>marks;
}
void display(){
    cout<<"rollnumber:"<<rollnumber<<"\t"<<"name:"<<name<<"\t"<<"marks scored:"<<marks<<endl;
}
};
int main (){
    int n;
    cout<<"enter how many students you want:"<<endl;
    cin>>n;
    Student*student=new Student[n];
    cout<<"enter student details:"<<endl;
    for(int i=0;i<n;i++){
        cout<<"enter:"<<i+1<<"student deatils:"<<endl;
        student[i].input();
    }
    cout<<"********************output*****************"<<endl;
    for(int i=0;i<n;i++){
        student[i].display();
    }
delete[]student;
return 0;
}