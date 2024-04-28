#include <iostream>
using namespace std;

//�����
class Oval {
	//���� ���
	int width; //�ʺ�
	int height; //����
public:
	Oval(int w, int h); // �ʺ�� ���� ���� �Ű� ������ �޴� ������
	Oval(); //�ʺ�� ���̸� 1�� �ʱ�ȭ�ϴ� �Ű� ���� ���� ������
	~Oval(); //�Ҹ���
	int getWidth(); // Ÿ���� �ʺ� �����ϴ� getwidth() �Լ� ���
	int getHeight(); //Ÿ���� ���̸� �����ϴ� getHeight() �Լ� ���
	void set(int w, int h); //Ÿ���� �ʺ�� ���̸� �����ϴ� set (int w, int h) �Լ� ���
	void show(); // Ÿ���� �ʺ�� ���̸� ȭ�鿡 ����ϴ� show() �Լ� ���
};
//������
Oval::Oval(int w, int h) {
	width = w; height = h;
}
Oval::Oval() {
	width = height = 1;
}
Oval::~Oval() {
	cout << "Oval �Ҹ� : ";
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
	cout << "width = " << width << ", " << "height = " << height << endl; //���
}

int main() {
	Oval a, b(3, 4);
	a.set(10, 20);
	a.show();
	cout << b.getWidth() << ", " << b.getHeight() << endl;
}