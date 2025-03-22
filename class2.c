//
// Created by Danilo de Queiroz on 22/03/25.
//

#include <stdio.h>
#include "class2.h"
#include "weight_and_height.h"

#define MAX_HEIGHT 300

int _pseudo_main_function_class_2(void) {
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