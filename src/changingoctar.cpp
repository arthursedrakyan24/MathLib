#include "mainlib.hpp"

int size_ofY(int z){
	int j=0;
	while(z>=8){
		j+=1;
		z/=8;
		}
	return (j+1);
}
int oct(int x){
	int f=x;
	int j=size_ofY(x);
	int sum=0;
	int y[j];
	int i=0;
	while(x>=8){
		y[i]=x%8;
		x/=8;
		i+=1;
	}
	y[j-1]=x;
	if(f>7){
		for(int i=j-1; i>=0; i--){
			sum+=pow(10,j-1)*y[i];
			j--;
		}
		return sum;
	} else { sum=f; 
	return sum;}
}

