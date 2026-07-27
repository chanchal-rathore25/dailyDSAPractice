#include <iostream>
#include <vector>
using namespace std;

// int MajorityElem(vector<int> &nums,int n){
//     int ans = 0;
//     for (int i =0;i<n;i++){
//         int count = 1;
//         for(int j = i+1;j<n;j++){
//             if(nums[i]==nums[j]){
//                 count++;
//             }
//         }
//         if(count>n/2){
//             ans = nums[i];
//         }
//     }
//     return ans;
// }
int main(){
    vector<int> nums = {3,2,3,2,4,3,3};
    int n = nums.size();
    int feq= 0;
    int ans =0;
    // int ans = MajorityElem(nums,n);
    for(int i=0;i<nums.size();i++){
        if(feq==0){
            ans = nums[i];
        }
        if(nums[i]==ans){
            feq++;
        }else{
            feq--;
        }
    }
    cout<<ans;
    return 0;

}