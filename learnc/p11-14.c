//
//  p11-14.c
//  learnc
//
//  Created by xiaobo on 2017/12/6.
//  Copyright © 2017年 xiaobo. All rights reserved.
//
/*
#include <stdio.h>
#include <ctype.h>
#include <math.h>
int str2num(char * str, int n);

int main(void){
    char str[100];
    int res;
    puts("enter number");
    gets(str);
    res = str2num(str, 100);
    printf("%d\n", res);
    return 0;
}

int str2num(char * str, int n){
    char arr[n];
    int i = 0;
    int j;
    int num = 0;
    while(*str) {
        if (isdigit(*str)) {
            arr[i] = *str;
            i++;
            str++;
        } else {
            break;
        }
    }
    for(j = 0; j < i; j++){
        int a = (arr[j] - '0');
        num += (int) (a * pow(10, i-j-1));
    }
    
    return num;
}
 */


