#include<iostream>
#include<stack>
using namespace std;

class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> str;
        int count = 0;
        for(char i : s){
            if(i == '(' ){
                str.push(i);
                count++;
            }else{
                if(str.empty()){
                    count++;
                }
                else if( str.top() == '(' && i == ')'){
                    str.pop();
                    count--;
                }
            }
        }
        return count;
        }
    };

int main(){
    Solution sol;
    string s = "()){{})}";
    int result = sol.minAddToMakeValid(s);
    cout << result << endl;
    return 0;
}