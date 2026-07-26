#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main(){
    vector<int> nums={9,34,31,45,6,20,40};
    
    // edge case if array has only one element
    if(nums.size()<2){
        cout<<"Array should have at least two elements to find second largest."<<endl;
        return 0;
    }

    int largest=nums[0];
    int secondLargest=INT_MIN;

    for (int i :nums ){
        if(i>largest){
            secondLargest=largest;
            largest=i;
        }
        else if(i>secondLargest && i!=largest){
            secondLargest=i;
        }
    }
    
    cout<<"Largest element is: "<<largest<<endl;
    cout<<"Second largest element is: "<<secondLargest<<endl;

    //edge case if all elements are same - { 5 , 5 ,5 }
    if(secondLargest==INT_MIN){
        cout<<"All elements are same, no second largest element."<<endl;
    }

    return 0;
}