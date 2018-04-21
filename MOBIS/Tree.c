////
//// Created by 명수현 on 2018. 4. 19..
////
//
///**
//*
// * Tree를 이용하여 PreOrder, inOrder, PostOrder 출력하기
//
//*/
//#include <stdio.h>
//#include <mm_malloc.h>
//
//#define MAX 100
//
//typedef struct _node{
//    int key;
//    struct _node *left;
//    struct _node *right;
//}node;
//
//node *head, *tail;
//node *stack[MAX];
//int top;
//
//void init_stack(void){
//    top = -1;
//}
//
//node *push(node * t){
//    if(top >= MAX-1){
//        printf("\n Stack overFlow");
//        return NULL;
//    }
//    stack[++top] = t;
//    return t;
//}
//
//node *pop(void){
//    if(top < 0){
//        printf("\n Stack Underflow..");
//        return NULL;
//    }
//    return stack[top--];
//}
//
//int stackIsEmpty(void){
//    return (top == -1);
//}
//
//node *queue[MAX];
//int front, rear;
//
//void init_queue(void){
//    front = rear = 0;
//}
//
//node *put(node *k){
//    int temp;
//    if((rear+1)%MAX == front){
//        printf("\n Queue overFlow ..");
//        return NULL;
//    }
//    queue[rear] = k;
//    temp = rear + 1;
//    rear = temp % MAX;
//    return k;
//}
//
//node *get(void){
//    int temp;
//    node *i;
//    if(front == rear){
//        printf("\n Queue underflow..");
//        return NULL;
//    }
//    i = queue[front];
//    temp = front+1;
//    front = temp % MAX;
//
//    return i;
//}
//
//int QIsEmpty(void){
//    return (front==rear);
//}
//
//void init_tree(void){
//    head = (node *)malloc(sizeof(node));
//    tail = (node *)malloc(sizeof(node));
//    head->left = tail;
//    head->right = tail;
//    tail->left = tail;
//    tail->right=tail;
//}
//
//int is_operator(int k){
//    return (k == '+' || k == '-' || k == '*' || k == '/');
//}
//
//// 후위 표기법 수식에서 수식 나무 구성
//node *make_parse_tree(char *p){
//
//    node *t;
//    while(*p){
//        while (*p == ' ')
//            p++;
//
//        t = (node*)malloc(sizeof(node));
//        t->key = *p;
//        t->left = tail;
//        t->right = tail;
//        if(is_operator(*p)){
//            t->right = pop();
//            t->left = pop();
//        }
//        push(t);
//        p++;
//    }
//    return pop();
//}
//
//int is_legal(char *s){
//    int f = 0;
//    while(*s){
//        while(*s == ' ')
//            s++;
//        if(is_operator(*s))
//            f--;
//        else
//            f++;
//        if(f < 1) break;
//        s++;
//    }
//    return (f==1);
//}
//void visit(node *t){
//    printf("%c", t->key);
//}
//
////PreOrder
//void preorder_traverse(node *t){
//    if(t != tail){
//        visit(t);
//        preorder_traverse(t->left);
//        preorder_traverse(t->right);
//    }
//}
//
////Inorder
//void inorder_traverse(node *t){
//    if(t != tail){
//        inorder_traverse(t->left);
//        visit(t);
//        inorder_traverse(t->right);
//    }
//}
//
////PostOrder
//void postorder_traverse(node *t){
//    if(t != tail){
//        postorder_traverse(t->left);
//        postorder_traverse(t->right);
//        visit(t);
//    }
//}
//
//int main(void){
//    char post[256] = "A B + C D - * E / F G * +";    // 후위표기법 수식 저장
//
//    // 스택, 큐, 트리 초기화
//    init_stack();
//    init_queue();
//    init_tree();
//
//    printf("\n\n A B + C D - * E / F G * +");
//
//    if (!is_legal(post)){
//        printf("\nExprssion is not legal");
//        exit(0);
//    }
//
//    // 수식 나무 구성
//    head->right = make_parse_tree(post);
//
//    printf("\nPreorder Traverse -> ");
//    preorder_traverse(head->right);
//    printf("\n");
//
//    printf("\nInorder Traverse -> ");
//    inorder_traverse(head->right);
//    printf("\n");
//
//    printf("\nPostorder Traverse -> ");
//    postorder_traverse(head->right);
//    printf("\n");
//
//
//    return 0;
//
//}