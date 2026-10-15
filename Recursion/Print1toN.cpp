#include<iostream>
#include<string>
using namespace std;

void printNumber(int i,int n){
    if(i>n){
        return ;
    }

    printNumber(i+1,n);
    cout<<i<<endl;
}

int main(){
    int n = 3;
    int i = 1;
    printNumber(i,n);
    return 0;
}