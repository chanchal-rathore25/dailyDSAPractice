#include <iostream>
#include <vector>
using namespace std;

int main(){
    // vector<int> arr = {10, 5, 20, 8, 15};
    // vector<int> arr = {-10, -3, -7, -2, -15};
    vector<int> arr = {5};
    int n = arr.size();
    int maxElem = arr[0];
    for(int i = 1; i < n ; i++ ){
        if(arr[i] > maxElem){
            maxElem = arr[i];
        }
    }
    cout << "Maximum element in the array is: " << maxElem << endl;
    return 0;
}