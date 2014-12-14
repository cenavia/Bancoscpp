#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

using namespace std;

int main()
{
	int opc;
	char cedula[100], codigo[50], tipo[150], saldo[50];
	char fecha_oportuna[150];
	int enter=13;
	
	do{do{system("cls");
	cout<<"\n\n\n Bancos - Menu principal\n\n\n";
	cout<<"1.- Ingresar cuentas.\n";
	cout<<"2.- Ver cuentas.\n";
	cout<<"3.- Area de un Triangulo.\n";
	cout<<"4.- Salir.\n Opcion : ";
	cin>>opc;
	}while(opc<1 || opc>4);
	switch (opc)
	{
       case 1:
				
				FILE *directorio;
				
				printf("AGENDA TELEFONICA\n");
				
				printf("\nIngrese Datos Solicitados ");
				fgets(cedula, 50, stdin);
				
				printf("\nIngrese Cedula: ");
				fgets(cedula, 50, stdin);
				
				printf("\nIngese Codigo: ");
				fgets(codigo, 150, stdin);
				
				printf("\nIngese Tipo: ");
				fgets(tipo, 50, stdin);
				
				printf("\nIngese Saldo: ");
				fgets(saldo, 150, stdin);
				
				printf("\nIngrese Fecha: ");
				fgets(fecha_oportuna, 100, stdin);
				
				if((directorio=fopen("Cuentas.txt","a")) != NULL)
				{
				
				printf("\nArchivo guardado correctamente !!!!");
				
				fputs(cedula, directorio);
				fputs(codigo, directorio);
				fputs(tipo, directorio);
				fputs(saldo, directorio);
				fputs(fecha_oportuna, directorio);
				fprintf(directorio, "\n------------------------------------------------------------\n");
				
				fclose(directorio);
				}
				getch();

            break;
       case 2:
            
            break;
       case 3:
            
            break;
		}
	}while(opc<4);
    

}
