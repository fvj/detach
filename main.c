#include <stdio.h>
#include <unistd.h>

int main(int argc, char **argv, char **envp) {
  if(argc < 2) {
    printf("usage: %s <program> [<argument-1> <argument-n>]\n", argv[0]);
    return 1;
  }
  if(fork() == 0) {
    int i;
    char *arguments[argc - 1];

    arguments[0] = argv[1];

    for(i = 1; i < argc - 1; i++)
      arguments[i] = argv[i+1];
    arguments[i] = NULL;

    for(i = 0; i < argc - 1; i++)
      printf("%d: %s\n", i, arguments[i]);

    return execvp(argv[1], arguments);
  }
  return 0;
}
