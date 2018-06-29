//
//  va.cpp
//  learnc
//
//  Created by xiaobo on 2018/4/11.
//  Copyright © 2018年 xiaobo. All rights reserved.
//
/*
#include <stdio.h>
#include <string.h>
#include <stdarg.h>

void demo(char * a, ...) {
    va_list argvs;
    va_start(argvs, a);
    char * params;
    params = va_arg(argvs, char *);
    while(strcmp(params, "\0") != 0) {
        
        printf("%s\n", params);
        params = va_arg(argvs, char *);
    }
    
    va_end(argvs);
}


void fix_args_func(int a, double b, char* c, int d) {
    printf("int %lu\n", sizeof(int));
    printf("double %lu\n", sizeof(double));
    printf("char* %lu\n", sizeof(char*));
    printf("a = %p\n", &a);
    printf("b = %p\n", &b);
    printf("c = %p\n", &c);
    printf("d = %p\n", &d);
}

void std_vararg_func(const char* fmt, ...) {
    va_list ap;
    va_start(ap, fmt);
    
    printf("%s\n", va_arg(ap, char*));
    printf("%.2f\n", va_arg(ap, double));
    printf("%s\n", va_arg(ap, char *));
    
    va_end(ap);
}



int main() {
    char arr[20] = "hello";
    fix_args_func(1, 2.2, "hello world", 1);
    std_vararg_func("aaa", "ddd", 5.20, "hello");
    return 0;
}
*/
