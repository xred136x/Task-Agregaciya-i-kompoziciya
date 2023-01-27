#include<iostream>
#include<string>
#include<map>

class Glass {
public:
	Glass(int t) : _thickness(t) {
		std::cout << "Parametrized constructor was calld(Glass)" << '\n';
	}
	Glass(Glass& g) : _thickness(g._thickness) {
		std::cout << "Copy constructor was called(Glass)" << '\n';
	}
	int getThickness() {
		return _thickness;
	}
private:
	int _thickness;
};
class Window {
public:
	// ����������
	Window(int windowThickness) : _glass(windowThickness) {}
	// ���������
	Window(Glass& g) : _glass(g) {}

	int getThickness() {
		return _glass.getThickness();
	}

private:
	std::string _mark = "Irbis";
	Glass _glass;// ���������� � ������� Window

};


int main() {

	setlocale(LC_ALL, "ru");

// ����� ����������:
	// ��������� ������ ��������� ���-� �������� �� ���� �������.
	// ������ API ������������� ������ ����� ������� � ��������� �������
	// �� ������������� ������ ������, � �������
// ������:
	// ��������� ����������, ������� ��������� ���� ������ ������ �����
	// ��������� ������:������ ����� ���������� ��� � ����� ������ �
	// ������� ��������. ���������� �� ��������� ������������ ����������
	// � �������, ����� ����� ���� ������ � ������������ ��.������.
		
// ����� ���������:
	// ����� ������ ����������� ����� �������� � ��� ��������.
	// ����������� ������������� ����������� � ������ ������� �� 
	// ����� �����, ��� ������ ��������� ������ ������.
// ������:
	// ����������� ������ ������� ����������. ���������� ���������
	// � ������ ��������, � ��� �� ������� "���������" ������� �
	// ������������ �����������.

	

	return 0;
}