#include <iostream>
#include "album.hpp"
#include "canciones.hpp"
#include "genero.hpp"
#include "playlist.hpp"
#include <string>
#include <vector>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	vector<genero*>Lista_Generos;
	vector<canciones*>Lista_Canciones;
	vector<album*>Lista_Albums;
	vector<playlist*>Lista_Playlist;
	int opcion = 0;
	while(opcion !=5) {
		cout<<endl;
		cout<<endl;
		cout<<endl;
		cout<<"Bienvenido!"<<endl;
		cout<<"1. Mantenimientio"<<endl;
		cout<<"2. Sobrecargar (*)"<<endl;
		cout<<"3. Sobrecargar (+)"<<endl;
		cout<<"4. Sobrecargar (-)"<<endl;
		cout<<"5. Salir"<<endl;
		cin >> opcion;
		if(opcion == 1) {
			int opcion2 = 0;
			cout<<endl;
			cout<<"1. Agregar Generos"<<endl;
			cout<<"2. Agregar canciones"<<endl;
			cout<<"3. Modificar Generos"<<endl;
			cout<<"4. Modificar Canciones"<<endl;
			cout<<"5. Eliminar Genero"<<endl;
			cout<<"6. Eliminar Canciones"<<endl;
			cout<<"7. Listar Generos"<<endl;
			cout<<"8. Listar Canciones"<<endl;
			cout<<"9. Listar album"<<endl;
			cout<<"10. Listar PlayLists"<<endl;
			cin >>opcion2;
			if(opcion2 == 1) {
				string nombre;
				cout<<"Ingrese nombre de genero : ";
				cin>>nombre;
				genero *g = new genero(nombre);
				Lista_Generos.push_back(g);	
			}
			
			if(opcion2 == 2) {
				string nombre;
				string artistas;
				string aux = "";
				string duracion;
				char resp;
				genero *Genero;
				cout<<"Ingrese nombre de la cancion : ";
				cin>>nombre;
				do {
					cout<<"Ingrese nombre del artistas: ";
					cin >> artistas;
					cout<<"Desea agregar otro artista a la cancion [s/n]: ";
					aux += artistas +". ";
					cin>>resp;
				} while(resp == 's' || resp == 'S');
				cout<<"Ingrese duración de la canción en formato minuto segundo: ";
				cin>>duracion;
				int op;
				cout<<"----------Generos----------"<<endl;
				for(int i = 0; i <Lista_Generos.size(); i++) {
					genero *ge = Lista_Generos[i];
					cout<<i<<". "<<ge->getNombre()<<endl;
				}
				cout<<"Ingrese digito del genero: ";
				cin>>op;
				genero *g = Lista_Generos[op];
				canciones *c = new canciones(nombre,aux,duracion,*g);
				Lista_Canciones.push_back(c);
			}

			if(opcion2==3) {
				for(int i = 0; i < Lista_Generos.size(); i++) {
					genero *g = Lista_Generos[i];
					cout<< i<<". "<<g->getNombre()<<endl;

				}
				int i = -1;
				cout << "Ingrese el indice del genero que modificará: ";
				cin >> i;
				genero *g =Lista_Generos[i];
				string n_nombre;
				cout << "Ingrese el nuevo nombre: " << endl;
				cin >> n_nombre;
				g->setNombre(n_nombre);
			}
			if(opcion2==4) {
				for(int i = 0; i < Lista_Canciones.size(); i++) {
					canciones *c = Lista_Canciones[i];
					cout<< i<<". "<<c->getNombre()<<endl;

				}
				int i = -1;
				cout << "Ingrese el indice de la canción que modificará: ";
				cin >> i;
				canciones *c =Lista_Canciones[i];
				string nombre;
				string artistas;
				string aux= "";
				string duracion;
				char resp;
				cout<<"Ingrese nombre de la cancion : ";
				cin>>nombre;
				do {
					cout<<"Ingrese nombre del artistas: ";
					cin >> artistas;
					cout<<"Desea agregar otro artista a la cancion [s/n]: ";
					aux += artistas +". ";
					cin>>resp;
				} while(resp == 's' || resp == 'S');
				cout<<"Ingrese duración de la canción en formato minuto segundo: ";
				cin>>duracion;
				int op;
				cout<<"----------Generos----------"<<endl;
				for(int i = 0; i <Lista_Generos.size(); i++) {
					genero *ge = Lista_Generos[i];
					cout<<i<<". "<<ge->getNombre()<<endl;
				}
				cout<<"Ingrese digito del genero: ";
				cin>>op;
				genero *g = Lista_Generos[op];
				c->setArtista(aux);
				c->setDuracion(duracion);
				c->setGenero(*g);
				c->setNombre(nombre);

			}
			if(opcion2 == 5) {
				for(int i = 0; i < Lista_Generos.size(); i++) {
					genero *g2 = Lista_Generos[i];
					cout<<i<<". "<<g2->getNombre()<<endl;
				}
				int ind = 0;
				cout << "Ingrese el indice del genero que eliminara: ";
				cin >> ind;
				delete Lista_Generos[ind];
				Lista_Generos.erase(Lista_Generos.begin()+ind);
			}
			
			if(opcion2 == 6) {
				for(int i = 0; i < Lista_Canciones.size(); i++) {
					canciones *c = Lista_Canciones[i];
					cout<<i<<". "<<c->getNombre()<<endl;
				}
				int ind = -1;
				cout << "Ingrese el indice de la canción  que eliminara: ";
				cin >> ind;
				delete Lista_Canciones[ind];
				Lista_Canciones.erase(Lista_Canciones.begin()+ind);
			}
			if(opcion2 == 7) {
				for(int i = 0; i < Lista_Generos.size(); i++) {
					genero *g = Lista_Generos[i];
					cout<< i<<". "<<g->getNombre()<<endl;

				}
			}
			if(opcion2==8) {
				for(int i = 0; i < Lista_Canciones.size(); i++) {
					canciones *c = Lista_Canciones[i];
					cout<<i<<". "<<c->getNombre()<<endl;
				}
			}
			if(opcion2==9) {
				for(int i = 0; i < Lista_Albums.size(); i++) {
					album  *a = Lista_Albums[i];
					cout<<i<<". "<<a->getNombre()<<endl;
				}
			}
			if(opcion2==10) {
				for(int i = 0; i < Lista_Playlist.size(); i++) {
					playlist *p = Lista_Playlist[i];
					cout<<i<<". "<<p->getNombre()<<endl;
				}
			}

		}

		}
		for(int i = 0; i <Lista_Generos.size(); i++) {
			delete Lista_Generos[i];
		}

		for(int i = 0; i <Lista_Canciones.size(); i++) {
			delete Lista_Canciones[i];
		}
		for(int i = 0; i < Lista_Albums.size(); i++) {
			delete Lista_Albums[i];
		}
		for(int i = 0; i < Lista_Playlist.size(); i++) {
			delete Lista_Playlist[i];
	}
	
		return 0;
	}