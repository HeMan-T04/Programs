//. Consider a university where students who participate in the national games or Olympics are given some grace marks. Therefore, the final marks awarded = Exam_Marks + Sports_Grace_Marks. A class diagram representing this scenario is as follow
class Student{
    String name;
    int rollNo;
    Student(String name, int rollNo){
        this.name = name;
        this.rollNo = rollNo;
    }
    void show(){
        System.out.println("Name: "+name);
        System.out.println("Roll No: "+rollNo);
    }
}
class Exam extends Student{
    int marks;
    Exam(String name, int rollNo, int marks){
        super(name, rollNo);
        this.marks = marks;
    }
    void show(){
        super.show();
        System.out.println("Marks: "+marks);
    }
}
interface Sports{
    int graceMarks = 10;
}
class Result extends Exam implements Sports{
    Result(String name, int rollNo, int marks){
        super(name, rollNo, marks);
    }
    void show(){
        super.show();
        System.out.println("Grace Marks: "+graceMarks);
        System.out.println("Final Marks: "+(marks+graceMarks));
    }
}
class CalcResult{
    public static void main(String args[]){
        Result obj = new Result("Rahul", 1, 90);
        obj.show();
    }
}