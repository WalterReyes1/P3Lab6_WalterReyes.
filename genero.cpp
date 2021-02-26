#include "genero.hpp"

genero::genero(){

}

genero::genero(string g){
  this->nombre = g;
}

string genero::getNombre(){
	return this->nombre;
}
void genero::setNombre(string g){
	this->nombre=g;
} 

genero::~genero(){
  cout << "Oprimieron mi genero " << endl;
}