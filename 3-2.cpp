#include <iostream>
#include <string>
using namespace std;

class Date { //Date Ŭ������ �ۼ�
	//private ��� ����
	int year; //��
	int month; //��
	int day; //��
public:
	Date(int y, int m, int d) {
		year = y;
		month = m;
		day = d;
	}
	Date(string date) {
		year = stoi(date.substr(0, 4)); //year ����
		int n = 5;
		int s = date.find('/', n);
		month = stoi(date.substr(n, s - n)); //month ����
		n = s + 1;
		s = date.find('\0', n);
		day = stoi(date.substr(n, s - n)); //day ����
	}
	int getYear() { //�� ��ȯ
		return year; 
	}
	int getMonth() { //�� ��ȯ
		return month; 
	}
	int getDay() { //�� ��ȯ
		return day; 
	}
	void show() { //��¥ ���
		cout << year << "��" << month << "��" << day << "��" << endl;
	}
};

int main() {
	Date birth(2014, 3, 20); // 2014�� 3�� 20��
	Date independenceDay("1945/8/15"); // 1945�� 8�� 15��
	independenceDay.show();
	cout << birth.getYear() << ", " << birth.getMonth() << ", " << birth.getDay() << endl; //���
}