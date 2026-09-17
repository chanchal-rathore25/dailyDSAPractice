#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        if (haystack.length() < needle.length()) {
            return -1;
        }
        
        for (int i = 0; i <= haystack.length() - needle.length(); i++) {
            if (haystack.substr(i, needle.length()) == needle) {
                return i;
            }
        }
        
        return -1;        
    }
};


int main(){
    Solution sol;
    string haystack = "sadbutsad";
    string needle = "sad";
    int res = sol.strStr(haystack, needle);
    cout << res << endl;
    return 0;
}