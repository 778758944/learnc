//
//  r11-8.c
//  learnc
//
//  Created by xiaobo on 2017/11/28.
//  Copyright © 2017年 xiaobo. All rights reserved.
//
/*
#include <stdio.h>
int main(void){
    char str1[] = "gawsie";
    char str2[] = "bletonism";
    char *ps;
    int i = 0;
    
    for(ps = str1; *ps != '\0'; ps++){
        if(*ps == 'a' || *ps == 'e')
            putchar(*ps);
        else
            *ps = (*ps)-1;
        
        putchar(*ps);
    }
    putchar('\n');
    
    while(str2[i] != '\0'){
        printf("%c", i % 3 ? str2[i] : '*');
        ++i;
    }
    putchar('\n');
    return 0;
}
 */
