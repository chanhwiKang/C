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
~~~

- 3자리수 곱하기 3자리수의 계산 괴정
~~~ c
#include <stdio.h>

int main(){
    int a, b;
    int result;

    printf("3자리 수 두개를 입력: ");
    scanf("%d %d", &a, &b);

    result=b%10;
    printf("%d\n", a*result);
    result=b/10%10;
    printf("%d\n", a*result);
    result=b/100;
    printf("%d\n", a*result);
    printf("%d\n", a*b);
    return 0;
}
