//
//  sort9.cpp
//  CodingTest
//
//  Created by 이재준 on 23/10/2019.
//  Copyright © 2019 DevRappers. All rights reserved.
//
/*
    C++ STL sort() 함수 다루기 1
    정렬은 컴퓨터 공학의 오래된 연구 분야이므로 이미 아주 훌륭한 정렬 관련 라이브러리가 존재하고, 굳이 우리가
    만들 필요 없이 가져다 쓰면 됨. 물론 내부 정렬 원리를 모르고 무작정 라이브러리를 가져다 쓰는 것은 옳지 못함)
*/
// sort라이브러리를 사용하기 위해서는 c++문법을 사용해야함.
// c++ 에서는 다양한 STL라이브러리를 제공함.
#include <iostream>
#include <algorithm>

using namespace std; // 이 문장은 표준 네임스페이스를 사용하겠다는 의미입니다.


int main(void){
    int a[10] = {9, 3, 5, 4, 1, 10, 8, 6, 7, 2};
    
    // sort(메모리주소, 정렬할 마지막 원소가 있는 메모리 주소를 넣어줌 : 정렬할 데이터의 갯수)
    sort(a, a+10);
    
    for(int i=0; i<10; i++)
    {
        cout << a[i] << ' ';
        //printf("%d ", a[i]);
    }
    
    printf("\n");
}
