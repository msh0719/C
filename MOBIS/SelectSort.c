////
//// Created by 명수현 on 2018. 4. 19..
////
//
//#include <stdio.h>
//
//// 선택 정렬
//// 시간 복잡도 O(N^2)
//void select_sort(int *a, int n){
//    int min;
//    int minindex;
//    int i, j;
//
//    for (i = 0; i < n - 1; i++){
//        minindex = i;
//        min = a[i];
//        for (j = i + 1; j < n; j++){
//            if (min > a[j]){
//                min = a[j];
//                minindex = j;
//            }
//        }
//        a[minindex] = a[i];
//        a[i] = min;
//    }
//}
//
//int main(){
//    int arr[5] = {3, 1, 2, 4, 5};
//
//    select_sort(arr, 5);
//
//    for(int i=0; i<5; i++)
//        printf("%d ", arr[i]);
//
//
//    return 0;
//}