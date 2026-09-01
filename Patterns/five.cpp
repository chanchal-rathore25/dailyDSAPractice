#include <iostream>
using namespace std;
void printPatternFirst(int n)
{
    for(int i = n; i >=1; i--){
        for(int j =1; j <= i; j++){
            cout<<i<<" ";
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