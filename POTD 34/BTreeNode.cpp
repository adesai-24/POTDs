#include <vector>
#include "BTreeNode.h"


std::vector<int> traverse(BTreeNode* root) {
    // your code here
    std::vector<int> v;
    if (!root) {
        return v;
    }
    for (size_t i = 0; i < root->elements_.size(); i++) {
        if (i < root->children_.size()) {
            std::vector<int> leftSide = traverse(root->children_[i]);
            v.insert(v.end(), leftSide.begin(), leftSide.end());
        }
        v.push_back(root->elements_[i]);
    }
    if (root->children_.size() > root->elements_.size()) {
        std::vector<int> rightSide = traverse(root->children_[root->elements_.size()]);
        v.insert(v.end(), rightSide.begin(), rightSide.end());
    }
    return v;
}
