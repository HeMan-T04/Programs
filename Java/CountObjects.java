//. WAP to count the no. of objects created in a program.
class CountObjects{
    int a;
    static int count;
    CountObjects(int a){
        this.a = a;
        count++;
    }
    static void display(){
        System.out.println("No. of objects created: " + count);
    }
    public static void main(String[] args) {
        CountObjects c1 = new CountObjects(10);
        CountObjects c2 = new CountObjects(20);
        CountObjects c3 = new CountObjects(30);
        CountObjects.display();
    }
        
}
