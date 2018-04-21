////
//// Created by 명수현 on 2018. 4. 19..
////
//
//#include<stdio.h>
//#include<stdlib.h>
//
//typedef struct Node {
//    int data;
//    struct Node *next;
//} Node;
//Node *dumy;
//
//initList() {
//    dumy = (Node *) malloc(sizeof(Node));
//    dumy->next = NULL;
//}
//
//void insertNode1(int num) {//그냥 맨뒤에 삽입
//    Node *newNode = (Node *) malloc(sizeof(Node));
//    newNode->data = num;
//    newNode->next = NULL;
//    if (dumy->next == NULL) {
//        dumy->next = newNode;
//    } else {
//        Node *tmp;
//        tmp = dumy->next;
//        while (tmp->next) {
//            tmp = tmp->next;
//        }
//        tmp->next = newNode;
//    }
//
//}
//
//void insertNode2(int where, int num) {//위치를 주면 그위치에 삽입
//    int cnt = 0;
//    Node *newNode = (Node *) malloc(sizeof(Node));
//    newNode->data = num;
//    newNode->next = NULL;
//    if (where == 1) {
//        newNode->next = dumy->next;
//        dumy->next = newNode;
//    } else {
//        Node *tmp;
//        tmp = dumy->next;
//        cnt++;
//        while (1) {
//            cnt++;
//            if (cnt == where) {
//                newNode->next = tmp->next;
//                tmp->next = newNode;
//                break;
//            }
//            tmp = tmp->next;
//        }
//    }
//}
//
//void insertNode3(int whereNodeNum, int num) {//전노드를 주면 그노드 뒤에 삽입
//    Node *whereNode = (Node *) malloc(sizeof(Node));
//    whereNode->data = whereNodeNum;
//    whereNode->next = NULL;
//
//    Node *newNode = (Node *) malloc(sizeof(Node));
//    newNode->data = num;
//    newNode->next = NULL;
//    Node *tmp;
//    tmp = dumy->next;
//    while (1) {
//        if (tmp->data == whereNode->data) {
//            newNode->next = tmp->next;
//            tmp->next = newNode;
//            break;
//        }
//        tmp = tmp->next;
//    }
//}
//
//void deleteNode1() {//위치를 주면 그위치 노드삭제
//
//}
//
//void deleteNode2() {//키값을 주면 그위치 삭제
//
//}
//
//void display() {
//    Node *tmp;
//    tmp = dumy->next;
//    while (tmp) {
//        printf("%d->", tmp->data);
//        tmp = tmp->next;
//    }
//    printf("\n");
//}
//
//int main() {
//    initList();
//    insertNode1(1);
//    insertNode1(2);
//    insertNode1(3);
//    insertNode1(4);
//    insertNode1(5);
//    insertNode2(1, 3);
//    insertNode2(1, 2);
//    display();
//    insertNode2(2, 7);
//    display();
//    insertNode3(7, 3);
//    display();
//    insertNode3(1, 15);
//    display();
//    return 0;
//}