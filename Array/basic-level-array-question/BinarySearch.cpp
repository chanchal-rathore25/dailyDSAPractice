#include <iostream>
#include <vector>
using namespace std;



int main(){
    vector<int> nums = {2,4,6,8,10,12,14};
    int target = 10;
    int left = 0;
    int right = nums.size()-1;
    int mid = 0;

    while(left<=right){
        mid = (left + right)/2;
        if(nums[mid]>target){
            right = mid - 1;
        }else if(nums[mid]<target){
            left = mid + 1;
        }else {
            cout<<"element index -> "<<mid;
            return 0;
        }
    }
    cout<<"element not exist";
    return 0;
} //tc = O(logn), Sc complexity = O(1)