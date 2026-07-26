#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> nums = {9,34,31,45,6,20,40};

    int start = 0;
    int end = nums.size()-1;
    
    while(start < end){
        int temp = nums[start];
        nums[start] = nums[end];
        nums[end] = temp;
        start++;
        end--;
    }
    cout<<"reverse array -> ";
    for(int i: nums){
        cout<< i <<" ";
    }

    return 0;
}
