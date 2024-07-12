#include <iostream>
#include <iomanip>
#include <boost/multiprecision/cpp_dec_float.hpp>

// Definir un tipo de número de precisión arbitraria
typedef boost::multiprecision::cpp_dec_float_100 mp_float;

int main() {
    // Solicitar al usuario el número de decimales de pi
    int decimals;
    std::cout << "Ingrese el número de decimales de pi que desea calcular: ";
    std::cin >> decimals;

    // Establecer la precisión deseada
    mp_float::default_precision(decimals);
    mp_float pi = boost::multiprecision::constants::pi<mp_float>();

    // Imprimir el valor de pi con la precisión deseada
    std::cout << std::fixed << std::setprecision(decimals) << pi << std::endl;

    return 0;
}