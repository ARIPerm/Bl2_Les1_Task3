#include <iostream>
#include <Windows.h>
#include <string>

struct Address
{
    std::string city;
    std::string street;
    int houseNumber;
    int apartNumber;
    int index;
};

void printAddress(Address data);

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Address addres1 = { "Москва", "Арбат", 12, 8, 123456 };
    Address addres2 = { "Ижевск", "Пушкина", 59, 143, 953769 };

    printAddress(addres1);
    printAddress(addres2);
}

void printAddress(Address data)
{
    std::cout << "Город: " << data.city << std::endl;
    std::cout << "Улица: " << data.street << std::endl;
    std::cout << "Номер дома: " << data.houseNumber << std::endl;
    std::cout << "Номер квартиры: " << data.apartNumber << std::endl;
    std::cout << "Индекс: " << data.index << std::endl << std::endl;
}