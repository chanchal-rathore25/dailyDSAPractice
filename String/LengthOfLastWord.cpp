#include <string>
#include <iostream>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int end = s.size()-1;

        int count = 0;
        while (end >= 0 && s[end] == ' '){
            end--;
        }

        int start = end;
        while (start >= 0 && s[start] != ' '){
            start--;
        }
        return end - start ;
    }
};

int main() {
    Solution sol;
    string s = "   fly me   to   the moon  ";
    int result = sol.lengthOfLastWord(s);
    cout << result << endl; // Output: 5
    return 0;
}