#pragma once
# ifndef  _Stack_H 
# define  _Stack_H  
#include <iostream>
#include "Header1.h"
//ќпишем структуру дл€ элемента стека Ц реализуем стек в виде списка 
struct stackNode
{
	stackNode* next;
	treeNode* node;
};
//опишем 4 операции работы со стеком
void push_stack(stackNode*&, treeNode*);

//вз€ть элемент из стека (удалить элемент из головы списка)
void pop_stack(stackNode*&, treeNode*&);

//проверка стека на пустоту
bool stack_isEmpty(stackNode*&);

//создание пустого стека
void create_stack(stackNode*&);

# endif 