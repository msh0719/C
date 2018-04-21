////
//// Created by 명수현 on 2018. 4. 20..
////
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <stdbool.h>
//
//typedef struct LinkedNode{
//    int element;
//    struct LinkedNode *link;
//}LinkedNode;
//
//typedef struct LinkedQueue{
//    LinkedNode* rear;
//    LinkedNode* front;
//    int current_size;
//}LinkedQueue;
//
//LinkedQueue* create_queue(){
//    LinkedQueue* q = (LinkedQueue *)malloc(sizeof(LinkedQueue));
//    if(q!=NULL){
//        q->current_size = 0;
//        return q;
//    }
//    else
//        exit(-1);
//}
//
//bool is_empty(LinkedQueue* q){
//    if(q!=NULL){
//        return q->current_size == 0;
//    }
//    else
//        exit(-1);
//}
//
//void enqueue(LinkedQueue* q, int val){
//    if(q != NULL){
//        LinkedNode* newNode = (LinkedNode *)malloc(sizeof(LinkedNode));
//        newNode->element = val;
//        newNode->link = NULL;
//
//        if(is_empty(q)){
//            q->front = newNode;
//            q->rear = newNode;
//        }
//        else{
//            q->rear->link = newNode;
//            q->rear = newNode;
//        }
//        q->current_size++;
//    }
//    else
//        exit(-1);
//}
//
//int dequeue(LinkedQueue* q){
//    if(q != NULL && !is_empty(q)){
//        int return_data = q->front->element;
//        LinkedNode* del_node = q->front;
//        q->front = q->front->link;
//        free(del_node);
//        q->current_size--;
//
//        return return_data;
//    }
//    else
//        exit(-1);
//}
//
//int peek(LinkedQueue* q){
//    if (q != NULL && !is_empty(q)) {
//        return q->front->element;
//    } else
//        exit(-1);
//}
//
//void show_state(LinkedQueue* queue) {
//    if(queue != NULL) {
//        printf("Show State-------------------------\n");
//        LinkedNode* cursor = queue -> front;
//        for(int i = 0; i < queue -> current_size; i++) {
//            printf("[%d] : %d",i, cursor -> element);
//            if(i == 0 && queue -> current_size == 1)
//                printf("  <-- front & rear\n");
//            else if(i == 0)
//                printf("  <-- front\n");
//            else if(i == queue -> current_size - 1)
//                printf("  <-- rear\n");
//            else
//                printf("\n");
//            cursor = cursor -> link;
//        }
//        printf("-----------------------------------\n");
//    }
//    else
//        exit(-1);
//}
//
//int main(void) {
//
//    LinkedQueue* queue = create_queue();
//
//    printf("Enque 30\n");
//
//    enqueue(queue, 30);
//    show_state(queue);
//
//    printf("Enque 20\n");
//
//    enqueue(queue, 20);
//    show_state(queue);
//
//    printf("Enque 10\n");
//
//    enqueue(queue, 10);
//    show_state(queue);
//
//    printf("Deque Data : %d\n",dequeue(queue));
//    show_state(queue);
//
//    printf("Enque 50\n");
//    enqueue(queue, 50);
//    show_state(queue);
//
//    printf("Deque Data : %d\n",dequeue(queue));
//    show_state(queue);
//    printf("Deque Data : %d\n",dequeue(queue));
//    show_state(queue);
//    printf("Deque Data : %d\n",dequeue(queue));
//    show_state(queue);
//
//    free(queue);
//
//    return 0;
//}