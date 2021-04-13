/* ------------------------------------------------------------------|
给你一个二叉搜索树的根节点 root ，返回 树中任意两不同节点值之间的最小差值 。

注意：本题与 530：https://leetcode-cn.com/problems/minimum-absolute-difference-in-bst/ 相同

 

示例 1：


输入：root = [4,2,6,1,3]
输出：1
示例 2：


输入：root = [1,0,48,null,null,12,49]
输出：1
 

提示：

树中节点数目在范围 [2, 100] 内
0 <= Node.val <= 105

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/minimum-distance-between-bst-nodes
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。|
-------------------------------------------------------------------*/

/*	dfs法
*
*	执行用时：0 ms, 在所有 C++ 提交中击败了100.00%的用户
*	内存消耗：9.4 MB, 在所有 C++ 提交中击败了75.57%的用户
*/

#include <iostream>
#include <string> 
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <map>
#include <stack>
#include <queue>

using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}

};

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};

int minval = INT_MAX;
int pre = -1;

//由于二叉搜索树的性质，左节点<根节点<右节点
//因此使用中序遍历获得升序序列，对升序序列相邻元素进行差值计算
void dfs(TreeNode* root) {
    if (!root) {
        return;
    }
    //中序遍历
    dfs(root->left);

    //走到二叉搜索树的最左边，获得最小值
    if (pre == -1) {
        pre = root->val;
    }
    else {
        minval = min(minval, root->val - pre);
        pre = root->val;
    }

    dfs(root->right);
    
    return;

}

int minDiffInBST(TreeNode* root) {
    dfs(root);
    return minval;
}