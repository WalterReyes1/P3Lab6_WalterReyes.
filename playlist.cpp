#include "canciones.hpp"
#include "playlist.hpp"
#include <string>
#include <vector>
using namespace std;
playlist::playlist(){
  // cout<<"llamaron al vacio" << endl;
}

playlist::playlist(string _nombre, vector<canciones> _Canciones){
  this->nombre = _nombre;
  this->Canciones = _Canciones;
  
}


 


string playlist::getNombre(){
  return this->nombre;
}

void playlist::setNombre(string _nombre){
  this->nombre = _nombre;
}

vector<canciones>playlist::getPlaylist(){
  return this->Canciones;
}

void playlist::setPlaylist(vector<canciones>_Canciones){
  this->Canciones = _Canciones;
}


