#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

void WriteMeanToTxt(){
  double sum = 0;
  int k = 0;
  int a;
  ifstream infile("datensumme.txt");
  ofstream outfile("mittelwerte.txt");
  while(infile >> a){
    sum += a;
    k++;
    if(k % 9 == 0){
      double mean = sum/k;
      outfile << mean << std::endl;
      sum = 0;
      k = 0;
    }
  }
  infile.close();
  outfile.close();
}

int main(){
WriteMeanToTxt();
}
