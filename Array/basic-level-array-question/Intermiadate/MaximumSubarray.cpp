#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

int main(){
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    int curr = 0;
    int maxSum = INT_MIN;
    for( int i = 0 ; i<nums.size() ; i++){
        curr+=nums[i];
        maxSum = max(curr,maxSum);
        if(curr<0){
            curr = 0;
        }
    }
    cout<<"Maximun subarray is : "<<maxSum;
    
    
    return 0;
} //tc = O(n), Sc complexity = O(1)