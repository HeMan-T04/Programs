// WAP to print Fibonacci series.
import java.util.*;
class Fibonacci{
    int a, b, c;
    Fibonacci(){
        a = 0;
        b = 1;
        c = 0;
    }
    void display(int n){
        System.out.print(a + " " + b + " ");
        for (int i = 2; i < n; i++) {
            c = a + b;
            System.out.print(c + " ");
            a = b;
            b = c;
        }
    }
    public static void main(String[] args) {
        Fibonacci f1 = new Fibonacci();
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter number of terms: ");
        int n = sc.nextInt();
        f1.display(n);
    }
}