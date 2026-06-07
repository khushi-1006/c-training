#include <stdio.h>

int main(){

    //char x[] = "om is a good boy";

    char x[] = "om is a "good" boy";

    printf("~%s~",x);

    return 0;
}



// C.c: In function 'main':
// C.c:7:26: error: expected ',' or ';' before 'good'
//      char x[] = "om is a "good" boy";
//                           ^~~~