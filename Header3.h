#pragma once
# ifndef  _Obchod_H 
# define  _Obchod_H  
#include <iostream>
#include <fstream>
#include "Header1.h"
#include "Header2.h"
using namespace std;
//обход дерева в глубину - КЛП-обход
void inorder_tree_KLP(treeNode*);
//обход дерева в глубину - ЛКП-обход
void inorder_tree_LKP(treeNode*);

# endif
