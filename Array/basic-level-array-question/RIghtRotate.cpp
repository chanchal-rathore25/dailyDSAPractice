#include <iostream>
#include <vector>
using namespace std;

void RightRotateByOne(vector<int>& nums){
    int n = nums.size();
    int temp = nums[n-1];
    for(int i = n-1; i >0; i--)
    {
    nums[i] = nums[i-1];
    }
    //12345
//51234
    nums[0] = temp;
    cout<<"element after right rotate by one : ";
    for ( int i = 0; i< nums.size();i++){
        cout<<nums[i]<<" ";
    }

}

int main(){
    vector<int> nums = {1,2,3,4,5};
    RightRotateByOne(nums);
   
    return 0;
}