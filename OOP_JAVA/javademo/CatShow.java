// Inheritance Example: Interface
package javademo;

interface AnimalActions
{
    String getName();
    String talk();
}

abstract class Animal implements AnimalActions
{
    private final String name;

    Animal(String name)
    {
        this.name = name;
    }

    public String getName()
    {
        return name;
    }
}

class Cat extends Animal
{
    public Cat(String name)
    {
        super(name);
    }

    public String talk()
    {
        return "Meowww!";
    }
}



public class CatShow
{
    public static void main(String[] args)
    {
        Cat cat = new Cat("Missy");
            
        

        System.out.println(cat.getName() + ": " + cat.talk());
        

	     // prints the following:
	     //
	     // Missy: Meowww!
	     // Mr. Mistoffelees: Meowww!
	     // Lassie: Arf! Arf!
    }
}

