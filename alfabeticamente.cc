#include <iostream>
#include <string.h>
#include <vector>
#include <string>

int main () {

  int sizevector;   
  std::string variable_de_almacenamiento_momentaneo;
  std::vector<std::string> vectorwords;
  std::string word;

  std::cout << "¿Cuántas palabras quieres ordenar alfabéticamente? ";
  std::cin >> sizevector;

  for (int i{1}; i <= sizevector; ++i) {

    std::cout << "Inserte palabra " << i << ": ";
    std::cin >> word;
    vectorwords.push_back(word);

  }

  for (int i{0}; i < sizevector; ++i) {

    for (int j{i+1}; j < sizevector; ++j) {

      if ((vectorwords[i].compare(vectorwords[j])) > 0) {

        variable_de_almacenamiento_momentaneo = vectorwords[i];
        vectorwords[i] = vectorwords[j];
        vectorwords[j] = variable_de_almacenamiento_momentaneo;

      }

    }

  }

  std::cout << std::endl;
  std::cout << "El orden alfabético sería: " << std::endl;

  for (int i{0}; i < sizevector; ++i) {

    std::cout << vectorwords[i] << std::endl;

  }

  return 0;

}