//
// Created by Danilo de Queiroz on 24/03/25.
//
#ifndef LINEAR_LIST

#define MAX 50

typedef int KEY_TYPE;

typedef struct {
  KEY_TYPE keyType;
  // other fields ...
} REGISTER;

typedef struct {
  REGISTER list[MAX];
  int quantity;
} LIST;

#endif