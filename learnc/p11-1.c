//
//  p11-1.c
//  learnc
//
//  Created by xiaobo on 2017/11/29.
//  Copyright © 2017年 xiaobo. All rights reserved.
//
/*
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#define MAX 100
void getInput(char * str, int n);
void getFirstWord(char * str);
char * searchChar(char * str, char c);
bool is_within(char c, char * str);
char * copy_str(char * str1, char * str2, int n);
char * string_in(char * str1, char * str2);
void reverse(char * str);
void deleteBlank(char * str);

int main(void){
    char str[MAX] = "APPLE is eat";
//    char str2[MAX] = "LE";
//    char str3[3];
    
    
//    getInput(str, 5);
//    putchar(str[4]);
//    putchar(str[0]);
//    putchar('\n');
//
//    getFirstWord(str2);
//    puts(str2);
    
//    char * p = searchChar(str3, 'B');
    
//    bool a = is_within('B', str);
//    printf("%d\n", a);
//    char * ptr = copy_str(str2, str, 10);
//    char * ptr2 = strncpy(str3, str, 10);
//    puts(ptr);
//    puts(ptr2);
//    char * ptr = string_in(str, str2);
//    puts(ptr);
    
//    reverse(str);
//    puts(str);
    deleteBlank(str);
    puts(str);
    
    
    
    return 0;
}

void getInput(char * str, int n){
    int i = 0;
    printf("please enter %d char\n", n);
    while(++i <= n){
//        scanf("%c", str++);
        char c;
        c = getchar();
        if(c !=' ' && c != '\t' && c != '\n'){
            *str++ = c;
        } else {
            break;
        }
    }
}

void getFirstWord(char * str){
    char temp[MAX];
    char * ptr;
    puts("enter a line please");
    gets(temp);
    ptr = temp;
    while(*ptr) {
        if(*ptr != ' ' && *ptr != '\t' && *ptr != '\n'){
            *str++ = *ptr;
            ptr++;
        } else {
            break;
        }
    }
}

char * searchChar(char * str, char c){
    while(*str){
        if (*str == c){
            return str;
        }
        str++;
    }
    return NULL;
}

bool is_within(char c, char * str){
    while(*str){
        if(*str == c){
            return true;
        }
        str++;
    }
    return false;
};

char * copy_str(char * str1, char * str2, int n){
    int i = 0;
    while(++i <= n){
        str1[i-1] = str2[i-1];
    }
    str1[i] = '\0';
    return str1;
}

char * string_in(char * str1, char * str2){
    char * ptr1;
    char * ptr2;
    while(*str1){
        ptr1 = str1;
        ptr2 = str2;
        while(*ptr2){
            if(*ptr2 == *ptr1){
                ptr1++;
                ptr2++;
            } else {
                break;
            }
        }
        if(!*ptr2){
            return str1;
        }
        str1++;
    }
    return NULL;
}

void reverse(char * str) {
    char ptr[MAX];
    int i = 0;
    int j;
    while(*str){
        ptr[i] = *str;
        str++;
        i++;
    }
    
    for(j = 0; j < i; j++){
        *(--str) = ptr[j];
    }
    
}

void deleteBlank(char * str){
    char temp[MAX];
    int i = 0;
    char * ptr = str;
    while(*ptr){
        if(*ptr != ' '){
            temp[i] = *ptr;
            i++;
        }
        ptr++;
    }
    temp[i] = '\0';
    strcpy(str, temp);
}
 */























