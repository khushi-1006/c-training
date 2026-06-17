#include <stdio.h>
int main(){

    int 2abc = 120;

    printf("%d",2abc);

    return 0;
}

// D.c: In function 'main':
// D.c:4:9: error: invalid suffix "abc" on integer constant
//      int 2abc = 120;
//          ^~~~
// D.c:4:9: error: expected identifier or '(' before numeric constant
// D.c:6:17: error: invalid suffix "abc" on integer constant
//      printf("%d",2abc);
//                  ^~~~