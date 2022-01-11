import java.util.Scanner;
import java.util.Random;

class starter {
	public static void main(String args[]) {
		// Your code goes below here
		Scanner sc = new Scanner(System.in); 
	
		Random rand = new Random(); 
		int secretNumber = rand.nextInt(1000) + 1;
	//	System.out.println(secretNumber);
		System.out.println("Guess a number from 1-1000.");
		int guess = sc.nextInt();
		
		if(secretNumber == guess){System.out.println("Your guess is correct!");}
		
		while(guess<secretNumber){
		guess = guess + 1; 
		System.out.println("Guess a number higher.");
		 guess = sc.nextInt();
		if(secretNumber==guess){System.out.println("Your guess is correct!");}
		else{System.out.println("Your guess is not correct");}
		}
		
		while(guess>secretNumber){
			guess = guess + 1; 
			System.out.println("Guess a number lower."); 
			guess = sc.nextInt(); 
			if(secretNumber==guess){System.out.println("Your guess is correct!");}
			else{System.out.println("Your guess is not correct");}
			
		}
		
		
		
		
		
		
		
	



		
	}
}
