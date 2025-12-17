#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* my_string, int k){
    int len = strlen(my_string);
    char* answer = (char*)malloc(sizeof(char) * (len * k + 1));
    for(int i = 0; i<k; i++){
        strcpy(answer + (i* len), my_string);
    }
    return answer;
}