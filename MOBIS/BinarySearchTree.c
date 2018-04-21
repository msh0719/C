//#include<stdio.h>
//#include<stdlib.h>
//
//typedef struct treeNode {
//    int data;
//    struct treeNode *left;
//    struct treeNode *right;
//} treeNode;
//
//treeNode *root;
//
//void initTree() {
//    root = (treeNode *) malloc(sizeof(treeNode));
//    root->right = NULL;
//}
//
//void insertTreeNode(int num) {
//    treeNode *newNode = (treeNode *) malloc(sizeof(treeNode));
//    newNode->data = num;
//    newNode->left = NULL;
//    newNode->right = NULL;
//
//    if (root->right == NULL) {
//        root->right = newNode;
//    } else {
//        treeNode *tmp;
//        tmp = root->right;
//        while (1) {
//            if (newNode->data > tmp->data) {
//                if (tmp->right == NULL) {
//                    tmp->right = newNode;
//                    return;
//                }
//                tmp = tmp->right;
//            } else {
//                if (tmp->left == NULL) {
//                    tmp->left = newNode;
//                    return;
//                }
//                tmp = tmp->left;
//
//            }
//        }
//    }
//}
//
//
//void deletetreeNode() {
//
//}
//
//void preOrder(treeNode *node) {
//    if (node != NULL) {
//        printf("%d-->", node->data);
//        preOrder(node->left);
//        preOrder(node->right);
//    }
//}
//
//void inOrder(treeNode *node) {
//    if (node != NULL) {
//        inOrder(node->left);
//        printf("%d-->", node->data);
//        inOrder(node->right);
//    }
//}
//
//void postOrder(treeNode *node) {
//    if (node != NULL) {
//        postOrder(node->left);
//        postOrder(node->right);
//        printf("%d-->", node->data);
//    }
//}
//
////void visit(treeNode *node) {
////    printf("%d-->", node->data);
////}
//
//int main() {
//    initTree();
//    insertTreeNode(20);
//    insertTreeNode(10);
//    insertTreeNode(30);
//    insertTreeNode(5);
//    insertTreeNode(15);
//    insertTreeNode(25);
//    insertTreeNode(35);
//    preOrder(root->right);
//    printf("\n");
//    inOrder(root->right);
//    printf("\n");
//    postOrder(root->right);
//    printf("\n");
//    return 0;
//}
//


