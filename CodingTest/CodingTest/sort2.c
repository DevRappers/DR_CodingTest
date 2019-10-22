//
//  sort2.c
//  CodingTest
//
//  Created by 이재준 on 22/10/2019.
//  Copyright © 2019 DevRappers. All rights reserved.
//
/*
    버블 정렬(Bubble Sort)
    1 10 5 8 7 6 4 3 2 9
    버블 정렬 또한 선택정렬과 같이 몹시 직관적인 해결방법임. 바로 가까이에 있는 두 숫자끼리 비교를 해서 당장 더 작은 숫자를
    앞으로 보내주는 것을 반복함
 
    버블 정렬은 정렬 알고리즘 중에서 구현은 가장 쉽지만 가장 비효율적인 알고리즘임.
    [ 옆에 있는 값과 비교해서 더 작은 값을 앞으로 보내면 어떨까?]
 
    1 10 5 8 7 6 4 3 2 9
    1 5 8 7 6 4 3 2 9 10
    1 5 7 6 4 2 3 8 9 10
 
    이런식으로 맨 뒤에 값부터 정렬이 된다.
*/
#include <stdio.h>

int main(void){
    // 숫자 배열 선언
    int array[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};
    
    // 반복문값 i,j temp는 스와핑값
    int i, j, temp;
    
    // i는 몇번 돌았는지 확인함
    for(i = 0; i<10; i++){
        // j는 0부터 배열의 원소갯수 -1 -i를 해준 것까지 반복을 시킴
        for(j=0; j<9 -i;j++){
            // 왼쪽에 있는 값이 오른쪽보다 크다면 스와핑진행
            if(array[j] > array[j+1])
            {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
    
     // 출력
    for(int i=0;i<10;i++){
        printf("%d ",array[i]);
    }
    printf("\n");
    return 0;
}
