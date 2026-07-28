#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

int main(){
    vector<int> nums ={-5,-2,-8};
    int n = nums.size();
    int maxRight = INT_MIN;
    vector<int> ans ;
    for (int i = n-1 ; i>=0;i-- ){
        if(nums[i]>=maxRight){
            maxRight=nums[i];
            ans.push_back(maxRight);
        }   
    }
    
    reverse(ans.begin(), ans.end());
    for(int i : ans){
        cout<<i<<" ";
    }
    return 0;
} //tc = O(n), Sc complexity = O(1)