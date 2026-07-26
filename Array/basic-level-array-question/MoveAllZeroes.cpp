#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> nums = {0,1,0,3,12};
    int n = nums.size();
    int j = 0;
    for( int i : nums){
        if (i != 0){
            nums[j] = i;
            j++;
        }
    }
    while(j<n){
        nums[j] = 0;
        j++;
    }
    for (int i : nums){
        cout<<i<<" ";
    }
    return 0;
}