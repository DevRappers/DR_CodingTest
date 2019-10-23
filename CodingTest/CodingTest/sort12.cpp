//
//  sort12.cpp
//  CodingTest
//
//  Created by 이재준 on 23/10/2019.
//  Copyright © 2019 DevRappers. All rights reserved.
//
/*
    C++ STL sort()함수다루기 2
    클래스를 정의하는 방식은 프로그래밍 속도 측면에서 별로 유리하지 않음.
    실제 대회에서 문제 하나를 풀기 위해 클래스를 정의하고 있는 것은 적절치 못함.
    쉽게 클래스를 이용하는 방식은 실무에 적합한 방식이며, 일반적으로 프로그래밍 대회와 같이 빠른 개발이 필요할 때는
    페이(Pair) 라는 라이브러리를 사용하는 것이 더 효율적임.
 
    이렇게 소스코드의 길이를 짧게 해주는 기법을 숏코딩(Short Coding)이라고 하며 작성한 소스코드의 시간 복잡도가
    동일하다면 프로그래밍 대회에서는 소스코드가 짧을 수록 남들보다 앞서있을 수 있음.
 
    벡터(Vector) STL은 마치 배열과 같이 작동하는데 원소를 선택적으로 삽입(Push) 및 삭제(Pop)을 할 수 있음.
    즉 단순한 배열을 보다 사용하기 쉽게 개편한 자료구조라고 할 수 있음. 페어(Pair) STL은 한 쌍의 데이터를 처리할 수
    있도록 해주는 자료구조임.
*/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
    // pair란 한쌍의 데이터를 사용하기 위한 라이브러리
    vector<pair<int, string> > v;
    // vector에 데이터 삽입하기
    v.push_back(pair<int, string>(90, "박 한 울"));
    v.push_back(pair<int, string>(85, "이 태 일"));
    v.push_back(pair<int, string>(82, "나 동 빈"));
    v.push_back(pair<int, string>(98, "강 종 구"));
    v.push_back(pair<int, string>(79, "이 상 욱"));
    
    // begin은 시작 end는 끝을 의미함.
    sort(v.begin(), v.end());
    
    // vector의 크기 총 몇개의 데이터가 들어가 있는지
    for(int i = 0; i<v.size(); i++)
    {
        // second는 두번째 데이터를 의미
        cout << v[i].second << ' ';
    }
    printf("\n");
    
    return 0;
    
}
