// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	cout<<"Enter yo numba"<<endl; 
	int a = 0; 
	cin>>a; 
	cout<<"Enter yo numba"<<endl; 
	int b = 0; 
	cin>>b; 
	
	cout<<"Enter yo operation"<<endl;
	char c; 
	cin>>c; 
	if(c == '+'){cout<<"Your number is:"<<a+b;}
	else if(c == '-'){cout<<"Your number is:"<<a-b;}
	else if(c == '*'){cout<<"Your number is:"<<a*b;}
	else if(c == '/'){cout<<"Your number is:"<<a/b;}
	else{cout<<"You did not enter an operation"<<endl;}
	
	
	
	
	

}
