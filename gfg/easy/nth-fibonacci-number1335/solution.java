class Solution {
    static int nthFibonacci(int n) {
        // code here
        // if(n<=1)
        // {
        //     return n;
        // }
        
        // return nthFibonacci(n-1)+nthFibonacci(n-2);
        
        if(n<=1)
        {
            return n;
        }
        
        int f0=0;
        int f1=1;
        int f3=0;
        
        for( int i=2;i<=n;i++)
        {
            f3=f0+f1;
            f0=f1;
            f1=f3;
        }
        
        return f3;
    }
}