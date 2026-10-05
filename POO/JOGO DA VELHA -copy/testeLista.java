import java.util.ArrayList;

public class testeLista{
    public static void main(String[] args){
        ArrayList nomes = new ArrayList();
        nomes.add ("ana");
        nomes.add ("bruno");
        nomes.add (1);
        nomes.add ("maria");
        nomes.add (5.7);
        for (int i =0 ;i<nomes.size();i++){
            System.out.println(nomes.get(i));    
        }
        //O arrayList foi projetado para receber qualquer tipo de objeto pelo processo autoBoxing;
        //para garantir que ele receba apenas Strings , devemos limitar o arraylis com <String>
        
        
        
    }
}