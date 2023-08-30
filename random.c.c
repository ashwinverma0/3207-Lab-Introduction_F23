#include <stdio.h>
#include <stdlib.h>
#include <time.h>
char randchar();

int main(){
    printf("%c",randchar());
}

char alphabet []= {'A','B','C','D','E','F','G','H','I'
        ,'J','K','L','M','N','O','P','Q','R','S','T',
                   'U','V','W','X','Y','Z'};

char randchar() {
    int element = (rand() % 26);
    return alphabet[element];
}
