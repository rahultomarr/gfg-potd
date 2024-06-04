class Solution {

  public:
    int findSwapValues(int a[], int n, int b[], int m) {
        // Your code goes here
        
         int sum1=0;
        int sum2=0;
        for(int i=0;i<n;i++)sum1+=a[i];
        for(int i=0;i<m;i++)sum2+=b[i];
        int diff=abs(sum1-sum2);
        if(diff==0)return 1;
        if(diff%2!=0)return -1;
        sort(a,a+n);
        sort(b,b+m);
        int i=0,j=m-1;
        while(i<n &&j<m){
            
            if(a[i]+b[j]==diff){
                return 1;
            }else if(a[i]+b[j]>diff){
                j--;
            }
            else{
                i++;
            }
        }
        return -1;
    }
};
