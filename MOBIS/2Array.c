////
//// Created by 명수현 on 2018. 4. 20..
////
//
//
//#include <stdio.h>
//#include <mm_malloc.h>
//
//int main(){
//
//    int height = 6, width = 8;
//    int **arr;
//    arr = (int **) malloc ( sizeof(int*) * height );
//    for(int i=0; i<height; i++){
//        arr[i] = (int*) malloc ( sizeof(int) * width );
//    }
//
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//    int H = 6, W = 8;
//    int **arr;
//    arr = (int **)malloc(sizeof(int *) * H);
//    for(int i=0; i<H; i++){
//        arr[i] = (int *)malloc(sizeof(int *) * W);
//    }
//}