#pragma once
#include <iostream>
#include "Exception.hpp"

class Train{
private:
	std::string target_name;//название пункта назначения
	int number;//номер поезда
	std::string time;//время отправления
public:
	explicit Train(const char *target_name = "", const char *time = "", int number = 0);
	Train(const Train& train);
	//Геттры и Сеттеры
	std::string& TargetName();
	const std::string& TargetName() const;
	 std::string& Time();
	const std::string& Time() const;
	int& Number();
	const int& Number() const;
	//операторы ввода и вывода
	friend std::ostream& operator <<(std::ostream& out, const Train& train);
	friend std::istream& operator >>(std::istream& in, Train& train);
};
