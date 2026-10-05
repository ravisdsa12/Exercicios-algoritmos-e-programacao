package jogoDaVelha;

import JOGO_DA_VELHA.Simbolo;
import JOGO_DA_VELHA.Jogador;
import JOGO_DA_VELHA.Partida;
//as outras classes n precisam de import entre si porque elas estao no mesmo pacote!, caso estivessem em pacotes diferentes precisariam de import;
import javax.swing.JOptionPane;

public class AppPartida{
    public static void main(String [] args){
        Partida partida1 = new Partida();

        String nome1 = JOptionPane.showInputDialog("Qual o nome do jogador 1 ?");
        String simbolo1 = JOptionPane.showInputDialog("Qual o simbolo do jogador 1 (X ou O)?");
        if(simbolo1.equals("X")){
            Jogador jogador1 = new Jogador(nome1,Simbolo.X);  
            partida1.addJogador (jogador1);
        }
        else if(simbolo1.equals("O")){
            Jogador jogador1 = new Jogador(nome1,Simbolo.O);  
            partida1.addJogador (jogador1);
        }

        
        String nome2 = JOptionPane.showInputDialog("Qual o nome do jogador 2 ?");

        String simbolo2 = JOptionPane.showInputDialog("Qual o simbolo do jogador 2 (X ou O)?");
        if(simbolo2.equals("X")){
            Jogador jogador2 = new Jogador(nome1,Simbolo.X);
            partida1.addJogador (jogador2);
        }
        else if(simbolo2.equals("O")){
            Jogador jogador2 = new Jogador(nome1,Simbolo.O);
            partida1.addJogador (jogador2);
        }

        partida1.definirQuemComeca();

        while (!partida1.partidaTerminada()) {
            // Exibe o tabuleiro junto com a pergunta
            String mensagem = partida1.apresentarTabuleiro() + 
                "\n\nQual casa o jogador " + partida1.getJogadorDaVez().getnome() + " escolhe (1 a 9)?";

            String escolha = JOptionPane.showInputDialog(mensagem);
            int escolha_ = Integer.parseInt(escolha);

            if (!partida1.jogar(escolha_)) {
                JOptionPane.showMessageDialog(null, "Casa já ocupada ou inválida, tente novamente!");
            }   
        }

        JOptionPane.showMessageDialog(null, "Fim de jogo!\n" + partida1.apresentarTabuleiro());
    }
}
