#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#define FILE_NAME "Grace_kid.c"
#define FT int main() { char *src = "#include <stdio.h>%c#include <fcntl.h>%c#include <unistd.h>%c#define FILE_NAME %cGrace_kid.c%c%c#define FT int main() { char *src = %c%s%c; int fd = open(FILE_NAME, O_CREAT | O_WRONLY | O_TRUNC, 0644); if (fd < 0) { perror(%copen failed%c); return (1); } dprintf(fd, src, 10, 10, 10, 34, 34, 10, 34, src, 34, 34, 34, 10, 10, 10, 10, 10); close(fd); return (0); }%c#define ENTRY FT%c/*%c * Grace will output herself into Grace_kid.c%c */%cENTRY"; int fd = open(FILE_NAME, O_CREAT | O_WRONLY | O_TRUNC, 0644); if (fd < 0) { perror("open failed"); return (1); } dprintf(fd, src, 10, 10, 10, 34, 34, 10, 34, src, 34, 34, 34, 10, 10, 10, 10, 10); close(fd); return (0); }
#define ENTRY FT
/*
 * Grace will output herself into Grace_kid.c
 */
ENTRY