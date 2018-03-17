//#include <stdio.h>
//void dealA(int *);
//void dealAv(int, int *);
//
//
////int main(void){
////    int a = 2;
////    printf("%d", a);
////    return 0;
////}
//int main(void){
//    //1-3
//    /*
//    int ref[] = {1, 2, 3, 4};
//    int *ptr;
//    int i;
//    printf("%p\n", ref);
//    printf("%p\n", ref+1);
//    //++ref不合法，ref是常量不是变量
//    for(i = 0, ptr=ref; i < 4; i++, ptr++){
//        printf("%d, %d\n", ref[i], *ptr);
//    }
//    */
//
//    //4
//    /*
//    int *ptr;
//    //二维数组可以像一纬数组一样定义，按顺序分配
////    int torf[2][2] = {12, 14, 16};
//    int torf[2][2] = {{12}, {14, 16}};
//    ptr = torf[0];
//    printf("%d\n", *ptr);
//    printf("%d\n", *(ptr+2));
//     */
//
//    /*
//    //5
//    //定义二维数组
//    int (* ptr)[2];
////    int trof[2][2] = {12, 14, 16};
//    int trof[2][2] = {{12}, {14, 16}};
//    ptr = trof;
//    printf("%d\n", **ptr);
//    printf("%d\n", **(ptr+1));
//     */
//    /*
//    //7
//    char test[5] = {'a', 'b', 'c', 'd', 'e'};
//    //test是一个指向数组第一个元素的指针
//    char * ptr;
//    //由5个指向char数组的指针组成的数组
//    char (*ptr2)[5];
//    char * ptr3[5];
//    char a = 'a';
//    ptr = test;
//    ptr2 = &test;
//    ptr3[0] = &a;
//    printf("%p\n", test);
//    printf("%c\n", *ptr);
//    printf("%p\n", ptr2);
//    printf("%p\n", ptr3);
//     */
//
//
//    /*
//    //8
//    int arr[6] = {1, 2, 4, 6, 8};
//    printf("%d\n", arr[2]);
//    //数组初始化部分值
//    int arr2[100] = {[99] = -1};
//    printf("%d\n", arr2[99]);
//     */
//
//
//
//    /*
//    //12 变长数组
//    int j = 3;
//    int a[j];
//    int index;
//    for(index = 0; index < j; index++){
//        a[index] = index;
//    }
//    dealAv(j, a);
//     */
//
//    //文字常量
//    /*
//    int *ptr;
//    ptr = (int[2]) {1, 2};
//    printf("%d\n", ptr[0]);
//     */
//    return 0;
//}
//
//
//void dealAv(int a, int arr[a]){
//    int i;
//    for(i = 0; i < a; i++){
//        printf("%d\n", arr[i]);
//    }
//}
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
