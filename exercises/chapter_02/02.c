/* 
    Consider the following program:
    
    a) Identify the directives and statements in this program. 

        1) The directive is the "#include <stdio.h> statement"
        2) The statemetns are the "printf" and "return" statements
    
    b) What output does this program produce? 

        1) The program writes Parkinson's Law on separate new-lines
    */

#include <stdio.h>

int main(void)
{
    printf("Parkinson's Law:\nWork expands so as to ");
    printf("fill the time\n");
    printf("available for its completion.\n");
    return 0;
}