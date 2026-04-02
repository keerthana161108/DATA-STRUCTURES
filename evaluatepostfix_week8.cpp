#include <iostream>
#include <stack>
#include <sstream>
#include <string>
#include <cctype>
#include <cmath>
using namespace std;

int evaluatepostfix(string expo){
    stack<int> st;
    stringstream ss(expo);
    string token;

    while(ss >> token){
        if(isdigit(token[0])){   // works for multi-digit positive numbers
            st.push(stoi(token));
        }
        else{
            int value2 = st.top(); st.pop();
            int value1 = st.top(); st.pop();

            switch(token[0]){
                case '+': st.push(value1 + value2); break;
                case '-': st.push(value1 - value2); break;
                case '*': st.push(value1 * value2); break;
                case '/': st.push(value1 / value2); break;
                case '^': st.push(pow(value1, value2)); break;
            }
        }
    }
    return st.top();
}

int main(){
    string exp;
    cout << "Enter postfix expression (space separated): ";
    getline(cin, exp);

    int result = evaluatepostfix(exp);
    cout << "Result = " << result;

    return 0;
}