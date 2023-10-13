# include <stdio.h>
int main (){
    float a, b, c;
    printf("Введите значение a: ");
    scanf("%f", &a);
    printf("Введите значение b: ");
    scanf("%f", &b);
    printf("Введите значение c: ");
    scanf("%f", &c);
    float x=(c-b)/a;
    printf("x= %f\n", x);
    return 0;
}
