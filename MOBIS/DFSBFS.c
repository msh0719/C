//#include <stdio.h>
//#include <stdbool.h>
//
//#define MAXSIZE 10   // 큐의 크기
//
//int queue[MAXSIZE];
//int front, rear;
//
//void init_queue(void) {
//    front = rear = 0;
//}
//
//void clear_queue(void) {
//    front = rear;
//
//}
//
//int put(int val) {
//
//    if ((rear + 1) % MAXSIZE == front) {    // 큐가 꽉 찼는지 확인
//        printf("    Queue Overflow.");
//        return -1;
//    }
//
//    queue[rear] = val;                    // rear가 큐의 끝 다음의 빈공간이므로 바로 저장
//    rear = ++rear % MAXSIZE;             // rear를 다음 빈공간으로 변경
//    return val;
//}
//
//
//int get(void) {
//    int i;
//
//    if (front == rear) {                  // 큐가 비어 있는지 확인
//        printf("    Queue Underflow.");
//        return (-1);
//    }
//
//    i = queue[front];    // front의 값을 가져옴
//    front = ++front % MAXSIZE;   // front를 다음 데이터 요소로
//    return i;
//}
//
//bool isEmptyQueue() {
//    if (front == rear)
//        return true;
//    else
//        return false;
//}
//
//int n;
//int map[30][30], visit[30];
//
//void DFS(int num) {
//    visit[num] = 1;
//    for (int i = 1; i <= n; i++) {
//        if (map[num][i] && visit[i] == 0) {
//            printf("%d-->", i);
//            DFS(i);
//        }
//    }
//}
//
//void BFS(int num) {
//    put(num);
//    if (visit[num] == 0) {
//        printf("%d-->", num);
//        visit[num] = 1;
//    }
//    while (!isEmptyQueue()) {
//        int t = get();
//        for (int i = 1; i <= n; i++) {
//            if (map[t][i] == 1 && visit[i] == 0) {
//                put(i);
//                printf("%d-->", i);
//                visit[i] = 1;
//            }
//        }
//    }
//}
//
//////bfs 탐색
////void bfs(int d)
////{
////    //Queue에 삽입.
////    Put(d);
//////방문하지 않은 정점이라면 출력하고, Visited을 1로 표시
////    if (visited[d] == 0)
////    {
////        cout << d << " ";
////        visited[d] = 1;
////    }
////    while(!isEmpty())
////    {
//////Queue에 있는 한 정점을 Pop
////        int t = Pop();
////        for (int i = 0; i < size; i++)
////        {
//////정점이고, 방문하지 않았을 경우 Queue에 Push하고, Visited을 1로 표시
////            if (arr[t][i] == 1 && visited[i] == 0)
////            {
////                Put(i);
////                cout << i << " ";
////                visited[i] = 1;
////            }
////        }
////    }
////}
//int main() {
//    int start = 1;
//    n = 8;
//    for (int i = 0; i < 30; i++) {
//        visit[i] = 0;
//        for (int j = 0; j < 30; j++) {
//            map[i][j] = 0;
//        }
//    }
//    map[1][2] = map[2][1] = 1;
//    map[1][3] = map[3][1] = 1;
//    map[2][4] = map[4][2] = 1;
//    map[2][5] = map[5][2] = 1;
//    map[3][6] = map[6][3] = 1;
//    map[3][7] = map[7][3] = 1;
//    map[4][8] = map[8][4] = 1;
//    map[5][8] = map[8][5] = 1;
//    map[6][8] = map[8][6] = 1;
//    map[7][8] = map[8][7] = 1;
//
////    printf("깊이우선탐색 : ");
////    DFS(start);
//    printf("넓이우선탐색 : ");
//    BFS(start);
//    return 0;
//}
