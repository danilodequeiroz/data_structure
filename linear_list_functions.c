//
// Created by Danilo de Queiroz on 24/03/25.
//

#include "linear_list_functions.h"

#include <stdio.h>


int initialize(LIST* list) {
    list->quantity = 0;
    return 0;
}

int sizeOf(LIST* list) {
    return list->quantity;
}

int printListElements(LIST* list){
    int i;

    printf("List values\n");
    for (i = 0; i < list->quantity; i++) {
        printf("%d,\n", list->list[i].keyType);
    }
    printf("\"\n");
    return 0;
}

int search(int){
    return 0;
}

int insert(LIST* list){
    return 0;
}

int delete(LIST* list){
    return 0;
}

int clear(LIST* list){
    return 0;
}
