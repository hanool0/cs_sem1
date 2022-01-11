// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	gotoxy(3,5); 
	cout<<'@'; 
	gotoxy(3,5+1); 
	cout << 'N';
	gotoxy(3,5+2); 
	cout << 'D'; 
	gotoxy(3,5+3);
	cout<<'R';
	gotoxy(3,5+4); 
	cout<<'E';
	gotoxy(3,5+5); 
	cout<<'W'; 
	
	for(int i = 0; i < 5; i++){
		gotoxy(3+i,5); 
		cout<<'N'; 
	}
}
