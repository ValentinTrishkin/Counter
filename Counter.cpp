// Counter.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <Windows.h>

class Counter
{
public:
	void increase()
	{
		++num_;		
	};
	void decrease()
	{
		--num_;
	};
	int getNum()
	{
		return num_;
	}
	Counter()
	{};
	Counter(int num)
	{
		num_ = num;
	};
private:
	int num_ = 1;
};

int main()
{
	setlocale(LC_ALL, "Rus");
	system("chcp 1251");
	char operation = 0;		
	std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
	std::string choice;
	std::cin >> choice;
	if (choice == "да")
	{
		int num = 0;
		std::cout << "Введите начальное значение счётчика: ";
		std::cin >> num;
		Counter count_1(num);
		do
		{
			std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
			std::cin >> operation;
			if (operation == '+')
			{
				count_1.increase();
			}
			else if (operation == '-')
			{
				count_1.decrease();
			}
			else if (operation == '=')
			{
				std::cout << count_1.getNum() << std::endl;
			}
			else if (operation == 'х')
			{
				std::cout << "До свидания!";
				return 0;
			}
			else (std::cout << "Неверно введен символ.");
		} while (true);
	}
	else if (choice == "нет")
	{
		Counter count;
		do
		{			
			std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
			std::cin >> operation;
			if (operation == '+')
			{
				count.increase();
			}
			else if (operation == '-')
			{
				count.decrease();
			}
			else if (operation == '=')
			{
				std::cout << count.getNum() << std::endl;
			}
			else if (operation == 'х')
			{
				std::cout << "До свидания!";
				return 0;
			}
			else (std::cout << "Неверно введен символ.");
		} while (true);
	}
	return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
