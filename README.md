### LeetCode_No.783_-二叉搜索树节点最小距离
* 题目描述

      给你一个二叉搜索树的根节点 root ，返回 树中任意两不同节点值之间的最小差值 。
      注意：本题与 530：https://leetcode-cn.com/problems/minimum-absolute-difference-in-bst/ 相同
* 示例 1：

      输入：root = [4,2,6,1,3]
      输出：1
* 示例 2：

      输入：root = [1,0,48,null,null,12,49]
      输出：1
 
* 提示：

      树中节点数目在范围 [2, 100] 内
      0 <= Node.val <= 105
###解法思路
* 中序遍历递归
  * 时间复杂度O(n)
  * 空间复杂度O(n)
  *	执行用时：0 ms, 在所有 C++ 提交中击败了100.00%的用户
  *	内存消耗：9.4 MB, 在所有 C++ 提交中击败了75.57%的用户

来源：力扣（LeetCode）\
链接：https://leetcode-cn.com/problems/minimum-distance-between-bst-nodes \
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
