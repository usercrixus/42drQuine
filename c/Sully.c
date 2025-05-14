#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int i = 5;

char *code = 
"#include <stdio.h>%c"
"#include <stdlib.h>%c"
"#include <unistd.h>%c"
"#include <fcntl.h>%c"
"int i = %d;%c"
"char *code = %c%s%c;%c"
"int main() {%c"
"    if (i <= 0)%c"
"        return 0;%c"
"    char filename[100];%c"
"    sprintf(filename, %cSully_%%d.c%c, i);%c"
"    int fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0644);%c"
"    if (fd < 0)%c"
"        return 1;%c"
"    dprintf(fd, code, 10, 10, 10, 10, i-1, 10, 34, code, 34, 10, 10, 10, 10, 10, 34, 34, 10, 10, 10, 10, 10, 10, 10, 34, 34, 10, 10, 10, 10, 34, 34, 10, 10, 10, 10, 10);%c"
"    close(fd);%c"
"    char compile_cmd[200];%c"
"    sprintf(compile_cmd, %cgcc -Wall -Wextra -Werror Sully_%%d.c -o Sully_%%d%c, i, i);%c"
"    system(compile_cmd);%c"
"    if (i > 0) {%c"
"        char exec_cmd[100];%c"
"        sprintf(exec_cmd, %c./Sully_%%d%c, i);%c"
"        system(exec_cmd);%c"
"    }%c"
"    return 0;%c"
"}%c";

int main() {
    if (i <= 0)
        return 0;

    char filename[100];
    sprintf(filename, "Sully_%d.c", i);

    int fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0644);
    if (fd < 0)
        return 1;

    dprintf(fd, code, 10, 10, 10, 10, i-1, 10, 34, code, 34, 10, 10, 10, 10, 10, 34, 34, 10, 10, 10, 10, 10, 10, 10, 34, 34, 10, 10, 10, 10, 34, 34, 10, 10, 10, 10, 10);
    close(fd);

    char compile_cmd[200];
    sprintf(compile_cmd, "gcc -Wall -Wextra -Werror Sully_%d.c -o Sully_%d", i, i);
    system(compile_cmd);

    if (i > 0) {
        char exec_cmd[100];
        sprintf(exec_cmd, "./Sully_%d", i);
        system(exec_cmd);
    }

    return 0;
}
