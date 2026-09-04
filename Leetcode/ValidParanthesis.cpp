#include <iostream>
#include <stack>
using namespace std;
 
bool isValidParanthesis(string s){
    stack<char> str;
    for(char i : s){
        if(i == '(' || i == '{' || i == '['){ //opening
            str.push(i);
        }else{
            if(str.empty()){
                return false;
            }
            if((str.top() == '(' && i == ')') ||
             (str.top() == '{' && i == '}') ||
             (str.top() == '[' && i == ']')){ //closing
                    str.pop();
            }
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