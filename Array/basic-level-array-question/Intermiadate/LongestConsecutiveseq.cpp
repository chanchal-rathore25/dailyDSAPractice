#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main(){
    vector<int> arr = {1,50,51,52,53};
    int small = arr[0];
    vector<int> ans;
    for( int i = 1 ;i<
         arr.size();i++){
        for (int j = 0; j < arr.size(); j++) {
            if(arr[small+1]==arr[j]){
                ans.push_back(arr[j]);
                ans.push_back(arr[small]);
                small++;
            }
            if(arr[small] == arr[j]){
                ans.push_back(arr[j]);
            }
            if(arr[small-1]){
                ans.push_back(arr[j]);
                small--;
                }
            }
        }  
    }
    int len = ans.size();
    cout << "Longest consecutive sequence: ";
    for (int i : ans) {
        cout << i << " ";
    }
    cout << "\nLength: " << len << endl;
    return 0;
}