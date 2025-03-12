## The Problem
Implement the following function:

vector<int> lastLevel(MinHeap & heap);
Given a MinHeap (see MinHeap.h), return a vector containing the leaf nodes at the last level.

Example 1:

Input Heap: `[-inf,1,3,5,7,9,11]`

Output: `[7,9,11]`

Visual aid:

         1
       /   \
      3     5
     / \   /
    7   9 11

Example 2:

Input Heap: `[-inf,1,3,5,7,9]`

Output: `[7,9]`

Visual aid:

         1
       /   \
      3     5
     / \   
    7   9 

Hint: you can calculate $`\log_{2}(m)`$ as follows:

int m, logm;
logm = std::log2(m);
NOTE: Our implementation of heaps is 1-based indexing. Think about what the actual size of the heap is based on the size of the array.



### Developing with VSCode workspaces:

To open a terminal: click the button with three horizontal lines in the top left -> Terminal -> New Terminal.

To build your code: Follow the same method as our labs and mps.

- `mkdir build`
- `cd build`
- `cmake ..`

Once you have done that, you can compile and run your code using `make` and `./main` to compile and execute respectively.





## Graded files
The only files that will be submitted for grading on this problem is level.cpp which will contain the code for your function.