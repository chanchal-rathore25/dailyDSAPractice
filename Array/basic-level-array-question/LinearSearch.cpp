#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> nums = {9,34,31,45,6,20,40};
    int target = 20;
    for (int num = 0; num < nums.size(); num++){
        if(nums[num] == target){
            cout<<"target element is exist -> "<<nums[num]<<" whose index value is -> "<<num;
            return 0;
        }
    }
    cout<<"element not exist";
    
    return 0;
}