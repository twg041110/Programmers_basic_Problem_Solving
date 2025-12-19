#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int a, int b) {
    int answer = 0;
    char num1[20];
    char num2[20];
    
    sprintf(num1,"%d%d", a, b);
    sprintf(num2,"%d", 2*a*b);
    
    int number1 = atoi(num1);
    int number2 = atoi(num2);
    if(number1>number2){
        answer = number1;
    } else{
        answer = number2;
    }
    return answer;
}