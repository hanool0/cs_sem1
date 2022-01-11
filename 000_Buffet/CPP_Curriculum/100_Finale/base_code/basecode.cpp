// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	gotoxy(4,8);
	cout<<"          *             "<<endl; 
	gotoxy(4,9); 
	cout<<"        *****"<<endl; 
	gotoxy(4,10); 
	cout<<"       ********    "<<endl; 
	gotoxy(4,11); 
	cout<<"      **********         "<<endl; 
	gotoxy(4,12); 
	cout<<"     ************          "<<endl; 
	gotoxy(4,13); 
	cout<<"    ************** "<<endl; 
	gotoxy(4,14); 
	cout<<"   **************** "<<endl; 
	gotoxy(4,15); 
	cout<<"          || "<<endl; 
	
	for(int y =0; y<2; y++){
		for(int x =0; x<4; x++){
			gotoxy(x + 1, y + 14); 
			cout<<"*"; 
		}
	}
	gotoxy(2,13); 
	cout<<"oo"; 
	
	for(int i = 0; i < 8; i ++){	
	gotoxy(6,i); 
	cout<<"  *  ** "<<endl;
	sleep(1); 
	gotoxy(7,i); 
	cout<<" ** * *"<<endl; 
	sleep(1); 
	gotoxy(6, i); 
	cout<<"        "<<endl;
	sleep(1); 
	gotoxy(7, i); 
	cout<<"        "<<endl; 
	}
	
	
	
	
	
}
	
	


