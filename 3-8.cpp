#include <iostream>
#include <string>
using namespace std;

class Integer { //Integer 클래스 작성
	int integer;
public:
	Integer(int n) { //정수 입력
		integer = n;
	}
	Integer(string n) { //문자 입력(stoi() 함수를 이용하면 string의 문자열을 숫자로 변환)
		integer = stoi(n);  
	}
	int get() { 
		return integer; //integer 반환
	}
	void set(int n) { 
		integer = n; 
	}
	int isEven() {
		return (integer + 1) % 2; //짝수면 1 반환
	}
};
int main() {
	Integer n(30);
	cout << n.get() << ' '; // 30 출력
	n.set(50);
	cout << n.get() << ' '; // 50 출력
	Integer m("300");
	cout << m.get() << ' '; // 300 출력
	cout << m.isEven(); // true(정수로 1) 출력
}