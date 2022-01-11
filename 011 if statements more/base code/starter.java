import java.util.Scanner;

class starter {
	public static void main(String args[]) {
		// the string "I love to learn coding remotely." will appear in
		// the command window when you compile and run this program.
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter a random number");
		int a = sc.nextInt();
		sc.nextLine();
		System.out.println("Enter a random number");
		int b = sc.nextInt();
		sc.nextLine();
		System.out.println("Enter a random number");
		int c = sc.nextInt();
		sc.nextLine();
		if(a>b&&a>c){System.out.println("Highest is "+a);}
		if(b>a&&b>c){System.out.println("Highest is "+b);}
		if(c>a&&c>b){System.out.println("Highest is "+c);}
		if(a<b&&a<c){System.out.println("Lowest is "+a);}
		if(b<a&&b<c){System.out.println("Lowest is "+b);}
		if(c<a&&c<b){System.out.println("Lowest is "+c);}
	}
}
