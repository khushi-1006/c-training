#include <stdio.h>

int main(){

    int x = 0b111;

    printf("%d\n\n",x);
    printf("%b",x);         //not ok: %b

    return 0;
}