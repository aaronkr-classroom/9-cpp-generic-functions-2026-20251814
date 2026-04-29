// Student_info.h
#pragma once

#ifndef GUARD_Student_info
#define GUARD_Student_info

#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Student_info {
private: // 숨기고 싶은 변수
	string name;
	double midterm, final;
	vector<double> homework;

public: // 접근할 수 있는 함수
	Student_info();
	Student_info(istream&);

	string getName() const { return name; }
	void setName(string n) { name = n; }

	bool valid() const { return !homework.empty(); }

	istream& read(istream&);
	double grade() const;
};

// 전역 함수 정의
bool compare(const Student_info&, const Student_info&);

#endif

