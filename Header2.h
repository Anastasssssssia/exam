#pragma once
# ifndef  _Stack_H 
# define  _Stack_H  
#include <iostream>
#include "Header1.h"
//������ ��������� ��� �������� ����� � ��������� ���� � ���� ������ 
struct stackNode
{
	stackNode* next;
	treeNode* node;
};
//������ 4 �������� ������ �� ������
void push_stack(stackNode*&, treeNode*);

//����� ������� �� ����� (������� ������� �� ������ ������)
void pop_stack(stackNode*&, treeNode*&);

//�������� ����� �� �������
bool stack_isEmpty(stackNode*&);

//�������� ������� �����
void create_stack(stackNode*&);

# endif 