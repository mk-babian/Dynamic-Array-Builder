#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int* data;
    int size;
    int capacity;
} Darray;

void grow(Darray* ptr){
    ptr->capacity *= 2;
    ptr->data = realloc(ptr->data, sizeof(int) * ptr->capacity);
}

void append(Darray* ptr, int number){
    if (ptr->size == ptr->capacity){
        printf("Array is full, adding more space...\n");
        grow(ptr);
    }

    ptr->data[ptr->size] = number;
    ptr->size++;
}

void show(Darray* ptr){
    for (int i = 0; i < ptr->size; i++){
        printf("%d ; ", ptr->data[i]);
    }
    printf("\n");
}

int main(int argc, const char* argv[]){
    Darray arr;
    Darray* ptr = &arr;                     // Declare a pointer pointing to "arr"
    
    ptr->capacity = 12;
    ptr->size = 0;

    ptr->data = malloc(sizeof(int) * ptr->capacity);        // Make room for ptr->data

    printf("Welcome to Darray, a dynamic array creator in C.\n");
    
    int number;
    while (1){                                              // Main loop
        printf("Provide a number (input 0 to exit):");
        scanf("%d", &number);
        printf("\n");

        if (number == 0) break;
        else{
            append(ptr, number);
        }
    }

    show(ptr);

    free(ptr->data);
    return 0;
}
