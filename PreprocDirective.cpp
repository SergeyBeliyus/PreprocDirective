#include <iostream>
#include "windows.h"

#define MODE 1

#if !defined MODE
	#error "MODE IS NOT DEFINED"
#endif //

#if (MODE == 1)
	#define add(a,b) a + b
#endif	

int main() {
	int a, b;
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	#if (MODE == 1)
		std::cout << "Работаю в боевом режиме" << std::endl;
		std::cout << "Введите число 1: ";
		std::cin >> a;
		std::cout << "Введите число 2: ";
		std::cin >> b;
		std::cout << "Результат сложения: " << add(a, b);
	#else
		std::cout << "Неизвестный режим. Завершение работы" << std::endl;
	#endif	

}