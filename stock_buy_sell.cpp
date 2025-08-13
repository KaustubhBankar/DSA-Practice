#include <iostream>
#include<vector>
using namespace std;

int maximumProfit(vector<int> prices){
    int n = prices.size();
    int maxProfit = 0;
    int bestBuy = prices[0];
    for(int val : prices){
        if(val > bestBuy){
            maxProfit = max(maxProfit, val - bestBuy);
        }
        bestBuy = min(bestBuy, val);
    }
    return maxProfit;
}
 
int main() {
   vector<int> prices = {7,1, 5, 3, 6, 4};
   cout<< maximumProfit(prices);
   return 0;

}