#include "canciones.hpp"
#include "genero.hpp"
#include <string>
using namespace std;
canciones::canciones(){
}

canciones::canciones(string _nombre,string _artistas,string _duracion , genero _Genero){
  this->nombre = _nombre;
  this->artista =_artistas;
  this->duracion = _duracion;
  this->Genero = _Genero;
  
}

canciones::~canciones(){
  cout << "Destruyeron las canciones" << endl;
}


string canciones::getNombre(){
  return this->nombre;
}

void canciones::setNombre(string _nombre){
  this->nombre = _nombre;
}

string canciones::getArtista(){
  return this->artista;
}

void canciones::setArtista(string _artista){
  this->artista = _artista;
}

string canciones::getDuracion(){
  return this->duracion;
}

void canciones::setDuracion(string _duracion){
  this->duracion = _duracion;
}

genero canciones::getGenero(){
  return this->Genero;
}

void canciones::setGenero(genero _Genero){
  this->Genero = _Genero;
}


string canciones::toString(){
  string retval = "";
  retval+= "cancion : "+ this->getNombre() +"\n";
  retval +="Artista: " +  this->getArtista() + "\n";
  retval +="Duracion: " +  this->getDuracion() + "\n";
  retval +="Genero: " + this->getGenero().getNombre() + "\n";
  return retval;
}