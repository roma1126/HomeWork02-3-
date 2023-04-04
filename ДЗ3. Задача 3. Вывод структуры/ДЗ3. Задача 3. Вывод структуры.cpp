#include <iostream>

struct Adress
{
    std::string City;
    std::string Street;
    int HouseNumber = 0;
    int FlatNumber = 0;
    int Index = 0;
};

void PrintAdress(Adress* HomeAdress)
{
    std::cout << "Город: " << HomeAdress->City << std::endl;
    std::cout << "Улица: " << HomeAdress->Street << std::endl;
    std::cout << "Номер дома: " << HomeAdress->HouseNumber << std::endl;
    std::cout << "Номер квартиры: " << HomeAdress->FlatNumber << std::endl;
    std::cout << "Индекс: " << HomeAdress->Index << std::endl;
    std::cout << std::endl;

}

int main()
{
    setlocale(LC_ALL, "Russian"); 
  

    Adress adress1;
    adress1.City = "Москва";
    adress1.Street = "Арбат";
    adress1.HouseNumber = 12;
    adress1.FlatNumber = 8;
    adress1.Index = 123456;

    Adress adress2;
    adress2.City = "Ижевск";
    adress2.Street = "Пушкина";
    adress2.HouseNumber = 59;
    adress2.FlatNumber = 143;
    adress2.Index = 953769;

    PrintAdress(&adress1);
    PrintAdress(&adress2);
}
