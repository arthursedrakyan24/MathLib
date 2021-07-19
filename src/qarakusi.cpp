#include "mainlib.hpp"

double sroot(double x){
	double y;
	for(double i=1; i<=x; i+=0.001){
		if(x/i==i){ 
			y = i; 
			break;
		} 
		assert(i==x && x/i!=i);
	}
	return y;
}
