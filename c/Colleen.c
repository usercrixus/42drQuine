#include <stdio.h>

/*
This is a comment outside main.
*/

void helper() {
    // This is a comment inside helper function
}

int main(void) {
    /*
    Comment inside main
    */
    char *src = "#include <stdio.h>%c%c/*%cThis is a comment outside main.%c*/%c%cvoid helper() {%c    // This is a comment inside helper function%c}%c%cint main(void) {%c    /*%c    Comment inside main%c    */%c    char *src = %c%s%c;%c    printf(src, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 34, src, 34, 10, 10, 10, 10, 10);%c    helper();%c    return 0;%c}%c";
    printf(src, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 34, src, 34, 10, 10, 10, 10, 10);
    helper();
    return 0;
}
