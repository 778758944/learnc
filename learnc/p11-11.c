//
//  p11-11.c
//  learnc
//
//  Created by xiaobo on 2017/12/5.
//  Copyright © 2017年 xiaobo. All rights reserved.
//
/*
#include <stdio.h>
#include <ctype.h>
int main(void){
    char str[100];
    int word_num = 0;
    int caps_num = 0;
    int no_caps_num = 0;
    int biao_num = 0;
    int num_num = 0;
    puts("enter a char");
    gets(str);
    char * ptr = str;
    while(*ptr){
        if(*ptr == ' '){
            word_num++;
        } else if(isdigit(*ptr)){
            num_num++;
        } else if(ispunct(*ptr)){
            biao_num++;
        } else if(islower(*ptr)){
            caps_num++;
        } else {
            no_caps_num++;
        }
        ptr++;
    }
    
    printf("blank is %d, num is %d, biao is %d, caps is %d, nocaps is %d\n", word_num, num_num, biao_num, caps_num, no_caps_num);
}
 */
