#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

using namespace std;

int main()
{
	int opc;
	char cedula[100], codigo[50], tipo[150], saldo[50], nombre[50], edad[50], barrio[50];
	char fecha_oportuna[150], codigo_banco [150], nombre_banco [50], calificacion[50], ciudad[50];
	int enter=13;
	// Codigo para Opciones del Sistema.
	do{do{system("cls");
	cout<<"\n\n\n Bancos - Menu principal\n\n\n";
	cout<<"1.- Ingresar cuentas.\n";
	cout<<"2.- Ver cuentas.\n";
	cout<<"3.- Salir.\n Opcion : ";
	cin>>opc;
	}while(opc<1 || opc>4);
	switch (opc)
	{
       case 1:
				// Codigo para Ingresar informacion al programa - Cuentas
				FILE *directorio;
				
				printf("AGENDA TELEFONICA\n");
				
				printf("\nIngrese Datos Solicitados ");
				fgets(cedula, 50, stdin);
				
				printf("\nIngrese Cedula: ");
				fgets(cedula, 50, stdin);
				
				printf("\nIngrese Nombre: ");
				fgets(nombre, 50, stdin);
				
				printf("\nIngrese Edad: ");
				fgets(edad, 50, stdin);
				
				printf("\nIngrese Direccion: ");
				fgets(barrio, 50, stdin);
				
				printf("\nIngese Codigo: ");
				fgets(codigo, 150, stdin);
				
				printf("\nIngese Tipo: ");
				fgets(tipo, 50, stdin);
				
				printf("\nIngese Saldo: ");
				fgets(saldo, 150, stdin);
				
				printf("\nIngrese Fecha: ");
				fgets(fecha_oportuna, 100, stdin);

				printf("\nIngrese Codigo Banco: ");
				fgets(codigo_banco, 100, stdin);
				
				printf("\nIngrese Nombre Banco: ");
				fgets(nombre_banco, 100, stdin);
				
				printf("\nIngrese calificacion: ");
				fgets(calificacion, 100, stdin);
				
				printf("\nIngrese Ciudad: ");
				fgets(ciudad, 100, stdin);
				
				
				if((directorio=fopen("Cuentas.txt","a")) != NULL)
				{
				
			
				fprintf(directorio, "\n \n");
				fprintf(directorio, "Cedula: ");
				fputs(cedula, directorio);
				fprintf(directorio, "Codigo: ");
				fputs(codigo, directorio);
				fprintf(directorio, "Tipo: ");
				fputs(tipo, directorio);
				fprintf(directorio, "Saldo: ");
				fputs(saldo, directorio);
				fprintf(directorio, "Fecha: ");
				fputs(fecha_oportuna, directorio);
				fprintf(directorio, "\n------------------------------------------------------------\n");
				
				fclose(directorio);
				}
				if((directorio=fopen("Usuarios.txt","a")) != NULL)
				{
				
				
			
				fprintf(directorio, "\n \n");
				fprintf(directorio, "Cedula: ");
				fputs(cedula, directorio);
				fprintf(directorio, "Nombre: ");
				fputs(nombre, directorio);
				fprintf(directorio, "Edad: ");
				fputs(edad, directorio);
				fprintf(directorio, "Barrio: ");
				fputs(barrio, directorio);
				fprintf(directorio, "\n------------------------------------------------------------\n");
				
				fclose(directorio);
				}
				if((directorio=fopen("Bancos.txt","a")) != NULL)
				{
				
				
				fprintf(directorio, "\n \n");
				fprintf(directorio, "Codigo Banco: ");
				fputs(codigo_banco, directorio);
				fprintf(directorio, "Nombre Banco: ");
				fputs(nombre_banco, directorio);
				fprintf(directorio, "Calificacion: ");
				fputs(calificacion, directorio);
				fprintf(directorio, "Ciudad: ");
				fputs(ciudad, directorio);
				fprintf(directorio, "\n------------------------------------------------------------\n");
				
				fclose(directorio);
				}
				if((directorio=fopen("InfoCuenta.txt","a")) != NULL)
				{
				
				printf("\nArchivo guardado correctamente !!!!");
				
				fprintf(directorio, "\n \n");
				fprintf(directorio, "Nombre: ");
				fputs(nombre, directorio);
				fprintf(directorio, "Nombre Banco: ");
				fputs(nombre_banco, directorio);
				fprintf(directorio, "Tipo: ");
				fputs(tipo, directorio);
				fprintf(directorio, "Saldo: ");
				fputs(saldo, directorio);
				fprintf(directorio, "Fecha: ");
				fputs(fecha_oportuna, directorio);
				fprintf(directorio, "\n------------------------------------------------------------\n");
				
				fclose(directorio);
				}
				getch();

            break;
       case 2:
       	// Codigo para Leer datos ingresados.
          FILE  *pfs;
		  char letra;
		
		  // Abro el fichero
		  pfs = fopen("Cuentas.txt","r");
		
		  // Si ha dado fallado termino
		  if ( pfs == NULL )
		     {
		     puts("Error al abrir el fichero.");
		     return 1;
		     }
		
		  letra = getc(pfs);
		  while ( !feof(pfs) ) // Mientras no sea final de fichero
		     {
		     putchar(letra);    // Muestra el caracter leido
		     letra = getc(pfs);
		     }
		
		   // Cerrar fichero
		  fclose(pfs);
		  getch();
		  //getchar();
        break;
       
		}
	}while(opc<3);
    

}
