//#include<stdio.h>
//#include<stdlib.h>
//
//typedef struct Node {
//    int data;
//    struct Node *next;
//    struct Node *pre;
//} Node;
//
//Node *dumy;
//
//void init() {
//    dumy = (Node *) malloc(sizeof(Node));
//    dumy->next = NULL;
//    dumy->pre = NULL;
//}
//
//void addNode1(int num) {//위치 미지정 삽입
//
//    Node *newNode = (Node *) malloc(sizeof(Node));
//    newNode->data = num;
//    newNode->next = NULL;
//    newNode->pre = NULL;
//
//    if (dumy->next == NULL) {//첫 번째 노드인경우
//        dumy->next = newNode;
//        newNode->pre = dumy;
//    } else { // 맨뒤에 삽입
//        Node *tmp;
//        tmp = dumy->next;
//        while (tmp->next) {
//            tmp = tmp->next;
//        }
//        tmp->next = newNode;
//        newNode->pre = tmp;
//    }
//}
//
//void addNode2(int where, int num) {//위치지정 삽입
//    int cnt = 0;
//    Node *newNode = (Node *) malloc(sizeof(Node));
//    newNode->data = num;
//    newNode->next = NULL;
//    newNode->pre = NULL;
//
//    //첫자리가 아니라는 가정하에
//    Node *tmp;
//    tmp = dumy->next;
//    while (1) {
//        cnt++;
//        if (cnt == where) {
//            newNode->pre = tmp->pre;
//            newNode->next = tmp->pre->next;
//            tmp->pre->next = newNode;
//            tmp->pre = newNode;
//            break;
//        } else {
//            tmp = tmp->next;
//        }
//    }
//}
//
//void deleteNode(int num) {
//
//}
//
//void display() {
//    Node *tmp;
//    tmp = dumy->next;
//    while (tmp) {
//        printf("%d-->", tmp->data);
//        tmp = tmp->next;
//    }
//}
//
//int main() {
//    init();
//    addNode1(1);
//    addNode1(2);
//    addNode1(3);
//    addNode1(4);
//    addNode2(2, 6);
//    addNode2(2, 6);
//    addNode2(3,10);
//    addNode2(4,11);
//    addNode1(5);
//    display();
//
//
//}
