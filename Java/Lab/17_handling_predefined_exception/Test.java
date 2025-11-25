public class Test {
    public static void main(String[] args) {
        try {
            int a = 10 / 0; // ArithmeticException
            System.err.println(a);
        } catch (ArithmeticException e) {
            System.out.println("Predefined Exception Caught: " + e);
        }
    }
}
