



int main() {
	Resistor r1, r2{ 6 };
	r1.r(3);
	std::cout << (r1 + r2) << " " << (r1 * r2) << std::endl;
}

class Resistor {
	double resistance;
	Resistor() {
		resistance = 0;
	}
	Resistor(double resistance) : resistance(resistance){}



	
};