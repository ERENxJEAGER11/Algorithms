/*
Algorithm - Selection Sort

The algorithm repeatedly selects the smallest (or largest) element from the unsorted portion of the list and swaps it with the first element of the unsorted portion.
This process is repeated for the remaining unsorted portion of the list until the entire list is sorted.

The algorithm maintains two subarrays in a given array - >

 1. The subarray which already sorted. 
 2. he remaining subarray was unsorted.

time complexicity - 0(n^2)
space complexicity - 0(1)  
*/



#include <iostream>  
using namespace std;


void customSwap(int *a, int *b) {    // custom swap function
   int temp_var = *a;  //hold value of a
   *a = *b;            // assign value of b into a    
   *b = temp_var;   // assign value of a(initial value) into b
}

void selectionSort(int arr[], int n) {

    for(int i = 0; i < n-1; i++) { 
        int min_index = i;
        for(int j = i+1; j < n; j++) {  
                if(arr[j] < arr[min_index]) { min_index = j;}

        }

        if(min_index!=i) {
            swap(&arr)
        }  
    }

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


    return 0;
} 
