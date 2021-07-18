#include <iostream>
#include <cmath>
#include <cstring>
#include <cassert>

using namespace std;

int size_of_hex(int z){
	int j=0;
	while(z>=16){
		j+=1;
		z/=16;
		}
	return j+1;
}
string hex(int x){
	int f=x;
	int j=size_of_hex(x);
	string	y[j];
	string sum;
	int i=j-1;
	while(x>=16){
		y[i] = to_string(x%16);
		x/=16;
		i--;
	}
	for(int i = 0; i<j; i++){
		if(y[i]=="10"){y[i]="A";}
		if(y[i]=="11"){y[i]="B";}
		if(y[i]=="12"){y[i]="C";}
		if(y[i]=="13"){y[i]="D";}
		if(y[i]=="14"){y[i]="E";}
		if(y[i]=="15"){y[i]="F";}
	}
	if(f>=16){
		y[0]=to_string(x);
		for(int i=0; i<j; i++){
			sum+=y[i];
		}
		return sum;
	}
	else 
	{
	string a[1];
	a[0]=to_string(f);
	sum=a[0];
	return sum;	
	}
}

