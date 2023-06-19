#include <iostream>
using namespace std;

bool isEven(int value) {
    return value % 2 == 0;
}

void printValues(int values[]){
	for(int i=0;i<4;i++){
		cout<< values[i] << (isEven(values[i])? " bilangan prima":" bukan prima")<<endl;;
	}
	
}

int main(){
	int values[4] = {2,7,11,15};
	printValues(values);
}
