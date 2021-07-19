#include "mainlib.hpp"

double croot(double x){
	double y;
	for(double i=1; i<=x; i+=0.001){
		if(x/(i*i)==i){ 
			y = i; 
			break;
		} 
		assert(i==x && x/(i*i)!=i);
	}
	return y;
}
