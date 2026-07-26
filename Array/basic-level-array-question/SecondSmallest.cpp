#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main(){
    vector<int> nums = {9,34,31,45,6,20,40};
    int size = nums.size();
    int firstSmallest=nums[0];
    int SecondSmallest=INT_MAX;

    if(size < 2){
        cout << "Array should have at least two elements to find second smallest." << endl;
        return 0;
    }

    for(int num : nums){
        if(num < firstSmallest){
            SecondSmallest = firstSmallest;
            firstSmallest = num;
        }
        else if(num < SecondSmallest && num!=firstSmallest){
            SecondSmallest = num;
        }
    }
     
  
    // nums = {2,2,2}
    if( SecondSmallest == INT_MAX ){
        cout<<"All element are same so the second smallest is not possible";
    }else{
        cout<<"first Smallest number "<<firstSmallest<<endl;
        cout<<"second Smallest number "<<SecondSmallest<<endl;
    }

    return 0;
}