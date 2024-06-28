#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int a[10];
    // to fill values with 67 and 100
    fill( a, a+5 , 67);
    fill(a+5, a+10, 100);

    for (int i = 0; i<10; i++){
        cout<<i<< " --> " <<a[i]<<endl;
    }
    return 0;
}
//Detail breakdown of code:
// Memory Management:

// Understanding the difference between stack and heap memory is crucial for efficient programming and avoiding memory leaks.
// Array Initialization:

// It's essential to be aware that uninitialized array elements can contain garbage values. Initializing or filling the array with specific values helps avoid unpredictable behavior.
// Using fill:

// The fill function is a handy tool to quickly initialize or reset array elements. In the code above, fill(a, a + 5, 67) sets the first five elements to 67, and fill(a + 5, a + 10, 100) sets the next five elements to 100.

// //Key Learnings:
// // Memory Types:

// // Stack Memory: Used for static memory allocation, stores function calls, and local variables.
// // Heap Memory: Used for dynamic memory allocation, allows for more flexible memory management.
// // Default Values in Arrays:

// // Uninitialized array elements can contain garbage values. It's not guaranteed that they will be zero.
// Finding Size and Base Address of Arrays:

// Size of Array: Using sizeof(arr) to determine the total size and dividing by sizeof(arr[0]) to get the number of elements.
// Base Address: The address of the first element, &arr[0].
// Using the fill Method:

// Filling arrays with specific values using the fill function from the algorithm library.