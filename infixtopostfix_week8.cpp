#include<iostream>
#include<stack>
#include<cctype>
using namespace std;
int priority (char ch)
{
    if(ch=='+'||ch=='-')return 1;
    if(ch=='*'||ch=='/')return 2;
    if(ch=='^')return 3;
    return 0;
}
string infixtopostfix(string infix){
    string postfix=" ";
    stack<char>st;
    for(int i=0;i<infix.length();i++){
        char ch=infix[i];
        if(isalnum(ch)){
            postfix+=ch;
        }
        else if(ch=='('){
            st.push(ch);
        }
        else if(ch==')'){
            while(!st.empty() &&st.top()!='('){
                postfix+=st.top();
                st.pop();
            }
            st.pop();
        }
        else {
            while(!st.empty()&& priority(st.top())>=priority(ch)){
                postfix+=st.top();
                st.pop();
            }
            st.push(ch);
        }
    }
    while(!st.empty()){
        postfix+=st.top();
        st.pop();
    }
    return postfix;
}
int main() {
    string infix;

    cout << "Enter infix expression: ";
    cin >> infix;

    string postfix = infixtopostfix(infix);

    cout << "Postfix expression: " << postfix << endl;

    return 0;
}