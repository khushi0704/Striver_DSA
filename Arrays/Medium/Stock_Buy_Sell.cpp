//BRUTE FORCE
int bestTimeToBuyAndSellStock(vector<int>&prices) {
    // brute force
    int n = prices.size();
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int profit=prices[j]-prices[i];
            if(profit>max){
                max=profit;
            }
        }
    }
    return max;
}

//OPTIMAL 
int bestTimeToBuyAndSellStock(vector<int>&prices) {
    // LINEAR TIME 
    int n=prices.size();
    int minPrice=INT_MAX;
    int maxProfit=0;
    for(int i=0;i<n;i++){
        minPrice=min(minPrice,prices[i]);
        maxProfit=max(maxProfit,prices[i]-minPrice);
    }
    return maxProfit;
}

