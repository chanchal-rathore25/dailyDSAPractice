#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> arr = {2, 0, 2, 1, 1, 0};
    int zeroCount = 0;
    int oneCount = 0;
    int twoCount = 0;

    for(int i = 0; i<arr.size() ; i++){
        if(arr[i] == 0){
            zeroCount++;
        }else if(arr[i] == 1){
            oneCount++;
        }else{
            twoCount++;
        }
    }
    int i = 0;
    while(zeroCount > 0){
        arr[i] = 0;
        zeroCount--;
        i++;
    }
    while(oneCount > 0){
        arr[i] = 1;
        oneCount--;
        i++;
    }
     while(twoCount > 0){
        arr[i] = 2;
        twoCount--;
        i++;
    }
    cout<<"sorted array in 0s , 1s , 2s ->";
    for( int i : arr){
        cout<<i<<" ";
    }

   

// To solve this problem I have an optimal approach Dutch National Flag Algorithm 
// 👉 Dutch National Flag Algorithm

// Usme:

// Single traversal
// No counting
// Three pointers
// low
// mid
// high

// Time Complexity: O(n)
// Space Complexity: O(1)

    int low = 0;
    int mid = 0;
    int high = arr.size()-1;

    while (mid <= high)
{
    if (arr[mid] == 0)
{
    swap(arr[low], arr[mid]);
    low++;
    mid++;
}
else if (arr[mid] == 1)
{
    mid++;
}
else
{
    swap(arr[mid], arr[high]);
    high--;
}
}
    cout<<"sorted array in 0s , 1s , 2s ->";
    for( int i : arr){
        cout<<i<<" ";
    }

    return 0;
}