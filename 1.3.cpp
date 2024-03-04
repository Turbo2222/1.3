#include <iostream>
#include<string>
struct address {
    std::string city;
        std::string street;
        int home;
        int flat;
        int index;

};

void print_data(address& pers){
    std::cout<<"Город: " << pers.city << "\n" << "Улица: " << pers.street << "\n" << "Дом: " << pers.home << "\n" << "Квартира: " << pers.flat << "\n" << "Индекс: " << pers.index;

}

int main()
{
    setlocale(LC_ALL, "RUSSIAN");

    address p;
    p.city = "Москва";
    p.street = "Арбат";
    p.home = 20;
    p.flat = 19;
    p.index = 123321;

    print_data(p);


    return 0;

}
