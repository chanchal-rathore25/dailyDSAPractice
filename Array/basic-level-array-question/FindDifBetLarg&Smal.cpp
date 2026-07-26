#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int findDiff(vector<int> &nums,int n){
    // Edge case
    if (n<1){
        cout<<"Array has only one element difference is not possible ";
        return 0;
    }
    int smallest = nums[0];
    int largest = nums[0];
    int Diff = 0;
    for(int i =1; i <nums.size(); i++){
        if(nums[i]<smallest){
            smallest = nums[i];
        }else if(nums[i]>largest){
            largest = nums[i];
        }
    }
   

    return Diff = largest - smallest;
}


int main(){
    vector<int> nums ={9,34,31,45,6,20,40};
    int n = nums.size();
    int ans = findDiff(nums,n);
    cout<<"difference of smallest and largest element -> "<<ans<<endl;
    return 0;
}