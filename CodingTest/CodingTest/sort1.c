//
//  sort1.c
//  CodingTest
//
//  Created by 이재준 on 22/10/2019.
//  Copyright © 2019 DevRappers. All rights reserved.
//
/*
*선택정렬
 - 정렬만큼 알고리즘의 효율성 차이를 극명하게 보여주는 것이 없음.

 다음의 숫자들을 오름차순으로 정렬하는 프로그램을 작성하세요
 1 10 5 8 7 6 4 3 2 9
 
 [가장 작은 것을 선택해서 제일 앞으로 보내는 방법인 선택정렬]
 1 10 5 8 7 6 4 3 2 9
 1 2 5 8 7 6 4 3 10 9
 1 2 3 8 7 6 4 5 10 9
 1 2 3 4 7 6 8 5 10 9
 이런식으로 가장 작은것을 찾아내어 맨앞의 원소랑 교체함
 
 선택정렬의 시간 복잡도 (수행시간)
 10 + 9 + 8 + .. +1
 => 10 * (10+1) /2 = 55
 => N * (N+1) /2
 => O(N*N) : 빅오표기법을 사용함 / 특정한 알고리즘의 수행시간을 가장 간략하게 표현하는것이 빅오표기법임 / *빼고 다버림
 => O(N^2) : 무척 시간이오래걸리는 시간복잡도
*/
#include <stdio.h>

int main(void){
    // i와 j는 반복문을 위한 원소값 변수이며 min은 최소값을 위한 변수 index는 같은 작은 원소가 존재하는 위치 temp는 숫자를 변경할 때 필요함
    int i, j, min, index, temp;
    int array[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};
    for(i = 0; i< 10; i++){
        min = 9999; // 아주 큰값을 넣어줌
        for(j = i; j<10; j++){
            // 최소값을 비교해주고 가장 작은 값을 찾아줌
            if(min> array[j]){
                // 최소값은 array[j]가 들어가게 되고 index는 j의 번호값으로 설정해줌
                min = array[j];
                index = j;
            }
        }
        // 양쪽값을 변경함 스와핑
        temp = array[i];
        array[i] = array[index];
        array[index] = temp;
    }
    
    // 출력
    for(int i=0;i<10;i++){
        printf("%d ",array[i]);
    }
    printf("\n");
    
    return 0;
}
