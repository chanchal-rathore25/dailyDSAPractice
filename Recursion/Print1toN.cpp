#include<iostream>
#include<string>
using namespace std;

void printNumber(int i,int n){
    if(i>n){
        return ;
    }

    cout<<i<<endl;
    printNumber(i+1,n);
}

int main(){
    int n,i;
    cout << "Enter the starting no. : ";
    cin>>i;
    cout<<"Enter the ending no. : ";
    cin>>n;
    
  
    printNumber(i,n);
    return 0;
}