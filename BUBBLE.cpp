#include "Bubble.h"

Bubble::Bubble(size_t s) :Container(s){}
Bubble::Bubble(size_t s, double* a) :Container(s, a) {}
Bubble::Bubble(Bubble& obj) :Container(obj) {}
Bubble::~Bubble(){}

Bubble& Bubble::operator=(Bubble& b){
	if (&b != this)
	{
		size = b.size;
		for (size_t i = 0; i < size; i++) {
			arr[i] = b.arr[i];
		}
	}
	else
		return *this;
}
void Bubble::foreach(){

	for (size_t i = 0; i < size; ++i)
	{
		arr[i] = sqrt(arr[i]);
	}
}
void Bubble::sort() {
	double temp;
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	std::cout << std::endl;
}
void Bubble::randomfill() {
	Container::randomfill();
}
std::ostream& operator<<(std::ostream& out, Bubble& b) {
	out << "Bubble \n ";
	for (size_t i = 0; i < b.size; i++) {
		out << b.arr[i] << "  ";
	}
	return out;
}
std::istream& operator>>(std::istream& in, Bubble& b) {
	std::cout << "array elements :\n";
	for (size_t i = 0; i < b.size; i++) {
		in >> b.arr[i];
		std::cin.ignore();
	}
	return in;
}


