//
//  p14-7.c
//  
//
//  Created by xiaobo on 2018/3/12.
//
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXBKS 10
#define PATH "/Users/xiaobo/Documents/learnc/learnc/c/chart14/pratice/books.bat"
typedef struct book {
    char title[40];
    char author[40];
    float value;
    int isDelete;
} BOOK;

int showMenu(int i);
void modifyBook(BOOK *, char *);
void addBook(BOOK *);
void saveBook(BOOK *, int);
void showBook(BOOK *, int count);
void deleteBook(BOOK *, int);

int main(void) {
    BOOK books[MAXBKS];
    FILE * fp;
    int count = 0;
    int option = 0;
    char modifyKey[20];
    int selectBookNum = 0;
    int num = 0;
    
    if((fp = fopen(PATH, "r+b")) == NULL){
        puts("err to open file");
        exit(0);
    }
    
    while(count < MAXBKS && fread(&(books[count]), sizeof(BOOK), 1, fp) == 1){
        count++;
    }
    
    showBook(books, count);
    
    selectBookNum = count;
    fclose(fp);
    
    
    option = showMenu(count);
    while(option != 4) {
        switch(option) {
            case 1:
                puts("enter the book number and modify key");
                if (scanf("%d%s", &num, modifyKey) == 2) {
                    modifyBook(&books[num], modifyKey);
                }
                saveBook(books, count);
                break;
                
            case 2:
                deleteBook(books, count);
                count -= 1;
                saveBook(books, count);
                break;
                
            case 3:
                addBook(&books[count]);
                count += 1;
                saveBook(books, count);
                break;
                
            case 4:
                puts("Bye!!");
                break;
        }
        printf("count %d\n", count);
        while(getchar() != '\n') {
            continue;
        }
        option = showMenu(count);
    }
    
    fclose(fp);
    return 0;
    
}

int showMenu(int i) {
    int opt = 0;
    puts("please enter the number of your option");
    puts("1. modify  2. delete");
    if (i < MAXBKS) {
        puts("3. add  4.quit");
    } else {
        puts("4.quit");
    }
    scanf("%d", &opt);
    while(getchar() != '\n') {
        continue;
    }
    return opt;
}

void modifyBook(BOOK * book, char * key){
    if (strcmp(key, "value") == 0) {
        puts("enter the price");
        scanf("%f", &(book->value));
    } else if (strcmp(key, "title") == 0) {
        puts("enter the title");
        scanf("%s", book->title);
    } else if (strcmp(key, "author") == 0) {
        puts("enter the author");
        scanf("%s", book->author);
    } else {
        puts("no key!");
    }
}

void addBook(BOOK * book){
    puts("please enter the title, author and value");
    scanf("%s%s%f", book->title, book->author, &(book->value));
}

void saveBook(BOOK * books, int count){
    FILE * fp;
    unsigned long size;
    if((fp = fopen(PATH, "wb")) == NULL){
        puts("error to open file");
    }
    size = fwrite(books, sizeof(BOOK), count, fp);
    fclose(fp);
}

void showBook(BOOK * books, int count){
    int i;
    printf("count %d\n", count);
    for(i = 0; i < count; i++){
        printf("%s write by %s is %.2f\n", books[i].title, books[i].author, books[i].value);
    }
}

void deleteBook(BOOK * books, int count){
    int delete, i;
    BOOK * book;
    puts("enter the number of book you want to delelte");
    if(scanf("%d", &delete) == 1){
        for(i = delete-1; i < count - 1; i++){
            book = &books[i + 1];
            strcpy(books[i].author, book->author);
            strcpy(books[i].title, book->title);
            books[i].value = book->value;
        }
    }
}
 */


















