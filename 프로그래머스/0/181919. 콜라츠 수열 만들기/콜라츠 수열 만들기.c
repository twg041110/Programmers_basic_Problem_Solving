#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int n) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int count = 1;
    int temp = n;
    while(temp != 1){
        if(temp % 2 == 0){
            temp /=2;
    } else{
        temp = 3 * temp + 1;
    }
    count++;
}
int* answer = (int*)malloc(sizeof(int)*count);
temp = n;
int idx = 0;
answer[idx] = temp;
idx++;
while(temp != 1){
    if(temp % 2 == 0){
        temp /=2;
    } else{
        temp = 3 * temp + 1;
    }
answer[idx] = temp;
idx++;
    }
    return answer;
}