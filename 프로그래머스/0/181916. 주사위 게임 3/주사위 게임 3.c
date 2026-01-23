#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int a, int b, int c, int d) {
    int counts[7] = {0};
    counts[a]++;
    counts[b]++;
    counts[c]++;
    counts[d]++;
    
    for(int i = 1;i<= 6; i++){
        if(counts[i] == 4){
            return 1111 * i;
        }
        if(counts[i] == 3){
            for(int j = 1;j<=6;j++){
                if(counts[j] == 1){
                    return (10 * i + j) * (10 * i + j);
                }
            }
        }
        if(counts[i] == 2){
            for(int j = 1;j<=6;j++){
                if(i == j) continue;
                if(counts[j] == 2){
                    return (i+j) * abs(i-j);
                }
            }
            int answer = 1;
            for(int k =1;k<=6;k++){
                if(k != i && counts[k] == 1){
                    answer *= k;
                }
            }
            return answer;
        }
    }
    for(int i = 1;i<=6;i++){
        if(counts[i] > 0){
            return i;
        }
    }
    return  0;
}