#include <stdio.h>

int main(){

    //char x = 'A';
    //char x = 'a';
    char x = ' ';
    //char x = '&';
    //char x = ''';

    printf("-%c-",x);

    return 0;
}



// A.c: In function 'main':
// A.c:9:14: error: empty character constant
//      char x = ''';
//               ^~
// A.c:9:16: warning: missing terminating ' character
//      char x = ''';
//                 ^
// A.c:9:16: error: missing terminating ' character
//      char x = ''';
//                 ^~
// A.c:11:5: error: expected ',' or ';' before 'printf'
//      printf("-%c-",x);
//      ^~~~~~