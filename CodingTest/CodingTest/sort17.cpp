//
//  sort17.cpp
//  CodingTest
//
//  Created by 이재준 on 26/10/2019.
//  Copyright © 2019 DevRappers. All rights reserved.
//
//2. 단어 정렬문제 : https://www.acmicpc.net/problem/1431

#include <iostream>
#include <algorithm>

using namespace std;

string a[20000];
int n;

int getSum(string a)
{
    int length = a.length(), sum=0;
    for(int i=0; i<length; i++)
    {
        // 숫자인 경우에만 더함
        if(a[i] - '0' <= 9 && a[i] - '0' >= 0)
        {
            sum += a[i] - '0';
        }
    }
    return sum;
}

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
    
    else{
        int aSum = getSum(a);
        int bSum = getSum(b);
        // 글자에 포함된 숫자의 합이 다르다면 사전순으로 정렬
        if(aSum != bSum){
            return aSum <bSum;
        }
        else{
            return a<b;
        }
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



