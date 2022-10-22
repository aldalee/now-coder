// 二叉树的前序遍历
// Created by HuanyuLee on 2022/10/22.
// AC
#include <vector>

using namespace std;

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;

    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     * @param root TreeNode类
     * @return int整型vector
     */
    vector<int> preorderTraversal(TreeNode *root) {
        // write code here
        vector<int> res;
        preorder(res, root);
        return res;
    }

    void preorder(vector<int> &res, TreeNode *root) {
        if (root == nullptr)
            return;
        res.push_back(root->val);
        preorder(res, root->left);
        preorder(res, root->right);
    }
};