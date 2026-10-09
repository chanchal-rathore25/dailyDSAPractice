#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main (){
    // vector<int> nums = {10, 5, 20, 8, 15};
    // vector<int> nums = {10,10, 8,5};
    vector <int> nums = { 5, 5, 5};
     int largest = nums[0];
     int secLargest = INT_MIN;

     for(int i = 1; i <nums.size(); i++){
        if(nums[i] > largest){
            secLargest = largest ;
            largest = nums[i];
        }else if(nums[i] > secLargest && nums[i] != largest){
            secLargest = nums[i];
        }
     }
     if(secLargest == INT_MIN){
        cout<< "No second largest element found." << endl;
     }else{
        cout << "largest element is: " << largest << endl;
        cout << "Second largest element is: " << secLargest << endl;
     }
     return 0;
}