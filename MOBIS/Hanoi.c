////
//// Created by 명수현 on 2018. 4. 20..
////
//
//#include <stdio.h>
//
////원반을 from에서 to로 옮긴다.
//void move(int from, int to){
//    printf("\nMove from %d to %d", from, to);
//}
//
////n개의 원반을 from에서 by를 거쳐 to로 옮긴다,.
//void hanoi(int n, int from, int by, int to){
//    if(n==1)
//        move(from, to);
//    else{
//        hanoi(n-1, from, to ,by); //1번 N-1개의 원반을 기둥3을 거쳐 2로 옮긴다.
//        move(from, to); // 2번 기둥 1에서 1개의 원반을 기둥 3으로 옮긴다.
//        hanoi(n-1, by, from, to); //3번 기둥 2에서 N-1개의 원반을 기둥 3으로 옮긴다.
//    }
//}
//
//int main(void){
//    int i=5;
//    hanoi(i, 1, 2, 3);
//
//}