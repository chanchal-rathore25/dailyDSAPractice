#include <iostream>
#include <vector>
using namespace std;

int findSum(vector<int> &nums,int n){
    int sum = 0;
    for(int i : nums){
        sum+= i;
    }
    int actSum=0;
    for(int j=n+1; j>=0; j--){
        actSum+=j;
    }
    return actSum - sum;
}
int main(){
    vector<int> nums = {1,2,4,5,6};
    int n = nums.size();
    int missingNumber = findSum(nums,n);
    cout<<missingNumber;
    return 0;
}