#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> nums = {1 ,2, 2, 3, 4};

    for( int num = 0 ; num < nums.size()-1 ; num++){
        if(nums[num] > nums[num+1]){
            cout<<"array is not sorted";
            return 0;
        }
    }
        cout<<"array is sorted";
    return 0;
}