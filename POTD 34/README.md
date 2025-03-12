## The Problem
Complete the 'traverse' function that accepts a BTree `BTreeNode *` and returns a `vector<int>` containing the inorder traversal of the elements in the BTree nodes. Each BTree Node is made up of a `vector<int> elements`, which are the values in the node and a `vector<BTreeNode*> children` which is a vector of child pointers. Your code should go in `BTreeNode.cpp`.

Definition for a BTree node:

struct BTreeNode {
    bool is_leaf=true;
    std::vector<int> elements;
    std::vector<BTreeNode*> children;
    BTreeNode() {}
    BTreeNode (std::vector<int> v) {
        this->elements = v;
    }
};



## Example:

In `main.cpp`, an exmaple BTree has been provided to help you test your code:

traverse(root):

            [30    60]
          /      |     \
      [10 20]  [40 50]  [70 80]


Result:

10<br/>
20<br/>
30<br/>
40<br/>
50<br/>
60<br/>
70<br/>
80<br/>

## Developing with VSCode workspaces:

To open a terminal: click the button with three horizontal lines in the top left -> Terminal -> New Terminal.

To build your code: Follow the same method as our labs and mps.

- `mkdir build`
- `cd build`
- `cmake ..`

Once you have done that, you can compile and run your code using `make` and `./main` to compile and execute respectively.


## Graded files
The only files that will be submitted for grading on this problem is BTreeNode.cpp,BTreeNode.h