//
//  tree.h
//  learnc
//
//  Created by xiaobo on 2017/11/16.
//  Copyright © 2017年 xiaobo. All rights reserved.
//

#ifndef _TREE_H
#define _TREE_H
#include <stdbool.h>
#define MAXITEMS 10
typedef struct item {
    char petname[20];
    char petkind[20];
} Item;

typedef struct node {
    Item item;
    struct node * left;
    struct node * right;
} Node;

typedef struct tree {
    Node * root;
    int size;
} Tree;

typedef struct pair {
    Node * parent;
    Node * child;
} Pair;

//初始化tree
void InitializTree(Tree * ptree);

//确定树是否为空
bool TreeIsEmpty(Tree * ptree);

//确定树是否已经满
bool TreeIsFull(Tree * ptree);

//确定树中的项目数
int TreeItemCount(Tree * ptree);

//添加项目
bool AddItem(const Item * it, Tree * ptree);

//查找项目
bool InTree(const Item * it, Tree * ptree);

//删除一个项目
bool DeleteItem(const Item * it, Tree * tree);

//遍历树
void Traverse(const Tree * ptree, void (* pfun)(Item item));

//清空树
void DeleteAll(Tree * tree);



#endif

