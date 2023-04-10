/*
Algorithm - Linear Search

The algorithm starts at the beginning of the list and examines each element until it finds the desired element or reaches the end of the list.
Linear search algorithm is a simple algorithm used to search for a particular element in an array or a list of elements.

time complexicity - 0(n)
space complexicity - 0(1)  
*/




#include <iostream>  
using namespace std;


// steps; to impliment; linear search
int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {  //step 1 :Start at the first element of the array.
        if (arr[i] == target) {   //step 2 :Compare the element with the target element to see if they match
            return i;            //step 3 :if they match, return the index of the current element. 
        }
                                //step 4 :If they don't match, move to the next element and repeat steps 2 and 3.  
    }
    return -1;                 //step 5 : If the end of the array is reached without finding the target element, return -1 to indicate that the element was not found.
}


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

     int result = linearSearch(arr, n, k);

    if (result == -1) {
        cout << "Element not found";
    }
    else {
        cout << "Element found at index " << result;
    }
    return 0;
} 
