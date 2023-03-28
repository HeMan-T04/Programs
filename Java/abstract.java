abstract class Person{
    int id;
    String name;
    Person(){
        id=0;
        name="Default";
    }
    Person(int id, String name){
        this.id=id;
        this.name=name;
    }
    abstract void ShowDetails();
}

class Student extends Person{
    int marks;
    String course;
    Student(){
        super();
        marks=0;
        course="null";
    }
    Student(int id, String name,int marks,String course){
        super(id,name);
        this.marks=marks;
        this.course=course;
    }
    void ShowDetails(){
        System.out.println("Students Details:");
        System.out.println("id="+id);
        System.out.println("name="+name);
        System.out.println("marks="+marks);
        System.out.println("course="+course);
    }
    String calResult(){
        return("Result is "+marks);
    }
}
class Employee extends Person{
    int salary;
    String dept;
    Employee(){
        super();
        salary=0;
        dept="null";
    }
    Employee(int id, String name,int salary,String dept){
        super(id,name);
        this.salary=salary;
        this.dept=dept;
    }
    void ShowDetails(){
        System.out.println("Employee Details:");
        System.out.println("id="+id);
        System.out.println("name="+name);
        System.out.println("salary="+salary);
        System.out.println("department="+dept);
    }
    String calSalary(){
        return("Salary is "+salary);
    }
}
class Abstract{
    public static void main(String[] args){
        Student s1 = new Student(1,"Hemant",100,"BCA");
        Person s2 = new Student();
        s1.ShowDetails();
        System.out.println(s1.calResult());
        s2.ShowDetails();
        //s2.calResult(); Cannot use this because s2 refrence variable is of person class and can't see the unique part of the Student class.
        Student s3=(Student) s2;
        System.out.println(s3.calResult());// this is the way to access all the things of student class.
        Employee e1 = new Employee();
        Employee e2 = new Employee(1,"Hemant",100000,"IT");
        Person e3 = new Employee();
        e1.ShowDetails();
        System.out.println(e1.calSalary());
        e2.ShowDetails();
        System.out.println(e2.calSalary());
        e3.ShowDetails();
        //System.out.println(e3.calSalary());
        Employee e4=(Employee) e3;
        System.out.println(e4.calSalary());

    }
}