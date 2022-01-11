import java.util.Scanner;
import java.util.Random;

class starter {
	public static void main(String args[]) {
		// Your code goes below here
	Scanner sc = new Scanner(System.in); 
	
	System.out.println("What is your name?"); 
	String name = new String(sc.nextLine());
	
	int a = 0; 
	while(true)
	{
		System.out.println(a); 
		if(a == 10)
		{
			break; 
		}
		a = a + 1;
	}
	

		
	}
}
