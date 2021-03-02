#include <iostream>
#include "Publication.h"
#include "Book.h"
#include "Tape.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int num;
	
	cout<<" what do you want to display  press 1 for Book and 2 for Tape" << endl;
	cin>>num;
	Publication *ptrArray[2] = { new Book, new Tape };
	
	if(num =1 ){
	ptrArray[0] -> getData();
	ptrArray[0] -> putData();
	}
	else{
	ptrArray[1] -> getData();
	ptrArray[1] -> putData();
	}
	
	
	
	
	ptrArray[0] -> getData();
	ptrArray[0] -> putData();
	
	
	ptrArray[1] -> getData();
	
	
	
	
	return 0;
}
