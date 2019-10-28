//
//  stack.cpp
//  CodingTest
//
//  Created by 이재준 on 28/10/2019.
//  Copyright © 2019 DevRappers. All rights reserved.
//
// 스택(Stack)
/*
 컴퓨터 공학에서 가장 기본이 되는 자료구조.
 스택은 택배 상하차를 생각하면 됨. 택배를 위에서 부터 한개씩 올려놓고 위에서 끄내니까
 즉 입구와 출구가 한개밖에 없을 경우
 
 알고리즘보다는 자료구조에 가까운 내용
*/

#include <iostream>
#include <stack>

using namespace std;

int main(void)
{
    stack<int> s;
    s.push(7);
    s.push(5);
    s.push(4);
    s.pop();
    s.push(6);
    s.pop();
    while(!s.empty()){
        cout << s.top() << ' ';
        s.pop();
    }
    printf("\n");
    return 0;
}
