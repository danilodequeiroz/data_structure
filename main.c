#include <stdio.h>
#include "univesp.c"
#define MAX_HEIGHT 300

int main(void) {
    WeightAndHeight pseudoObj = {84, 177};
    printf("Hello, World!\n");
    printf("Weight: %d kg\n",pseudoObj.weight );
    printf("Height: %d cm\n",pseudoObj.height );
    printf("Max possible height: %d mm\n", MAX_HEIGHT );

    if (pseudoObj.height > MAX_HEIGHT) {
        printf("Height is too high!\n");
    } else {
        printf("Height is %d\n cm", pseudoObj.height);
    }
    return 0;
}

