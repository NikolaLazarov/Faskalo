/*Задача, която извежда текст и звуков сигнал.
След натискане на клавиш извежда текст на два реда и звуков сигнал*/
#include <iostream>
using namespace std;
int main()
{
	cout << "Текст със зуков сигнал\a";
	cin.get();
	cout << "Текст на\nдва реда\a";
}