#include "mainlib.hpp"

long double pi(int accuracy){
	long double x=1, k=-1, result=0;
	for(int i=0; i<=accuracy; i++){
			result+=(pow(k,i)*(1/x));
			x+=2;
		}
		result=result*4;
		return result;
}
	
