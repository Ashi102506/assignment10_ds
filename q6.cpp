#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
};

bool hasDuplicates(TreeNode* root) {
    unordered_set<int> values;
    
    if(root == NULL) return false;
    
    vector<TreeNode*> nodes;
    nodes.push_back(root);
    
    while(!nodes.empty()) {
        TreeNode* current = nodes.back();
        nodes.pop_back();
        
        if(values.find(current->val) != values.end()) {
            return true;
        }
        values.insert(current->val);
        
        if(current->left != NULL) nodes.push_back(current->left);
        if(current->right != NULL) nodes.push_back(current->right);
    }
    return false;
}

int main() {
    TreeNode* root = new TreeNode{1, NULL, NULL};
    root->left = new TreeNode{2, NULL, NULL};
    root->right = new TreeNode{3, NULL, NULL};
    root->left->left = new TreeNode{2, NULL, NULL};
    
    if(hasDuplicates(root)) {
        cout << "Duplicates Found" << endl;
    } else {
        cout << "No Duplicates" << endl;
    }
    
    return 0;
}
