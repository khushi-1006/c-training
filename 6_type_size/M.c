#include <stdio.h>
int main(){

    long long y = -4294967295L;
    int x = sizeof(y);

    printf("size of long int constant %d bytes",x);

    return 0;
}