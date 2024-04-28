#include <iostream>
using namespace std;

class CoffeeMachine { //CoffeeMachine 클래스를 작성
	int coffee; //커피
	int water; //물
	int sugar; //설탕
public:
	CoffeeMachine(int c, int w, int s) {
		coffee = c;
		water = w;
		sugar = s;
	}
	void drinkEspresso() {
		coffee -= 1; // 커피 1 소비
		water -= 1; //물 1 소비
	}
	void dninkAmericano() {
		coffee -= 1; // 커피 1 소비
		water -= 2; //물 2 소비
	}
	void drinkSugarCoffee() {
		coffee -= 1; // 커피 1 소비
		water -= 2; //물 2 소비
		sugar -= 1; //설탕 1 소비
	}
	void fill() { // 커피 10, 물 10, 설탕 10으로 채우기
		coffee = 10;
		water = 10;
		sugar = 10;
	}
	void show() { // 현재 커피 머신의 상태 출력
		cout << "커피 머신 상태, 커피:" << coffee << '\t' << "물:" << water << '\t' << "설탕:" << sugar << endl;
	}
};

int main() {
	CoffeeMachine java(5, 10, 3); // 커피량:5, 물량:10, 설탕:6으로 초기화
	java.drinkEspresso(); // 커피 1, 물 1 소비
	java.show(); // 현재 커피 머신의 상태 출력
	java.dninkAmericano(); // 커피 1, 물 2 소비
	java.show(); // 현재 커피 머신의 상태 출력
	java.drinkSugarCoffee(); // 커피 1, 물 2, 설탕 1 소비
	java.show(); // 현재 커피 머신의 상태 출력
	java.fill(); // 커피 10, 물 10, 설탕 10으로 채우기
	java.show(); // 현재 커피 머신의 상태 출력
}