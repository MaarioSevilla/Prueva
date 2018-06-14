#include<stdio.h>
#include<stdlib.h>
int main()
{
		int z=0,t=0;
		do
 {		system("CLS");
		float vector[100], matriz[100][100], aux[100];
		int a=0, opc=0,opc3=0, i=0, n=0, datos=0, opc1=0, opcion=0, opcion2=0, opcion1=0, vm=0, nv=0, p=0, valor=0,vb=0,cont,k, encontrado=0;
		
		printf("Programa que muestra datos de un vector y una matriz \n");
		printf("Con que quieres trabajar primero si es vector escribe (1) si es matriz escribe(2)");
		scanf("%d",&opcion1);
		if (opcion1==1){
		
		
					printf ("dame el tamaño de los del vector que quieres ingresar: ");
     				scanf ("%d", &n);
			 		for (a=0;a<n;a++)
					{
         				printf ("inserte el dato [%d%]:\n ", a+1);
         				scanf ("%f", &vector[a]);
         			}
         		
				while (t!=1){
					
         			printf("-------------------MENU-------------------\n");
						printf("1)Mostrar datos\n");
						printf("2)Actualizar datos\n");
						printf("3)Busqueda de datos\n");
						printf("Elige una opcion\n");
						scanf("%d",&opc);
			switch(opc){//LLAVE SWITCH
					case 1:
         			printf("Estos son los datos que ingresaste\n");
         			for( i=0; i<n; i++){
					printf("|	%f  	|\n",vector[i]);
	 				}
					break;
					
					case 2:
					printf("Tengo estas dos opciones sobre actualizar datos\n");
					//datos a modificar------------------------------------------------------------------------------
					printf("1)Modificarlos si quieres por posicion oprime (1)y si quieres por valor oprime (2)\n");
					printf("2)Eliminarlos si quieres por posicion oprime (6)y si quieres por valor oprime (4)\n");
					scanf("%d",&opcion2);
					//DATOS POR POSICION
					if (opcion2==1){
					printf("Que posicion quieres cambiar");
					scanf("%d",&p);
					printf("Escribe el nuevo valor");
					scanf("%d",&nv);
					for(i=0;i<=100; i++)
					{
						if(i==p-1){
							vector[i]=nv;
						}
					}
					}
					//DATOS POR VALOR
					if(opcion2==2){
					printf("Cambiar datos por valor\n");
					printf("Ingresa el valor modificado\n");
					scanf("%d",&vm);
					printf("Ingresa el nuevo valor\n");
					scanf("%d",&nv);
						for(i=0; i<=100; i++){
							if(vector[i]==vm){
							vector[i]=nv;
							}
						}
					}
					//datos a eliminir POR VALOR --------------------------------------------------------
					if(opcion2==4){
					printf("ingrese el valor que sera eliminado");
					scanf("%d",&valor);
					
						int j;
						for(j=0; j<=100; j++){
						if(vector[i]!=valor){
						aux[j]=vector[i];
						j++;
						}	
					 }
						for (i=0; i<=vector[100];i++){
  							vector[i]=aux[i];
  	
  						}
					}
  					//DATOS A ELIMINAR POR POSICION
  					if (opcion2==6){
					printf("Que posicion quieres ELIMINAR");
					scanf("%d",&p);
				printf("Escribe el nuevo valor");
					scanf("%d",&nv);
					int j=0;
						for(i=0;i<=100; i++){
							if(i!=p){
							aux[j]=vector[i];
							j++;
							}
						}
						for (i=0; i<=vector[100];i++){
  							vector[i]=aux[i];
  	
  						}
					}
					break;
					case 3:
					//,p=0;
						//bool encontrado=false;
						printf("si desea buscar por pocicion presione 1 si desea buscar un valor precione 2: ");
						scanf("%d",&opc3);
						if(opc3==1){
							printf("ingrese la pocicion: ");
							scanf("%d",&p);
							if(p>n){
								printf("Error esa posicion no existe");
							}else{
								for(i=0;i<=n;i++){
									if(i=p-1){
										printf("el valor es: %f \n",vector[i]);
										break;
									}
								}
							}
						}
						if(opc3==2){
							printf("Escribe el valor que desea buscar: ");
					scanf("%d",&vb);
					for(k=0;k<=100;k++){
						cont++;
						if(vector[k]==vb){
							encontrado=1;
							printf("el valor %d esta en la pocicion %d \n",vb,cont);
						}
					}
						if(encontrado==0)
						{
							printf("no se a encontrado \n");
						}
						}
						break;
		}//LLAVE SWITCH
				//------------------------------------------------------------------------------------------------------------
		}
		 
	
				printf("Quieres ir al menu oprime 1 si no oprime (2)");
	 }
	 //vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv
	 if(opcion1==2){
	 			int c=0, opc2=0;
	 			printf("\nIntroduce numero de filas de la matriz ");
				scanf("%d", &opc2);
				printf("\nIntroduce numero de columnas de la matriz: ");
				scanf("%d", &n);
				for(i=0; i<opc2; i++)
				{
				for(c=0; c<n; c++)
				{
				printf("\nIntroduce un numero en\nFila [%d%]\n\tColumna [%d%]: ", i+1, c+1);
				scanf("%f",& matriz[i][c]);
				
				}
				}
					while (t!=1){
					
         			printf("------------------------MENU-----------------------\n");
						printf("1)Mostrar datos\n");
						printf("2)Actualizar datos\n");
						printf("3)Busqueda de datos\n");
						printf("Elige una opcion\n");
						scanf("%d",&opc);
				switch (opc){
					case 1:
				for(i=0; i<opc2; i++)
				{
				for(c=0; c<n; c++)
				{
				printf("|		%f		| "		, matriz[i][c]);
				
				}
				printf("\n");
				}
			}
			
					}//whilw t
		            } // while (t!=1);
	   	printf ("\nDesea salir (si no decea salir oprima(1)/(si decea salir oprima(2)): ");
    	scanf("%d",&z);
 }		while(z!=2);
		return 0;
}

