#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int mas[10];
    srand(time(0));
    for(int i=0; i<10; i++){
        mas[i]=rand();
    }
    for(int i=0; i<10; i++){
        printf("%d\n", mas[i]);
    }
    printf("\n");
    return 0;
}
