#include <iostream>
using namespace std;
void printPatternFirst(int n)
{
    for(int i = 1; i <= n; i++){
        for(int j =0; j < n-i+1; j++){
            cout<<"* ";
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