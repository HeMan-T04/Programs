//WAP to implement constructor overloading. 
class Overload{
    int a, b;
    Overload(){
        a = 0;
        b = 0;
    }
    Overload(int a, int b){
        this.a = a;
        this.b = b;
    }
    void display(){
        System.out.println("a = " + a + ", b = " + b);
    }
    public static void main(String[] args) {
        Overload o1 = new Overload();
        Overload o2 = new Overload(10, 20);
        o1.display();
        o2.display();
    }
}