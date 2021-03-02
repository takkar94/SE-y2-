#ifndef TAPE_H
#define TAPE_H
#include "Publication.h"

class Tape : public Publication{
	private:
		int time;
	public:
		void getData(){
			Publication::getData() ;
			cout<<"Enter the time "<<endl;
			cin>>time;
		}
		
		void putData(){
			Publication::putData();
			cout<<"The time is " << time;
		}
	
}; 





#endif
