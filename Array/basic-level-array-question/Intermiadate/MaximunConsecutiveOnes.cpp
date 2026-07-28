#include <iostream>
#include <vector>
using namespace std;



int main(){
    vector<int> nums = {1,1,0,1,1,1};
    int currCount =0;
    int maxCount = 0;
    for(int i : nums){
        if(i == 1){
            currCount++;
            maxCount = max(maxCount, currCount);
        }else{
            currCount = 0;
        }
    }
    cout<<maxCount;
    return 0;
} //tc = O(logn), Sc complexity = O(1)