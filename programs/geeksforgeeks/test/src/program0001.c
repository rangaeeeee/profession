/**
 * \file   file.c
 * \author Rangarajan R 
 * \date   March, 2016
 * \brief  
 *   Predict the output.
 *
 * \details 
 *   Detailed description of file.
 *
 * \note
 *   The time complexity of above algorithm is O(n).
 *   The idea of binary search is to use the information that the array is 
 *   sorted and reduce the time complexity to O(Logn). We basically ignore half 
 *   of the elements just after one comparison.
 *    1) Compare x with the middle element.
 *    2) If x matches with middle element, we return the mid index.
 *    3) Else If x is greater than the mid element, then x can only lie in right
 *       half subarray after the mid element. So we recur for right half.
 *    4) Else (x is smaller) recur for the left half.
 *
 * \copyright
 *   
 */
#include <stdio.h>
 
// A recursive binary search function. It returns location of x in
// given array arr[l..r] is present, otherwise -1
int binarySearch(int arr[], int l, int r, int x)
{
   if (r >= l)
   {
        int mid = l + (r - l)/2;
 
        // If the element is present at the middle itself
        if (arr[mid] == x)  return mid;
 
        // If element is smaller than mid, then it can only be present
        // in left subarray
        if (arr[mid] > x) return binarySearch(arr, l, mid-1, x);
 
        // Else the element can only be present in right subarray
        return binarySearch(arr, mid+1, r, x);
   }
 
   // We reach here when element is not present in array
   return -1;
}
 
int main(void)
{
   int arr[] = {2, 3, 4, 10, 40};
   int n = sizeof(arr)/ sizeof(arr[0]);
   int x = 10;
   int result = binarySearch(arr, 0, n-1, x);
   (result == -1)? printf("Element is not present in array")
                 : printf("Element is present at index %d", result);
   return 0;
}
