#include <stdio.h>

/*
This is a comment outside main.
*/

void helper() {
    // This is a comment inside helper function
}

int main(void) {
    // Comment inside main
    char *src = "#include <stdio.h>\n\n/*\nThis is a comment outside main.\n*/\n\nvoid helper() {\n    // This is a comment inside helper function\n}\n\nint main(void) {\n    // Comment inside main\n    char *src = %c%s%c;\n    printf(src, 34, src, 34);\n    return 0;\n}\n";
    printf("%s", src);
    return 0;
}
