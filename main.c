//
// Created by Danilo de Queiroz on 22/03/25.
//

#include <stdio.h>

#include "class1.h"
#include "class2.h"
#include "class3.h"

#define MAX_HEIGHT 300
#define CLASS 7

int main(void) {
    switch (CLASS) {
        case 1: _class_1_weight_height_struct();
            break;
        case 2: _class_2_weight_height_struct_and_simple_condition();
            break;
        case 3: _class_2_weight_height_pointers_to_addresses_play();
            break;
        case 4: _class_2_weight_height_addresses_malloc();
            break;
        case 5: _class_2_weight_height_test_long_long();
            break;
        case 6: _class_2_weight_height_using_pointer_by_malloc_and_access_its_properties();
            break;
        case 7: _class_3_linear_list_implementation_1();
            break;
        default:
            printf("Wrong number of class, define the CLASS constant\n");
    }
    return 0;
}
