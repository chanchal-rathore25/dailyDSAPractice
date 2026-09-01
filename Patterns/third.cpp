#include <iostream>
using namespace std;
void printPatternFirst(int n)
{
    for(int i = 1; i <= n; i++){
        for(int j =1; j <= i; j++){
            cout<<j<<" ";
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