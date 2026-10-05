public class AppBanco{
    public static void main(String[] args){
        conta usuario1 = new conta("peter",2321,"0232",2997);
        conta usuario2 = new conta("jordan",3213,"0232",5998);
        conta usuario3 = new conta("jackson",3123,"0232",932);
        
        /*System.out.println("nome do titular: " + usuario1.getnome_titular());
        System.out.println("numero da conta: " + usuario1.getnumero_conta());
        System.out.println("agencia : " + usuario1.getagencia());
        System.out.println("Saldo atual: " + usuario1.getsaldo());
        
        usuario1.sacar(300);
        usuario1.depositar(1000);
        usuario1.mostrar_saldo();*/
        
        usuario1.mostrar_saldo();
        usuario2.mostrar_saldo();
        usuario3.mostrar_saldo();
        
        usuario2.transferir(usuario2,usuario1,'-',4000);
        usuario1.transferir(usuario1,usuario3,'-',2000);
        
        usuario1.mostrar_saldo();
        usuario2.mostrar_saldo();
        usuario3.mostrar_saldo();
    }
}