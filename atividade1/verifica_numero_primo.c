#include <stdio.h>

int main(){
    int num, i;

    printf("Insira um numero:\n");
    scanf("%d", &num);

    if(num <= 1){
        printf("Nao e primo!");
    }else{
        for(i=2; i < num; i++){
            if(num%i==0){
                printf("Nao e primo!");
                break;
            }
        }
        if(i==num){
            printf("E primo!");
        }
    }
}
