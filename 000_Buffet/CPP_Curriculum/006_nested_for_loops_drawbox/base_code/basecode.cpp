// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	char symbol; 
	cout<<"Please enter box symbol:"<<endl; 
	cin>>symbol; 
	
	int width; 
	cout<<"Please enter box width:"<<endl; 
	cin>>width; 
	
	int length= 0; 
	cout<<"Please enter box length:"<<endl; 
	cin>>length; 
	
	for(int i = 1; i < length; i++){		
		for(int cond = 1; cond <=width; cond = cond + 1) {
		gotoxy(cond,i + 9);
		cout<<symbol;
	}
	
	}
	}
