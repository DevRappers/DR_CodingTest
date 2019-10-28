//
//  sort14.c
//  CodingTest
//
//  Created by 이재준 on 24/10/2019.
//  Copyright © 2019 DevRappers. All rights reserved.
//
// 힙정렬
#include <stdio.h>

// 데이터의 갯수
int number = 9;
int heap[9] = {7,6,5,8,3,5,9,1,6};

int main(void)
{
    // heap구조 만들기 먼저 전체 트리 구조를 최대 힙 구조로 바꿈
    for(int i=1;i<number;i++)
    {
        // 자식원소
        int c = i;
        do{
            // -1의 한다음 2를 나누면 특정한 원소의 부모를 가르킴
            int root = (c-1) /2;
            // 자식의 값이 부모노드보다 클경우 값을 서로 바꿔줌
            if(heap[root] < heap[c])
            {
                int temp = heap[root];
                heap[root] = heap[c];
                heap[c] = temp;
            }
            // 반복적으로 자식이 부모노드가됨;
            c = root;
        }while( c!= 0);
    }
    
    // 크기를 줄여가며 반복적으로 힙을 구성
    for(int i= number-1; i>=0; i--)
    {
        // 전체 트리의 루트노드와 마지막 노드를 바꿔줌
        // 제일 큰값이기 때문에 맨뒤로 보내줌
        int temp = heap[0];
        heap[0] = heap[i];
        heap[i] = temp;
            
        int root = 0;
        int c=1;
        do{
            // c는 루트의 자식이 됨
            c = 2 * root +1;
            // 자식 중에 더 큰 값을 찾기 / c가 범위를 벗어나지 않도록
            if(heap[c] < heap[c+1] && c < i-1){
                c++;
            }
            // 루트보다 자식이 더 크다면 교환
            if(heap[root] < heap[c] && c <i)
            {
                int temp = heap[root];
                heap[root] = heap[c];
                heap[c] = temp;
            }
            root = c;
        }while(c < i);
    }
    
    for(int i=0; i<number; i++)
      {
          printf("%d ",heap[i]);
      }
      printf("\n");
}
