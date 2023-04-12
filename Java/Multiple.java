// wap to implement multiple inheritance in java 
interface A
{
    void show();
}
interface B
{
    void show();
}
class C implements A,B
{
    public void show()
    {
        System.out.println("Hello World");
    }
}
class Multiple
{
    public static void main(String args[])
    {
        C obj = new C();
        obj.show();
    }
}
