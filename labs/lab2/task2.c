#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    FILE *file=fopen("file.txt", "w");
    int mas[10];
    srand(time(0));
    for(int i=0; i<10; i++){
        mas[i]=rand();
    }
    for(int i=0; i<10; i++){
        printf("%d\n", mas[i]);
    }
    printf("\n");
    for (int i=0; i<10; i++){
        fprintf(file, "%d\n", mas[10 -i-1]);
    }
    fclose(file);
    return 0;
}
