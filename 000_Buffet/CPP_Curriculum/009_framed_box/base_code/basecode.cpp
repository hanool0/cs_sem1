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
	
	
	gotoxy(0,0); 
	for(int i = 0; i<width; i++){
		cout<<symbol; 
	}
	gotoxy(0,0); 
	for(int i = 0; i<height; i++){
		gotoxy(0,i); 
		cout<<symbol<<endl; 
	}
	gotoxy(0,height);
	for(int i = 0; i<width; i++){
		cout<<symbol; 
	}
	gotoxy(width,0); 
	for(int i = 0; i<height; i++){
		gotoxy(width,i); 
		cout<<symbol<<endl; 
	}
	
	
	
}
	
	


