//
// Created by Danilo de Queiroz on 24/03/25.
//

#include "linear_list_functions.h"

#include <stdio.h>


int initialize(LIST *list) {
    list->quantity = 0;
    return 0;
}

int size_of(const LIST *list) {
    return list->quantity;
}

int print_list_elements(const LIST *list) {
    printf("List values\n");
    for (int i = 0; i < list->quantity; i++) {
        printf("%d,\n", list->list[i].key);
    }
    printf("\"\n");
    return 0;
}

int search(const LIST *list, const KEY_TYPE key) {
    int i = 0;
    while (i < list->quantity) {
        if (list->list[i].key == key) {
            return i;
        }
        i++;
    }
    return -1;
}

int search_for(const LIST *list, const KEY_TYPE key) {
    for (int i = 0; i < list->quantity; i++) {
        if (list->list[i].key == key) {
            return i;
        }
    }
    return -1;
}

bool insert(LIST *list, REGISTER new_register, const int position) {
    if (list->quantity == MAX || position < 0 || position > list->quantity) {
        return false;
    }
    for (int j = list->quantity; j > position; j--) {
        list->list[j] = list->list[j - 1];
    }
    list->list[position] = new_register;
    list->quantity++;
    return true;
}

bool delete(KEY_TYPE to_be_deleted, LIST *list) {
    int j;
    int position = search(list, to_be_deleted);
    if (position == -1) {
        return false;
    }
    for (j = position; j < list->quantity-1; j++) {
        list->list[j] = list->list[j+1];
    }
    list->quantity--;
    return true;
}

void clear(LIST *list) {
    list->quantity = 0;
}
