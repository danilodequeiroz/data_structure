//
// Created by Danilo de Queiroz on 22/03/25.
//

#include <stdio.h>
#include "class2.h"
#include <stdlib.h>
#include "weight_and_height.h"

#define MAX_HEIGHT 300

int _class_2_weight_height_struct_and_simple_condition(void) {
    WeightAndHeight pseudoObj = {84, 177};
    printf("Hello, World!\n");
    printf("Weight: %d kg\n",pseudoObj.weight );
    printf("Height: %d cm\n",pseudoObj.height );
    printf("Max possible height: %d cm\n", MAX_HEIGHT );

    if (pseudoObj.height > MAX_HEIGHT) {
        printf("Height is too high!\n");
    } else {
        printf("Height is %d cm\n", pseudoObj.height);
    }
    return 0;
}

int _class_2_weight_height_pointers_to_addresses_play(void) {
    int x = 25;
    int* y = &x;
    printf("x: %i \ny: %p \n", x, y);
    printf("x: %i \ny: %d \n", x, *y);
    *y = 30;
    printf("x: %i \ny: %p \n", x, y);
    printf("x: %i \ny: %d \n", x, *y);
    return 0;
}

int _class_2_weight_height_addresses_malloc(void) {
    int *y = malloc(sizeof(int));
    *y = 20;
    const int z = sizeof(int);
    printf("y = %p \n*y = %i \nz = %i \n", y, *y, z);
    printf("sizeof(int) = %lu", sizeof(int));
    free(y);
    y = NULL;
    return 0;
}
