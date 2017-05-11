#include <string>			// std::string
#include <iostream>			//std::cout
#include <math.h>			//for exponents
using namespace std;

void printBit(int binary);		//print the vector in integer form
int AnB(int a, int b);			//A n B
int AUB(int a, int b);			//A U B
int AminusB(int a, int b);		//A - B
int setAfoo();					//fill setA
int setBfoo();					//fill setB


int main()
{
	int setA;
	int setB;

	setA = setAfoo();
	setB = setBfoo();
	


	cout << endl << "A: " << setA << "  ==  ";
	printBit(setA);
	cout << endl << "B: " << setB << "  ==  ";
	printBit(setB);
	cout << endl << endl;

	cout << endl << "A n B: " << endl;	//Intersection
	printBit(setA);
	cout << " n ";
	printBit(setB);
	cout << endl<< "= ";
	printBit(AnB(setA, setB));
 	cout << endl << endl;

 	cout << endl << "A U B: " << endl;	//Union
	printBit(setA);
	cout << " U ";
	printBit(setB);
	cout << endl << "= ";
	printBit(AUB(setA, setB));
	cout << endl << endl;

	cout << endl << "A - B: " << endl;	//Difference
	printBit(setA);
	cout << " - ";
	printBit(setB);
	cout << endl << "= ";
	printBit(AminusB(setA, setB));
	cout << endl << endl;

	cout << endl << "Goodbye" << endl;
	return 0; 
}

int setBfoo(){
	int count = 0;
	int setB = 0;
	int setBinput = 0;
	int math = 0;

	while(count < 10){
	cout << "Enter Values for Set B(0-9): ";
	cin >> setBinput;
		if (count == 0){
			cout << "Enter '100' to exit, or continue..."<<endl;
			cin.ignore();
		}
		if(setBinput >=10 || setBinput < 0){
			break;
		}
	math = (setB/pow(10,setBinput));
	math = (math -1)%10;

	if(setB/pow(10,setBinput) >= 1 && (math==0)){
		cout << "Enter a Different Value..."<<endl;
	}else{
		setB = setB + pow(10,setBinput);	//set a = set a + 10^(setAinput)
		count++;							//100   =   0   +   10^2
		}
	}
	return setB;			
}

int setAfoo(){
	int count = 0;
	int setA = 0;
	int setAinput = 0;
	int math = 0;

	while(count < 10){
	cout << "Enter Values for Set A(0-9): ";
	cin >> setAinput;
		if (count == 0){
			cout << "Enter '100' to exit, or continue..."<< endl;
			cin.ignore();
		}
		if(setAinput >=10 || setAinput < 0){
			break;
		}
	math = (setA/pow(10,setAinput));
	math = (math -1)%10;

	if(setA/pow(10,setAinput) >= 1 && (math==0)){
		cout << "Enter a Different Value..."<<endl;
	}else{
		setA = setA + pow(10,setAinput);	//set a = set a + 10^(setAinput)
		count++;							//100   =   0   +   10^2
	}
	}
	return setA;	
}


int AminusB(int a, int b){
	int ans = 0;
	int math = 0;
	bool aT, bT;

	for(int i =0; i<10; i++){
		aT = false;
		bT = false;
		math=0;

		math = (a/pow(10,i));
		math = (math - 1) % 10;

		if(a/pow(10,i) >= 1 && (math==0)){
			aT = true;
		}

		math=0;
		math = (b/pow(10,i));
		math = (math - 1) % 10;

		if(b/pow(10,i) >= 1 && (math==0)){
			bT = true;
		}
		if(aT & !bT){
			ans = ans + pow(10, i);
		}
	}
	
	return ans;

}


int AUB(int a, int b){
	int ans = 0;
	int math = 0;
	bool aT, bT;

	for(int i =0; i<10; i++){
		aT = false;
		bT = false;
		math=0;

		math = (a/pow(10,i));
		math = (math - 1) % 10;

		if(a/pow(10,i) >= 1 && (math==0)){
			aT = true;
		}

		math=0;
		math = (b/pow(10,i));
		math = (math - 1) % 10;

		if(b/pow(10,i) >= 1 && (math==0)){
			bT = true;
		}
		if(aT || bT){
			ans = ans + pow(10, i);
		}
	}
	
	return ans;

}


int AnB(int a, int b){
	int ans = 0;
	int math = 0;
	bool aT, bT;

	for(int i =0; i<10; i++){
		aT = false;
		bT = false;
		math=0;

		math = (a/pow(10,i));
		math = (math - 1) % 10;

		if(a/pow(10,i) >= 1 && (math==0)){
			aT = true;
		}

		math=0;
		math = (b/pow(10,i));
		math = (math - 1) % 10;

		if(b/pow(10,i) >= 1 && (math==0)){
			bT = true;
		}
		if(aT & bT){
			ans = ans + pow(10, i);
		}
	}
	
	return ans;

}


void printBit(int binary){
	int math = 0; 

	cout << "{";
	for(int i =0; i<10; i++){
		math = (binary/pow(10,i));
		math = (math - 1) % 10;

		if(binary/pow(10,i) >= 1 && (math==0)){
			cout << i << ",";

		}
	}
	cout << "}";


}






