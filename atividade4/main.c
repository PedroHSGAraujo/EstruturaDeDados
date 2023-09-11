#include <stdio.h>
#include <stdlib.h>
#include "bubble_sort.h"

int main(int argc, char const *argv[]){

    // int arr_inteiros[] = {54, 26, 93, 17, 77, 31, 44, 55, 20};
    int con[argc-1];
    int n = argc-1;
    int i = 0;

    for (i = 1; i < argc ; i++){
        con[i-1] = atoi(argv[i]);
    }
    

    for (i = 0; i < n; i++){
        printf("%d ", con[i]);
    }
    
    bubble_sort(con, n);
    printf("\n");
    for (i = 0; i < n; i++){
        printf("%d ", con[i]);
    }

    exit(0);
}
