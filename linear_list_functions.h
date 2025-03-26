//
// Created by Danilo de Queiroz on 24/03/25.
//

#include <stdbool.h>

#include "linear_list.h"

#ifndef LINEAR_LIST_FUNCTIONS_2_H
#define LINEAR_LIST_FUNCTIONS_2_H

#endif

int initialize(LIST* list);

int size_of(const LIST* list);

int print_list_elements(const LIST* list);

int search(const LIST *list, const KEY_TYPE key);

int search_for(const LIST* list, const KEY_TYPE key);

bool insert(LIST* list, REGISTER new_register, int position);

bool delete(KEY_TYPE to_be_deleted, LIST *list);

void clear(LIST* list);