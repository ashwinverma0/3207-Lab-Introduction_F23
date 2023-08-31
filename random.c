#include <stdio.h>
#include <stdlib.h>
#include <time.h>
char randchar();

char randchar() {
    int ascii = (rand() % 26) + 65;
    return (char) (ascii);
}
