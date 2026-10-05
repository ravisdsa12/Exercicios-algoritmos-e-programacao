import java.util.ArrayList;

public class testeLista2{
    public static void main(String [] args){
        ArrayList <String> nomes = new ArrayList();
        nomes.add("Ana");
        nomes.add("Bruno");
        nomes.add(0,"carla");
        nomes.add("Maria");
        nomes.add("marcus");    
        for (String n: nomes){
            System.out.println(n);
        }
        nomes.remove("Bruno");
        System.out.println(nomes.size());
    }
}