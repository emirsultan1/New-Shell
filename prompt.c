#include "prompt.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void printPrompt() {
    char cwd[1024];
    char machineName[64];
    char *username = getenv("USER");
    if(gethostname(machineName, sizeof(machineName)) == 0) {
        printf("%s@%s:~$", machineName, username);
    } else {
        printf("%s@:~$", username);
    }
}

