//
//  sort11.cpp
//  CodingTest
//
//  Created by 이재준 on 23/10/2019.
//  Copyright © 2019 DevRappers. All rights reserved.
//
// 학생의 점수대로 정렬하기
#include <iostream>
#include <algorithm>

using namespace std;

// Student 객체 정의 : 여러개의 변수를 하나로 묶기 위해 사용
class Student {
public:
    string name;
    int score;
    // 생성자 만들어주기
    Student(string name, int score)
    {
        this->name = name;
        this->score = score;
    }
    // 정렬 기준은 '점수가 작은 순서' 즉 다른학생들의 점수랑 비교를 할때 내점수가 다른학생보다 점수가 낮으면 우선순위가 높다. 작은순서부터 출력
    bool operator <(Student &student) {
        return this->score < student.score;
    }
};

int main(void){
    Student students[] = {
        Student("나동빈", 90),
        Student("이상욱", 93),
        Student("박한울", 97),
        Student("강종구", 87),
        Student("이태일", 92)
    };
    
    // 두개의 인자값만 넣게 되면 알아서 위에서 정의한 정렬 순서되로 됨.
    sort(students, students+5);
    
    for(int i=0;i<5; i++)
    {
        cout << students[i].name << ' ';
    }
    printf("\n");
}
