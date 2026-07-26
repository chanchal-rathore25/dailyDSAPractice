#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int>& nums)
{
    if(nums.empty())
        return 0;

    int j = 0;

    for(int i = 1; i < nums.size(); i++)
    {
        if(nums[j] != nums[i])
        {
            j++;
            nums[j] = nums[i];
        }
    }

    return j + 1;
}

int main(){
    vector<int> nums = {1,1,2,2,3,4,4,5};
    int n = nums.size();
    int j = 0;
    int newLen = removeDuplicates(nums);
    cout<<"New size of the array is : "<<newLen<<endl;
    cout<<"element : ";
    for (int i=0;i<newLen;i++){
        cout<<nums[i] <<" ";
    }
    return 0;
}