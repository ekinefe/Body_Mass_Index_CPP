#include <iostream>

double weight;
double height;
double BMI;

int main() {
    std::cout << "\n\tBody_Mass_Index_CPP" << std::endl;

    std::cout << "\nPleas enter your WEIGHT (KG):\t";
    std::cin >> weight;

    std::cout << "\nPleas enter your HEIGHT (CM):\t";
    std::cin >> height;

    BMI = (weight/(height/100));

    std::cout << "\n\tBody Mass Index:\t" << BMI << std::endl;

    std::cout << "\n\tPROGRAM IS OVER" << std::endl;

    return 0;
}
