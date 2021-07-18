#include <iostream>
#include <cmath>
#include <cassert>

using namespace std;

double long log(double long a, double long base){

	assert( base > 0 && base !=1 );
	assert( a > 0 );

	int sum, precision=5;
	double long result=0;

	for( int i = 0; i < precision; i++){
		sum = 0;
		while( a >= base ) {
			a /= base;
			sum++;
		}
		result += sum * pow(10, (-1 * i));
		a = pow(a,10);
	}
	return result;
}
