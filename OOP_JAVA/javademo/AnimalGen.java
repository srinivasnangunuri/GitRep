// Inheritance Example: Basic version
package javademo;
class Animal
{
    private final String name;

    protected Animal(String name)
    {
        this.name = name;
    }

    public String getName()
    {
        return name;
    }

    String talk() {
	 	return "Huh?";
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

public class AnimalGen
{
    public static void main(String[] args)
    {
        Cat a = new Cat("cat1");
            System.out.println(a.getName() + ": " + a.talk());
     }
}
