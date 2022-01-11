// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	char symbol;
	cout<<"Create a snowflake! Enter (*)"<<endl; 
	cin>>symbol;
	for(int i = 0; i < 5; i ++){	
	gotoxy(4,6 + i); 
	cout<<symbol<<endl; 
	sleep(1); 
	gotoxy(4, 6 + i); 
	cout<<" "<<endl;
	sleep(1); }
	

	
	
}


