
#include <stdio.h>
#include <math.h>

int main () {

    float salarioBase, salarioReceber, salarioComImposto;
    int percentualGratificacao, percentualImposto;

    printf("\nDigite o salario do funcionario!!!\n");

    scanf("%f%*c",&salarioBase);


    printf("\nDigite o percentual de gratificacao salarial!!!\n");

    scanf("%f%*c",&percentualGratificacao);


    printf("\nDigite o valor do imposto!!!\n");

    scanf("%f%*c",&percentualImposto);



    salarioComImposto = salarioBase - (salarioBase * (percentualImposto/100));

    salarioReceber = salarioComImposto + (salarioBase * (percentualGratificacao/100));



    printf("\nO valor do salario com reajuste = %f\n", salarioReceber);


    getchar();
    return 0;

}
