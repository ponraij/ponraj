#include <stdio.h>

int main()
{
    printf("hello, world\n");
}

// Compile, then run `./a.out 1>stdout.txt 2>stderr.txt`
// Then run `echo $?`
// stdout.txt should contain "hello, world"
// stderr.txt should be empty
// Your `echo $?` command should return 0