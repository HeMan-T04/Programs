//Illustrate any 10 functions of String class.
class Stringfunctions{
    public static void main(String args[])
    {
    String str = "Hello World";
    System.out.println(str.charAt(0));
    System.out.println(str.codePointAt(0));
    System.out.println(str.codePointCount(0,5));
    System.out.println(str.compareTo("Hello"));
    System.out.println(str.compareToIgnoreCase("hello"));
    System.out.println(str.concat("Hello"));
    System.out.println(str.contains("Hello"));
    System.out.println(str.contentEquals("Hello"));
    System.out.println(str.endsWith("Hello"));
    System.out.println(str.equals("Hello"));
    }
}