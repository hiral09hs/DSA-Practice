class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice=prices[0];
        int maxPrice=0;
        for(int i=0;i<prices.size();i++){
            if(maxPrice< (prices[i]-minPrice)){
                maxPrice=prices[i]-minPrice;
            }
            else{
                maxPrice=maxPrice;
            }
            if(minPrice>prices[i]){
                minPrice=prices[i];
            }
            else{
                minPrice=minPrice;
            }
        }
        return maxPrice;
    }
};
