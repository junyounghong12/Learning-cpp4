#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Random { //랜덤 수를 발생시키는 Random 클래스 작성
public:
	Random() {
		srand((unsigned)time(0)); //시작할 때마다, 다른 랜덤수를 발생시키기 위한 seed 설정
	}
	int next() {
		return rand();
	}
	int nextInRange(int min, int max) {
		return min + (rand() % (max - min + 1));  //min과 max 사이의 랜덤 정수 반환
	}
};

int main() {
	Random r;
	cout << "-- 0에서 " << RAND_MAX << "까지의 랜덤 정수 10 개--" << endl; //출력
	for (int i = 0; i < 10; i++) {
		int n = r.next(); // 0에서 RAND_MAX(32767) 사이의 랜덤한 정수
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2에서 " << "4 까지의 랜덤 정수 10 개--" << endl; //출력
	for (int i = 0; i < 10; i++) {
		int n = r.nextInRange(2, 4); // 2에서 4 사이의 랜덤한 정수
		cout << n << ' ' ;
	}
	cout << endl;
}