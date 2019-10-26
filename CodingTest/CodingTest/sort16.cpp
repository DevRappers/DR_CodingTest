//
//  sort16.cpp
//  CodingTest
//
//  Created by 이재준 on 26/10/2019.
//  Copyright © 2019 DevRappers. All rights reserved.
//
//1. 단어 정렬문제 : https://www.acmicpc.net/problem/1181

#include <iostream>
#include <algorithm>

using namespace std;

string a[20000];
int n;

// 자기자신이 a 비교할 문자열 b
bool compare(string a, string b)
{
    // 길이가 짧은 순서 우선
    if(a.length() < b.length()){
        return 1;
    }
    else if(a.length() > b.length()){
        return 0;
    }
    
    // 길이가 같은 경우라면 사전순으로 정렬
    else{
        return a<b; //  자동으로 사전순으로 비교됨
    }
}


int main(void)
{
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    
    sort(a, a+n, compare);
    for(int i=0;i<n;i++){
        // 동일한 단어의 경우 psss
        if(i > 0 && a[i] == a[i-1])
        {
            continue;
        }
        else{
            cout << a[i] << '\n';
        }
    }
    
    return 0;
}
