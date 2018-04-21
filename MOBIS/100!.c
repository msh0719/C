////
//// Created by 명수현 on 2018. 4. 21..
////
//
//#include<stdio.h>
//
//#define T 10000
//
//int main() {
//
//    int arr[T] = {1,};
//    int i,j;
//    int temp=0;
//    int fac;
//
//    printf("Input = ");
//    scanf("%d", &fac);
//
//    for(i=1; i<=fac; i++) {
//        temp=0;
//        for(j=0; j<T; j++) {
//            arr[j]=arr[j]*i + temp;
//            temp=arr[j]/T;
//            arr[j]=arr[j]-T*temp;
//        }
//    }
//    i=T-1;
//    while(arr[i]==0)
//        i=i-1;
//
//    printf("%d!은 ", fac);
//    printf("%d", arr[i]);
//    i-=1;
//
//    while(i>-1){
//        printf("%d", arr[i]);
//        i-=1;
//    }
//
//    return 0;
//
//}