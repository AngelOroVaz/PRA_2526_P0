#include <iostream>

class BrazoRobotico {
	private:
		double x,y,z;
	       	bool Sujeto;
	public:
		BrazoRobotico();
		double getx();
		double gety();
		double getz();
		bool getSujeto();
		void coger();
		void dejar();
		double mover(double,double,double);


