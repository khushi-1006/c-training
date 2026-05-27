#include <stdio.h>

int main(){

    char x[] = "am*%\n T\yy2";

    printf("%s",x);

    return 0;
}




// Z.c: In function 'main':
// Z.c:5:16: warning: unknown escape sequence: '\y'
//      char x[] = "am*%\n T\yy2";
//                 ^~~~~~~~~~~~~~