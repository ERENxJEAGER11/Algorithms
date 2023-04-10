
/*
Algorithm - Binary Search

Binary search is a popular search algorithm that is used to find an element in a sorted array.
It works by repeatedly dividing the search interval in half until the target element is found, or the search interval is empty.

time complexicity - 0(logn)
space complexicity - 0(1)  
*/


int binarySearch(int a[], int n, int k)  {

    // We need to initialize variables to keep track of the left and right boundaries of the search interval

    int start = 0;     // start index
    int end = n-1;     //end index

    while(start<=end) {
        // The basic idea is to repeatedly divide the search interval in half until we find the target element
        int mid = start + (end-start)/2;
        // We do this by comparing the middle element of the search interval with the target element, and adjusting the search interval accordingly.
        if(a[mid]==k) {
            return mid;  //element found
        }
        else if(a[mid]>k) {
            end = mid-1;    //adjust interval, shift the end index to the left  
        }
        else {
            start = mid+1;  //adjust interval, shift the start index to the right  
        }
    }
    //   If the target element is found, we can perform any operations we need to do with it. Otherwise, we can handle the case where the element is not present in the array.
      return -1;
    }


#include <iostream>  
using namespace std;


// driver code
int main() {
   
   int n; //length of array
   int k; //element to search 
     
   cin>>n>>k;  // take length of array and search elem in input from user
   int arr[n];  
//    take array elems as input
   for(int i = 0; i < n; i++ )  {
         cin>>arr[i];
     }

     int result = binarySearch(arr, n, k);

    if (result == -1) {
        cout << "Element not found";
    }
    else {
        cout << "Element found at index " << result;
    }
    return 0;
} 
