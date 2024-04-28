#include<iostream>
using namespace std;

class Tower { //Tower클래스를 작성
	int h; //타워의 높이를 나타내는 멤버 변수 
public:
	Tower() :Tower(1) {}; //기본 생성자
	Tower(int a) { h = a; } //매개변수가 있는 생성자
	int getHeight() { return h; } //타워의 높이를 반환
};

int main() {
	Tower myTower; // 1 미터
	Tower seoulTower(100); // 100 미터
	cout << "높이는 " << myTower.getHeight() << "미터" << endl; //출력
	cout << "높이는 " << seoulTower.getHeight() << "미터" << endl; //출력
}