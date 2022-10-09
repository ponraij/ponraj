#include<stdio.h>
#include<time.h>

int main(){

    clock_t begin = clock();
    // your code
    clock_t end = clock();
    printf("code excecution time %f seconds.\n",(double)(end - begin)/CLOCKS_PER_SEC);
    return 0;

}
