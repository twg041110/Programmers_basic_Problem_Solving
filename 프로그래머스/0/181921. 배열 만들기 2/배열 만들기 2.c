#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int l, int r) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int count = 0;
    for(int i = l;i<=r;i++){
        int temp = i;
        bool is_ok = true;
        
        while(temp>0){
            if(temp % 10 != 5 && temp % 10 != 0){
                is_ok = false;
                break;
            }
            temp /= 10;
        }
        if(is_ok){
            count++;
        }
    }
    if(count == 0){
        int* answer = (int*)malloc(sizeof(int)*1);
        answer[0] = -1;
        return answer;
    }
    int* answer = (int*)malloc(sizeof(int)*count);
    int idx = 0;
    for(int i = l;i<=r;i++){
        int temp = i;
        bool is_ok = true;
        
        while(temp>0){
            if(temp % 10 != 5 && temp % 10 != 0){
                is_ok = false;
                break;
            }
            temp /=10;
        }
        if(is_ok){
            answer[idx] = i;
            idx++;
        }
    }
    
    return answer;
}