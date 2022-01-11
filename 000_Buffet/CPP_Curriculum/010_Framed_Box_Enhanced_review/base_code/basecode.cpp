// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	char symbol; 
	cout<<"Please enter border symbol:"<<endl; 
	cin>>symbol; 
	
	int width; 
	cout<<"Please enter box width:"<<endl; 
	cin>>width; 
	
	int height= 0; 
	cout<<"Please enter box height:"<<endl; 
	cin>>height; 
	
	int xcord=0; 
	cout<<"Please enter x coordinate:"<<endl; 
	cin>>xcord;
	
	int ycord=0;
	cout<<"Please enter y coordinate:"<<endl; 
	cin>>ycord;
	
	for(int h = 0; h < height; h++){		
		for(int e = 0; e <width; e++) {
		gotoxy(e + xcord,ycord + h);
		cout<<symbol;
	}
	
	}
	
	for(int i = 0; i < height - 2; i++){
		for(int cond = 0; cond<width - 2; cond++){
			gotoxy(xcord + cond+1 ,ycord + i+1); 
			cout<<" "; 
		}
	}
}
