class Solution {
    public int maxProfit(int[] price) 
    {
        // Code here
        int buyPrice=Integer.MAX_VALUE;
        int maxPrice=0;
        
        for(int i=0;i<price.length;i++)
        {
            if(buyPrice<price[i])
            {
                int profit=price[i]-buyPrice;
                maxPrice=Math.max(profit,maxPrice);
            }
            else
            {
                buyPrice=price[i];
            }
        }
        
        return maxPrice;
    }
}