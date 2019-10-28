//
//  queue.cpp
//  CodingTest
//
//  Created by 이재준 on 28/10/2019.
//  Copyright © 2019 DevRappers. All rights reserved.
//
// 큐(Queue)
/*
 큐는 먼저 들어온 것이 먼저 나가는 (First In First Out, FIFO)구조를 가지고 있음
 은행창구를 떠올리면 됨 : 먼저 번호표를 뽑은 사람이 먼저 서비스를 받게 됨.
*/
#include <iostream>
#include <queue>

using namespace std;

int main(void)
{
    queue<int> q;
    q.push(7);
    q.push(5);
    q.push(4);
    q.pop();
    q.push(6);
    q.pop();
    
    while(!q.empty()){
        cout << q.front() << ' ';
        q.pop();
    }
    printf("\n");
    
    return 0;
}
