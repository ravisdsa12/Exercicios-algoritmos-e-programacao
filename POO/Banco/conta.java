public  class conta{
    private String nome_titular;
    private int numero_conta;
    private String agencia;
    private double saldo;
    
    public conta(String nom_titular,int numero_conta,String agencia,double saldo){
        this.nome_titular = nome_titular;
        this.numero_conta = numero_conta;
        this.agencia = agencia;
        this.saldo = saldo;
    }
    
    public String getnome_titular(){
        return nome_titular;
    }
    public void setnome_titular(String nome_titular){
        this.nome_titular = nome_titular;
    }
    
    public int getnumero_conta(){
        return numero_conta;
    }
    public void setnumero_conta(int numero_conta){
        this.numero_conta = numero_conta;
    }
    
    public String getagencia(){
        return agencia;
    }
    public void setagencia(String agencia){
        this.agencia =agencia;
    }
    
    public double getsaldo(){
        return saldo;
    }
    public void setsaldo(double saldo){
        this.saldo = saldo;
    }
    
    void sacar (double valor){
        saldo = saldo - valor;              
    }
    void depositar (double valor){
        saldo = saldo + valor;                
    }
    void mostrar_saldo(){
        System.out.println("Saldo atual: "+saldo);         
    }
    
    void transferir (conta conta1,conta conta2,char efetuar,double valor){
        if(efetuar == '-'){
            conta1.sacar(valor);
            conta2.depositar(valor);
        }
        else if(efetuar == '+'){
            conta1.depositar(valor);
            conta2.sacar(valor);
        }
    }
    
}