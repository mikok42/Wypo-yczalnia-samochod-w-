

#include "car.h"
#include "baza.h"



int main()
{	
	Baza bazaAut;

	Car furka(static_cast<std::string>("mercedes") , static_cast<std::string>("c350"), 5, 150, 69 );
	Car furka1(static_cast<std::string>("audi"), static_cast<std::string>("q8"), 7, 200, 69);
	Car furka2(static_cast<std::string>("ford"), static_cast<std::string>("mustang"), 2, 50, 100);


	bazaAut.Add(furka);
	bazaAut.Add(furka1);
	bazaAut.Add(furka2);

	bazaAut.Rent(furka);

	bazaAut.Present();
	return 0;

}
