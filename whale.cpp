#include <iostream>
#include <vector>
#include <string>

int main() {
  std::string input = "turpentine and turtles\n";
  
  //defines a vector with the only things that a whale can say
  //std::cout << input;
  std::vector<char> vowels;
  vowels.push_back('a');
  vowels.push_back('e');
  vowels.push_back('i');
  vowels.push_back('o');
  vowels.push_back('u');
  

  std::vector<char> result;

  // the loop will go thorugh the string input and check the letters of input for a vowel if there is a vowel the vowel will be placed into the vector

  for (int i = 0; i < input.size(); i++){
    for (int j = 0; j < vowels.size(); j++) {
      if (input[i] == vowels[j]){
        result.push_back(input[i]);
        
        if (input[i] == 'e' || input[i] == 'u'){
          result.push_back(input[i]);
        }
      }
    }
  }

for (int k = 0; k < result.size(); k++) {
  std::cout << result[k];
}
std::cout << "\n";
}
