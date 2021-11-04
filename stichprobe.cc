#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

double GetMean(){
  double sum = 0;
  int k = 0;
  int a;
  ifstream infile("datensumme.txt");
  while(infile >> a){
    sum += a;
    k++;
  }
  infile.close();
  return sum/k;
}

void PrintMean(){
  double mean = GetMean();
  cout << mean << endl;
}

double GetVariance(){
  double mean = GetMean();
  double sum = 0;
  int k = 0;
  int a;
  ifstream infile("datensumme.txt");
  while(infile >> a){
    sum += pow((a - mean), 2);
    k++;
  }
  infile.close();
  return sum/k;
}

void PrintVariance(){
  double variance = GetVariance();
  cout << variance << endl;
}

void PrintStdDev(){
  double variance = GetVariance();
  double stdDev = sqrt(variance);
  cout << stdDev << endl;
}

int main(){
PrintMean();
PrintVariance();
PrintStdDev();
}
