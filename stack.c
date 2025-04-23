#include <stdlib.h>
#include <stdio.h>
#include "stack.h"


void Create_Stack(Stack_t * st){
    printf("Enter size of your stack: \n");
    scanf("%d", &st->size);
    if(st->size <= 0){
        printf("Invalid Size: \n");
    }

    st->top = -1;
    st->st_ptr = (int*)malloc(st->size*sizeof(int));

    if(st->st_ptr == NULL){
        printf("Memory Allocation Failed: \n");
        exit(1);
    }

}

void Push(Stack_t* st, int data){
    if(st->top == st->size - 1){
        printf("Stack Overflow | Stack is full: \n");
    }else{
        st->top++;
        st->st_ptr[st->top] = data;
    }
}

void Display_Stack(Stack_t st){
    printf("Your Stack is: \n");
    for(int i = st.top; i>=0; i--){
        printf("%d\t", st.st_ptr[i]);
    }
    printf("\n");
}

int pop(Stack_t* st){
    int popped_data = -1;
    if(st->top == -1){
        printf("Stack is Underflow | stack empty: \n");
    }else{
        popped_data = st->st_ptr[st->top];
        st->top--;
    }
    return popped_data;
}

int peek(Stack_t st, int index){
    int peeked_data = -1;
    if(index <= 0 || index > st.top + 1){
        printf("Invalid index: \n");
    }else{
        peeked_data = st.st_ptr[st.top-index + 1];
    }
    return peeked_data;
}

bool isEmpty(Stack_t st){
    return (st.top == -1);
}

bool isFull(Stack_t st){
    return (st.top == st.size - 1);
}
