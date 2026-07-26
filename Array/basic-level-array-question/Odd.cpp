#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> arr={9,34,31,45,6,20,40};
    int even_count=0, odd_count=0;

    for ( int i: arr){
        if( i%2==0){
            even_count++;
            cout<<i<<" is even"<<endl;
        }
        else{
            odd_count++;
            cout<<i<<" is odd"<<endl;
        }
        
    }
    cout<<"even count ->"<<even_count<<endl;
    cout<<"odd count ->"<<odd_count<<endl;

    return 0;
}