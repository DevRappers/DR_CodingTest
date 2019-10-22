//
//  sort5.c
//  CodingTest
//
//  Created by 이재준 on 22/10/2019.
//  Copyright © 2019 DevRappers. All rights reserved.
//
/*
    기초 정렬 문제 풀어보기
    백준 온라인 저지 : https://www.acmicpc.net 에 들어가면 좋음
    - 시간 복잡도 O(N^2)
    1. 단순정렬 : https://www.acmicpc.net/problem/2750
    첫째 줄에 수의 개수 N(1 ≤ N ≤ 1,000)이 주어진다. 둘째 줄부터 N개의 줄에는 숫자가 주어진다. 이 수는 절댓값이 1,000보다 작거나 같은 정수이다. 수는 중복되지 않는다.
    선택정렬로 풀어보기
 
*/
#include <stdio.h>

// 데이터의 갯수가 1000개까지니까 1001로 설정. 왠만해선 1을 더해주는게 편함
int array[1001];

int main(void)
{
    int number, i, j, min, index, temp;
    scanf("%d", &number);
    for(i = 0; i<number ; i++){
        scanf("%d",&array[i]);
    }
    for(i = 0; i<number; i++){
        // 절대 값이 1000보다 작거나 같은 정수이기 때문에 최솟값을 1001로 설정함
        min = 1001;
        for(j = i; j<number;j++){
            if(min > array[j]){
                min = array[j];
                index = j;
            }
        }
        temp = array[i];
        array[i] = array[index];
        array[index] = temp;
    }
    
    // 출력
    for(int i=0;i<number;i++){
        printf("%d ",array[i]);
    }
    printf("\n");
    
    return 0;
}
