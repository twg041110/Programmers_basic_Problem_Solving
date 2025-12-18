#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int a, int b) {
    int answer = 0;
    
    char str1[20];
    char str2[20];
    
    sprintf(str1, "%d%d", a, b);
    sprintf(str2, "%d%d", b, a);
    
    int num1 = atoi(str1);
    int num2 = atoi(str2);
    
    if(num1>num2){
        answer = num1;
    } else{
        answer = num2;
    }
    return answer;
}