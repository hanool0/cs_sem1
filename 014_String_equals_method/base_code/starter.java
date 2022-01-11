import java.util.Scanner;
import java.util.Random;

class starter {
	public static void main(String args[]) {
		// the string "I love to learn coding remotely." will appear in
		// the command window when you compile and run this program.
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Choose a role: Wizard, Warrior, or a Rogue.");
		String a = sc.nextLine();
		if(a.equals("Wizard")){System.out.println("You are very intelligent!!");} 
		else if(a.equals("wizard")){System.out.println("You are very intelligent!");} 
		else if(a.equals("Warrior")){System.out.println("You are a very brave man!");}
		else if(a.equals("warrior")){System.out.println("You are a very brave man!");} 
		else if(a.equals("Rogue")){System.out.println("You are a very skilled man!");}
		else if(a.equals("rogue")){System.out.println("You are a very skilled man!");}
		else{System.out.println("You did not choose a role.");}
	}

}
