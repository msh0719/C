////
//// Created by 명수현 on 2018. 4. 20..
////
//
//#include <stdio.h>
//
//#define MAX 5
//
//typedef struct queue{
//    int head;
//    int tail;
//    int arr[MAX];
//} Queue;
//
//int queue_full(Queue q){
//    if((q.head + 1) % MAX == q.tail)
//        return 1;
//    return 0;
//}
//
//int isEmpty(Queue q){
//    if(q.head == q.tail)
//        return 1;
//
//    return 0;
//}
//
//void enqueue(Queue *q, int data){
//    if(queue_full(*q)){
//        printf("Queue Overflow\n");
//        return;
//    }
//    q->head=(q->head + 1) % MAX;
//    q->arr[q->head] = data;
//}
//int dequeue(Queue *q){
//    int data;
//    if(isEmpty(*q)){
//        printf("queue underflow\n");
//        return -1;
//    }
//    q->tail = (q->tail + 1) % MAX;
//    data = q->arr[q->tail];
//
//    return data;
//}
//int main( void)
//{
//    Queue Q;
//
//    // initialize the front and rear.
//    Q.head  = 0;
//    Q.tail  = 0;
//
//    enqueue( &Q, 10);
//    enqueue( &Q, 20);
//    enqueue( &Q, 30);
//    enqueue( &Q, 40);
//    enqueue( &Q, 50);
//    dequeue( &Q);
//    dequeue( &Q);
//    dequeue( &Q);
//    enqueue( &Q, 50);
//    enqueue( &Q, 60);
//    enqueue( &Q, 70);
//    enqueue( &Q, 80);
//    dequeue( &Q);
//    dequeue( &Q);
//    dequeue( &Q);
//    dequeue( &Q);
//    dequeue( &Q);
//
//}