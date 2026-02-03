#include <iostream>
using namespace std;
class Student
{
    int roll;

public:
    Student(int r)
    {
        roll = r;
    }
    Student(Student &s)
    { // copy constructor
        roll = s.roll;
    }
    void display()
    {
        cout << " Roll =" << roll << endl;
    }
};
int main()
{
    Student s1(100);
    Student s2 = s1; // copy constructor called
    s1.display();
    s2.display();
    return 0;
}