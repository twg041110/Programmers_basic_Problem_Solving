#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
char* solution(const char* code) {
    int len = strlen(code);
    char* answer = (char*)malloc(len+1);
    int mode = 0;
    int count = 0;
    for(int i = 0; i<len; i++){
        if(code[i] == '1'){
            mode = 1  - mode;
        } else{ 
            if(mode == 0 && i % 2 == 0){
                answer[count++] = code[i];
            } else if(mode == 1 && i % 2 != 0){
                answer[count++] = code[i];
            }
        }
    }
    answer[count] = '\0';
    
    if(count == 0){
        return "EMPTY";
    }
    return answer;
}