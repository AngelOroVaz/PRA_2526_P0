#include <iostream>
#include "BrazoRobotico.h"
using namespace std;
void main(){
	BrazoRobotico brazo;
	cout <<" Posicion x,y,z: (" << Brazo.getx() << "," << Brazo.gety() "," << Brazo.getz() ","<< endl;
	cout <<" Moviendo brazo a la posiscion X=10, y=20, z=30"
	Brazo.mover(10,20,30);
	Brazo.coger();
	BrazoRobotico brazo;
	cout <<" Posicion x,y,z: (" << Brazo.getx() << "," << Brazo.gety() "," << Brazo.getz() ","<< endl;
	cout <<" Moviendo brazo a la posiscion X=45, y=55, z=65"
	Brazo.mover(45,55,65;
	Brazo.coger();
	BrazoRobotico brazo;
	cout <<" Posicion x,y,z: (" << Brazo.getx() << "," << Brazo.gety() "," << Brazo.getz() ","<< endl;
	cout <<" Moviendo brazo a la posiscion X=85, y=70, z=80"
	Brazo.mover(85,70,80);
	Brazo.coger();
}
