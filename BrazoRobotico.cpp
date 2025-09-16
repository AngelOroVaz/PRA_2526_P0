#include <iostream>
#include "BrazoRobotico.h"

BrazoRobotico::BrazoRobotico(){
	x = 0.0;
	y = 0.0;
	z = 0.0;
	Sujeto = false;
double BrazoRobotico::getx(){
	return x;
}
double BrazoRobotico::gety(){
	return y;
}
double BrazoRobotico::getz(){
	return  z;
}
bool BrazoRobotico::getSujeto(){
	return Sujeto;
}
void BrazoRobotico::coger(){
	Sujeto=true;
}
void BrazoRobotico::dejar(){
	Sujeto=false;
}
void BrazoRobotico::mover(double x,double y,double z){
	this -> x = x;
	this -> y = y;
	this -> z = z;
int main(){return 0;}
