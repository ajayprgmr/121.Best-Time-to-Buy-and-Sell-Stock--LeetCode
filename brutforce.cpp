class Solution {
public:
  int maxProfit(vector<int>& prices) {

      int size=prices.size();
    int profit=0;
    for(int i=0;i<size;i++){
      int temp=prices[i];
      for(int j=i+1;j<size;j++){
        int temp_profit=prices[j]-temp;
        if(temp_profit>profit){
          profit=temp_profit;
        }

      }
    }
    return profit;   
  }
};