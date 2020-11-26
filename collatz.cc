#include <iostream>
#include <vector>

int main () {

  int kinitialvalue;
  std::vector<int> collatzvector;

  std::cout << "Inserte número natural para conocer su secuecia collatz: ";
  std::cin >> kinitialvalue;

    while (kinitialvalue == 0 || kinitialvalue < 0) {

      std::cout << "Por favor que sea un número natural" << std::endl;
      std::cout << "Inserte número natural para conocer su secuecia collatz: ";
      std::cin >> kinitialvalue;
      
    }

    collatzvector.push_back(kinitialvalue);
  
  for (int i = 0; collatzvector[i] != 1; i++) {

    int producto_de_las_operaciones;

    if (collatzvector[i] % 2 == 0) {

      producto_de_las_operaciones = collatzvector[i]/2;
      collatzvector.push_back(producto_de_las_operaciones);

    }

    if (collatzvector[i] % 2 != 0) {

      producto_de_las_operaciones = (collatzvector[i]*3) + 1;
      collatzvector.push_back(producto_de_las_operaciones);

    }

  }

  for (int i = 0; i < collatzvector.size(); ++i) {

    std::cout << collatzvector[i] << " ";

  }

  std::cout << std::endl;

  return 0;
}