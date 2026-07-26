#include <iostream>
#include <vector>
using namespace std;

vector<int> findIntersaction(vector<int>& nums1, vector<int>& nums2){
    int n1= nums1.size();
    int n2= nums2.size();
    int first =0;
    int second =0;
    vector<int> mergeArray;
    while(  first <n1 && second<n2){
        if(nums1[first]==nums2[second]){
            mergeArray.push_back(nums2[second]);
            first++;
            second++;
        }else if(nums1[first]<nums2[second]){
            first++;
        }else{
            second++;
        }
        
    }
    return mergeArray;
}

int main(){
    vector<int> nums1 =  {1,2,2,3,4};
    vector<int> nums2 =  {2,2,4,5,};
    vector<int> result = findIntersaction(nums1, nums2);
    for(int i : result){
        cout << i<<" ";
    }
    return 0;
}