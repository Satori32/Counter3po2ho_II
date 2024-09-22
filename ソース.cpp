#include <iostream>
#include <cstdint>

struct Counter3po2hoII {
	std::intmax_t Counter = 0;
	std::uintmax_t F = 3;
	std::uintmax_t B = 2;
	std::uintmax_t C = 0;
	int Fl = 1;
};

bool ConstructCouter3po2poII(Counter3po2hoII& In, std::uintmax_t F, std::uintmax_t B) {
	In.Counter = 0;
	In.C = 0;
	In.F = F;
	In.B = B;
	In.Fl = 1;

	return true;
}

std::intmax_t Do(Counter3po2hoII& In) {
	In.Counter += 1 * In.Fl;
	In.C++;
	if(In.Fl>0){
		if (In.F <= In.C) {
			In.C = 0;
			In.Fl *= -1;
		}
	}
	else {
		if(In.B<=In.C){
			In.C = 0;
			In.Fl *= -1;
		}
	}
	return In.Counter;
}

int main() {
	Counter3po2hoII C32;

	ConstructCouter3po2poII(C32, 3, 2);

	std::cout << Do(C32) << std::endl;
	std::cout << Do(C32) << std::endl;
	std::cout << Do(C32) << std::endl;
	std::cout << Do(C32) << std::endl;
	std::cout << Do(C32) << std::endl;

	std::cout << Do(C32) << std::endl;
	std::cout << Do(C32) << std::endl;
	std::cout << Do(C32) << std::endl;
	std::cout << Do(C32) << std::endl;
	std::cout << Do(C32) << std::endl;

	std::cout <<"---------------" << std::endl;
	ConstructCouter3po2poII(C32, 2, 3);

	std::cout << Do(C32) << std::endl;
	std::cout << Do(C32) << std::endl;
	std::cout << Do(C32) << std::endl;
	std::cout << Do(C32) << std::endl;
	std::cout << Do(C32) << std::endl;

	std::cout << Do(C32) << std::endl;
	std::cout << Do(C32) << std::endl;
	std::cout << Do(C32) << std::endl;
	std::cout << Do(C32) << std::endl;
	std::cout << Do(C32) << std::endl;
	return 0;
}