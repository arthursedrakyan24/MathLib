#include "mainlib.hpp"

int size_ofarr(int z){
	int j=0;
	while(z>=2){
		j+=1;
		z/=2;
		}
	return (j+1);
}
int bin(int x){
	int f=x;
	int j=size_ofarr(x);
	int sum=0;
	int y[j];
	int i=0;
	while(x>=2){
		y[i]=x%2;
		x/=2;
		i+=1;
	}
	y[j-1]=x;
	if(f>1){
		for(int i=j-1; i>=0; i--){
			sum+=pow(10,j-1)*y[i];
			j--;
		}
		return sum;
	} else { sum=f; 
	return sum;}
}

