//WAP that creates a class Accounts with following details:Instance variables: ac_no., name, ac_name, balance .Methods: withdrawal(), deposit(),display().Use constructors to initialize members. 
import java.util.*;
class Accounts{
    int ac_no;
    String name;
    String ac_name;
    double balance;
    Accounts(int ac_no, String name, String ac_name, double balance){
        this.ac_no = ac_no;
        this.name = name;
        this.ac_name = ac_name;
        this.balance = balance;
    }
    void withdrawal(double amount){
        if (amount > balance){
            System.out.println("Insufficient balance");
        }
        else{
            balance -= amount;
        }
    }
    void deposit(double amount){
        balance += amount;
    }
    void display(){
        System.out.println("Account number: " + ac_no);
        System.out.println("Name: " + name);
        System.out.println("Account name: " + ac_name);
        System.out.println("Balance: " + balance);
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter account number: ");
        int ac_no = sc.nextInt();
        System.out.println("Enter name: ");
        String name = sc.next();
        System.out.println("Enter account name(Savings/Current): ");
        String ac_name = sc.next();
        System.out.println("Enter balance: ");
        double balance = sc.nextDouble();
        Accounts a = new Accounts(ac_no, name, ac_name, balance);
        a.display();
        while (true){
            System.out.println("Enter 1 to deposit, 2 to withdraw, 3 to display, 4 to exit");
            int choice = sc.nextInt();
            switch (choice){
                case 1:
                    System.out.println("Enter amount to deposit: ");
                    double amount = sc.nextDouble();
                    a.deposit(amount);
                    break;
                case 2:
                    System.out.println("Enter amount to withdraw: ");
                    amount = sc.nextDouble();
                    a.withdrawal(amount);
                    break;
                case 3:
                    a.display();
                    break;
                case 4:
                    System.exit(0);
                default:
                    System.out.println("Invalid choice");
            }
        }
    }
}