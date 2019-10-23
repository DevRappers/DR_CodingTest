//
//  sort10.cpp
//  CodingTest
//
//  Created by 이재준 on 23/10/2019.
//  Copyright © 2019 DevRappers. All rights reserved.
//
// 의도한 대로 cpp STL라이브러리 써서 정렬하기
#include <iostream>
#include <algorithm>

using namespace std;

bool compare(int a, int b)
{
    // 오름차순 정렬을 의미함
    // a>b 내림차순으로 정렬이 됨
    return a < b;
}

int main(void)
{
    int a[10] = {9, 3, 5, 4, 1, 10, 8, 6, 7, 2};
    sort(a ,a+10, compare);
    for(int i=0; i<10; i++)
    {
        cout << a[i] << ' ';
    }
    printf("\n");
}
