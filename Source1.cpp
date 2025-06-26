#include <iostream>
#include <fstream>
#include "Header1.h"
using namespace std;


//печать содержимого узла
void print_node(int x)
{
	cout << " " << x;
}
// создание вершины дерева
treeNode* createNode(int x)
{
	treeNode* p = new treeNode;
	p->data = x;
	p->left = NULL;
	p->right = NULL;
	return p;
}
//включение новой вершины в дерево поиска
void pushTree(treeNode*& root, int x)
{
	treeNode* pred = root, * marker;
	bool found = false;
	if (root == NULL)
		root = createNode(x);
	else
	{
		marker = root;
		while (!found && marker != NULL)
		{
			pred = marker;
			if (marker->data == x)
				found = true;
			else if (x >= marker->data)
				marker = marker->right;
			else marker = marker->left;
		}
		if (!found)
			if (x >= pred->data)
				pred->right = createNode(x);
			else pred->left = createNode(x);
	}
}
//Создание дерева поиска
void createTree(treeNode*& root, ifstream& f)
{
	root = NULL;
	int x;
	while (f >> x)
	{
		pushTree(root, x);
	}
}
//печать дерева
void showTree(treeNode* root)
{
	if (root != NULL)
	{
		showTree(root->left);
		print_node(root->data);
		showTree(root->right);
	}
}
