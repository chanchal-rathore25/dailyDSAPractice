#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string minRemoveToMakeValid(string s) {
      int leftCount = 0;
      int rightCount = 0;
      stack<char> str;   //lee(t(c)o)de)
      for(char i : s){
        if(i == '('){
            leftCount++;
        }else if (i == ')'){
            rightCount++;
        }
        if(rightCount > leftCount){
            rightCount--;
            continue;
        }else{
            str.push(i);
        }
      }
      
      string result = "";
        
      while(!str.empty()){
        char currChar = str.top();
        str.pop();
        if(leftCount > rightCount && currChar == '('){
            leftCount--;
        }else{
            result += currChar;
        }
      }

      reverse(result.begin(),result.end());
      return result;
        
    }
};

int main() {
    Solution solution;
    string s = "lee(t(c)o)de)";
    string result = solution.minRemoveToMakeValid(s);
    cout << "Result: " << result << endl; // Output: "lee(t(c)o)de"
    return 0;
}