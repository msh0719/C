////
//// Created by 명수현 on 2018. 4. 20..
////
//
///**
// * 배열로 Deque 구현하기!
// */
//#include <stdio.h>
//#include <stdlib.h>
//#include <stdbool.h>
//
//#define CAPACITY 20
//
//typedef struct ArrayDeque{
//    int element[CAPACITY];
//    int rear;
//    int front;
//}Deque;
//
//Deque* create_deque(){
//    Deque *deque = (Deque *)malloc(sizeof(Deque));
//    if(deque != NULL){
//        deque->rear = 0;
//        deque->front = 0;
//        return deque;
//    }
//    else
//        exit(-1);
//}
//
//bool is_full(Deque* deque){
//    if(deque != NULL){
//        return deque->rear == CAPACITY -1;
//    }
//    else
//        exit(-1);
//}
//
//bool is_empty(Deque* deque){
//    if(deque != NULL){
//        return deque->front == deque->rear;
//    }
//    else
//        exit(-1);
//}
//// 뒤에 삽입하기
//void add_rear(Deque* deque, int val){
//    if(deque != NULL && !is_full(deque)){
//        deque->element[deque->rear++] = val;
//    }
//    else
//        exit(-1);
//}
//// 앞에 삽입하기
//void add_front(Deque* deque, int val){
//    if(deque != NULL && !is_full(deque)){
//        // 앞에 삽입하기 위해서 배열에 있는거 뒤로 쭉 밀기
//        for(int i=deque->rear-1; i>=0; i--){
//            deque->element[i+1] = deque->element[i];
//        }
//        deque->element[deque->front] = val;
//        deque->rear += 1;
//    }
//    else
//        exit(-1);
//}
//
//// 뒤에 삭제하기
//int del_rear(Deque* deque){
//    if(deque != NULL && !is_empty(deque)){
//        int return_data = deque->element[deque->rear];
//        deque->rear--;
//        return return_data;
//    }
//    else
//        exit(-1);
//}
////앞에 삭제하기
//int del_front(Deque* deque){
//    if(deque != NULL && !is_empty(deque)){
//        int return_data = deque->element[deque->front];
//        for(int i=deque->front; i<deque->rear; i++){
//            deque->element[i] = deque->element[i+1];
//        }
//        deque->rear--;
//        return return_data;
//    }
//    else
//        exit(-1);
//
//}
//int peek_rear(Deque *deque){
//    if(deque!=NULL && !is_empty(deque)){
//        return deque->element[deque->rear-1];
//    }
//    else
//        exit(-1);
//}
//int peek_front(Deque *deque){
//    if(deque!=NULL && !is_empty(deque))
//        return deque->element[deque->front];
//    else
//        exit(-1);
//}
//
//void show_state(Deque* deque) {
//    if(deque != NULL) {
//        printf("Show State--------------------------------\n");
//        for(int i = 0; i < deque -> rear; i++) {
//            printf("[%d] : %d", i, deque -> element[i]);
//            if( i == deque -> front && i == deque -> rear - 1)
//                printf("  <-- front & rear\n");
//            else if(i == deque -> front)
//                printf("  <-- front\n");
//            else if(i == deque -> rear - 1)
//                printf("  <-- rear\n");
//            else
//                printf("\n");
//        }
//        if(is_empty(deque))
//            printf("Deque is Empty\n");
//        printf("------------------------------------------\n");
//    }
//    else
//        exit(-1);
//}
//
//int main(void) {
//    Deque* deque = create_deque();
//
//    printf("Add Rear 30\n");
//    add_rear(deque, 30);
//    show_state(deque);
//
//    printf("Add Front 10\n");
//    add_front(deque, 10);
//    show_state(deque);
//
//    printf("Del Front : %d\n",del_front(deque));
//    show_state(deque);
//
//    printf("Del Rear : %d\n",del_rear(deque));
//    show_state(deque);
//
//    printf("Add Front 20\n");
//    add_front(deque, 20);
//    show_state(deque);
//
//    printf("Peek Front : %d\n",peek_front(deque));
//    show_state(deque);
//
//    printf("Peek rear : %d\n",peek_rear(deque));
//    show_state(deque);
//
//    free(deque);
//    return 0;
//}