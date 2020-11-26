#include <iostream>
#include <vector>

int main () {

  int divisor{1};
  int user_introduced_number;
  std::vector<int> dividersvector;


  std::cout << "Introduce número para conocer sus divisores: ";
  std::cin >> user_introduced_number;

  while (user_introduced_number >= divisor) {

    if (user_introduced_number % divisor == 0) {

      dividersvector.push_back(divisor);
      ++divisor;

    } else {

      ++divisor;

    }

  }

  for (int i = 0; i < dividersvector.size(); ++i){

    std::cout << dividersvector[i] << " ";

  }

  std::cout << std::endl;

  return 0;

}