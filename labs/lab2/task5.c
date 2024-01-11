#include <stdio.h>
#include <stdlib.h>
#define MAX_NAME_LENGTH 100

typedef struct {
    char name[MAX_NAME_LENGTH];
    float price;
} Product;

int comparePrices(const void *a, const void *b) {
    const Product *productA = (const Product *)a;
    const Product *productB = (const Product *)b;

    if (productA->price < productB->price) {
        return -1;
    } else if (productA->price > productB->price) {
        return 1;
    } else {
        return 0;
    }
}
int main() {
    char *inputFile = "input.txt";
    char *outputFile = "output.txt";
    FILE *file = fopen(inputFile, "r");
    if (file == NULL) {
        printf("error\n");
        return 1;
    }
    int size;
    fscanf(file, "%d", &size);

    Product *products = (Product *)malloc(size * sizeof(Product));
    for (int i = 0; i < size; i++) {
        fscanf(file, "%s %f", products[i].name, &products[i].price);
    }
    fclose(file);
    printf("до:\n");
    for (int i = 0; i < size; i++) {
        printf("продукт: %s, цена: %.2f\n", products[i].name, products[i].price);
    }
    qsort(products, size, sizeof(Product), comparePrices);

    printf("после:\n");
    for (int i = 0; i < size; i++) {
        printf("продукт: %s, цена: %.2f\n", products[i].name, products[i].price);
    }
    FILE *file2 = fopen(outputFile, "w");

    for (int i = 0; i < size; i++) {
        fprintf(file, "продукт: %s, цена: %.2f\n", products[i].name, products[i].price);
    }
    fclose(file);
    free(products);
    return 0;
}
