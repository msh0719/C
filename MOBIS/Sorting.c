//#include<stdio.h>
//
//void swap(int *a, int *b) {
//    int tmp;
//    tmp = *a;
//    *a = *b;
//    *b = tmp;
//}
//
//void bubbleSort(int arr[], int length) {
//    for (int i = 0; i < length - 1; i++) {
//        for (int j = 0; j < length - 1 - i; j++) {
//            if (arr[j] > arr[j + 1])
//                swap(&arr[j], &arr[j + 1]);
//        }
//    }
//}
//
//void selectionSort(int arr[], int length) {
//    for (int i = 0; i < length; i++) {
//        for (int j = i + 1; j < length; j++) {
//            if (arr[i] > arr[j])
//                swap(&arr[i], &arr[j]);
//        }
//    }
//}
//
//void insertionSort(int arr[], int length) {
//    int tmp;
//    for (int i = 1; i < length; i++) {
//        tmp = arr[i];
//        for (int j = i; j > 0; j--) {
//            if (tmp < arr[j - 1]) {
//                arr[j] = arr[j - 1];
//                if (j == 1) {
//                    arr[j - 1] = tmp;
//                    break;
//                }
//            } else {
//                arr[j] = tmp;
//                break;
//            }
//        }
//    }
//}
//
//void quickSort(int arr[], int start, int end) {
//    if (start >= end) return;
//    int mid = (start + end) / 2;
//    int pivot = arr[mid];
//
//    swap(&arr[start], &arr[mid]);
//
//    int left = start + 1;
//    int right = end;
//    while (1) {
//        while (arr[left] <= pivot) { left++; }
//        while (arr[right] > pivot) { right--; }
//        if (left > right)
//            break;
//        swap(&arr[left], &arr[right]);
//    }
//    swap(&arr[start], &arr[right]);
//    quickSort(arr, start, right - 1);
//    quickSort(arr, right + 1, end);
//}
//
//
//void merge(int arr[], int start, int mid, int end) {
//    int i = start;
//    int j = mid + 1;
//    int k = start;
//    int m, n;
//    int tmp[10];
//
//    while (i <= mid && j <= end) {
//        tmp[k++] = (arr[i] > arr[j]) ? arr[j++] : arr[i++];
//    }
//    m = (i > mid) ? j : i;
//    n = (i > mid) ? end : mid;
//    for (; m <= n; m++)
//        tmp[k++] = arr[m];
//    for (m = start; m <= end; m++)
//        arr[m] = tmp[m];
//}
//
//void mergeSort(int arr[], int start, int end) { // Array를 두개의 덩어리로 나눔
//    int mid = (start + end) / 2; // 중간값 설정
//    if (start < end) { // 덩어리의 원소가 하나일 때까지
//        mergeSort(arr, start, mid);
//        mergeSort(arr, mid + 1, end); // 각각의 덩어리로 재귀함수 호출
//        merge(arr, start, mid, end); // 각각의 덩어리를 뭉치면서 정렬
//    }
//}
//
//
////heap
//#define MAX 50
//typedef struct heap {
//    int a[MAX];
//    int size;
//} heap;
//
//void init(heap *h) {
//    int i;
//    for (i = 0; i < MAX; i++) {
//        h->a[i] = 0;
//    }
//    h->size = 0;
//}
//
//void insert(heap *h, int n) {
//    int i;
//    i = ++(h->size);
//    while (i != 1 && n < h->a[i / 2]) {
//        h->a[i] = h->a[i / 2];
//        i /= 2;
//    }
//    h->a[i] = n;
//}
//
//int del(heap *h) {
//    int p, c, item, v;
//    v = h->a[(h->size)--];
//    item = h->a[1];
//    p = 1;
//    c = 2;
//    while (c <= h->size) {
//        if (c < h->size && h->a[c] > h->a[c + 1]) {
//            c++;
//        }
//        if (v < h->a[c])break;
//        h->a[p] = h->a[c];
//        p = c;
//        c *= 2;
//    }
//    h->a[p] = v;
//    return item;
//}
//
//void heapSort(int *a, int size) {
//    int i;
//    heap h;
//    init(&h);
//    for (i = 0; i < size; i++) {
//        insert(&h, a[i]);
//    }
//    for (i = 0; i < size; i++) {
//        a[i] = del(&h);
//    }
//}
//
//int main() {
//    int arr[] = {78, 52, 13, 6, 87, 23, 41, 34, 91, 68};
//    int length = 10;
//    //bubbleSort(arr, length);
//    //selectionSort(arr, length);
//    //insertionSort(arr, length);
//    //quickSort(arr, 0, 9);
//    //heapSort(arr, 10);
//    mergeSort(arr, 0, 9);
//    for (int i = 0; i < length; i++) {
//        printf("%d ", arr[i]);
//    }
//}