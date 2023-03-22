//WAP to find out factorial of a number through recursion.
import java.util.*;
class FactorialRec{
    int f,fact;
    FactorialRec(int f){
        this.f=f;
    }
    int fact(int f){
        if(f==0){
            return 1;
        }
        else{
            return f*fact(f-1);
        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a number: ");
        int f = sc.nextInt();
        FactorialRec f1 = new FactorialRec(f);
        System.out.println("Factorial of " + f + " is " + f1.fact(f));
    }
}