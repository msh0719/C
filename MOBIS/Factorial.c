//#include<stdio.h>
//
//#define BASE 10;
//
//int main() {
//    int arr[1000];
//    arr[0] = 1;
//    int N = 1;
//    int carry = 0;
//    int tmp;
//
//    for (int i = 1; i <= 100; i++) {
//        for (int j = 0; j < N; j++) {
//            tmp = carry + arr[j] * i;
//            arr[j] = tmp % BASE;
//            carry = tmp / BASE;
//        }
//        while (carry) {
//            arr[N] = carry % BASE;
//            carry = carry / BASE;
//            N++;
//        }
//    }
//
//    for (int i = N - 1; i >= 0; i--)
//        printf("%d", arr[i]);
//    return 0;
//}