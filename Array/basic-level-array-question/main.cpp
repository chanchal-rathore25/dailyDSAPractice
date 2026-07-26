#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    // Write C++ code here
    // int n =5;
    vector<int>arr={9,34,31,45,6,20,40};
    cout <<"array element ->";
    for(int i =0;i<arr.size();i++){
    cout <<arr[i]<<" ";
    }
    cout<<endl;
    //for maximum number in the array
    int max=INT_MIN;
    for(int i =0;i<arr.size();i++){
        if (arr[i]>max){
            max=arr[i];
        }
    }
    cout<<"max number ->"<<max; 
    cout<<endl;
    // minimum number in the array 
    int min=INT_MAX;
    for (int i =0;i<arr.size();i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<"min element ->"<<min;

    // sum of the array element
    int sum=0;
    for(int i :arr){
        sum+=i;
    }
    cout<<endl;
    cout<<"sum of the array element ->"<<sum;
    //average of array element 
    int avg = sum/arr.size();
    cout<<endl;
    cout<<"average of the array element ->"<<avg;
    return 0;
}