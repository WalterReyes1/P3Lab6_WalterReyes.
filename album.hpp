#ifndef ALBUM_HPP
#define ALBUM_HPP
#include<iostream>
#include<string>
#include <vector>
#include "canciones.hpp"
using namespace std;
class album {
	private: 
	string nombre;
	string artistas;
	vector<canciones>Canciones;
	
  public:
  album();
  album(string,string, vector<canciones>);
  ~album();
  string getNombre();
  string getArtistas();
  vector<canciones>getCanciones();
  
  void setNombre(string);
  void setArtistas(string);
  void setCanciones(vector<canciones>);
  string toString();
};
#endif
