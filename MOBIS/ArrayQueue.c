//#include <stdio.h>
//#include <mm_malloc.h>
//
//
//struct ArrayQueue{
//    int front, rear;
//    int capacity;
//    int *array;
//};
//
//struct ArrayQueue *Queue(int size){
//    struct ArrayQueue *q = malloc(sizeof(struct ArrayQueue));
//    if(!q) return NULL;
//    q->capacity = size;
//    q->front = q->rear = -1;
//    q->array = malloc(q->capacity *sizeof(int));
//
//    return q;
//}
//
//int isEmptyQueue(struct ArrayQueue *q){
//    //조건이 참이면 1을, 그렇지 않으면 0 반환
//    return (q->front == -1);
//}
//
//int isFullQueue(struct ArrayQueue *q){
//    return ((q->rear+1) % q->capacity == q->front);
//}
//
//int QueueSize(struct ArrayQueue *q){
//    return (q->capacity - q->front + q->rear + 1) % q->capacity;
//}
//
//void EnQueue(struct ArrayQueue *q, int data){
//    if(isFullQueue(q))
//        printf("Queue Overflow ");
//    else{
//        q->rear = (q->rear +1) % q->capacity;
//        q->array[q->rear] = data;
//        if(q->front == -1)
//            q->front = q->rear;
//    }
//}
//
//int DeQueue(struct ArrayQueue *q){
//    int data = 0;
//    if(isEmptyQueue(q)){
//        printf("Queue is Empty");
//        return 0;
//    }
//    else{
//        data = q->array[q->front];
//        if(q->front == q->rear)
//            q->front = q->rear = -1;
//        else
//            q->front = (q->front+1) % q->capacity;
//    }
//    return data;
//}
//
//void DeleteQueue(struct ArrayQueue *q){
//    if(q){
//        if(q->array)
//            free(q->array);
//        free(q);
//    }
//}
//
//void print(struct ArrayQueue *q){
//    for(int i=q->front; i != q->rear+1; i = (i+1)%q->capacity)
//        printf("%d ", q->array[i]);
//}
//
////큐를 역순으로 만드는 알고리즘
//// --> 스택을 이용해서 빼서 넣고 다시 큐에 넣어서 출력!
//void ReverseQueue(struct ArrayQueue *q){
//
//}
//
//int main(){
//
//    struct ArrayQueue *q = Queue(3);
//
//    EnQueue(q, 3);
//    EnQueue(q, 4);
//    EnQueue(q, 5);
//    print(q);
//
//    return 0;
//}