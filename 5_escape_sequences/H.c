#include <stdio.h>
int main(){

    char x[] = "mohan
    sohan";

    printf("%s",x);

    return 0;
}

// H.c: In function 'main':
// H.c:4:16: warning: missing terminating " character
//      char x[] = "mohan
//                 ^
// H.c:4:16: error: missing terminating " character
//      char x[] = "mohan
//                 ^~~~~~
// H.c:5:10: warning: missing terminating " character
//      sohan";
//           ^
// H.c:5:10: error: missing terminating " character
//      sohan";
//           ^~
// H.c:5:5: error: 'sohan' undeclared (first use in this function)
//      sohan";
//      ^~~~~
// H.c:5:5: note: each undeclared identifier is reported only once for each function it appears in
// H.c:7:5: error: expected ',' or ';' before 'printf'
//      printf("%s",x);
//      ^~~~~~