#include<iostream>
using namespace std;
template<class T>
 T findMax(T a,T b){
    if(a>b)
    return a;
    else
    return b;
}
int main (){
    cout<<"max of integers:"<<findMax(10,20)<<endl;
    cout<<"max of floats:"<<findMax(5.5f,3.2f)<<endl;
    cout<<"max of characters:"<<findMax('A','Z')<<endl;
    return 0;
}