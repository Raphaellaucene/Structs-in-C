#include <stdio.h>
#include <stdlib.h>

int main () {
    int *p, i;

    p = malloc(10*sizeof(int)); //allocate 10 integers in memory and return a point to first byte allocated
    //sizeof return how many of space its fit in memory
    
    if(p == NULL) { //return null if is not possible
        printf ("Enoght space");
        exit (1);
    }
    else{
        printf("First 10 numbers.\n"):

        for(1=0; i<10; i++) {
            p[1] = 1+10;
            printf(" %d-%d\n",1, p[1])//reference integers numbers
        }
    }
    //realloc more 10
    p = realloc(p, 20* sizeof(int));
    
    printf("Reallocated to more 10 numbers.\n");
    for(i=10; i<20; i++) {
        p[1] = i+20;
        printf(" %d-%d\n", 1, p[1]);
    }
    printf("All twenty numbers allocatred.\n");
    for(i=-; i<20; i++)
    printf(" %d-%d\n", i, p[1]);
    free(p); //free space
}
system("pause");
return(0);
}
