#include <iostream>
using namespace std;
void printPatternFirst(int n)
{
    for(int i = 0; i < n; i++){
        for(int j =n; j < n-i-1; j++){
            cout<<" ";
        }
        for(int j =0; j < 2*i+1; j++){
            cout<<"*";
        }
        for(int j =0; j < n-i-1; j++){
            cout<<" ";
        }

        cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    printPatternFirst(n);
    return 0;
}