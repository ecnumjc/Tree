#include<iostream>
using namespace std;




struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}

};



//�������ݹ��㷨�������
class Solution {
public:
	int maxDepth(TreeNode* root)
	{
		int depth = 0;
		if (root)
		{
			int leftdepth = maxDepth(root->left);
			int rightdepth = maxDepth(root->right);

			depth = leftdepth >= rightdepth ? (leftdepth + 1) : (rightdepth + 1);
		}
		return depth;
	}
};




//����������ȱ�����ǰ�����򡢺���
//ǰ��ݹ�
void preordertraverse(TreeNode* root)
{
	if (root)
	{
		cout << root->data << endl;
		preordertraverse(root->left);
		preordertraverse(root->right);
	}
}


//ǰ��ǵݹ�



//����ݹ�
void inordertraverse(TreeNode* root)
{
	if (root)
	{
		inordertraverse(root->left);
		cout << root->data << endl;
		inordertraverse(root->right);
	}
}

//����ǵݹ�


//����ݹ�
void postordertraverse(TreeNode* root)
{
	if (root)
	{
		postordertraverse(root->left);
		postordertraverse(root->right);
		cout << root->data << endl;
	}
}


//����ǵݹ�



/**
* Definition for a binary tree node.
* struct TreeNode {
*     int val;
*     TreeNode *left;
*     TreeNode *right;
*     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
* };
*/
class Solution {
public:
	TreeNode* invertTree(TreeNode* root)
	{
		if (root)
		{
			TreeNode *left, *right;

			if (root->left)
			{
				right = invertTree(root->left);
			}
			else
			{
				right = NULL;
			}
			if (root->right)
			{
				left = invertTree(root->right);
			}
			else
			{
				left = NULL;
			}
			root->left = left;
			root->right = right;
		}
		return root;
	}
};



class Solution {
public:
	bool isHappy(int n) {
		int square = 0;
		int temp = n % 10;
		while (temp)
		{
			square =square +temp*temp;
			temp = n % 10;
			n = n / 10;
		}
		
		if (square == 1)
		{
			return true;
		}
		else
		{
			int s2temp = temp;
			isHappy(square);
		}
		return false;
	}
};







