#include <iostream>
#include <stack>
using namespace std;
 
bool isValidParanthesis(string s){
    stack<char> str;
    for(char i : s){
        if(i == '(' || i == '{' || i == '['){
            str.push(i);
        }else if(i == ')' && !str.empty() && str.top() == '('){
            str.pop();
        }else if(i == '}' && !str.empty() && str.top() == '{'){
            str.pop();
        }else if(i == ']' && !str.empty() && str.top() == '['){
            str.pop();
        }else{
            return false;
        }
    }
    return str.empty();
}

int main() {
    string s = "()[]{}";
    bool result = isValidParanthesis(s);
    cout << (result ? "Valid" : "Invalid") << endl;
    return 0;
}