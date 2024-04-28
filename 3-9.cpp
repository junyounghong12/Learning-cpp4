#include <iostream>
using namespace std;

//선언부
class Oval {
	//변수 멤버
	int width; //너비
	int height; //높이
public:
	Oval(int w, int h); // 너비와 높이 값을 매개 변수로 받는 생성자
	Oval(); //너비와 높이를 1로 초기화하는 매개 변수 없는 생성자
	~Oval(); //소멸자
	int getWidth(); // 타원의 너비를 리턴하는 getwidth() 함수 멤버
	int getHeight(); //타원의 높이를 리턴하는 getHeight() 함수 멤버
	void set(int w, int h); //타원의 너비와 높이를 변경하는 set (int w, int h) 함수 멤버
	void show(); // 타원의 너비와 높이를 화면에 출력하는 show() 함수 멤버
};
//구현부
Oval::Oval(int w, int h) {
	width = w; height = h;
}
Oval::Oval() {
	width = height = 1;
}
Oval::~Oval() {
	cout << "Oval 소멸 : ";
	show();
}
int Oval::getWidth() {
	return width;
}
int Oval::getHeight() {
	return height;
}
void Oval::set(int w, int h) {
	width = w; height = h;
}
void Oval::show() {
	cout << "width = " << width << ", " << "height = " << height << endl; //출력
}

int main() {
	Oval a, b(3, 4);
	a.set(10, 20);
	a.show();
	cout << b.getWidth() << ", " << b.getHeight() << endl;
}