#include <stdio.h>
int MAXSIZE = 8;
int stack[8];
int top = -1;

int isempty(){
   if(top == -1)
      return 1;
   else
      return 0;
}

int isfull(){
   if(top == MAXSIZE)
      return 1;
   else
      return 0;
}

int peek(){
   return stack[top];
}

int pop(){
   int data;
   if(!isempty()) {
      data = stack[top];
      top = top - 1;
      return data;
   } else {
      printf("стек пустой.\n");
   }
}

int push(int data){
   if(!isfull()) {
      top = top + 1;
      stack[top] = data;
   } else {
      printf("стек заполнен.\n");
   }
}

int main(){
   push(1);
   push(2);
   push(3);
   push(4);
   push(5);
   push(6);
   printf("Элемент в верхней части стека : %d\n" ,peek());
   printf("элементы: \n");
   while(!isempty()) {
      int data = pop();
      printf("%d\n",data);
   }
   if (isfull()){
    printf("стек заполнен\n");
   }
   else {
    printf("стек не заполнен\n");
   }
   if (isempty()){
    printf("стек пустой\n");
   }
   else {
    printf("стек не пустой\n");
   }
   return 0;
}
