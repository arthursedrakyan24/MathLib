#include "mainlib.hpp"

bool pyth(int x, int y, int z){
	if(pow(x,2)+pow(y,2)==pow(z,2) || pow(z,2)+pow(y,2)==pow(x,2) || pow(x,2)+pow(z,2)==pow(y,2)) {
		return true;
	} else {
		return false;
	}
}
