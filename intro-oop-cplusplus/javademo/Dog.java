/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

package javademo;

/**
 * Demo for Class and Object
 * @author Srinivas
 */
public class Dog{
   String breed;
   int age;
   String color;

   void barking(){
       System.out.println("BARK");
   }

   String getColor(){
       return color;
   }

   Dog(String iBreed, int iAge, String iColor){
       breed = iBreed;
       age = iAge;
       color = iColor;
   }

   public static void main(String[] args){
       Dog dog = new Dog("Labrador",5,"Black");
       dog.barking();
       System.out.println("Dog's Color: "+dog.getColor());
  }

}

