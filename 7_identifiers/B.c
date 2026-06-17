#include <stdio.h>
int main(){

    int Mw5~7Uy = 120;

    printf("%d",Mw5~7Uy);

    return 0;
}


// B.c: In function 'main':
// B.c:4:12: error: expected '=', ',', ';', 'asm' or '__attribute__' before '~' token
//      int Mw5~7Uy = 120;
//             ^
// B.c:4:13: error: invalid suffix "Uy" on integer constant
//      int Mw5~7Uy = 120;
//              ^~~
// B.c:6:17: error: 'Mw5' undeclared (first use in this function)
//      printf("%d",Mw5~7Uy);
//                  ^~~
// B.c:6:17: note: each undeclared identifier is reported only once for each function it appears in
// B.c:6:20: error: expected ')' before '~' token
//      printf("%d",Mw5~7Uy);
//                     ^
// B.c:6:21: error: invalid suffix "Uy" on integer constant
//      printf("%d",Mw5~7Uy);
//                      ^~~