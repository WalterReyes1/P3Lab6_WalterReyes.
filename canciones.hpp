#ifndef CANCIONES_HPP
#define CANCIONES_HPP
#include<iostream>
#include "genero.hpp"
#include <string>
using namespace std;
class canciones {
	private : 
	string nombre;
	string artista;
	string duracion;
	genero Genero; 
	
  public:
  canciones();
  canciones(string,string,string,genero);
  ~canciones();
  
  string getNombre();
  string getArtista();
  string getDuracion();
  genero getGenero();
  string toString();
  
  void setNombre(string);
  void setArtista(string);
  void setDuracion(string);
  void setGenero(genero);
};
#endif