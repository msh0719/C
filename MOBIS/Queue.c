////
//// Created by 명수현 on 2018. 4. 18..
////
//
//#include <stdio.h>
//
//#define MAX 10
//
//int queue[MAX];
//int front, rear;
//
//void init_queue(void){
//    front = rear = 0;
//}
//
//void clear_queue(void){
//    front = rear;
//}
//
//int put(int k){
//    // 큐가 꽉차있는지 확인
//    int temp = 0;
//    if ((rear + 1) % MAX == front){
//        printf("\n   Queue overflow.");
//        return -1;
//    }
//
//    queue[rear] = k;
//    temp = rear+1;
//    rear = temp % MAX;
//    return k;
//}
//
//int get(void){
//    int i;
//    int temp = 0;
//    if (front == rear){
//        printf("\n  Queue underflow.");
//        return -1;
//    }
//
//    i = queue[front];
//    temp = front+1;
//    front = temp % MAX;
//    return i;
//}
//
//void print_queue(void){
//    int i;
//    printf("\n Queue contents : Front ----------> Rear \n");
//    for (i = front; i != rear; i = (i+1) % MAX)
//        printf("%d ", queue[i]);
//}
//
//void size(){
//    int temp = 0;
//    temp = (MAX - front + rear) % MAX;
//
//    printf("\n SIZE = %d\n", temp);
//}
//
//int main(void){
//
//    int i;
//    init_queue();
//
//    printf("\nPut 5, 4, 7, 8, 2, 1");
//    put(5);
//    put(4);
//    put(7);
//    put(8);
//    put(2);
//    put(1);
//    print_queue();
//    size();
//
//
//    printf("\nGet");
//    i = get();
//    print_queue();
//    printf("\n  getting value is %d ", i);
//
//    printf("\nPut 3, 2, 5, 7");
//    put(3);
//    put(2);
//    put(5);
//    put(7);
//    print_queue();
//
//
//    printf("\nNow queue is full, put 3");
//    put(3);        // 오버플로우 에러    배열 크기는 10이지만 9개만 저장할 수 있다
//    print_queue();
//
//    printf("\nInitialize queue");
//    clear_queue();
//    print_queue();
//
//    printf("\nNow queue is empty, get");
//    i = get();
//    print_queue();
//    printf("\n getting value is %d", i);
//
//    return 0;
//}
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
////#define MAXSIZE 10
////
////int queue[MAXSIZE];
////int front, rear;
////
////void init_queue(void){
////    front = 0;
////    rear = 0;
////}
////
////void clear_queue(void){
////    front = rear;
////}
////
////int poll_queue(int val){
////    int temp;
////    if((rear+1) % MAXSIZE == front){
////        printf(" Queue overflow...");
////        return -1;
////    }
////
////    queue[rear] = val;
////    temp = rear + 1;
////    rear = temp % MAXSIZE;
////    return val;
////}
////
////int pop_queue(void){
////    int temp;
////    int i;
////
////    if(front == rear){
////        printf(" Queue Underflow...");
////        return -1;
////    }
////
////    i = queue[front];
////    temp = front+1;
////    front = temp % MAXSIZE;
////    return i;
////}
////
////int QueueSize(){
////
////}
////
////bool isEmptyQueue(){
////    if(front == rear)
////        return true;
////    else
////        return false;
////}
////
////void print(){
////    for(int i=0; i<MAXSIZE; i++)
////        print("%d ", queue[i]);
////
////    printf("\n");
////}
////
////int main(){
////    init_queue();
////    poll_queue(1);
////    poll_queue(2);
////    print();
////    pop_queue();
////    print();
////
////
////    return 0;
////}
