#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

int main(){
    vector<int> nums = {3,1,-2,-5,2,-4};
    int pos = 0;
    int neg = 1;
    vector<int> ans;
    for( int i : nums){
        ans.push_back(i);
    }
    for( int i = 0; i < nums.size() ; i++){
        if(nums[i]>=0){
            ans[pos]=nums[i];
            pos+= 2;
        }
        else{
                ans[neg]=nums[i];
                neg+= 2;
        }
            
    }
    for(int i : ans){
        cout<<i<<" ";
    }
    return 0;
} //tc = O(n), Sc complexity = O(1)