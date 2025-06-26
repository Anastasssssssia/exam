#include <iostream>
#include <fstream>
#include "Header1.h"
#include "Header2.h"
#include "Header3.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	ifstream f("Text.txt");

	treeNode* root, * marker;
	createTree(root, f);
	showTree(root);
	cout << endl;

	inorder_tree_KLP(root);
	cout << endl;

	inorder_tree_LKP(root);
	cout << endl;

	f.close();

	system("pause");
	return 0;
}
