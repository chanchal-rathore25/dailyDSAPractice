#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> nums =  {2,2,1};
    int ans = 0;
    for (int i : nums){
        ans^= i;
    }
    cout <<ans;
    return 0;
} //tc = O(logn), Sc complexity = O(1)