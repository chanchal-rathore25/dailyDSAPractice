#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minInsertions(string s) {
        int leftCount = 0;
        int rightCount = 0;
        for(char i : s){
            if(i == '('){
                leftCount++;
            }else if(i == ')'){
                rightCount++;
            }
        }
        if( rightCount != leftCount && rightCount > 2 ){
            return rightCount -leftCount;
        }else{
            return 0;
        }
    }
};

int main(){
    Solution sol;
    string s = "(()))";
    cout << sol.minInsertions(s) << endl;
    return 0;
}