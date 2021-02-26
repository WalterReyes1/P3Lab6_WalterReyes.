#ifndef PLAYLIST_HPP
#define PLAYLIST_HPP
#include<iostream>
#include<string>
#include <vector>
#include "canciones.hpp"
using namespace std;
class playlist {
	private: 
	string nombre;
	vector<canciones>Canciones;
  public:
  playlist();
  playlist(string, vector<canciones>);
  ~playlist();
  string getNombre();
  vector<canciones>getPlaylist();
  void setNombre(string);
  void setPlaylist(vector<canciones>);
  string toString();
};
#endif
