// ForLearCMake.cpp: определяет точку входа для приложения.
//

#include "ForLearCMake.h"
#include "tutconf.h"

using namespace std;

int main()
{
	cout << "Hello CMake." << endl;

	std::shared_ptr<int> pointer(new int(1312));

	int answer = 0;

	#ifdef USE_MATHFUNC
	#include "sqrt.h"

	cout << "our sqrt library was included";

	 answer = pup::Sqrt(10);

	#else
	#include<cmath>

	cout << "cmath was included";

	answer = sqrt(10);

	#endif 

	cout << answer << endl;

	return 0;
}
