public class AppEmpresa{
    public static void main(String[] args){
        Funcionario funcionario01 = new Funcionario();
        funcionario01.nome = "Marcus Almado Junior";
        funcionario01.cpf = "321.321.434-23";
        funcionario01.horas = 48.5;
        funcionario01.valor_hora_trabalhada = 75.50;
        funcionario01.data_admissao = "08/11/2006";
        
        System.out.println("Salario do funcionario " + funcionario01.nome+": "+funcionario01.calculo_salario (funcionario01.valor_hora_trabalhada,funcionario01.horas));
        
        
    }
}