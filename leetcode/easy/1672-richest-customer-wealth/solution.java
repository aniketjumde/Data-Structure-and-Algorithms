class Solution {
    public int maximumWealth(int[][] accounts) {
        
        int rows = accounts.length;
        int columns = accounts[0].length;

        int ans[]=new int[rows];
        int max=Integer.MIN_VALUE;
        for(int i=0;i<rows;i++)
        {
            int sum=0;
            for(int j=0;j<columns;j++)
            {
                sum+=accounts[i][j];
            }
            max=Math.max(sum,max);
        }

        return max;

    }
}