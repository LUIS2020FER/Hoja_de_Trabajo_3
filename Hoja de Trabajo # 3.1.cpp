# include < fstream >
# include < iostream >
# include < vector >
# include < ctime >
# include < cstdlib >
# include < stdio.h >
# include < string >

usando el  espacio de nombres  est�ndar ;
 venta nula ();
int  main () {
	venta ();
	devuelve  0 ;
}

nula  venta () {
	int tipoprod;
	int tipo;
	precio de flotaci�n ;
	int unidades;
	flotador descuento;
	flotador totalvta;
	
	cout << " ------ Pizzer�a << Gran Sabor ------- " << endl;
	cout << " ingrese el tipo de pizza " . << endl;
	cout << " pizza grande (80.00) -> 1 -Descuento 10% " << endl;
	cout << " pizza familiar (125.00) -> 1 -Descuento 15% " << endl;
	cout << " fiesta de pizza (100.00) -> 1 -Descuento 20% " << endl;
	cin >> tipoprod;
	cout << " indique el n�mero de unidades a comprar. " << endl;
	cin >> unidades;
	
	if (tipoprod == 1 ) {
		descuento = 0.10 ;
		precio = 80.00 ;
		totalvta = (precio- (precio * descuento)) * unidades;	
	}
	if (tipoprod == 2 ) {
		descuento = 0.15 ;
		precio = 125.00 ;
		totalvta = (precio- (precio * descuento)) * unidades;
	}
	if (tipoprod == 3 ) {
		descuento = 0.20 ;
		precio = 100.00 ;
		totalvta = (precio- (precio * descuento)) * unidades;
	}
	cout << tipoprod << "  " << descuento << "  " << precio << "  " << unidades << "  " << totalvta;
	
}


/ * prueba
catcht (excepci�n x)
cout << "Error en la manipulaci�n"
* /

/ *
pizzer�a struct {
	int grande;
	int familiar;
	int fiesta;
};
nulo mp ();
vac�o calcular_grabar ();
nulo leer_archivo ();
void mp () {// menu principal
	
	int resp;
	// string nombrearchivo;
	// cout << "Indique nombre de archivo:";
	// getline (cin, nombrearchivo);
	
	hacer{
		sistema ("CLS");
		cout << "--------------------------" << "\ n";
		cout << "Men� principal" << "\ n";
		cout << "-------------------" << "\ n";
		cout << "1 - Realizar un pedido" << "\ n";
		cout << "2 - leer el archivo" << "\ n";
		cout << "3 - Imprimir en pantalla el total global, total por producto y porcentaje" << "\ n";
		cout << "4 - Salir" << "\ n";
		cout << "--------------------------" << "\ n";
		cout << "Seleccione su opci�n:";
		cin >> resp;
		si (resp == 1) {		
			sistema ("CLS");
			calcular_grabar
		m�s si (resp == 2) {		
			sistema ("CLS");
			leer_archivo ();
		}
		m�s si (resp == 3) {		
			sistema ("CLS");
			imprimir ();
		}			
		m�s si (resp == 4)
			rotura;
		m�s 
			rotura;
		
	} while (resp! = 4);
}
void calcular_grabar () {
	flotante desc,
	flotador grande,
	flotador familiar;
	fiesta flotante;
	precio de flotaci�n;
	cuerda tipo;
	ofstream archivo;
	para (int i == resp) {
		cout << "ingrese el tipo de pizza a pedir"; cin << tipo;
	if ((tipo == "grande" || (tipo == "Grande") || ("GRANDE"))
	}
	
	
		
	
} * /
