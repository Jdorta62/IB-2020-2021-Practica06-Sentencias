#include <cstdlib>
#include <iostream>
#include <ctime>
#include <cmath>
#include <vector>
 
int main() {

  int const kvectorsize{10 + 1}; 
  /*
  Con la variable kvectorsize se logran 2 cosas:
  1. Determinar el intervalo en el que se van a generar los números aleatorios,
  en este caso se generan entre el 0 - 10. Si se quiere modificar el intervalo,
  es decir, que los números se generen entre 0 - n, cambiar únicamente el 10 por
  por n.

  2. Determinar el size que tendrá el vector "vectorrandomnumbers".
  */
  double suma_de_numeros_vector{0};
  std::vector<double> vectorrandomnumbers;
  std::srand(time(0));

  for (int i = 0; i < (kvectorsize - 1); ++i) {
    
    int randomnumber = std::rand() % kvectorsize ;  //En esta parte se generan los números aleatorios
    vectorrandomnumbers.push_back(randomnumber);    //que formaran el vector "vectorrandomnumbers"

  }
/*
  for (int i = 0; i < vectorrandomnumbers.size(); ++i){

    std::cout << vectorrandomnumbers[i] << " ";

  }

  std::cout << std::endl;
*/
  for (int i = 0; i <= kvectorsize; ++i) {
    
    for (int j = i+1; j < kvectorsize; ++j) {

      if (vectorrandomnumbers[i] >= vectorrandomnumbers[j]) {
        
        double variable_de_almacenamiento_momentaneo;
        variable_de_almacenamiento_momentaneo = vectorrandomnumbers[i];       //Aquí se ordenan los números dentro del
        vectorrandomnumbers[i] = vectorrandomnumbers[j];                      //vector "vectorrandomnumber" de los más
        vectorrandomnumbers[j] = variable_de_almacenamiento_momentaneo;       //pequeños a los más grandes

      }
    }
  }

  std::cout << "El número con mayor valor del vector es -"  << vectorrandomnumbers[kvectorsize - 1] << "-" << std::endl;
  std::cout << "El número con menor valor es -" << vectorrandomnumbers[0] << "-" << std::endl;

  for (int i = 0; i <= vectorrandomnumbers.size(); ++i) {
    
    suma_de_numeros_vector += vectorrandomnumbers[i];  //Aquí se suman los componentes del vector entre si

    }

  std::cout << "La media es " << suma_de_numeros_vector/vectorrandomnumbers.size() << std::endl;
  
  return 0;
  
  }