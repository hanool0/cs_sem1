import java.util.Scanner;
import java.util.Random;

class starter {
	public static void main(String args[]) {
		// the string "I love to learn coding remotely." will appear in
		// the command window when you compile and run this program.
	Scanner sc = new Scanner(System.in); 
	
	Random rand = new Random(); 
	int a = rand.nextInt(1000) + 1; 
	
	System.out.println("Guess a number from 1-1000.");
	int guess = sc.nextInt();
	
	System.out.print(a); 
	System.out.println(" was the correct answer");
	
	
	if(a == guess){System.out.println("Your guess is correct!");}
	else{System.out.println("Your guess is not correct");}
      }

}