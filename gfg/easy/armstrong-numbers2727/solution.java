class Solution {
    static boolean armstrongNumber(int n) 
    {
        // code here
        int sum=0;
        int tnum=n;
        while(n>0)
        {
            int rem=n%10;
            sum+=rem*rem*rem;
            n=n/10;
            
        }
        
        if(tnum==sum)
        {
            return true;
        }
        
        return false;
    }
}