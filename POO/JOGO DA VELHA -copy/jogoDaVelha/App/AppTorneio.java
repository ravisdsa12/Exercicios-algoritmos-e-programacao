package jogoDaVelha.App;

import javax.swing.JOptionPane;
import JOGO_DA_VELHA.Partida;
import JOGO_DA_VELHA.Jogador;
import JOGO_DA_VELHA.Celula;
import JOGO_DA_VELHA.Torneio;
import JOGO_DA_VELHA.Simbolo;

public class AppTorneio {
    public static void main(String[] args) {
        Torneio torneio = new Torneio();

        int mais_uma = 0;

        while (mais_uma == 0) {
            Partida partida1 = new Partida();
            String nome1 = JOptionPane.showInputDialog("Qual o nome do jogador 1 ?");
            String simbolo1 = JOptionPane.showInputDialog("Qual o simbolo do jogador 1 (X ou O)?");

            if (simbolo1.equals("X")) {
                Jogador jogador1 = new Jogador(nome1, Simbolo.X);  
                partida1.addJogador(jogador1);
            } else if (simbolo1.equals("O")) {
                Jogador jogador1 = new Jogador(nome1, Simbolo.O);  
                partida1.addJogador(jogador1);
            }

            String nome2 = JOptionPane.showInputDialog("Qual o nome do jogador 2 ?");
            String simbolo2 = JOptionPane.showInputDialog("Qual o simbolo do jogador 2 (X ou O)?");

            if (simbolo2.equals("X")) {
                Jogador jogador2 = new Jogador(nome2, Simbolo.X);
                partida1.addJogador(jogador2);
            } else if (simbolo2.equals("O")) {
                Jogador jogador2 = new Jogador(nome2, Simbolo.O);
                partida1.addJogador(jogador2);
            }

            partida1.definirQuemComeca();

            // Condição alterada para parar quando a partida terminar OU quando houver vencedor
            while (!partida1.partidaTerminada() && !partida1.temVencedor()) {
                // Exibe o tabuleiro junto com a pergunta
                String mensagem = partida1.apresentarTabuleiro() + 
                    "\n\nQual casa o jogador " + partida1.getJogadorDaVez().getnome() + " escolhe (1 a 9)?";

                String escolha = JOptionPane.showInputDialog(mensagem);
                int escolha_ = Integer.parseInt(escolha);

                if (!partida1.jogar(escolha_)) {
                    JOptionPane.showMessageDialog(null, "Casa já ocupada ou inválida, tente novamente!");
                }   
            }

            // Exibe mensagem final dependendo do resultado
            if (partida1.temVencedor()) {
                JOptionPane.showMessageDialog(null, "Temos um vencedor! " + partida1.getVencedor().getnome() + " venceu!\n" + partida1.apresentarTabuleiro());
            } else {
                JOptionPane.showMessageDialog(null, "Fim de jogo! Deu velha.\n" + partida1.apresentarTabuleiro());
            }

            mais_uma = JOptionPane.showConfirmDialog(null, "quer jogar mais uma partida?");
        }
    }
}