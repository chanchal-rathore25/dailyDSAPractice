#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
     vector<int> rearrangeArray(vector<int>& nums) {
    
        // vector<int> pos;
        // vector<int> neg;
        // for(int i : nums){
        //     if(i > 0){
        //         pos.push_back(i);
        //     }else{
        //         neg.push_back(i);
        //     }
        // }
        // vector<int> result;
        // int n = pos.size();
        // for(int i = 0; i < n; i++){
        //     result.push_back(pos[i]);
        //     result.push_back(neg[i]);
        // }
        // return result;
        


        // Optimized approach

        int n = nums.size();
        vector<int>ans(n,0);
        int posIndex = 0,negIndex = 1;
        for(int i : nums){
            if(i<0){
                ans[negIndex] = i;
                negIndex+=2;
            }else{
                ans[posIndex] = i;
                posIndex+=2;
            }
        }
        return ans;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {3, 1, -2, -5, 2, -4};
    vector<int> result = solution.rearrangeArray(nums);
    cout << "Result: ";
    for(int i : result){
        cout << i << " ";
    }
    cout << endl;
    return 0;
}