#include <iostream>
#include <vector>
using namespace std;

vector<int> mergeSortedArrays(vector<int>& nums1, vector<int>& nums2){

    int n1= nums1.size();
    int n2= nums2.size();
    int i =0;
    int j =0;
    vector<int> mergeArray;
    while( i<n1 && j<n2 ){
        if(nums1[i]<nums2[j]){
            mergeArray.push_back(nums1[i]);
            i++;
        }else{
            mergeArray.push_back(nums2[j]);
            j++;
        }
    }
    while(i<n1)
    {
        mergeArray.push_back(nums1[i]);
        i++;
    }  
     while(j<n2)
    {
        mergeArray.push_back(nums2[j]);
        j++;
    } 
    return mergeArray;
}

int main(){
    vector<int> nums1 = {1,3,5};
    vector<int> nums2 = {2,4,6};
    vector<int> result = mergeSortedArrays(nums1, nums2);
    for(int i : result){
        cout << i<<" ";
    }
    return 0;
}