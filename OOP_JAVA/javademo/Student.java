/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

package javademo;

/**
 * Encapsulation Test : Student Class using StudentEncap private Properties
 * @author Srinivas
 */
class StudentEncap {

   private String name;
   private String idNum;
   private int age;

   public int getAge(){
      return age;
   }

   public String getName(){
      return name;
   }

   public String getIdNum(){
      return idNum;
   }

   public void setAge( int newAge){
      age = newAge;
   }

   public void setName(String newName){
      name = newName;
   }

   public void setIdNum( String newId){
      idNum = newId;
   }
}

   public class Student{
    public static void main(String args[]){
      StudentEncap studentEncap = new StudentEncap();
      studentEncap.setName("James");
      studentEncap.setAge(20);
      studentEncap.setIdNum("12343ms");

      System.out.print("Name : " + studentEncap.getName()+
                             " Age : "+ studentEncap.getAge());
    }
}

