//
//  sort15.c
//  CodingTest
//
//  Created by 이재준 on 24/10/2019.
//  Copyright © 2019 DevRappers. All rights reserved.
//
// 계수 정렬 : 크기가 한정되어 있는 경우에 편함, 특정케이스에만 사용함
#include <stdio.h>

int main(void)
{
    int count[5];
    int array[30] = {
        1,3,2,4,3,2,5,3,1,2,
        3,4,4,3,5,1,2,3,5,2,
        3,1,4,3,5,1,2,1,1,1
    };
    
    // 돌면서 모두 0으로 설정해줌
    for(int i=0; i<5; i++)
    {
        count[i] = 0;
    }
    
    for(int i=0; i< 30;i ++)
    {
        count[array[i] - 1]++;
    }
    
    for(int i=0;i<5; i++)
    {
        if(count[i]!=0)
        {
            for(int j=0; j<count[i];j++)
            {
                printf("%d ", i+1);
            }
        }
    }
    
    printf("\n");
    
    return 0;
}
