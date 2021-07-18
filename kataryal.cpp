#include <iostream>
#include <cmath>

using namespace std;

bool ideal(int x){
	int y=0;
	for(int i=1; i<x-1; i++){
		if(x%i==0)
		{ 
			y+=i;
		}
	}
	if(x==y)
	{ 
		return true;
	}
	else 
	{ 
		return false;
	}
	}
