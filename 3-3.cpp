#include <iostream>
#include <string>
using namespace std;

class Account { //Account 클래스를 작성
	//private 멤버 변수
	string name; //계좌 주인
	int id; //계좌 번호
	int balance; //잔액
public:
	Account(string n, int i, int b) {
		name = n;
		id = i;
		balance = b;
	}
	string getOwner() {
		return name; //계좌 주인의 이름 반환
	}
	int inquiry() {
		return balance; //잔액 반환
	}
	void deposit(int money) {
		balance += money; //잔액에 추가
	}
	int withdraw(int money) {
		if (money > balance) {
			money = balance;
			balance = 0;
		}//조건문
		else
			balance -= money;
		return money; // 출금한 금액 반환
	}
};

int main() {
	Account a("kitae", 1, 5000); //id 1번, 잔액 5000원, 이름이 kitae인 계좌 생성
	a.deposit(50000); //50000원 저금
	cout << a.getOwner() << "의 잔액은 " << a.inquiry() << endl; //출력
	int money = a.withdraw(20000); //20000원 출금. withdraw()는 출금한 실제 금액 리턴
	cout << a.getOwner() << "의 잔액은 " << a.inquiry() << endl; //출력
}