#include <stdio.h>

int main()
{
    fprintf(stdout, "hello, world\n");
    fprintf(stderr, "this is an error\n");
    return 1;
}

// Compile, then run `./a.out 1>stdout.txt 2>stderr.txt`
// Then run `echo $?`
// stdout.txt should contain "hello, world"
// stderr.txt should contain "this is an error"
// Your `echo $?` command should return 1