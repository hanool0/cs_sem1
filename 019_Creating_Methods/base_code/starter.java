import java.util.Scanner;
import java.util.Random;
        
        class starter {
        public static void toString(String a){
        	System.out.println(a);

        }
        public static void toStringCombined(String a, String c){
            System.out.println(a + c); 
        }
		public static void main(String args[]) {
			Scanner sc = new Scanner(System.in); 
			System.out.print("Write a sentence!"); 
			String b = new String(sc.nextLine()); 
			System.out.print("Write a sentence!"); 
			String d = new String(sc.nextLine()); 
		    toString(b); toStringCombined(b,d);   
			
		}
		




		

		
	}


