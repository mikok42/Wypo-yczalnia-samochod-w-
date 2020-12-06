
#include "head.h"
#include "car.h"

using namespace std;

int main()
{
	
    cout << "Hello CMake." << endl;
	

	Car furka(static_cast<std::string>("mercedes") , static_cast<std::string>("c350"), 5, 150, 69 );

	furka.showOff();
	return 0;

}
