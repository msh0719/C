//#include<stdio.h>
//#include<limits.h>
//
//#define BASE 10;
//
//int main() {
//    int a = INT_MAX;
//    int b = INT_MAX;
//
//    int a_len = 0, b_len = 0;
//    int x[200] = {0,};
//    int y[200] = {0,};
//    int arr[200] = {0,};
//    int tmp, carry, N;
//    while (a) {
//        x[a_len++] = a % BASE;
//        a /= BASE;
//    }
//
//    while (b) {
//        y[b_len++] = b % BASE;
//        b /= BASE;
//    }
//
//    for (int i = 0; i < a_len; i++) {
//        for (int j = 0; j < b_len; j++) {
//            N = i + j;
//            tmp = arr[N] + x[i] * y[i];
//            arr[N] = tmp % BASE;
//            carry = tmp / BASE;
//
//            while (carry) {
//                N++;
//                arr[N] += carry % BASE;
//                carry /= BASE;
//            }
//        }
//
//    }
//    printf("%d\n", INT_MAX);
//    for (int i = N; i >= 0; i--)
//             printf("%d", arr[i]);
//}