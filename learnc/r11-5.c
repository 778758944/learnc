//
//  r11-5.c
//  learnc
//
//  Created by xiaobo on 2017/11/27.
//  Copyright © 2017年 xiaobo. All rights reserved.
//

/*

#include <stdio.h>
char * pr(char * str);
int main(void){
    char * str = "";
    char * res;
    res = pr(str);
    return 0;
}

char * pr(char *str){
    char *pc;
    pc = str;
    while(*pc)
        putchar(*pc++);
    do{
//        putchar(--(*pc));
        putchar(*--pc);
    } while(pc-str);
    
    return 0;
}
 */
