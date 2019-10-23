//
//  sort13.cpp
//  CodingTest
//
//  Created by 이재준 on 23/10/2019.
//  Copyright © 2019 DevRappers. All rights reserved.
//
/*
    - 학생을 나타낼 수 있는 정보가 이름, 성적, 생년월일 일때 학생을 성적 순서대로 나열하고자 한다. 다만
      성적이 동일한 경우 나이가 더 어린 학생이 더 우선순위가 높다.

*/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<string, pair<int, int> > a, pair<string, pair<int, int> > b)
{
    // 성적이 같다면
    if(a.second.first == b.second.first){
        // 생년월일 비교
        return a.second.second > b.second.second;
    }else{
        return a.second.first > b.second.first;
    }
}

int main(void)
{
    vector<pair<string, pair<int, int> > > v;
    v.push_back(pair<string, pair<int, int> >("나동빈", pair<int, int>(90, 19961222)));
    v.push_back(pair<string, pair<int, int> >("이태일", pair<int, int>(97, 19930518)));
    v.push_back(pair<string, pair<int, int> >("박한울", pair<int, int>(95, 19930203)));
    v.push_back(pair<string, pair<int, int> >("이상욱", pair<int, int>(90, 19921207)));
    v.push_back(pair<string, pair<int, int> >("강종구", pair<int, int>(88, 19900302)));
    
    sort(v.begin(), v.end(), compare);
    
    // vector의 크기 총 몇개의 데이터가 들어가 있는지
    for(int i = 0; i<v.size(); i++)
    {
        cout << v[i].first << ' ';
    }
    printf("\n");
}
