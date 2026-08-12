#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> arr =  {1, 3, 3};
    int n = arr.size();
    int count = 0;
    int repeating = -1;
    int missing = -1;
    for(int i = 1; i <= n; i++){
        count = 0;

        for(int j = 0; j < n; j++){
            if(arr[j] == i)
                count++;
        }

        if(count == 0)
            missing = i;

        if(count == 2)
            repeating = i;
    }
    cout<<"Missing number is: "<<missing<<endl;
    cout<<"Repeating number is: "<<repeating<<endl;
    return 0;
} 