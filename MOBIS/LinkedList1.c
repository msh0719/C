//#include <stdio.h>
//#include <mm_malloc.h>
//
//typedef struct _node{
//    int key;
//    struct _node *next;
//} node;
//
//node *head, *tail;
//
//void init_list(void){
//    head = (node*)malloc(sizeof(node));    // head 메모리 할당
//    tail = (node*)malloc(sizeof(node));    // tail 메모리 할당
//    head->next = tail;                    // head의 다음은 tail
//    tail->next = tail;                    // tail의 다음은 tail
//}
//
//node *insert_after(int k, node* t){
//    // t 노드 뒤에 s노드 삽입하기
//    node *s;
//    s = (node*)malloc(sizeof(node));
//    s->key = k;
//    s->next = t->next;
//    t->next = s;
//
//    return s;
//}
//
//node *insert_node(int t, int k){
//    // key == k 앞에 key ==  t를 삽입
//
//    node *s;    // 키 검색을 따라가는 포인터
//    node *p;    // s의 앞 노드를 가리키는 포인터
//    node *r;    // 삽입하는 노드를 만들기 위한 포인터
//
//    p = head;
//    s = p->next;
//
//    while (s->key != k && s != tail){
//
//        p = p->next;
//        s = p->next;
//    }
//
//    if (s != tail){
//
//        r = (node*)malloc(sizeof(node));
//        r->key = t;
//        p->next = r;
//        r->next = s;
//    }
//    return p->next;
//}
//
//node *ordered_insert(int k){
//    //순서대로 정렬되게 해서 노드 삽입하기
//    node *s;
//    node *p;
//    node *r;
//    p = head;
//    s = p->next;
//
//    while (s->key <= k && s != tail){
//        p = p->next;
//        s = p->next;
//    }
//
//    r = (node*)malloc(sizeof(node));
//    r->key = k;
//    p->next = r;
//    r->next = s;
//
//    return r;
//}
//
//int delete_next(node *t){
//
//    node *s;
//    if (t->next == tail)
//        return 0;
//    s = t->next;
//    t->next = t->next->next;
//    free(s);
//
//    return 1;
//}
//
//int delete_node(int k){
//
//    node *s;        // 검색할 노드
//    node *p;        // s가 가리키는 노드의 앞노드
//    p = head;
//    s = p->next;
//
//    while (s->key != k && s != tail){
//        p = p->next;
//        s = p->next;
//    }
//
//    if (s != tail){
//
//        p->next = s->next;
//        free(s);
//        return 1;
//    }
//    else{
//        return 0;
//    }
//}
//
//node *delete_all(void){
//
//    node *s;
//    node *t;
//    t = head->next;
//    while (t != tail){
//        s = t;
//        t = t->next;
//        free(s);
//    }
//    head->next = tail;
//    return head;
//}
//
//node *find_node(int k){
//
//    node *s;
//    s = head->next;
//    while (s->key != k && s != tail){
//        s = s->next;
//    }
//    return s;
//}
//
//void print_list(node* t){
//
//    printf("\n");
//    while (t != tail){
//        printf("%-8d", t->key);
//        t = t->next;
//    }
//}
//
//int main(void){
//
//    node* t;
//
//    init_list();
//    ordered_insert(10);
//    ordered_insert(5);
//    ordered_insert(8);
//    ordered_insert(3);
//    ordered_insert(1);
//    ordered_insert(7);
//    ordered_insert(8);
//
//    printf("\nInitial Linked list is ");
//    print_list(head->next);
//
//    printf("\nFinding 4 is %ssuccessful", find_node(4) == tail ? "un" : "");
//
//    t = find_node(5);
//    printf("\nFinding 5 is %ssuccessful", t == tail ? "un" : "");
//
//    printf("\nInserting 9 after 5");
//    insert_after(9, t);
//
//    print_list(head->next);
//
//    t = find_node(10);
//    printf("\nDeleting next last node");
//    delete_next(t);
//    print_list(head->next);
//
//    t = find_node(3);
//    printf("\nDeleting next 3");
//    delete_next(t);
//    print_list(head->next);
//
//    printf("\nInsert node 2 before 3");
//    insert_node(2, 3);
//    print_list(head->next);
//
//    printf("\nDeleting node 2");
//    if (!delete_node(2))
//        printf("\n deleting 2 is unsuccessful");
//    print_list(head->next);
//
//    printf("\nDeleting node 1");
//    delete_node(1);
//    print_list(head->next);
//
//    printf("\nDeleting all node");
//    delete_all();
//    print_list(head->next);
//
//    return 0;
//}
