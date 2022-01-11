import java.util.Scanner;
import java.util.Random;

class starter {
	public static void main(String args[]) {
		// the string "I love to learn coding remotely." will appear in
		// the command window when you compile and run this program.
		Scanner sc = new Scanner(System.in);
		int point = 25;
		
		System.out.println("What is your name?"); 
		String name = new String(sc.nextLine()); 
		
		System.out.println("What is your title? Ex: Slayer of Dragons"); 
		String title = new String(sc.nextLine()); 
		
		System.out.println("Choose a role: Wizard, Warrior, or a Rogue.");
		String a = sc.nextLine();
		if(a.equals("Wizard")){System.out.println("You are very intelligent!!");} 
		else if(a.equals("wizard")){System.out.println("You are very intelligent!");} 
		else if(a.equals("Warrior")){System.out.println("You are a very brave man!");}
		else if(a.equals("warrior")){System.out.println("You are a very brave man!");} 
		else if(a.equals("Rogue")){System.out.println("You are a very skilled man!");}
		else if(a.equals("rogue")){System.out.println("You are a very skilled man!");}
		else{System.out.println("You have not chosen a role. Please rerun the lab!");}
		
		
		System.out.println("You have 25 skill points to spend on the following: Strength, Dexterity, Intelligence, Constitution, and Charisma. Spend them wisely.");
		
		System.out.print("Strength (1-10):");
		int str = sc.nextInt(); 
		sc.nextLine(); 
		if(str>10){System.out.println("invalid number, STRENGTH was set to 0");str=0;}
		point-=str;
		System.out.println("You have " +point+ " points left to spend."); 
		
		System.out.print("Dexterity (1-10):");
		int dxr = sc.nextInt(); 
		sc.nextLine(); 
		if(dxr>10){System.out.println("invalid number, DEXTERITY was set to 0");dxr=0;}
		point-=dxr;
		System.out.println("You have " +point+ " points left to spend."); 
		
		System.out.print("Intelligence (1-10):");
		int itg = sc.nextInt(); 
		sc.nextLine(); 
		if(itg>10){System.out.println("invalid number, INTELLIGENCE was set to 0");itg=0;}
		point-=itg;
		System.out.println("You have " +point+ " points left to spend."); 
		
		System.out.print("Constitution (1-10):");
		int ctn = sc.nextInt(); 
		sc.nextLine(); 
		if(ctn>10){System.out.println("invalid number, CONSTITUTION was set to 0");ctn=0;}
		point-=ctn;
		System.out.println("You have " +point+ " points left to spend.");
		
		System.out.print("Charisma (1-10):");
		int cma = sc.nextInt();
		sc.nextLine(); 
		if(cma>10){System.out.println("invalid number, CHARISMA was set to 0");cma=0;}
		point-=cma;
		System.out.println("You have " +point+ " points left to spend for next time"); 
		
		System.out.println("You are " + name + " , the " + title + " of CVHS."); 
		System.out.println("You are a " + a + " with the following stats!"); 
		System.out.println("Strength - " + str);
		System.out.println("Dexterity - " + dxr); 
		System.out.println("Intelligence - " + itg); 
		System.out.println("Constitution - " + ctn);
		System.out.println("Charisma - " + cma); 
		
		System.out.println("Good luck on your quest " + name + "!"); 
		
		
		
		
		
		
		
		
		
		
	
	}	

}
