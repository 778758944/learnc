//
//  main.c
//  learnc
//
//  Created by xiaobo on 2017/11/16.
//  Copyright © 2017年 xiaobo. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "tree.h"

char menu(void);
void addpet(Tree * pt);
void uppercase(char * st);
void showpets(Tree * pt);
void printitem(Item item);
void findpet(Tree * pt);
void droppet(Tree * pt);

//int main(void){
//    char choice;
//    Tree tree;
//    InitializTree(&tree);
//    while((choice = menu()) != 'q'){
//        switch(choice) {
//            case 'a':
//                addpet(&tree);
//                break;
//                
//            case 'l':
//                showpets(&tree);
//                break;
//                
//            case 'n':
//                printf("number of pets is %d\n", tree.size);
//                break;
//                
//            case 'f':
//                findpet(&tree);
//                break;
//                
//            case 'd':
//                droppet(&tree);
//                break;
//                
//            default:
//                puts("switch");
//        }
//    }
//    
//    DeleteAll(&tree);
//    puts("Bye");
//    return 0;
//}

char menu(void){
    char ch;
    puts("please enter your chooice:");
    puts("a) add a pet         l)list pets");
    puts("n) number of pet     f) find pets");
    puts("d) delete a pet      q) quit");
    
    while((ch = getchar()) != EOF){
        while(getchar() != '\n'){
            continue;
        }
        
        ch = tolower(ch);
        if(strchr("alnfdq", ch) == NULL){
            puts("Please enter an a, l, n, f, d, q");
        } else {
            break;
        }
    }
    
    if(ch == EOF){
        ch = 'q';
    }
    
    return ch;
}

void addpet(Tree * pt){
    Item item;
    if(TreeIsFull(pt)){
        puts("no room for pets");
    } else {
        puts("Enter pet name");
        gets(item.petname);
        puts("Enter pet kind");
        gets(item.petkind);
        uppercase(item.petkind);
        uppercase(item.petname);
        
        if(AddItem(&item, pt)){
            puts("add success");
        } else {
            puts("add failure");
        }
    }
}


void uppercase(char * st){
    while((*st) != '\0'){
        *st = toupper((*st));
        st++;
    }
    
    *st = '\0';
}

void showpets(Tree * pt){
    if(TreeIsEmpty(pt)){
        puts("no pets");
    } else {
        Traverse(pt, *printitem);
    }
}

void printitem(Item item){
    printf("Pet: %-19s, kind: %-19s\n", item.petname, item.petkind);
}

void findpet(Tree * pt){
    Item item;
    if(TreeIsEmpty(pt)){
        puts("no items");
    } else {
        puts("please enter a pet name:");
        gets(item.petname);
        puts("please enter a pet kind:");
        gets(item.petkind);
        uppercase(item.petkind);
        uppercase(item.petname);
        if(InTree(&item, pt)){
            puts("pet in tree");
        } else {
            puts("pet not in tree");
        }
    }
}

void droppet(Tree * pt){
    if(TreeIsEmpty(pt)){
        puts("no pets");
    } else {
        Item item;
        puts("enter a pet name");
        gets(item.petname);
        puts("enter a pet kind");
        gets(item.petkind);
        uppercase(item.petkind);
        uppercase(item.petname);
        if(DeleteItem(&item, pt)) {
            puts("pet deleted sucessful");
        } else {
            puts("no item in tree");
        }
    }
}
