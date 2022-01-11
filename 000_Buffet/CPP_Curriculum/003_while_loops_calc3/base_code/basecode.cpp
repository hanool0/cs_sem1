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
	if(c == '+'){cout<<"Your number is:"<<a+b<<endl;}
	else if(c == '-'){cout<<"Your number is:"<<a-b<<endl;}
	else if(c == '*'){cout<<"Your number is:"<<a*b<<endl;}
	else if(c == '/'){cout<<"Your number is:"<<a/b<<endl;}
	else{cout<<"You did not enter an operation"<<endl;}
	
	int x = 0; 
	char y = 'q'; 
	while(true)
	{	cout<<"Would you like to continue using the calculator? Type y to continue and q to end. "<<endl; 
		cin>>y; 
		if(y == 'q'){
			cout << "Have a good day!"; 
			break;}
		
		cout<<"Enter yo numba"<<endl; 
		int a = 0; 
		cin>>a; 
		cout<<"Enter yo numba"<<endl; 
		int b = 0; 
		cin>>b; 
		cout<<"Enter yo operation"<<endl;
		char c; 
		cin>>c; 
		if(c == '+'){cout<<"Your number is:"<<a+b<<endl;}
		else if(c == '-'){cout<<"Your number is:"<<a-b<<endl;}
		else if(c == '*'){cout<<"Your number is:"<<a*b<<endl;}
		else if(c == '/'){cout<<"Your number is:"<<a/b<<endl;}
		else{cout<<"You did not enter an operation"<<endl;}
		if(x==100){
			break;}
			
	//int x = 0; 
	//char y = 'a'; 
	//while(true){
		//cout << "Youve been gnomed"; 
		//cin >> y;
		//if(y == 'q'){
			//cout << "Look behind you, gg bro"; 
			//break; 
		//}
		//if(x==100){
			//break; 
		//}
		//x = x + 1; 
		
	}
	}	
		
		
	
		
	


