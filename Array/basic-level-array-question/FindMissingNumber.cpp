#include <iostream>
#include <vector>
using namespace std;

int findSum(vector<int> &nums){
      int n = nums.size()+1;
      long long expectedSum = n*(n+1)/2;

      long long actualSum = 0;
      for( int  i : nums){
        actualSum+=i;
      }
      return  expectedSum - actualSum;
    }
int main(){
    vector<int> nums = {3,0,1};
    int missingNumber = findSum(nums);
    cout<<missingNumber;
    return 0;
}