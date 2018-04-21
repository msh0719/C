////
//// Created by 명수현 on 2018. 4. 19..
////
//
//#include <stdio.h>
//#include <stdbool.h>
//
//#define MAX 8
//
//int output[MAX];
//bool visit[MAX];
//
//void DFS(int start, int depth, int M, int N){
//
//    if(depth == M-1){
//        for(int i=0; i<M; i++){
//            printf("%d ", output[i]);
//        }
//        printf("\n");
//        return;
//    }
//    for(int i=0; i<N; i++){
//        if(visit[i])
//            continue;
//        visit[i] = true;
//        output[depth+1] = i+1;
//        DFS(i, depth+1, M, N);
//        visit[i] = false;
//    }
//
//}
//
//int main(){
//
//    int N, M;
//
//    scanf("%d %d", &N, &M);
//    for(int i=0; i<N; i++){
//        visit[i] = true;
//        output[0] = i+1;
//        DFS(i, 0, M, N);
//        visit[i] = false;
//    }
//
//    return 0;
//}