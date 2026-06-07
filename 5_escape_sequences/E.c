#include <stdio.h>

int main(){
    char x[] = "mohan\sohan";

    printf("$%s$",x);

    return 0;
}

// E.c: In function 'main':
// E.c:4:16: warning: unknown escape sequence: '\s'
//      char x[] = "mohan\sohan";
//                 ^~~~~~~~~~~~~