#include <iostream>
#include <vector>
using namespace std;

void leftRotateByOne(vector<int>& nums){
    // if(nums.empty())
    //     cout<<"element not exist";
    
    // int j = 0;
    // for ( int i =1;i<nums.size();i++){
    //     int temp = nums[j];
    //     nums[j] = nums[i];
    //     nums[i] = temp;
    //     j++;
    // }
    // cout<<"element after left rotate by one : ";
    // for ( int i = 0; i<nums.size();i++){
    //     cout<<nums[i]<<" ";
    // }
    int n = nums.size();
    int temp = nums[0];
    for(int i = 1; i < n; i++)
    {
    nums[i-1] = nums[i];
    }

    nums[n-1] = temp;
    cout<<"element after left rotate by one : ";
    for ( int i = 0; i<nums.size();i++){
        cout<<nums[i]<<" ";
    }

}

int main(){
    vector<int> nums = {1,2,3,4,5};
    leftRotateByOne(nums);
   
    return 0;
}