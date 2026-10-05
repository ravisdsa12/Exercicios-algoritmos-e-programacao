package JOGO_DA_VELHA;

import java.util.Random;
import javax.swing.JOptionPane;

public class Partida{
    private Celula[] celulas;
    private Jogador[] jogadores;
    private int contJogador;
    private int turno; 
    private int contJogadas;
    private Random random;

    public Partida(){
        this.celulas = new Celula[9];
        for(int i =0 ; i< celulas.length; i++){
            celulas [i] = new Celula(i);
        }

        this.jogadores = new Jogador[2];
        this.random = new Random();
        this.contJogador = 0;
        this.turno = 0;
        this.contJogadas=0;
    }

    public void definirQuemComeca() {
        turno = random.nextInt(2);
    }   

    public boolean addJogador (Jogador jogador){
        if(this.contJogador < this.jogadores.length){
            jogadores[this.contJogador] = jogador;
            this.contJogador++;
            return true;
        }
        else {
            return false;
        }
    }   

    public boolean jogar(int posicao) {
        boolean marcou = jogadores[turno].jogar(celulas[posicao-1]);

        if (marcou) {
            contJogadas++;
            turno = (turno + 1) % 2;
        }

        return marcou;
    }

    public boolean partidaTerminada() {
        return contJogadas == 9;
    }

    public Jogador getJogadorDaVez() {
        return jogadores[turno];
    }

    public String apresentarTabuleiro(){
        String resultado = "";
        for(int i =0 ;i<celulas.length;i++){
            if (i%3 == 0){
                resultado += "\n";
            }
            resultado+= celulas[i].getSimbolo().getCaractere() +"   ";
        }
        return resultado;

    }

    private Simbolo simboloVencedor() {
        int[][] combinacoes = {
                {0, 1, 2}, {3, 4, 5}, {6, 7, 8},
                {0, 3, 6}, {1, 4, 7}, {2, 5, 8},
                {0, 4, 8}, {2, 4, 6}
            };
        for (int[] c : combinacoes) {
            Simbolo s1 = celulas[c[0]].getSimbolo();
            Simbolo s2 = celulas[c[1]].getSimbolo();
            Simbolo s3 = celulas[c[2]].getSimbolo();
            if (s1 != Simbolo.VAZIO && s1 == s2 && s2 == s3) {
                return s1;
            }
        }
        return null;
    }

    public boolean temVencedor() {
        return simboloVencedor() != null;
    }

    public Jogador getVencedor() {
        Simbolo vencedor = simboloVencedor();
        if (vencedor == null) {
            return null;

        }
        
        for (Jogador j : jogadores) {
            if (j.getSimbolo() == vencedor) {
                return j;
            }
        }
        return null;
    }

}
