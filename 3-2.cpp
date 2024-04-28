#include <iostream>
#include <string>
using namespace std;

class Date { //Date 클래스를 작성
	//private 멤버 변수
	int year; //년
	int month; //월
	int day; //일
public:
	Date(int y, int m, int d) {
		year = y;
		month = m;
		day = d;
	}
	Date(string date) {
		year = stoi(date.substr(0, 4)); //year 추출
		int n = 5;
		int s = date.find('/', n);
		month = stoi(date.substr(n, s - n)); //month 추출
		n = s + 1;
		s = date.find('\0', n);
		day = stoi(date.substr(n, s - n)); //day 추출
	}
	int getYear() { //년 반환
		return year; 
	}
	int getMonth() { //월 반환
		return month; 
	}
	int getDay() { //일 반환
		return day; 
	}
	void show() { //날짜 출력
		cout << year << "년" << month << "월" << day << "일" << endl;
	}
};

int main() {
	Date birth(2014, 3, 20); // 2014년 3월 20일
	Date independenceDay("1945/8/15"); // 1945년 8월 15일
	independenceDay.show();
	cout << birth.getYear() << ", " << birth.getMonth() << ", " << birth.getDay() << endl; //출력
}