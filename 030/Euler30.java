import java.lang.Math;

// sum of numbers that equal to the n th power of digits with x digits
public class Euler30 {

    public static final int POWER = 5;
    public static final int DIGITS = 5
    
    public static void main(String args[]) {
        Euler30 e = new Euler30();
        e.answer();
        // int array[] = e.getDigits(143);
        // for(int i = 0; i < array.length; i++) {
        //     System.out.println(array[i]);
        // }
    }

    // calcultes the upper limit for the numbers
    public int calcLimit(int power, int digits) {
        return (int)Math.pow(9, power) * digits;
    }

    // breaks down a number to an array of digits
    // 178 = 1, 7, 8
    public int[] getDigits(int number) {
        int digits = 0;
        while(number / Math.pow(10, digits) > 1 ) {
            digits++;
        }
        //System.out.println(digits);
        int num[] = new int[digits];
        for(int i = 0; i < digits; i++) {
            num[i] = (int)( number % (int)Math.pow(10, i+1) ) / (int)Math.pow(10, i);
        }
        return num;
    }

    // calculate the sum of numbers in the array to n th power
    public int sumOfDigitsTothePower(int digits[], int power) {
        int sum = 0;
        for(int i=0; i < digits.length; i++) {
            sum += Math.pow(digits[i], power);
        }
        return sum;
    }

    public void answer() {
        int limit = this.calcLimit(POWER, DIGITS);
        int sum = 0;
        System.out.println("Limit : " + limit);
        for(int i = 10; i < limit; i++) {
            if( i == this.sumOfDigitsTothePower(this.getDigits(i), POWER) ) {
                System.out.println(i);
                sum += i;
            }
        }
        System.out.println("Sum : " + sum);
    }

}


