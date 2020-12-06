
#include "head.h"
#include "car.cpp"

using namespace std;

int main()
{
	
    cout << "Hello CMake." << endl;
	return 0;

	Car furka(static_cast<std::string>("mercedes") , static_cast<std::string>("c350"), 5, 150, 69 );


}
