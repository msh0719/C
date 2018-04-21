////
//// Created by 명수현 on 2018. 4. 20..
////
//
//
//#include <stdio.h>
//
//int cus_strcmp(char *ptr1, char *ptr2){
//    int i = 0, j = 0;
//
//    while(ptr1 != '\0'){
//        if(ptr1[i++]!=ptr2[j++]){
//            break;
//        }
//    }
//    return (ptr1-ptr2);
//}
//
//int cus_strcpy(char *ptr1, char *ptr2){
//    int i;
//    for(i=0; ptr2[i]!='\0'; ++i){
//        ptr1[i]=ptr2[i];
//    }
//    return 0;
//}
//
//int main(){
//    int *ptr1, *ptr2;
//    char arr1[100]={0,};
//    char arr2[100]={0,};
//    scanf("%s", arr2);
//
//    ptr1=&arr1;
//    ptr2=&arr2;
//
//    cus_strcpy(ptr1, ptr2);
//    printf("%s\n", ptr1);
//
//
//    return 0;
//}
