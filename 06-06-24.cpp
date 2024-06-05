class Solution {
  public:
    long long max_sum(int a[], int n) {
        // Your code here
        
         unsigned long long maxi=0,ans=0,val=0,q=0;
        for(int i=1;i<n;i++)
        {
            q=a[i];
            val+=q;
            ans+=q*i;
        }
        maxi=ans;
        for(int i=0;i<n;i++)
        {
            q=a[i];
            ans=ans+q*(n-1)-val;
            if(ans>maxi)
            maxi=ans;
            val=val-a[(i+1)%n]+a[i];
           
        }
        return maxi;
    }
};
