import java.util.Scanner;
import java.util.Random;

class starter {
	public static void main(String args[]) {
		// Your code goes below here
		Scanner sc = new Scanner(System.in); 
		
		System.out.println("Please enter a name:");
		String name = new String(sc.nextLine()); 
		
		System.out.println("How many times would you like this name to be repeated?"); 
		int amount = sc.nextInt(); 
		int counter = 0;
		while(counter<amount){
			System.out.println(name);
			counter = counter + 1;
		}
		
		

		
	}
}
