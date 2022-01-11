import java.util.Scanner;

class starter {
	public static void main(String args[]) {
		// the string "I love to learn coding remotely." will appear in
		// the command window when you compile and run this program
		Scanner sc = new Scanner(System.in);
		System.out.println("what is 13 plus 16? ");
		int ans = sc.nextInt();
		System.out.println("What is the day of when you were born?");
		int day = sc.nextInt(); 
		if (day!=29)
		{
			System.out.println("The day when you were born is not the same day as when I was born!");
		    }
	} 
}
