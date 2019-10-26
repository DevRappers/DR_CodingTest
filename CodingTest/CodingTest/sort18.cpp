//
//  sort18.cpp
//  CodingTest
//
//  Created by 이재준 on 26/10/2019.
//  Copyright © 2019 DevRappers. All rights reserved.
//
//3. 매우 빠르게 정렬하기 : https://www.acmicpc.net/problem/10989

#include <iostream>

using namespace std;

int n;
int a[10001];

int main(void)
{
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        int x;
        scanf("%d", &x);
        a[x]++;
    }
    for(int i=0;i<10001;i++){
        while(a[i] != 0)
        {
            printf("%d\n", i);
            a[i]--;
        }
    }
}
