#include <stdio.h>
int main(){
    int a = 23;
    int a = 32;

    return 0;
}

// L.c: In function 'main':
// L.c:4:9: error: redefinition of 'a'
//      int a = 32;
//          ^
// L.c:3:9: note: previous definition of 'a' was here
//      int a = 23;