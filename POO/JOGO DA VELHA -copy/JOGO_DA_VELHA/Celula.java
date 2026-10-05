package JOGO_DA_VELHA;


public class Celula{
    private Simbolo simbolo = Simbolo.VAZIO;
    private int posicao;
    private static int contCelula;
    
    public Celula(){
        simbolo = Simbolo.VAZIO;
        contCelula++;
        
    }
    public Celula(int posicao){
        this.posicao = posicao;
        simbolo = Simbolo.VAZIO;
        contCelula++;
        
    }
    
    //n faz sentido criar um get simbolo e posiçao aqui , 
    //visto que apenas o marcar pode alterar estes atributos
    
    
    public Simbolo getSimbolo(){
        return this.simbolo;
    }
    public int getposicao(){
        return posicao;
    }
    public static int getcontCelula(){
        return contCelula;
    }
    
    boolean marcar (Simbolo simbolo){
        if (this.simbolo == Simbolo.VAZIO){
            this.simbolo = simbolo;
            return true;
        }
        return false;
    }
    void println (){
        System.out.println (simbolo);
    }
}