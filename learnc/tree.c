//
//  tree.c
//  learnc
//
//  Created by xiaobo on 2017/11/16.
//  Copyright © 2017年 xiaobo. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tree.h"

static Node * MakeNode(const Item * pi);
static void AddNode(Node * node, Node * root);
static bool toLeft(const Item * i1, const Item * i2);
static bool toRight(const Item * i1, const Item * i2);
static void DeleteNode(Node **ptr);
static void InOrder(Node * root, void (* pfun)(Item item));
static void DeleteAllNodes(Node * root);
static Pair SeekItem(const Item * pi, Tree * ptree);


void InitializTree(Tree * ptree){
    ptree->root = NULL;
    ptree->size = 0;
}

bool TreeIsEmpty(Tree * ptree){
    return ptree->size == 0 ? true : false;
}

bool TreeIsFull(Tree * ptree){
    return ptree->size == MAXITEMS ? true : false;
}

int TreeItemCount(Tree * ptree){
    return ptree->size;
}

bool AddItem(const Item * it, Tree * ptree){
    Node * new_node;
    //先判断是否已经满了
    if (ptree->size > MAXITEMS) {
        return false;
    }
    
    if(SeekItem(it, ptree).child != NULL){
        fprintf(stderr, "attemp to add duplicate item");
        return false;
    }
    
    new_node = MakeNode(it);
    
    if(ptree->root == NULL){
        ptree -> root = new_node;
    } else {
        AddNode(new_node, ptree->root);
    }
    ptree->size++;
    
    return true;
}

bool InTree(const Item * it, Tree * ptree){
    return SeekItem(it, ptree).child == NULL ? false : true;
}


Node * MakeNode(const Item * pi){
    Node * node;
    node = (Node *) malloc(sizeof(Node));
    if(node != NULL){
        node->item = *pi;
        node->left = NULL;
        node->right = NULL;
    }
    return node;
}

void AddNode(Node * node, Node * root){
    if(toLeft(&node->item, &root->item)){
        if(root->left == NULL){
            root->left = node;
        } else {
            AddNode(node, root->left);
        }
    } else if(toRight(&node->item, &root->item)){
        if(root->right == NULL){
            root->right = node;
        } else {
            AddNode(node, root->right);
        }
    } else {
        exit(1);
    }
}

bool DeleteItem(const Item * it, Tree * tree){
    Pair look;
    look = SeekItem(it, tree);
    if(look.child == NULL){
        return false;
    }
    
    if(look.parent == NULL){
        DeleteNode(&tree->root);
    } else if(look.parent->left == look.child){
        DeleteNode(&look.parent->left);
    } else {
        DeleteNode(&look.parent->right);
    }
    
    DeleteNode(&look.parent);
    tree->size--;
    return true;
}

void Traverse(const Tree * ptree, void (* pfun)(Item item)){
    if(ptree != NULL) {
        InOrder(ptree->root, pfun);
    }
}

void DeleteAll(Tree * tree){
    if(tree != NULL){
        DeleteAllNodes(tree->root);
    }
    tree -> root = NULL;
    tree -> size = 0;
}

bool toLeft(const Item * i1, const Item * i2){
    int comp;
    if((comp = strcmp(i1->petname, i2->petname)) < 0){
        return true;
    } else if(comp == 0  && strcmp(i1->petkind, i2->petkind) < 0){
        return true;
    } else {
        return false;
    }
}

bool toRight(const Item * i1, const Item * i2){
    int comp;
    if((comp = strcmp(i1->petname, i2->petname)) > 0){
        return true;
    } else if(comp == 0 && strcmp(i1->petkind, i2->petkind) > 0) {
        return true;
    } else {
        return false;
    }
}

Pair SeekItem(const Item * pi, Tree * ptree){
    Pair look;
    look.child = ptree->root;
    
    if(look.child == NULL){
        return look;
    }
    
    while(look.child != NULL){
        if(toLeft(pi, &(look.child->item))){
            look.parent = look.child;
            look.child = look.child->left;
        } else if(toRight(pi, &(look.child->item))){
            look.parent = look.child;
            look.child = look.child->right;
        } else {
            break;
        }
    }
    
    return look;
}

void DeleteNode(Node **ptr){
    Node * temp;
    puts((*ptr) -> item.petname);
    
    if((*ptr) -> left == NULL){
        temp = *ptr;
        *ptr = (*ptr)->right;
        free(temp);
    } else if((*ptr) ->right == NULL){
        temp = *ptr;
        *ptr = (*ptr) -> left;
        free(temp);
    } else {
        for(temp = (*ptr)->left; temp->right != NULL; temp=temp->right){
            continue;
        }
        
        temp->right = (*ptr)->right;
        temp = *ptr;
        *ptr = (*ptr)->left;
        free(temp);
    }
}

void InOrder(Node * root, void (*pfun)(Item item)){
    if(root != NULL){
        InOrder(root->left, pfun);
        (*pfun)(root->item);
        InOrder(root->right, pfun);
    }
}

void DeleteAllNodes(Node * root){
    Node * right;
    if(root != NULL){
        right = root->right;
        DeleteAllNodes(root->left);
        free(root);
        DeleteAllNodes(right);
    }
}

