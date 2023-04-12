//Wap to implement Run time polymorphism.
class A
{
    void show()
    {
        System.out.println("This is class A");
    }
}
class B extends A
{
    void show()
    {
        System.out.println("This is class B");
    }
}
class Polymorphism
{
    public static void main(String args[])
    {
        A obj = new B();
        obj.show();
    }
}