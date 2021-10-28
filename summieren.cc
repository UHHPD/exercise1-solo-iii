#include <iostream>
#include <fstream>

int main(){
  // Open in- and output
  std::ifstream infile("daten.txt");
  std::ofstream outfile("datensumme.txt");

  // Loop over pairs x, y in input file and add them
  // Write the sum into the output file
  int x, y;
  while(infile >> x >> y){
    int summe = x + y;
    outfile << summe << std::endl;
  }
  infile.close();
  outfile.close();
}