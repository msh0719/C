////
//// Created by 명수현 on 2018. 4. 19..
////
//
///**
// * 요셉의 문제 :
//A부터 J까지의 10명의 사람이 시계 방향으로 순서대로 원을 지어 앉아 있다고 하자. 이때 A부터 시작하여서 4명 간격으로 사람을 그 원에서 뽑아낸다고 하면 그 순서는 어떻게 될 것인가?
//결과 : A, E, I, D, J, G, F, H, C, B
//응용하여 1부터 n까지의 숫자를 순서대로 나열되어 있고, 1부터 시작하여 m 간격으로 숫자를 뽑아내는 순서를 구하는 문제를 환형 연결 리스트를 사용하여 풀어본다.
// */
//
//#include <stdio.h>
//#include <mm_malloc.h>
//
//typedef struct _node{
//    int key;
//    struct _node *next;
//} node;
//
//node *head;
//
////1부터 k까지의 값을 가지는 환형 연결 리스트 구성
//void insert_node(int val){
//
//    node *t;
//
//    t = (node *)malloc(sizeof(node));
//    t->key = 1;
//    head = t;
//
//    for(int i=2; i<val; i++){
//        t->next = (node*)malloc(sizeof(node));
//        t = t->next;
//        t->key = i;
//    }
//    //원형 큐 이니까 마지막에 head를 next설정
//    t->next = head;
//}
//void delete_after(node *t){
//    node *s;
//    s = t->next;
//    t->next = t->next->next;
//    free(s);
//}
////n개의 노드를 m 간격으로
//void josephus(int n, int m){
//    node *t;
//    int i;
//    insert_node(n);
//    t = head;
//    printf("\nAnswer : ");
//
//    while(t != t->next){
//        for(i=0; i<m-1; i++){
//            t = t->next;
//        }
//        printf("%d ", t->next->key);
//        delete_after(t);
//    }
//    printf("%d", t->key);
//}
//int main(void){
//
//    int n, m;
//    printf("\nIf you want to quit, enter 0 or minus value");
//    while (1){
//        printf("\nEnter N and M ->");
//        scanf("%d %d", &n, &m);
//        if (n <= 0 || m <= 0)
//            break;
//        josephus(n, m);
//    }
//
//    return 0;
//}