#include <string>

class  Car
{
public:
	Car(const std::string manufacterer,
		const std::string model,
		const int passengerCapacity,
		const int trunkCapacity,
		const int pricePerDay);
private:
	const std::string manufacterer;
	const std::string model;
	const int passengerCapacity;
	const int trunkCapacity;
	const int pricePerDay;

	bool rented;
};