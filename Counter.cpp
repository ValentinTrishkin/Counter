// Counter.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <Windows.h>

class Counter
{
public:
	int result = 0;
	int increase(int num_)
	{
		result = ++num_;
		return result;
	};
	int decrease(int num_)
	{
		result = --num_;
		return result;
	};
	void print()
	{

		std::cout << result << std::endl;
	}
	Counter()
	{};
	Counter(int num_)
	{
		num = num_;
	};
private:
	int num = 1;
};

int main()
{
	setlocale(LC_ALL, "Rus");
	system("chcp 1251");
	char operation = 0;

	Counter count;
	
	Counter count_1(int num);
	std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
	std::string choice;
	std::cin >> choice;
	if (choice == "да")
	{
		int num = 0;
		std::cout << "Введите начальное значение счётчика: ";
		std::cin >> num;
		do
		{
			std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
			std::cin >> operation;
			if (operation == '+')
			{
				num = count.increase(num);
			}
			else if (operation == '-')
			{
				num = count.decrease(num);
			}
			else if (operation == '=')
			{
				count.print();
			}
			else if (operation == 'х')
			{
				std::cout << "До свидания!";
				return 0;
			}
			else (std::cout << "Неверно введен символ.");
		} while (true);
	}
	/*else if (choice == "нет")
	{
		
		do
		{

			std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
			std::cin >> operation;
			if (operation == '+')
			{
				
			}
			else if (operation == '-')
			{
				num = count.decrease(num);
			}
			else if (operation == '=')
			{
				count.print();
			}
			else if (operation == 'х')
			{
				std::cout << "До свидания!";
				return 0;
			}
			else (std::cout << "Неверно введен символ.");
		} while (true);*/
	//}
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
