#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> arr1 = {1,2,3,4,5};
    vector<int> arr2 = {2,3,5,6};

    vector<int> intArr;
    int i = 0, j = 0;
    while(i<arr1.size() && j<arr2.size()){
        if(arr1[i]==arr2[j]){
            intArr.push_back(arr1[i]);
            i++;
            j++;
        }else if(arr1[i]<arr2[j]){
            i++;
        }else{
            j++;
        }
    }
    cout << "Intersaction of two sorted arrays is: ";
    for(int k = 0; k < intArr.size(); k++){
        cout << intArr[k] << " ";
    }
    cout << endl;

    return 0;
}