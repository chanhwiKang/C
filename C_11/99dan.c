#include <stdio.h> 

int main(){

    int input1, input2;
    while(1){
        scanf("%d %d", &input1, &input2);

        if(((input1 < 2) || (input1 > 9))||((input2 < 2) || (input2 > 9))){
            printf("INPUT ERROR!\n");
        }
        else {
            break; 
        }
    }
    
    if(input1 > input2){
        printf("dds");
        for(int i=1; i<=9; i++){
            for(int j=input1; j>=input2; j--){
                printf("%d * %d = %2d   ", j, i, i*j);
            }
            printf("\n");
        }
    }else if(input2 > input1){
        for(int i=1; i<=9; i++){
            for(int j=input1; j<=input2; j++){
                printf("%d * %d = %2d   ", j, i, i*j);
            }
            printf("\n");
        }
    }else {
        for(int j=1; j<=9; j++){
                printf("%d * %d = %2d\n", input1, j, input1*j);
            }
    }
    return 0;
}