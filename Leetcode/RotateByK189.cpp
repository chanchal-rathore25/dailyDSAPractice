#include <iostream>
#include <vector>
using namespace std;

void reverse(vector<int>& nums, int i, int j){
    while(i<j){
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
        i++;
        j--;
    }
}
void Rotate(vector<int>& nums, int k ,int n){
    k %= n;
    reverse(nums,0,n-1);
    reverse(nums,0,k-1);
    reverse(nums,k,n-1);
}

int main(){
    vector<int> nums ={1,2,3,4,5,6,7};
    int k = 3;
    int n = nums.size();
    Rotate(nums,k,n);
    for (int i=0;i<n;i++){
        cout<<nums[i] <<" ";
    }
    return 0;
}