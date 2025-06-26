#include <iostream>
#include "Header2.h"
#include "Header1.h"
using namespace std;
//������ 4 �������� ������ �� ������
//�������� ������� � ����
void push_stack(stackNode*& top, treeNode* t)
{
	stackNode* p;
	p = new stackNode;
	p->node = t;
	p->next = top;
	top = p;
}

//����� ������� �� ����� (������� ������� �� ������ ������)
void pop_stack(stackNode*& top, treeNode*& t)
{
	stackNode* p;
	if (top)
	{
		t = top->node;
		p = top->next;
		delete top;
		top = p;
	}
}
//�������� ����� �� �������
bool stack_isEmpty(stackNode*& top)
{
	return top == NULL;
}

//�������� ������� �����
void create_stack(stackNode*& top)
{
	top = NULL;
}
