#include <stdio.h>
#include <stdlib.h>

// 定义二叉树节点结构
typedef struct TreeNode {
    int data;                    // 节点存储的数据
    struct TreeNode* left;       // 左子树指针
    struct TreeNode* right;      // 右子树指针
} TreeNode;

// 创建新节点的函数
TreeNode* createNode(int data) {
    // 分配内存空间给新节点
    TreeNode* newNode = (TreeNode*)malloc(sizeof(TreeNode));
    
    // 检查内存分配是否成功
    if (newNode == NULL) {
        printf("内存分配失败！\n");
        return NULL;
    }
    
    // 初始化节点数据
    newNode->data = data;
    newNode->left = NULL;    // 初始化左子树为空
    newNode->right = NULL;   // 初始化右子树为空
    
    return newNode;          // 返回新创建的节点
}

/**
 * 先序遍历（Pre-order Traversal）
 * 遍历顺序：根节点 -> 左子树 -> 右子树
 * 
 * @param root 二叉树的根节点
 */
void preorderTraversal(TreeNode* root) {
    // 如果当前节点为空，则返回
    if (root == NULL) {
        return;
    }
    
    // 步骤1：访问根节点（打印节点值）
    printf("%d ", root->data);
    
    // 步骤2：递归遍历左子树
    preorderTraversal(root->left);
    
    // 步骤3：递归遍历右子树
    preorderTraversal(root->right);
}

/**
 * 中序遍历（In-order Traversal）
 * 遍历顺序：左子树 -> 根节点 -> 右子树
 * 
 * @param root 二叉树的根节点
 */
void inorderTraversal(TreeNode* root) {
    // 如果当前节点为空，则返回
    if (root == NULL) {
        return;
    }
    
    // 步骤1：递归遍历左子树
    inorderTraversal(root->left);
    
    // 步骤2：访问根节点（打印节点值）
    printf("%d ", root->data);
    
    // 步骤3：递归遍历右子树
    inorderTraversal(root->right);
}

/**
 * 后序遍历（Post-order Traversal）
 * 遍历顺序：左子树 -> 右子树 -> 根节点
 * 
 * @param root 二叉树的根节点
 */
void postorderTraversal(TreeNode* root) {
    // 如果当前节点为空，则返回
    if (root == NULL) {
        return;
    }
    
    // 步骤1：递归遍历左子树
    postorderTraversal(root->left);
    
    // 步骤2：递归遍历右子树
    postorderTraversal(root->right);
    
    // 步骤3：访问根节点（打印节点值）
    printf("%d ", root->data);
}

// 主函数 - 演示二叉树的三种遍历方法
int main() {
    // 创建一棵示例二叉树
    //         1
    //       /   \
    //      2     3
    //     / \
    //    4   5
    
    // 创建根节点
    TreeNode* root = createNode(1);
    
    // 创建第二层节点
    root->left = createNode(2);
    root->right = createNode(3);
    
    // 创建第三层节点
    root->left->left = createNode(4);
    root->left->right = createNode(5);
    
    // 输出三种遍历结果
    printf("二叉树结构:\n");
    printf("        1\n");
    printf("      /   \\\n");
    printf("     2     3\n");
    printf("    / \\\n");
    printf("   4   5\n");
    printf("\n");
    
    // 执行先序遍历
    printf("先序遍历 (根 -> 左 -> 右): ");
    preorderTraversal(root);
    printf("\n");
    
    // 执行中序遍历
    printf("中序遍历 (左 -> 根 -> 右): ");
    inorderTraversal(root);
    printf("\n");
    
    // 执行后序遍历
    printf("后序遍历 (左 -> 右 -> 根): ");
    postorderTraversal(root);
    printf("\n");
    
    // 释放分配的内存
    free(root->left->left);
    free(root->left->right);
    free(root->left);
    free(root->right);
    free(root);
    
    return 0;
}