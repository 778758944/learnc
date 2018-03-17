//
//  p10-3.c
//  learnc
//
//  Created by xiaobo on 2017/11/22.
//  Copyright © 2017年 xiaobo. All rights reserved.
//
/*
#include <stdio.h>
int getMaxInArr(int *, int size);
int getMaxIndex(double *, int);
double getDiff(double *, int);

int main(void){
    int arr[3] = {1, 2, 3};
    double arr2[3] = {1.0, 2.0, 5.55};
    int a = getMaxInArr(arr, 3);
    int b = getMaxIndex(arr2, 3);
    double c = getDiff(arr2, 3);
    printf("%d\n", a);
    printf("max index is %d\n", b);
    printf("diff is %.2f\n", c);
    return 0;
}

int getMaxInArr(int * arr, int size){
    int max = arr[0];
    int i;
    for(i = 1; i < size; i++){
        if(arr[i] > max)
            max = arr[i];
    }
    
    return max;
}

int getMaxIndex(double * arr, int size){
    int i;
    int max_index = 0;
    double max = arr[0];
    for(i = 1; i < size; i++){
        if(arr[i] > max){
            max_index = i;
            max = arr[1];
        }
    }
    return max_index;
}

double getDiff(double * arr, int size){
    int i;
    double min = arr[0];
    double max = arr[0];
    for(i = 1; i < size; i++){
        double temp = arr[i];
        if(temp < min){
            min = temp;
        }
        
        if(temp > max){
            max = temp;
        }
    }
    
    return max-min;
}
*/












