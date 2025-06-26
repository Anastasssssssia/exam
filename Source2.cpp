#include <iostream>
#include "Header2.h"
#include "Header1.h"
using namespace std;
//опишем 4 операции работы со стеком
//положить элемент в стек
void push_stack(stackNode*& top, treeNode* t)
{
	stackNode* p;
	p = new stackNode;
	p->node = t;
	p->next = top;
	top = p;
}

//взять элемент из стека (удалить элемент из головы списка)
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
//проверка стека на пустоту
bool stack_isEmpty(stackNode*& top)
{
	return top == NULL;
}

//создание пустого стека
void create_stack(stackNode*& top)
{
	top = NULL;
}
