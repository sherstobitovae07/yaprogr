#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(int argc, char *argv[]){
    int size = atoi(argv[1]);
    int a = atoi(argv[2]);
    int b = atoi(argv[3]);
    int mas[size];
    srand(time(NULL));
    for(int i=0; i<size; i++){
        mas[i]=rand()%(b-a+1)+a;
    }
     for(int i=0; i<size; i++){
        printf("%d\n", mas[i]);
     }
    return 0;
}
