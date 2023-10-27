#include <stdio.h>
int main(){
    char *file = "file.txt";
    char *file2= "file2.txt";
    FILE *f1=fopen(file ,"r");
    FILE *f2=fopen(file2, "w");
    int size=20;//sizeof(file);
    char str[size];
    for(int i=0; i<3; i++){
        fgets(str,size,f1);
        fputs(str, f2);
    }
    fclose(f1);
    fclose(f2);
    return 0;
}
