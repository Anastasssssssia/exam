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
//������ ����������� ����
void print_node(int);
// �������� ������� ������
treeNode* createNode(int);
//��������� ����� ������� � ������ ������
void pushTree(treeNode*&, int);
//�������� ������ ������
void createTree(treeNode*&, ifstream&);
//������ ������
void showTree(treeNode*);
# endif  