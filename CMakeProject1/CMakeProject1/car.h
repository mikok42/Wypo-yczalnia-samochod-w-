#include <string>

class  Car
{
public:
	Car(const std::string manufacterer_,
		const std::string model_,
		const int passengerCapacity_,
		const int trunkCapacity_,
		const int pricePerDay_);
private:
	const std::string manufacterer;
	const std::string model;
	const int passengerCapacity;
	const int trunkCapacity;
	const int pricePerDay;

	bool rented;
};