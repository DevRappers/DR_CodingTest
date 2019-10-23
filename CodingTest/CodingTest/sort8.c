//
//  sort8.c
//  CodingTest
//
//  Created by 이재준 on 23/10/2019.
//  Copyright © 2019 DevRappers. All rights reserved.
//
/*
    병합정렬
    시간복잡도가 O(N*logN)의 시간복잡도를 가짐.
    분할 정복 방법을 채택한 알고리즘
    
    다만 퀵 정렬은 이미 정렬이 되어있는경우 편항되게 분할할 가능성이 있다는 최악의 경우 O(N*N)이지만
    병합정렬은 항상 O(N*logN)을 보장함.
 
    다음의 숫자들을 오름차순으로 정렬하는 프로그램을 작성하시오.
    7, 6, 5, 8, 3, 5, 9, 1
    
    병합 정렬은 하나의 큰 문제를 두 개의 작은 문제로 분할한 뒤에 각자 계산하고 나중에 합치는 방법을 채택함
    일단 반으로 나누고 나중에 합쳐서 정렬하면 어떨까?
    7 6 5 8 3 5 9 1 을 다 쪼갠다.
    67 58 35 91 을 합친다 2의 배수로
    5678 1359 를 합친다.
    13556789를 합친다.
 
    병합정렬은 기존의 데이터를 담을 추가적인 배열 공간이 필요하다는 점에서 메모리 활용이 비효율적이라는 문제가 있음
*/
#include <stdio.h>

// 정렬할 데이터의 갯수
int number = 8;
// 정렬 배열은 반드시 전역변수로 만들어줘야함.
int sorted[8];

// a[] : 배열, m은 시작점, middle은 중간연결부분, n은 끝점
void merge(int a[], int m, int middle, int n){
    /*      i  j
            67 58
    */
    // 1번배열의 시작 인덱스값
    int i = m;
    // 2번배열의 시작 인덱스값
    int j = middle +1;
    // 새로운 배열의 인덱스값
    int k = m;
    // 작은 순서대로 배열에 삽입
    while(i <= middle && j <= n)
    {
        if(a[i] <= a[j])
        {
            sorted[k] = a[i];
            i++;
        }
        else{
            sorted[k] = a[j];
            j++;
        }
        k++;
    }
    // 남은 데이터도 삽입
    if(i > middle){
        for(int t=j; t<=n; t++)
        {
            sorted[k] = a[t];
            k++;
        }
    }
    else{
        for(int t = i; t<=middle; t++)
        {
            sorted[k] = a[t];
            k++;
        }
    }
    
    // 정렬된 배열을 삽입함
    for(int t=m; t<=n; t++){
        a[t] = sorted[t];
    }
}

void mergeSort(int a[], int m, int n){
    // 크기가 1보다 큰 경우
    if(m < n){
        // 중앙값
        int middle = (m+n)/2;
        mergeSort(a, m, middle);
        mergeSort(a, middle+1, n);
        merge(a, m, middle, n);
    }
}

int main(void)
{
    int array[8] = {7, 6, 5, 8, 3, 5, 9, 1};
    mergeSort(array, 0, number-1);
    
    for(int i=0;i<number;i++)
    {
        printf("%d ", sorted[i]);
    }
    printf("\n");
    
    return 0;
}
