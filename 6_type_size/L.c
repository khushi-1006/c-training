#include <stdio.h>

int main(){

    //int x = sizeof(2147483647L);
    //int x = sizeof(2147483648L);
    //int x = sizeof(4294967295L);
    //int x = sizeof(4294967296L);
    int x = sizeof(9999999999L);

    printf("size of long int constant %d byte",x);

    return 0;
}