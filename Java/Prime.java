//. WAP to obtain a number by a user & check if it’s prime or not
import java.util.*;
class Prime{
    int p;
    Prime(int p){
        this.p=p;
    }
    void display(){
        boolean flag= true;
        for(int i=2;i<p;i++){
            if(p%i==0){
                flag=false;
            }}
        if(flag== true){
            System.out.println(p+" is a prime number");
        }
        else{
            System.out.println(p+" is not a prime number");
        }
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the value: ");
        int n= sc.nextInt();
        Prime p= new Prime(n);
        p.display();
    }
}
