#include <iostream>
#include <vector>
#include <string>
using namespace std;
typedef vector <double> fila;
typedef vector <fila> matriz;

void list_id_client( vector <string> v_c){
	int id;
	cout<<"INGRESE LA ID DEL CLIENTE"<<endl;
	cin>>id;
	cout<<"EL CLIENTE CON LA ID  "<< id<<" ES  "<<v_c[id]<<endl;
}

void list_client(int id_c ,vector <string> v_c){
	int m=0;
	while(m<id_c){
		++m;
		cout<<"ID  :  "<<m<<" NOMBRE  :  "<<v_c[m]<<endl;
	}
}

void registro_client(int &id_c, vector <string> &v_c ){ // ID_C = IDENTIFICADOR DE CLIENTE     V_C = VECTOR CON LOS CLIENTES
	string name;
	++id_c;
	cout<<"INGRESE NOMBRE COMPLETO DEL CLIENTE "<<endl;
	getline(cin,name);
	v_c[id_c]=name;
	
}

int main(){
	bool menuP=true;
	vector <string> clientes(100);
	int id_client=0;
	while(menuP){
//		system("cls");
		string op;
		cout<<"###############################################################################"<<endl;
		cout<<"#                    SISTEMA DE INVENTARIO Y FACTURACION                      #"<<endl;
		cout<<"###############################################################################"<<endl<<endl;
		cout<<"DISPONIBLES LAS SIGUIENTES OPCIONES "<<endl<<endl;
		cout<<"1-REGISTRAR CLIENTES"<<endl<<endl;
		cout<<"2-VER LISTA COMPLETA DE CLIENTES"<<endl<<endl;
		cout<<"3-CONSULTAR CLIENTE POR ID"<<endl<<endl;
		cout<<"4-VER INVENTARIO DISPONIBLE"<<endl<<endl;
		cout<<"5-AGREGAR O ELIMINAR ARTICULOS DEL INVENTARIO"<<endl<<endl;
		cout<<"6-FACTURAR"<<endl<<endl;
		cout<<"7-SALIR DEL PROGRAMA"<<endl;
		cin>>op;
		if(op=="1"){
			bool m2=true;
			system("cls");
			while(m2){
				string mm="g";
				registro_client(id_client,clientes);
				cout<<"Desea registrar otro cliente? (s/n)"<<endl;
				cin>>mm;
				if(mm=="N" or mm=="n"){
					m2=false;
					cout<<"desea volver al menu principal? (s/n)"<<endl;
					cin>>mm;
					if(mm=="N" or mm=="n"){
						menuP=false;
					}
				}
		}
		}
			if(op=="2"){
			bool m2=true;
			system("cls");
			while(m2){
				string mm="g";
				list_client(id_client,clientes);
				m2=false;
				cout<<"desea volver al menu principal? (s/n)"<<endl;
				cin>>mm;
				if(mm=="N" or mm=="n"){
					menuP=false;
				}
				
		}
		}
		if(op=="3"){
			bool m2=true;
			system("cls");
			while(m2){
				string mm="g";
				list_id_client(clientes);
				cout<<"Desea consultar otro cliente? (s/n)"<<endl;
				cin>>mm;
				if(mm=="N" or mm=="n"){
					m2=false;
					cout<<"desea volver al menu principal? (s/n)"<<endl;
					cin>>mm;
					if(mm=="N" or mm=="n"){
						menuP=false;
					}
				}
		}
		}


		if(op!="1" and op!="2" and op!="3" and op!="4" and op!="5" and op!="6" and op!="7" ){
			system("cls");
			cout<<endl;
			cout<<"Por favor asegure de introducir la opcion correcta (opciones disponibles 1 , 2 , 3 , 4 , 5 , 6 y 7)"<<endl<<endl;
		}	
	}
}
