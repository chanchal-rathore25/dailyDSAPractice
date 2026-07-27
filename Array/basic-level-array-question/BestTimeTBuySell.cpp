#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> prices = {7,1,5,3,6,4};
    int n = prices.size();
    int minPrice = prices[0];
    int profit = 0;
    for(int i = 1; i < n; i++){
        profit = max(prices[i] - minPrice, profit);
        minPrice = min(minPrice, prices[i]);
    }

    cout<<profit;
    return 0;

}