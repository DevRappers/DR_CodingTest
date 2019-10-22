//
//  sort7.c
//  CodingTest
//
//  Created by 이재준 on 22/10/2019.
//  Copyright © 2019 DevRappers. All rights reserved.
//

/*
    기초 정렬 문제 풀어보기
    백준 온라인 저지 : https://www.acmicpc.net 에 들어가면 좋음
    - 시간 복잡도 O(N^2)
    3. 100만개 정렬 : https://www.acmicpc.net/problem/2751
*/

#include <stdio.h>

int number, data[1000001];

void quickSort(int *data, int start, int end){
    if(start >= end){
        return;
    }
    int key = start;
    int i = start + 1;
    int j = end;
    int temp;
    while(i <= j){
        while(data[i]<= data[key])
        {
            i++;
        }
        while(data[j] >= data[key] && j>start)
        {
            j--;
        }
        if(i> j){
            temp = data[j];
            data[j] = data[key];
            data[key] = temp;
        }
        else{
            temp = data[j];
            data[j] = data[i];
            data[i] = temp;
        }
    }
    
    quickSort(data, start, j-1);
    quickSort(data, j+1, end);
}
int main(void)
{
    scanf("%d", &number);
    for(int i=0;i<number; i++)
    {
        scanf("%d", &data[i]);
    }
    quickSort(data, 0, number-1);
    
    for(int i =0; i<number; i++){
        printf("%d ", data[i]);
    }
    printf("\n");
    
    return 0;
}
