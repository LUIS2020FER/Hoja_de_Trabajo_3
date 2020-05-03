# include < fstream >
# include < iostream >
# include < cstdlib >
# include < ctime >
# include < stdio.h >
# include < vector >
# include < string >
# include  < iomanip >
usando el  espacio de nombres  estándar ;

flotador sueldo_total;
vector <cadena> memoria;

struct  jugadores {
	cadena nombre;
	int edad;
	cuerda nacionalidad;
	
};

void  cal_grabar () {
	jugadores fut;
	fflush (stdin);
	cout << " Ingrese el nombre del jugador: " << " \ n " ; getline (cin, fut. nombre );
	cout << " Ingrese la edad del jugador: " << " \ n " ; cin >> fut. Edad ;
	fflush (stdin);
	cout << " Ingrese la nacionalidad del jugador: " << " \ n " ; getline (cin, fut. nacionalidad );
	fflush (stdin);
	flotador sueldo;
	flotador sueldofijo = 2500.00 ;

	if ((fut. nacionalidad == " Guate " ) || (fut. nacionalidad == " guate " ) || (fut. nacionalidad == " GUATE " )) {
			if ((fut. edad > = 15 ) && (fut. edad <= 20 )) {
			sueldo = (sueldofijo + 1400.00 );
		}
		de lo contrario  if ((fut. edad > = 21 ) && (fut. edad <= 25 )) {
			sueldo = (sueldofijo + 1500.00 );
		}
		de lo contrario  if ((fut. edad > = 26 ) && (fut. edad <= 30 )) {
			sueldo = (sueldofijo + 1200.00 );
		}
		más {
			sueldo = (sueldofijo + 800.00 );
		}
		
		sueldo_total + = sueldo;
		cout << " Sueldo total pre " << sueldo_total;
	}
	más {
		if ((fut. edad > = 15 ) && (fut. edad <= 20 )) {
			sueldo = ((sueldofijo + 500 ) + 1400.00 );
		}
		de lo contrario  if ((fut. edad > = 21 ) && (fut. edad <= 25 )) {
			sueldo = ((sueldofijo + 500 ) + 1500.00 );
		}
		de lo contrario  if ((fut. edad > = 26 ) && (fut. edad <= 30 )) {
			sueldo = ((sueldofijo + 500 ) + 1200.00 );
		}
		más {
			sueldo = ((sueldofijo + 500 ) + 800.00 );
		}
		sueldo_total + = sueldo;
	
		// grabando el archivo.
		
		ofstream miarchivo ( " jugadores.txt " , std :: ios :: app);
		miarchivo << fut. nombre << " \ t " << fut. edad << " \ t " << fut. nacionalidad << " \ t " << sueldo_total << endl;
       
        
    	archivo. cerrar ();
		jugadores recordset_r [lineas];
		para ( int i = 0 ; i <lineas; i ++) {
			miarchivo >> recordset_r [i]. nombre >> recordset_r [i]. edad >> recordset_r [i]. nacionalidad >> recordset_r [i]. sueldo_total ;
		}
    	miarchivo cerrar ();    
}

vacío  leer_archivo () {
	cout << " LISTADO DE LOS JUGADORES " << endl;
	cout << " --------------------------------------------- " << endl;
	cout << " NOM " << " \ t " << " EDAD " << " \ t " << " NACIO "   << " \ t " << " SUELTOT. " << endl;
	cout << " --------------------------------------------- " << endl;
	
	// declarando variable
	ifstream miarchivo;
	miarchivo abierto ( " jugadores.txt " , std :: ios :: in);
	línea de cuerda;
	
	while ( getline (miarchivo, line)) {
		cout << línea << endl;
		memoria push_back (línea);
	}
	miarchivo cerrar ();
	cadena vacía;
	cin >> vacío;
	volver ;
};

 planilla nula () {
	ifstream miarchivo;
	miarchivo abierto ( " jugadores.txt " , std :: ios :: in);
	línea de cuerda;
	
	while ( getline (miarchivo, line)) {
		cout << línea << endl;
		memoria push_back (línea);
	}
	miarchivo cerrar ();
	cadena vacía;
	cin >> vacío;
	volver ;

};

int  main () {
  int contador;
  char tecla;
  cadena vacía;
  bool bandera = falso ;
  
  hacer
    {
        sistema ( " CLS " );
        cout << " Cálculo de salario de los jugadores " . << endl;
        cout << " ------------------------------------ " << endl << endl;
        cout << " \ t 1 .- Ingresar jugador " << endl;
        cout << " \ t 2 .- Leer archivo " << endl;
        cout << " \ t 3 .- Mostrar total de salario " << endl;
        cout << " \ t 4 .- Salir " << endl << endl;
        cout << " ------------------------------------ " << endl;
        cout << " Elije una opcion: " ;
 
        cin >> tecla;
 
		interruptor (tecla)
    		{
			caso  ' 1 ' :
			 sistema ( " CLS " );
		 	 cal_grabar ();
        	 contador = contador + 1 ;
        	 romper ;
 
			caso  ' 2 ' :
			 sistema ( " CLS " );
        	 leer_archivo ();
        	 romper ;
      
      		caso  ' 3 ' :
        	 sistema ( " CLS " );
   			 cout << " Mostrar total de salario: " << " \ n " ;
        	 cout << " $. " << sueldo_total;
        	 cin >> vacío;
      		 romper ;

      		caso  ' 4 ' :
			 bandera = verdadero ;
			 // salida (1);
			 romper ;
 
			por defecto :
				sistema ( " CLS " );
				cout << " Opción no valida. \ a \ n " ;
				getchar ();
        		getline (cin, vacío);
				romper ;
		}
    } while (bandera! = verdadero );
  
  devuelve  0 ;
}


