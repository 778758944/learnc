//
//  r11-10.c
//  learnc
//
//  Created by xiaobo on 2017/11/28.
//  Copyright © 2017年 xiaobo. All rights reserved.
//
/*
#include "r11-10.h"
int main(void){
    char str[] = "abcdef";
    char *ptr;
    ptr = findSpace(str);
    puts(ptr);
    return 0;
}

char * findSpace(char * str){
    while(*str != '\0'){
        if(*str == ' '){
            break;
        }
        str++;
    }
    if(*str == '\0'){
        return NULL;
    } else {
        return str;
    }
};

char * strblk(char * str){
    while(*str != ' ' && *str != '\0'){
        str++;
    }
    
    if(*str == '\0'){
        return NULL;
    } else {
        return str;
    }
};
 */
