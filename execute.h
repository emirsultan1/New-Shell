#ifndef EXECUTE_H
#define EXECUTE_H

#include <readline/readline.h>
#include <readline/history.h>

#define MAXCOM 1000 // max number of letters to be supported
#define MAXLIST 100 // max number of commands to be supported

// Function prototypes and any global variables
void init_shell();
int takeInput(char* str);
void execArgs(char** parsed);
void execArgsPiped(char** parsed, char** parsedpipe);
int processString(char* str, char** parsed, char** parsedpipe);
// Add other function prototypes as needed

#endif

