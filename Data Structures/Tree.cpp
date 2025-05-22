#include "Tree.h"

#include <iostream>
#include <queue>

TreeNode* Tree::CreateNode(int value)
{
    return new TreeNode(value);
}

TreeNode* Tree::InsertBST(TreeNode* root, int value)
{
    if (!root)
        return CreateNode(value);
    if (value < root->data)
        root->left = InsertBST(root->left, value);
    else
        root->right = InsertBST(root->right, value);
    return nullptr;
}

void Tree::PreOrder(TreeNode* root)
{
    if (root == nullptr)
        return;
	std::cout << root->data << " ";
    PreOrder(root->left);
	PreOrder(root->right);
}

void Tree::InOrder(TreeNode* root)
{
    if (root == nullptr)
        return;
    InOrder(root->left);
    std::cout << root->data << " ";
    InOrder(root->right);
}

void Tree::PostOrder(TreeNode* root)
{
    if (root == nullptr)
        return;
    PostOrder(root->left);
    PostOrder(root->right);
    std::cout << root->data << " ";
}

void Tree::LevelOrder(TreeNode* root)
{
    if (!root)
        return;
    
    std::queue<TreeNode*> q{};
    q.push(root);

    while (!q.empty()) 
    {
        TreeNode* curr = q.front();
        q.pop();

        std::cout << curr->data << " ";

        if (curr->left)
            q.push(curr->left);
        if (curr->right)
            q.push(curr->right);
    }
}

bool Tree::IsValidBST(TreeNode* root, TreeNode* min, TreeNode* max)
{
    if (!root)
        return false;

    if ((min && root->data <= min->data) || (max && root->data >= max->data))
        return false;

    bool isLeftValid = IsValidBST(root->left, min, root);
    bool isRightValid = IsValidBST(root->right, root, max);

    return isLeftValid && isRightValid;
}
