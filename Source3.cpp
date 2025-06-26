#include <iostream>
#include <fstream>
#include "Header1.h"
#include "Header2.h"
#include "Header3.h"
using namespace std;
//обход дерева в глубину - КЛП-обход
void inorder_tree_KLP(treeNode* root)
{
	stackNode* top;
	treeNode* marker;
	marker = root;
	create_stack(top);
	//top = NULL;
	if (root != NULL)
		push_stack(top, root);
	while (!stack_isEmpty(top))
	{
		pop_stack(top, marker);
		while (marker != NULL)
		{
			print_node(marker->data);
			if (marker->right != NULL)
				push_stack(top, marker->right);
			marker = marker->left;
		}
	}
	cout << endl;
}
//обход дерева в глубину - ЛКП-обход
void inorder_tree_LKP(treeNode* root)
{
	stackNode* top;
	treeNode* marker;
	marker = root;
	top = NULL;
	do
	{
		while (marker)
		{
			while (marker->left)
			{
				push_stack(top, marker);
				marker = marker->left;
			}
			print_node(marker->data);
			marker = marker->right;
		}

		if (top)
		{
			pop_stack(top, marker);
			print_node(marker->data);
			marker = marker->right;
		}
	} while (top || marker);
	cout << endl;
}
