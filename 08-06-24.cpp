class Solution {
  public:
    int findExtra(int n, int arr1[], int arr2[]) {
        // add code here.
        
              int left = 0, right = n - 2; // Since arr2 length is n-1
        int mid;
        
        // Perform binary search
        while (left <= right) {
            mid = left + (right - left) / 2;

            // If the elements are same, the extra element must be in the right half
            if (arr1[mid] == arr2[mid]) {
                left = mid + 1;
            } else {
                // If the elements are different, the extra element is in the left half
                right = mid - 1;
            }
        }

        // After the loop, left is the index of the extra element in arr1
        return left;
    }

};
