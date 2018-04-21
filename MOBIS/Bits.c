////#include<stdio.h>
////
////int add(int a, int b) {
////    int sum, carry, tmpCarry;
////    do {
////        sum = (~a & b) | (a & ~b);
////        carry = a & b;
////        tmpCarry = carry << 1;
////        a = tmpCarry;
////        b = sum;
////    } while (tmpCarry);
////    return sum;
////}
////
////int sub(int a, int b) {
////    b = add(~b, 1);
////    return add(a, b);
////}
////
////int mul(int a, int b) {
////    int num = 0;
////    int bFlag;
////    if (b < 0) {
////        bFlag = 1;
////        b = add(~b, 1);
////    }
////    while (b) {
////        num = add(num, a);
////        b = sub(b, 1);
////    }
////    if (bFlag == 1)
////        return -num;
////    else
////        return num;
////}
////
////int divide(int a, int b) {
////    int num = 0;
////    int aflag = 0;
////    int bflag = 0;
////    if (a < 0) {
////        aflag = 1;
////        a = add(~a, 1);
////    }
////    if (b < 0) {
////        bflag = 1;
////        b = add(~b, 1);
////    }
////    while (a) {
////        if (a < b)
////            break;
////        a = sub(a, b);
////        num++;
////    }
////    if (aflag == 0 && bflag == 0)
////        return num;
////    else if (aflag == 1 && bflag == 1)
////        return num;
////    else
////        return -num;
////}
////
////int swap(int *a, int *b) {
////    *a = (~*a & *b) | (*a & ~*b);
////    *b = (~*a & *b) | (*a & ~*b);
////    *a = (~*a & *b) | (*a & ~*b);
////}
////

////int main() {
////    int a = 15;
////    int b = -4;
////    printf("%d + %d = %d\n", a, b, add2(a, b));
////    printf("%d - %d = %d\n", a, b, sub2(a, b));
////    printf("%d * %d = %d\n", a, b, mul(a, b));
////    printf("%d / %d = %d\n", a, b, divide(a, b));
////    printf("%d swap %d = ", a, b);
////    swap(&a, &b);
////    printf("%d, %d", a, b);
////    return 0;
////}
//
//
//#include<stdio.h>
//
//int XOR(int a, int b) {
//    int xor = (~a & b) | (a & ~b);
//    return xor;
//}
//
//int add(int a, int b) {
//    int sum, carry;
//    do {
//        sum = XOR(a, b);
//        carry = (a & b) << 1;
//        a = sum;
//        b = carry;
//    } while (carry);
//    return sum;
//}
//
//int sub(int a, int b) {
//    b = add(~b, 1);
//    return add(a, b);
//}
//
//int swap(int *a, int *b) {
//    *a = XOR(*a, *b);
//    *b = XOR(*a, *b);
//    *a = XOR(*a, *b);
//}
//
//int multi(int a, int b) {
//    int mul = 0;
//    while (b) {
//        mul = add(mul, a);
//        b = sub(b, 1);
//    }
//    return mul;
//}
//
//int main() {
//    int a = 15;
//    int b = -4;
//    printf("%d + %d = %d\n", a, b, add(a, b));
//    printf("%d - %d = %d\n", a, b, sub(a, b));
//    printf("%d * %d = %d\n", a, b, multi(a, b));
////    printf("%d / %d = %d\n", a, b, divide(a, b));
//    printf("%d swap %d = ", a, b);
//    swap(&a, &b);
//    printf("%d, %d", a, b);
//    return 0;
//}