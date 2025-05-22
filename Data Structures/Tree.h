#pragma once

struct TreeNode
{
	int data;
	TreeNode* left;
	TreeNode* right;
	TreeNode() : data(0), left(nullptr), right(nullptr) {}
	TreeNode(int data) : data(data), left(nullptr), right(nullptr) {}
	~TreeNode()
	{
		delete left;
		delete right;
	}
	
};
class Tree
{
public:
	TreeNode* CreateNode(int value);
	TreeNode* InsertBST(TreeNode* root, int value);
	void PreOrder(TreeNode* root);
	void InOrder(TreeNode* root);
	void PostOrder(TreeNode* root);
	void LevelOrder(TreeNode* root);
	bool IsValidBST(TreeNode* root, TreeNode* min, TreeNode* max);
};

