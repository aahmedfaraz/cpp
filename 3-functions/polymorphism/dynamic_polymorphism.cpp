// When we talk about polymorphism, by default we mean dynamic polymorphism. 
// Dynamic polymorphism is achieved through the use of virtual functions in C++. 
// It allows a function to behave differently based on the object that invokes it, enabling runtime method binding.

#include <iostream>

struct TreeNode { 
    int value;
    TreeNode *left, *right; 
    TreeNode(int val) : value(val), left(nullptr), right(nullptr) {}
};

class GenericParser {
    public:
        void parse_preorder(TreeNode* node) {
            if (node) {
                process_node(node);
                parse_preorder(node->left);
                parse_preorder(node->right);
            }
        }
    
    private:
        virtual void process_node(TreeNode* node) { }
};

class EmployeeChart_Parser : public GenericParser {
    private:
        void process_node(TreeNode* node) {
            std::cout << "Print Node: " << node->value << std::endl;
        }
};

int main() {
    TreeNode* root = new TreeNode(10);
    root->left = new TreeNode(20);
    root->right = new TreeNode(30);

    EmployeeChart_Parser ep;
    ep.parse_preorder(root);

    return 0;
}

// Output:

// Print Node: 10
// Print Node: 20
// Print Node: 30