#include <iostream>
#include "BrazoRobotico.h"

BrazoRobotico::BrazoRobotico(){
	x = 0.0;
	y = 0.0;
	z = 0.0;
	Sujeto = false;
double getx(){
	return x;
}
double gety(){
	return y;
}
double getz(){
	return  z;
}
bool getSujeto(){
	return Sujeto;
}
void coger(){
	Sujeto=true;
}
void dejar(){
	Sujeto=false;
}
void::BrazoRobotico(double x,double y,double z){
	this -> x = x;
	this -> y = y;
	this -> z = z;
int main(){return 0;}
