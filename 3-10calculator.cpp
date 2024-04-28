#include <iostream>
using namespace std;

//선언부
class Add {
	int a, b; // 피연산자
public:
	void setValue(int x, int y); // 매개 변수 x, y를 멤버 a, b에 복사
	int calculate(); //연산을 실행하고 결과 리턴
};
class Sub {
	int a, b; // 피연산자
public:
	void setValue(int x, int y); // 매개 변수 x, y를 멤버 a, b에 복사
	int calculate(); //연산을 실행하고 결과 리턴
};
class Mul {
	int a, b; // 피연산자
public:
	void setValue(int x, int y); // 매개 변수 x, y를 멤버 a, b에 복사
	int calculate(); //연산을 실행하고 결과 리턴
};
class Div {
	int a, b; // 피연산자
public:
	void setValue(int x, int y); // 매개 변수 x, y를 멤버 a, b에 복사
	int calculate(); //연산을 실행하고 결과 리턴
};

//구현부
void Add::setValue(int x, int y) {
	a = x;
	b = y;
}
int Add::calculate() {
	return a + b; //결과 반환
}
void Sub::setValue(int x, int y) {
	a = x;
	b = y;
}
int Sub::calculate() {
	return a - b; //결과 반환
}
void Mul::setValue(int x, int y) {
	a = x;
	b = y;
}
int Mul::calculate() {
	return a * b;//결과 반환
}
void Div::setValue(int x, int y) {
	a = x;
	b = y;
}
int Div::calculate() {
	return a / b; //결과 반환
}

int main() {
	int x, y; //두 정수
	char oper; //연산자
	while (1) { //반복
		cout << "두 정수와 연산자를 입력하세요>>"; //지시문 출력
		cin >> x >> y >> oper; //두 개의 정수와 연산자를 입력
		switch (oper) {
		case '+':
			Add a;
			a.setValue(x, y);
			cout << a.calculate() << endl;
			break;
		case '-':
			Sub s;
			s.setValue(x, y);
			cout << s.calculate() << endl;
			break;
		case '*':
			Mul m;
			m.setValue(x, y);
			cout << m.calculate() << endl;
			break;
		case '/':
			Div d;
			d.setValue(x, y);
			cout << d.calculate() << endl;
			break;
		}
	}
	return 0;
}