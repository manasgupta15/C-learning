#include<iostream>
double square(double length) {
   return length * length;
}
double cube(double length) {
    return length * length * length;
}
std::string concatStrings(std::string string1, std:: string string2) {
    return string1 + " " + string2;
}
int main() {
    // return  = return a value back to the most where you called the encompassing function
    double length = 5.0;
    double area = square(length);
    std::cout << "Area: " << area << "cm^2\n";
    double volume = cube(length);
     std::cout << "Volume: " << volume << "cm^3\n";


     std::string firstname = "Bro";
     std::string lastname = "Code";
     std::string string3 = concatStrings(firstname,lastname);
     std::cout << string3 << std::endl;

    return 0;
}