#pragma once
# ifndef  _TreePoisk_H 
# define  _TreePoisk_H  
#include <iostream>
#include <fstream>
using namespace std;
struct treeNode
{
	treeNode* left;
	treeNode* right;
	int   data;
};
//печать содержимого узла
void print_node(int);
// создание вершины дерева
treeNode* createNode(int);
//включение новой вершины в дерево поиска
void pushTree(treeNode*&, int);
//Создание дерева поиска
void createTree(treeNode*&, ifstream&);
//печать дерева
void showTree(treeNode*);
# endif  