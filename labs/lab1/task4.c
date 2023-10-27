#include <stdio.h>

int main(int argc, char *argv[]) //создание массива и записывания переменных
{
    for (int i = 0; i < argc; i++) //проходит по всем элементам
    {
        printf("%s \n", argv[i]); // выводит содержимое массива

    }
    return 0;
}
