#include<iostream>
#include<string>
using namespace std;

void printName(int n, string name){
    if(n==0){
        return ;
    }

    cout<<name<<endl;
    printName(n-1,name);
}

int main(){
    int n;
    cout << "Enter the number of times to print your name: ";
    cin>>n;

    string name ;
    cout<<"Enter your name: ";
    cin>>name;
    printName(n, name);
    return 0;
}