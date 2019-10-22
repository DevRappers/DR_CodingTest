//
//  sort6.c
//  CodingTest
//
//  Created by 이재준 on 22/10/2019.
//  Copyright © 2019 DevRappers. All rights reserved.
//

/*
    기초 정렬 문제 풀어보기
    백준 온라인 저지 : https://www.acmicpc.net 에 들어가면 좋음
    - 시간 복잡도 O(N^2)
    2. 세 숫자 정렬 : https://www.acmicpc.net/problem/2752
    
    첫째 줄에 수의 개수 N(1 ≤ N ≤ 1,000,000)이 주어진다. 둘째 줄부터 N개의 줄에는 숫자가 주어진다. 이 수는 절댓값이 1,000,000보다 작거나 같은 정수이다. 수는 중복되지 않는다.
    100만개일 경우에는 무조건 O(n*logn)으로 풀어야함. 시간제한이 1초이기 때문에
    퀵정렬같은 경우에는 nlogn이 최악에 경우 안되기 때문에 원래는 힙정렬 병합정렬로 풀어야하지만 지금은 퀵정렬로 풀거임
*/


#include <stdio.h>

// 데이터의 갯수가 3개
int array[3];

int main(void)
{
    int i, j, min, index, temp;
    for(i = 0; i<3 ; i++){
        scanf("%d",&array[i]);
    }
    for(i = 0; i<3; i++){
        // 절대 값이 1000보다 작거나 같은 정수이기 때문에 최솟값을 1001로 설정함
        min = 1000001;
        for(j = i; j<3;j++){
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
    for(int i=0;i<3;i++){
        printf("%d ",array[i]);
    }
    printf("\n");
    
    return 0;
}
