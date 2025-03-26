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

    REGISTER quatro = {4};
    REGISTER cinco = {5};
    REGISTER tres = {3};
    REGISTER um = {1};
    REGISTER zero = {0};
    my_list.list[0]=  quatro;
    my_list.list[1]=  cinco;
    my_list.list[2]=  tres;
    my_list.list[3]=  um;
    my_list.list[4]=  zero;
    my_list.quantity = 5;
    REGISTER numero = {9};
    insert(&my_list,numero,1);
    return 0;
}
