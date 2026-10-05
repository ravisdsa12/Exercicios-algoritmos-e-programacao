public class Funcionario
{
    String nome;
    String cpf;
    double horas;
    double valor_hora_trabalhada;
    String data_admissao;
    
    double calculo_salario(double horas,double valor_hora){
        return horas * valor_hora;
    }
}