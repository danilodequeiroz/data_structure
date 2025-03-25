//
// Created by Danilo de Queiroz on 24/03/25.
//


#include <stdio.h>
#include "class3.h"
#include <stdlib.h>
// #include "linear_list.h"
#include "linear_list_functions.h"

int _class_3_linear_list_implementation_1(void) {
    LIST my_list ;
    my_list.list->keyType = 10;
    printf("Chave do primeiro elemento: %d\n", my_list.list[0].keyType);
    return 0;
}
