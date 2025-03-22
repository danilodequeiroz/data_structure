//
// Created by Danilo de Queiroz on 22/03/25.
//

#include "class1.h"
#include "class2.h"

#define MAX_HEIGHT 300
#define CLASS 1

int main(void) {
    switch (CLASS) {
        case 1: _class_1_weight_height_struct();
        case 2: _class_2_weight_height_struct_and_simple_condition();
        case 3: _class_2_weight_height_pointers_to_addresses_play();
        default: ;
    }
    return 0;
}
