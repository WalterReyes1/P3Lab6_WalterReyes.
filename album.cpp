#include "canciones.hpp"
#include "album.hpp"
#include <string>
#include <vector>
using namespace std;
album::album() {

}

album::album(string _nombre,string _artistas, vector<canciones> _Canciones) {
	this->nombre = _nombre;
	this->artistas=_artistas;
	this->Canciones = _Canciones;

}
album::~album(){
	cout<<"Liberando albums"<<endl;
}


string album::getNombre() {
	return this->nombre;
}

void album::setNombre(string _nombre) {
	this->nombre = _nombre;
}
string album::getArtistas() {
	return this->artistas;
}

void album::setArtistas(string _artistas) {
	this->artistas = _artistas;
}

vector<canciones>album::getCanciones() {
	return this->Canciones;
}

void album::setCanciones(vector<canciones>_Canciones) {
	this->Canciones = _Canciones;
}


