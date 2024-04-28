#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class EvenRandom { //짝수 정수만 랜덤하게 발생시키는 EvenRandom 클래스 작성
public:
	EvenRandom() {
		srand((unsigned)time(0)); //시작할 때마다, 다른 랜덤수를 발생시키기 위한 seed 설정
	}
	int next() { //0에서 RAND_MAX(32767) 사이의 랜덤한 짝수 생성
		int n = 0;
		while (1) {
			n = rand();
			if ((n % 2) == 0) //n이 짝수면 반환하는 조건문
				return n;
		}
	}
	int nextInRange(int min, int max) { //min과 max 사이의 랜덤 짝수 정수 생성
		int n = (max - min + 2) / 2;
		n = min + (rand() % n) * 2;	
		return n;
	}
};

int main() {
	EvenRandom even;
	cout << "-- 0에서 " << RAND_MAX << "까지의 랜덤 정수 10 개--" << endl; //출력
	for (int i = 0; i < 10; i++) {
		int n = even.next(); // 0에서 RAND_MAX(32767) 사이의 랜덤한 짝수 정수
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2에서 " << "10 까지의 랜덤 정수 10 개--" << endl; //출력
	for (int i = 0; i < 10; i++) {
		int n = even.nextInRange(2, 10); // 2에서 10 사이의 랜덤한 짝수 정수
		cout << n << ' ';
	}
	cout << endl;
}