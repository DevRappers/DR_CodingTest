//
//  sort3.c
//  CodingTest
//
//  Created by 이재준 on 22/10/2019.
//  Copyright © 2019 DevRappers. All rights reserved.
//
/*
    삽입정렬(Insertion Sort)
    시간복잡도는 선택정렬, 버블정렬과 같음
 
    [각 숫자를 적절한 위치에 삽입하면 어떨까?]
    삽입 정렬은 문제를 풀 때 각 숫자를 적절한 위치에 삽입하는 방법으로 문제를 해결함
    다른 정렬 방식들은 무조건 위치를 바꾸는 방식이었다면 삽입 정렬은 '필요할 때만' 위치를 바꿈.
    
    앞의 원소들이랑 비교를 해줌 자신이 들어갈 자리를 찾음 6이라면 6앞의 적절한 위치를 찾아서 들어가는 방식
    1 10 5 8 7 6 4 3 2 9
    1 2 3 4 5 6 7 8 9 10
 
    시간복잡도는
    O(N^2)이지만 실제로는 삽입정렬의 연산횟수가 가장 적게일어남
 
    거의 정렬된 상태의 데이터를 정렬할 경우에는 삽입정렬이 엄청나게 빠름
*/
#include <stdio.h>

int main(void){
    // 반복문 원소, temp는 스와핑용
    int i, j, temp;
    int array[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};
    
    for(i =0; i<9; i++){
        j=i;
        // 항상 왼쪽은 정렬이 되어있다고 생각하기때문에 자기자신이 왼쪽에 있는 값보다 크다면 거기서 멈춤
        while(array[j] > array[j+1])
        {
            temp = array[j];
            array[j] = array[j+1];
            array[j+1] = temp;
            j--;
        }
    }
    
     // 출력
     for(int i=0;i<10;i++){
         printf("%d ",array[i]);
     }
     printf("\n");
    
    return 0;
}
