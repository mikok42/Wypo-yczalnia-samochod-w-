#include <string>

class Car
{
public:
	Car(const std::string& manufacterer_,
		const std::string& model_,
		int passengerCapacity_,
		int trunkCapacity_,
		int pricePerDay_);
	void showOff();

    bool operator== (const Car& rhs);

private:
	const std::string manufacterer;
	const std::string model;
	const int passengerCapacity;
	const int trunkCapacity;
	const int pricePerDay;

	bool rented;
};