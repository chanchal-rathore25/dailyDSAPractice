#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main(){
    vector<int> arr1 = {1, 3, 5, 7};
    vector<int> arr2 = {2, 4, 6, 6, 8,2,3,4,7,8,9,0,10};
    vector<int> unionArr;
    int i = 0, j = 0;
    while (i < arr1.size() && j < arr2.size()) {
        if (arr1[i] < arr2[j]) {
            if (unionArr.empty() || unionArr.back() != arr1[i]) {
                unionArr.push_back(arr1[i]);
            }
            i++;
        } else if (arr1[i] > arr2[j]) {
            if (unionArr.empty() || unionArr.back() != arr2[j]) {
                unionArr.push_back(arr2[j]);
            }
            j++;
        } else {
            if (unionArr.empty() || unionArr.back() != arr1[i]) {
                unionArr.push_back(arr1[i]);
            }
            i++;
            j++;
        }
    }
    while (i < arr1.size()) {
        if (unionArr.empty() || unionArr.back() != arr1[i]) {
            unionArr.push_back(arr1[i]);
        }
        i++;
    }
    while (j < arr2.size()) {
        if (unionArr.empty() || unionArr.back() != arr2[j]) {
            unionArr.push_back(arr2[j]);
        }
        j++;
    }

    for( int i =0;i<unionArr.size();i++){
        cout<<unionArr[i]<<" ";
    }
    cout<<endl;
    // Solve by unordered_set 
    unordered_set<int> unionSet;
    int num2 = 0;
    int num1 = 0;
    while (num1 <arr1.size() &&  num2 <arr2.size()) {
        if(arr1[num1]<arr2[num2]){
            unionSet.insert(arr1[num1]);
            num1++;
        }
        else if(arr1[num1]>arr2[num2]){
            unionSet.insert(arr2[num2]);
            num2++;
        }
        else{
            unionSet.insert(arr1[num1]);
            num1++;
            num2++;
        }
        unionSet.insert(arr1[num1]);
        unionSet.insert(arr2[num2]);
    }
    while (num1 < arr1.size()) {
        unionSet.insert(arr1[num1]);
        num1++;
    }
    while(num2 < arr2.size()) {
        unionSet.insert(arr2[num2]);
        num2++;
    }
    for (int num : unionSet) {
        cout << num << " ";
    }

    return 0;
}