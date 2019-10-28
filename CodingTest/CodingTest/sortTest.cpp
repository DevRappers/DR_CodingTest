//
//  sortTest.cpp
//  CodingTest
//
//  Created by 이재준 on 28/10/2019.
//  Copyright © 2019 DevRappers. All rights reserved.
//
// 복습해보기
// 선택정렬 : 가장 작은 것을 선택해서 맨앞으로 옮기는 것 - 통과
// 버블정렬 : 자기 오른쪽값과 비교하고 위치를 바꿔줌 - 통과
// 삽입정렬 : 자기가 들어갈 위치를 찾고 그위치로 들어감 - 통과
// 퀵정렬 : 빠른 정렬 알고리즘으로 분할 병합을 진행함 - 통과
// 병합정렬 : 다 분해하고 새로 병합하는 알고리즘 - 통과
// 힙정렬 : 힙구조를 만들면서 정렬하는 알고리즘 - 통과
// 계수정렬 : 크기를 기준으로 갯수를 세는 정렬
// 문제1 : https://www.acmicpc.net/problem/2750 - 통과
// 문제2 : https://www.acmicpc.net/problem/2752 - 통과
// 문제3 : https://www.acmicpc.net/problem/2751 - 통과 (퀵정렬)
// 문제4 : https://www.acmicpc.net/problem/1181 - 통과
// 문제5 : https://www.acmicpc.net/problem/1431 - 통과
// 문제6 : https://www.acmicpc.net/problem/10989 - 통과
// cpp익히기1 - sort함수쓰기 - 통과
// cpp익히기2 - compare - 통과

#include <iostream>

int n, a[10001], m;

using namespace std;

int main(void)
{
    cin >> n;
    for(int i=0; i <n; i++)
    {
        cin >> m;
        a[m] ++;
    }
    
    for(int i=0; i<10001; i++)
    {
        while(a[i] != 0)
        {
            printf("%d\n", i);
            a[i]--;
        }
    }
    
    return 0;
}

