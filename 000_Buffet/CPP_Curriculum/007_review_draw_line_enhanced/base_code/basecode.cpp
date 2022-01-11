// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	char symbol; 
	cout<<"Please enter the symbol:"<<endl; 
	cin>>symbol; 
	
	int length = 0; 
	cout<<"Please enter line length:"<<endl; 
	cin>>length; 
	
	int xcord = 0; 
	cout<<"Please enter line x coordinate:"<<endl; 
	cin>>xcord; 
	
	int ycord = 0; 
	cout<<"Please enter line y coordinate:"<<endl; 
	cin>>ycord; 

	for(int x = 0; x <= length; x++){
		gotoxy(xcord + x,ycord); 
		cout<<symbol; 
	}

}
