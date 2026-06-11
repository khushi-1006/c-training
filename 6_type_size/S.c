#include <stdio.h>
int main(){

    long double t = 4.5L;

    int x = sizeof(t);

    printf("size of long double variable %d bytes",x);

    return 0;
}