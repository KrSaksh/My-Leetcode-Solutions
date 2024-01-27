/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    int maxProduct(TreeNode* root) {
        long long tSum = subtreeSum(root);
        long long maxP = 0;
        dfs(root, tSum, maxP);
        return maxP % 1000000007;
    }
    long long subtreeSum(TreeNode* node) {
        if (!node)
            return 0;
        return node->val + subtreeSum(node->left) + subtreeSum(node->right);
    }

    long long dfs(TreeNode* node, long long tSum, long long& maxP) {
        if (!node)
            return 0;
        long long cSum = node->val + dfs(node->left, tSum, maxP) +
                         dfs(node->right, tSum, maxP);
        cout << "Current Sum : " << cSum << endl;
        long long p = cSum * (tSum - cSum);
        cout << "Current Product : " << p << endl;
        maxP = max(maxP, p);
        cout << "Max Product : " << maxP << endl;
        return cSum;
    }
};