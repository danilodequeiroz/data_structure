//
// Created by Danilo de Queiroz on 22/03/25.
//

#include <stdio.h>
#include "class1.h"
#include "weight_and_height.h"

#define MAX_HEIGHT 300

int _class_1_weight_height_struct(void) {
    WeightAndHeight pseudoObj = {84, 177};
    printf("Hello, World!\n");
    printf("Weight: %d kg\n",pseudoObj.weight );
    printf("Height: %d cm\n",pseudoObj.height );

    return 0;
}

