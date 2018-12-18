#include "Train.hpp"

Train::Train(const char *target_name, const char *time, int number)
	:target_name(target_name), time(time), number(number){}
Train::Train(const Train& train)
	:target_name(train.target_name), time(train.time), number(train.number){}
//Геттры и Сеттеры
std::string& Train::TargetName(){ return target_name; }
const std::string& Train::TargetName() const{ return target_name; }
std::string& Train::Time(){ return time; }
const std::string& Train::Time() const{ return time; }
int& Train::Number(){ return number; }
const int& Train::Number() const{ return number; }
//операторы ввода и вывода
std::ostream& operator <<(std::ostream& out, const Train& train){
	out << train.target_name << "\t" << train.number << "\t" << train.time;
	return out;
}

std::istream& operator >>(std::istream& in, Train& train){
    std::cout << "Пункт наначения: ";
	if(!(in >> train.target_name)) throw Exception("Reading error");
	std::cout << "Номер: ";
	if(!(in >> train.number)) throw Exception("Reading error");
	std::cout << "Время: ";
	if(!(in >> train.time)) throw Exception("Reading error");
	return in;
}
