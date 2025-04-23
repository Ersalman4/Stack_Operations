#ifndef _STACK_H_
#define _STACK_H_

#include <stdbool.h>

typedef struct{
    int size;
    int top;
    int* st_ptr;
}Stack_t;

void Create_Stack(Stack_t* st);
void Push(Stack_t* st, int data);
void Display_Stack(Stack_t st);
int pop(Stack_t* st);
int peek(Stack_t st, int index);
bool isEmpty(Stack_t st);
bool isFull(Stack_t st);

#endif
