#include <iostream>
#include <string>
#include <vector>

int main () {

  int number_of_words;
  std::string variable_de_almacenamiento_momentaneo; // se usa más adelante como puente para ordenar las palabras dentro del vector
  std::vector<std::string> words_list;

  std::cout << "Inserte el número de palabras que va a escribir: ";
  std::cin >> number_of_words;

  for (int i = 1; i <= number_of_words; ++i) {

    std::string palabra;
    std::cout << "Palabra " << i << ": ";
    std::cin >> palabra;  
    words_list.push_back(palabra);

  }

  for (int i = 0; i <= number_of_words; ++i) {
    
    for (int j = i+1; j < number_of_words; ++j) {

      if (words_list[i].length() >= words_list[j].length()) {

        variable_de_almacenamiento_momentaneo = words_list[i];       //Aquí se ordenan las palabras dentro del
        words_list[i] = words_list[j];                               //vector word_list de las más cortas a la
        words_list[j] = variable_de_almacenamiento_momentaneo;       //s más largas.

      }
    }
  }

  std::cout << "La palabra más larga es -"  << words_list[number_of_words - 1] << "-" << std::endl;
  std::cout << "La palabra más corta es -" << words_list[0] << "-" << std::endl;

  return 0;

}