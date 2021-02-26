#ifndef GENERO_HPP
#define GENERO_HPP
#include<iostream>
#include<string>
using namespace std;
class genero {
	private: 
	string nombre;
  public:
  genero();
  genero(string);
  ~genero();
  string getNombre();
  void setNombre(string);
  string toString();
};
#endif
