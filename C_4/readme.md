# 4주차 C언어 실습

 - ++i 와 i++의 차이
 
 ~~~ c
 #include <stdio.h>

int main(){
    int i=10;

    printf("i=%d\n", i++); //i출력 후 +1진행, i=10
    printf("i=%d\n", i); // i=11

    printf("i=%d\n", ++i); //+1진행 후 출력, i=12
    return 0;
    
}
