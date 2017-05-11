//
//  main.h
//  program 1
//
//  Created by arnoldas kurbanovas on 2/2/16.
//  Copyright © 2016 arnoldas kurbanovas. All rights reserved.
//

#ifndef constants_h
#define constants_h

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "struct_def.h"

//function prototypes:
int treeHeight(tree_node * node);
int maxHeight(tree_node * node);
int leafcount(tree_node * node);
//void insert(tree_node * node, char *);
tree_node * insert(tree_node * node, char *);

//#define MAXLEN 15


#endif /* main_h */
