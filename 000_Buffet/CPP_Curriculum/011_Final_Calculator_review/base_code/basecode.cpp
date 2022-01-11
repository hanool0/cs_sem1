// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	
	char ch; 
	cout<<"Please enter a character"<<endl;  
	cin>>ch; 
	
	int ir = 0; 
	cout<<"Please enter an integer"<<endl; 
	cin>>ir; 

	cout<<"Please enter an operation symbol"<<endl; 
	char op; 
	cin>>op; 
	
	int ir2 = 0; 
	cout<<"Please enter a second integer"<<endl; 
	cin>>ir2; 
	
	if(op == '+'){cout<<ir; "+" ir2; = ir+ir2;}
	else if(op == '-'){cout<<ir; "-" ir2; = ir-ir2;}
	else if(op == '*'){cout<<ir; "*" ir2; = ir*ir2;}
	else if(op == '/'){cout<<ir; "/" ir2; = ir/ir2;}
	else{cout<<"You did not enter an operation"<<endl;}
	

}
