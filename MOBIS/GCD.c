////
//// Created by 명수현 on 2018. 4. 20..
////
//
//
//#include <stdio.h>
//
//
//// 재귀 호출을 이용하는 방법
//int gcd_recursion(int u, int v){
//    if (v == 0){
//        return u;
//    }
//    else{
//        return gcd_recursion(v, u%v);
//    }
//}
//
//int main(){
//
//    int a = 0, b = 0;
//    int result;
//
//    printf("Input : ");
//    scanf("%d %d", &a, &b);
//
//    result = gcd_recursion(a, b);
//    printf("result = %d ", result);
//
//    return 0;
//}