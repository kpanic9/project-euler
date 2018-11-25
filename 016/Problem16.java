import java.math.*;

public class Problem16 {

	public static void main(String args[]) {
		
		BigInteger num = new BigInteger("2");
		
		for(int i = 0; i < 1000-1; i++) {
			num = num.multiply(BigInteger.valueOf(2));
		}
		
		System.out.println(num);
		
		String numbers = num.toString();
		int sum = 0;
		for(int i = 0; i < numbers.length(); i++) {
			System.out.print(numbers.charAt(i));
			sum += Integer.parseInt(Character.toString(numbers.charAt(i)));
		}
		System.out.println("\nAnswer: " + sum);
		
	}

}
