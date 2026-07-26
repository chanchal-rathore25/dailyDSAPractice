#include <iostream>
#include <vector>
using namespace std;

vector<int> findUnionOfTwoSortedArray(vector<int>& nums1, vector<int>& nums2){
    int n1= nums1.size();
    int n2= nums2.size();
    int first =0;
    int second =0;
    vector<int> mergeArray;
    while(first<n1 && second<n2){
        if(nums1[first]<nums2[second]){
            if(mergeArray.empty() || mergeArray.back() != nums1[first]){
                mergeArray.push_back(nums1[first]);
            }
            first++;
        }else if(nums1[first]>nums2[second]){
            if(mergeArray.empty() || mergeArray.back() != nums1[second]){
                mergeArray.push_back(nums2[second]);
            }
            second++;
        }else{
            if(mergeArray.empty() || mergeArray.back() != nums1[first]){
                mergeArray.push_back(nums1[first]);
                first++;
                second++;
            }
        }
        
    }
    while(first<n1){
        mergeArray.push_back(nums1[first]);
        first++;
    }
    while(second<n2){
        mergeArray.push_back(nums2[second]);
        second++;
    }
    return mergeArray;
}

int main(){
    vector<int> nums1 =  {1,2,2,3,4};
    vector<int> nums2 =  {2,4,5,6};
    vector<int> result = findUnionOfTwoSortedArray(nums1, nums2);
    for(int i : result){
        cout << i<<" ";
    }
    return 0;
}
