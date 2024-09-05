#include<bits/stdc++.h>
using namespace std;
struct TreeNode 
{
    int data;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int value) 
    {
        data=value;
        left=nullptr;
        right=nullptr;
    } 
};
struct binarytree
{
    TreeNode *root;
    binarytree()
    {
        root=nullptr;
    }

    // Wrapper function to call the insert function starting from the root
    void insert(int value) 
    {
        root = insertre(root, value);
    }

    // Recursive function to insert a new node
    TreeNode* insertre(TreeNode* node, int value) {
        if (node == nullptr) {
            return new TreeNode(value);  // If the node is null, create a new node
        }
        if (value < node->data) {
            node->left = insertre(node->left, value);  // Insert in the left subtree
        } else {
            node->right = insertre(node->right, value); // Insert in the right subtree
        }
        return node;
    }
    

    // Inorder Traversal (Left, Root, Right)
    void inorder(TreeNode* node) 
    {
        if (node != nullptr) 
        {
            inorder(node->left);         // Traverse the left subtree
            cout << node->data << " "; // Visit the root
            inorder(node->right);        // Traverse the right subtree
        }
    }
    // Preorder Traversal (Root, Left, Right)
    void preorder(TreeNode* node) 
    {
        if (node != nullptr) 
        {
            cout << node->data << " ";
            preorder(node->left);
            preorder(node->right);
        }
    }
    // Postorder Traversal (Left, Right, Root)
    void postorder(TreeNode* node) 
    {
        if (node != nullptr) 
        {
            postorder(node->left);
            postorder(node->right);
            cout << node->data << " ";
        }
    }

    // Wrapper functions to call traversals starting from the root
    void inorder() 
    {
        inorder(root);
    }
    void preorder() 
    {
        preorder(root);
    }
    void postorder() 
    {
        postorder(root);
    }
};

int main() 
{
    binarytree tree;  // Create a binary tree

    // Insert elements into the tree
    int n;
    cin>>n;
    cout<<"size of the array is: "<<n<<endl;
    vector<int>arr;
    for(int i=0;i<n;i++)
    {
        int p;
        cin>>p;
        arr.push_back(p);
    }
    for(int i=0;i<n;i++)
    {
        tree.insert(arr[i]);
    }

    // Perform traversals
    cout<< "In-order traversal of the binary tree: ";
    tree.inorder();
    cout<<endl;
    cout << "Preorder traversal of the binary tree: ";
    tree.preorder(); 
    cout<<endl;
    cout << "Postorder traversal of the binary tree: ";
    tree.postorder(); 
    cout<<endl;

    return 0;
}