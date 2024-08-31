class Solution {
  public:
    int maxPathSum(vector<int> &arr1, vector<int> &arr2) {
        // Code here
     int maxi=0,n=arr1.size(),m=arr2.size(),i=0,j=0,sum1=0,sum2=0;
        arr1.push_back(INT_MAX) , arr2.push_back(INT_MAX);
        while((i<n || j<m))
        {
            if(arr1[i] < arr2[j])
            {
                sum1+=arr1[i];
                i++;
            }
            else if(arr1[i]>arr2[j])
            {
                sum2+=arr2[j];
                j++;
            }
            else
            {
                sum1=max( sum1 , sum2 ) + arr1[i];
                sum2=sum1;
                i++,j++;
            }
        }
        return max( sum1 , sum2 );
    }

};
