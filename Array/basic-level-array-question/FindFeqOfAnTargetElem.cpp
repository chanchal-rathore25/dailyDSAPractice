#include <iostream>
#include <vector>
using namespace std;
int Count_feq(vector<int> &nums,int target){
    int count = 0;
    for (int i : nums){
        if(i==target){
            count++;
        }
    }
    return count;
}

int main (){
    vector<int> nums = {2,5,2,8,2,9,5,2};
    int target = 2;
    int ans = Count_feq(nums,target);
    cout<<"Count of the target fequence number => "<<ans;
    return 0;
}

//tc = O(n) Sc(1)