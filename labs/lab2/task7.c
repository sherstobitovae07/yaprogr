#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define STACK_SIZE 100
int stack[STACK_SIZE];
int top = -1;

int isfull(){
   if(top == STACK_SIZE)
      return 1;
   else
      return 0;
}

int isempty(){
   if(top == -1)
      return 1;
   else
      return 0;
}

int push(int data){
   if(!isfull()) {
      top = top + 1;
      stack[top] = data;
   } else {
      printf("Не удалось вставить данные, стек заполнен.\n");
   }
}

int pop(){
   int data;
   if(!isempty()) {
      data = stack[top];
      top = top - 1;
      return data;
   } else {
      printf("Не удалось извлечь данные, стек пуст.\n");
   }
}

int main() {
    char *inputFile = "file3.txt";
    FILE *file = fopen(inputFile, "r");
    if (file == NULL) {
        printf("error\n");
        return 1;
    }
    int ch;
    while ((ch = fgetc(file)) != EOF) {
        if (isdigit(ch)) {
            push(ch - '0');
        } else if (ch == '+' || ch == '-' || ch == '*' || ch == '/') {
            int b = pop();
            int a = pop();
            switch (ch) {
                case '+':
                    push(a + b);
                    break;
                case '-':
                    push(a - b);
                    break;
                case '*':
                    push(a * b);
                    break;
                case '/':
                    if (b == 0) {

                        exit(1);
                    }
                    push(a / b);
                    break;
            }
        }
    }
    fclose(file);
    printf("результат: %d\n", pop());
    return 0;
}
