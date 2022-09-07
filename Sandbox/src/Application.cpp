#include <iostream> 

namespace Hazel {

	__declspec(dllimport) void Print();

}

int main() {

	Hazel::Print();

	std::cout << "Ceci est un test !" << std::endl;

	return 0;
}