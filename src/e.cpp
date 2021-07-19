#include "mainlib.hpp"

long double factorial_e (int n){
	long double pat = 1;
	if (n==0){
		return 1;
	} else {
	for (int i=1; i<=n; i++) {
		pat = pat * i;
	}
	return pat;
	}
}

long double e(int accuracy){
	long double result;
        for(int i=0; i<=accuracy; i++){
			result+=(1/factorial_e(i));
		}
		return result;
	}
	


