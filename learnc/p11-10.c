//
//  p11-10.c
//  learnc
//
//  Created by xiaobo on 2017/11/30.
//  Copyright © 2017年 xiaobo. All rights reserved.
//
/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define LEN 3
char renderOption(void);
void output(char str[][100], int n);
void outputWithAsc(char str[][100], int n);
int compare(const void *, const void *);
void outputWithLength(char str[][100], int n);
int compareWithLength(const void *, const void *);
void outputWithFirstWordLength(char str[][100], int n);
int compareWithFirsrWordLength(const void *, const void *);

int main(void){
    char str[LEN][100];
    int i = 0;
    while(i < LEN){
        puts("please enter a string");
        gets(str[i]);
        i++;
    }
    
    
    output(str, LEN);
    outputWithFirstWordLength(str, LEN);
    output(str, LEN);
    return 0;
}


char renderOption(void){
    char option;
    puts("please enter a option");
    puts("a) origin       b) as ASCII");
    puts("c) as length    d) as firsr word length");
    puts("q) quit");
    option = getchar();
    while(getchar() != '\n')
        continue;
    return option;
}

void output(char str[][100], int n){
    int i;
    for(i = 0; i < n; i++){
        puts(str[i]);
    }
}

int compare(const void * p1, const void * p2){
    const char * ptr1 = (const char *) p1;
    const char * ptr2 = (const char *) p2;
    return strcmp(ptr1, ptr2);
}

int compareWithLength(const void * p1, const void * p2){
    const char * ptr1 = (const char *) p1;
    const char * ptr2 = (const char *) p2;
    int res = (int) (strlen(ptr1) - strlen(ptr2));
    return res;
}

int compareWithFirstWordLength(const void * p1, const void * p2){
    const char * ptr1 = (const char *) p1;
    const char * ptr2 = (const char *) p2;
    char * blank_ptr1 = strchr(p1, ' ');
    char * blank_ptr2 = strchr(p2, ' ');
    int space_p1 = (int) (blank_ptr1 - ptr1);
    int space_p2 = (int) (blank_ptr2 - ptr2);
    
    if(space_p1 && space_p1) {
        return (int) (space_p1 - space_p2);
    } else if(!space_p1 && !space_p2){
        return (int) (strlen(ptr1) - strlen(ptr2));
    } else if(!space_p1){
        return (int) (strlen(ptr1) - space_p2);
    } else {
        return (int) (space_p1 - strlen(ptr2));
    }
}

void outputWithAsc(char str[][100], int n){
    qsort(str, n, 100 * sizeof(char), compare);
}

void outputWithLength(char str[][100], int n){
    qsort(str, n, 100 * sizeof(char), compareWithLength);
}

void outputWithFirstWordLength(char str[][100], int n){
    qsort(str, n, 100 * sizeof(char), compareWithFirstWordLength);
}
 */

