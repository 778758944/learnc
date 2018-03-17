//
//  p10-6.c
//  learnc
//
//  Created by xiaobo on 2017/11/23.
//  Copyright © 2017年 xiaobo. All rights reserved.
//
/*
#include <stdio.h>
void copy_arr(double target[], double source[], int size);
void copy_ptr(double *target, double *source, int size);

int main(void){
    double t[2][3] = {
        {1.1, 1.2, 1.3},
        {2.1, 2.2, 2.3}
    };
    
    double seven[7] = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0};
    double three[3];
    int i;
    
    double target[2][3];
    for(i = 0; i < 2; i++){
        copy_arr(target[i], t[i], 3);
    }
    
    copy_ptr(three, seven+2, 3);
    
    printf("done!\n");
    return 0;
}

void copy_arr(double target[], double source[], int size){
    int i;
    for(i = 0; i < size; i++){
        target[i] = source[i];
    }
}

void copy_ptr(double * target, double * source, int size){
    int i;
    for(i = 0; i < size; i++){
        *(target+i) = *(source+i);
    }
}
*/




