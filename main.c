#include<stdio.h>
#include<stdlib.h>
#include "stack.h"

int main(){
    Stack_t S;
    int options;

    Create_Stack(&S);

    do{
        printf("\n=====================================Stack Menu=============================================\n");
        printf("1. Push\n2. Display\n3. Pop\n4. Peek\n5. isEmpty\n6. isFull\n0. Exit\nChoose: ");
        scanf("%d", &options);
    
        switch(options){
            case 1:
                {
                    int n, values;
                    printf("How many values you wants to enter in the stack: \n");
                    scanf("%d", &n);

                    for(int i = 0; i < n; i++){
                        if(isFull(S)){
                            printf("Stack is Full | Stack OverFlow | Can not insert any value: \n");
                            break;
                        }
                        printf("Enter Elements %d: ", i+1);
                        scanf("%d", &values);
                        Push(&S, values);
                    }
                    break;
                }

            case 2:
                Display_Stack(S);
                break;
            case 3:
            //pop(&S);
                printf("The Deleted Value: %d", pop(&S));
                break;
            case 4:
            {
                int idx = 0;
                printf("Enter index to check the peek of stack: \n");
                scanf("%d", &idx);
                printf("Peek of Stack: %d\n", peek(S, idx));
                break;
            }
            
            case 5:
                printf(isEmpty(S) ? "Stack is Empty" : "Stack is not Empty");
                break;
            case 6:
                printf(isFull(S) ? "Stack is Full" : "Stack is not Full");
                break;
            case 0:
                printf("Exiting from program: \n");
                break;
            default:
                printf("Wrong Option, please choose in between the available options: \n");
        }
    }while(options != 0);

    free(S.st_ptr);

    return 0;
}