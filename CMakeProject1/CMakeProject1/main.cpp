﻿
#include <memory>
#include "car.h"
#include "baza.h"




int main()
{	
	std::unique_ptr<AbstractBase> bazaAut= std::make_unique<Baza>();

	Car furka(static_cast<std::string>("mercedes") , static_cast<std::string>("c350"), 5, 150, 69 );
	Car furka1(static_cast<std::string>("audi"), static_cast<std::string>("q8"), 7, 200, 69);
	Car furka2(static_cast<std::string>("ford"), static_cast<std::string>("mustang"), 2, 50, 100);
	Car furka3(static_cast<std::string>("opel"), static_cast<std::string>("mustang"), 2, 50, 100);


	bazaAut->Add(furka);
	bazaAut->Add(furka1);
	bazaAut->Add(furka2);

	bazaAut->Rent(furka);
	bazaAut->Rent(furka3);



	bazaAut->Present();
	return 0;

}
