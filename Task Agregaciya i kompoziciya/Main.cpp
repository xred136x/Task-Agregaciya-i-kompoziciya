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
	// композиция
	Window(int windowThickness) : _glass(windowThickness) {}
	// Агрегация
	Window(Glass& g) : _glass(g) {}

	int getThickness() {
		return _glass.getThickness();
	}

private:
	std::string _mark = "Irbis";
	Glass _glass;// ассоциация с классом Window

};


int main() {

	setlocale(LC_ALL, "ru");

// Плюсы композиции:
	// Позволяет скрыть отношение исп-я объектов от глаз клиента.
	// Делает API использования класса более простым и позволяет перейти
	// от использования одного класса, к другому
// Минусы:
	// Отношение достаточно, жесткое поскольку один объект должен уметь
	// создавать другой:должен знать конкретный тип и иметь доступ к
	// функции создания. Композиция не позволяет использовать интерфейсы
	// и требует, чтобы класс имел доступ к конструктору др.класса.
		
// Плюсы агрегации:
	// Более слабая связанность между объектом и его клиентом.
	// Возможность использования интерфейсов и одному объекту не 
	// нужно знать, как именно создавать другой объект.
// Минусы:
	// Выставление наружу деталей реализации. Увеличение сложности
	// в работе клиентов, а так же большая "жесткость" решения в
	// долгосрочной перспективе.

	

	return 0;
}