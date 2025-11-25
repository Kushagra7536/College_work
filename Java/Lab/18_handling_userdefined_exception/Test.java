// User-Defined Exception
class MyException extends Exception {
    public MyException(String msg) {
        super(msg);
    }
}

public class Test {
    // Method declaring that it may throw MyException
    static void checkValue(int n) throws MyException {
        if (n < 0) {
            throw new MyException("Number cannot be negative!"); // using throw
        }
        System.out.println("Valid Number: " + n);
    }

    public static void main(String[] args) {
        try {
            checkValue(-5); // this will throw MyException
        } catch (MyException e) {
            System.out.println("User Defined Exception Caught: " + e.getMessage());
        }
    }
}
