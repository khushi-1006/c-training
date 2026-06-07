#include <stdio.h>
int main(){

    //char x[] = "mohan\\\sohan";

    char  x[] = "mohan\\\\sohan";

    printf("$%s$",x);

    return 0;
}


// G.c: In function 'main':
// G.c:4:16: warning: unknown escape sequence: '\s'
//      char x[] = "mohan\\\sohan";
//                 ^~~~~~~~~~~~~~~