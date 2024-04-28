#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class SelectableRandom {
	int select;
public:
	SelectableRandom(int s) { //생성자를 이용하여 짝수(0) 홀수(1)를 선택
		select = s;
	}
	SelectableRandom() {
		srand((unsigned)time(0)); //시작할 때마다, 다른 랜덤수를 발생시키기 위한 seed 설정
	}
	int next() {
		int n = (rand() / 2) * 2;
		if (select == 0) //짝수 정수 반환
			return n;
		else if (select == 1) //홀수 정수 반환
			return n + 1;
	}
	int nextInRange(int min, int max) {
		if (select == 0) { //짝수
			if (min % 2 == 1)
				min++;
		}
		else if (select == 1) { //홀수
			if (min % 2 == 0)
				min++;
		}
		return min + 2 * (rand() % ((max - min + 2) / 2)); //min과 max 사이의 랜덤 정수 반환
	}
};

int main() {
	SelectableRandom even(0); //짝수
	SelectableRandom odd(1); //홀수 
	cout << "-- 0에서 " << RAND_MAX << "까지의 짝수 랜덤 정수 10 개--" << endl; //출력
	for (int i = 0; i < 10; i++) {
		int n = even.next(); // 0에서 RAND_MAX(32767) 사이의 랜덤한 짝수 정수
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2에서 " << "9 까지의 랜덤 홀수 정수 10 개 --" << endl; //출력
	for (int i = 0; i < 10; i++) {
		int n = odd.nextInRange(2, 9); // 2에서 9 사이의 랜덤한 홀수 정수
		cout << n << ' ';
	}
	cout << endl;
}