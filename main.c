#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct dados{
    double D;
    double M;
    double A;
};
void gastos();
void movi_dosgasto();
int main();

int answer(){
  int conf_ok;
  printf("\n");
  printf("Aperte (1) para ir ao menu ");
  printf("\n");
  scanf("%d", &conf_ok);
  switch (conf_ok){
    case 1:
      main();
      break;
  }
  return 0;
}

void confi_cart(){
  int answer;
  printf("\n");
  printf("Aperte (1) para ir ao menu ");
  printf("\n");
  scanf("%d", &answer);
  switch(answer){
    case 1:
      main();
      break;
  }
}

void gastos(){
    FILE* fp = fopen("Dados_de_gastos.html", "w+");
    int ht;
    int i = 0;
    int D;
    char M[300];
    int A;
    int gastos_dados;
    double dados_list[] = {};
    char gasto_desc[250];
    float Dados;
    printf("Gastos e Receitas");
    printf("\n");
    printf("Gasto no dia: \n");
    scanf("%d", &D);
    printf("Gasto no mes: \n");
    scanf("%s", M);
    printf("Gasto no ano: \n");
    scanf("%d", &A);
    printf("O que você compro: \n");
    scanf("%s", gasto_desc);
    printf("Seu gasto: \n");
    scanf("%f", &Dados);
    dados_list[i] = Dados;
    printf("%.2f", dados_list[i]);
	  if(fp == NULL){
      printf("\n");
		  printf("Error");
      printf("\n");
	  } 
    ht = fputs("<!DOCTYPE html>\n", fp);
    ht = fputs("<html lang = 'en'>\n", fp);
    ht = fputs("<head>\n", fp);
    ht = fputs("<meta charset='UTF-8'>\n", fp);
    ht = fputs("</head>\n", fp);
    ht = fputs("<body>\n", fp);
    ht = fputs("<table>\n", fp);
    ht = fputs("<tr>\n", fp);
    ht = fputs("<th>Descrição de gastos</th>\n", fp);
    ht = fputs("<th>Dia: </th>\n", fp);
    ht = fputs("<th>Mês: </th>\n", fp);
    ht = fputs("<th>Ano: </th>\n", fp);
    ht = fputs("<th>Gasto: </th>\n", fp);
    ht = fputs("</tr>\n", fp);
    char * MA = (char*)malloc(500 * sizeof(char));
    sprintf(MA,"<td>%s</td>\n<td>%d</td>\n<td>%s</td>\n <td>%d</td>\n<td>%.3lf</td>",gasto_desc,D,M,A,Dados);
    ht = fputs(MA, fp);
    ht = fputs("<tr>\n", fp);
    ht = fputs("</tr>\n", fp);
    ht = fputs("</table>\n", fp);
    ht = fputs("</body>\n", fp);
    ht = fputs("</html>\n", fp);
	  fclose(fp);
    confi_cart();
}

void movi_dosgasto(){
    int op_of_the_move;
    double spending_in_the_day;
    printf("\n");
    printf("Movimentaçoes");
    printf("\n");
    printf("Casa (1)");
    printf("\n");
    printf("Seus Estudos (2)");
    printf("\n");
    printf("Vale transporte (3)");
    printf("\n");
    printf("Vale de Alimentação (4)");
    printf("\n");
    printf("Emprego (5)");
    printf("\n");
    printf("Voltar (6)");
    printf("\n");
    printf("Escolha uma: ");
    scanf("%d", &op_of_the_move);
        if(op_of_the_move == 1){
            FILE* fp = fopen("Casa.html","w+");
            int ht;
            char cat1[150] = "Casa";
            printf("Seu gasto em casa (%s): ", cat1);
            printf("\n");
            scanf("%lf", &spending_in_the_day);
            struct dados casa;
            casa.D = spending_in_the_day;
            casa.M = casa.D * 30;
            casa.A = casa.M * 12;
            printf("Dia: %.3lf  Mes: %.3lf  Ano: %.3lf", casa.D,casa.M,casa.A);
            if(fp == NULL){
                printf("\n");
                printf("Error");
                printf("\n");
            } 
            ht = fputs("<!DOCTYPE html>\n", fp);
            ht = fputs("<html lang = 'en'>\n", fp);
            ht = fputs("<head>\n", fp);
            ht = fputs("<meta charset='UTF-8'>\n", fp);
            ht = fputs("</head>\n", fp);
            ht = fputs("<body>\n", fp);
            ht = fputs("<table>\n", fp);
            ht = fputs("<tr>\n", fp);
            ht = fputs("<th>Categorias:</th>\n", fp);
            ht = fputs("<th>Dia </th>\n", fp);
            ht = fputs("<th>Mês </th>\n", fp);
            ht = fputs("<th>Ano </th>\n", fp);
            ht = fputs("</tr>\n", fp);
            ht = fputs("<tr>\n", fp);
            char *htmlC = (char*)malloc(500 * sizeof(char));
            sprintf(htmlC, "<td>Valores</td>\n<td>Valoer:%.3f</td>\n<td>Valor:%.3f</td>\n<td>Valor:%.3f</td>\n",casa.D,casa.M,casa.A);
            ht = fputs("</tr>\n", fp);
            ht = fputs(htmlC, fp);
            ht = fputs("<tr>\n", fp);
            ht = fputs("</tr>\n", fp);
            ht = fputs("</table>\n", fp);
            ht = fputs("</body>\n", fp);
            ht = fputs("</html>\n", fp);
            fclose(fp);
            answer();
        }else if (op_of_the_move == 2){
            FILE* fp = fopen("seus_estudos.html", "w+");
            int ht;
            char cat2[150] = "Seus Estudos";
            printf("Seus gastos nos estudos: (%s): \n", cat2);
            scanf("%lf", &spending_in_the_day);
            struct dados estudos;
            estudos.D = spending_in_the_day;
            estudos.M = estudos.D * 30;
            estudos.A = estudos.M * 12;
            printf("Ano: %.3lf  Mês: %.3lf  Ano: %.3lf", estudos.D, estudos.M, estudos.A);
            if(fp == NULL){
                printf("\n");
                printf("Error");
                printf("\n");
            } 
            ht = fputs("<!DOCTYPE html>\n", fp);
            ht = fputs("<html lang = 'en'>\n", fp);
            ht = fputs("<head>\n", fp);
            ht = fputs("<meta charset='UTF-8'>\n", fp);
            ht = fputs("</head>\n", fp);
            ht = fputs("<body>\n", fp);
            ht = fputs("<table>\n", fp);
            ht = fputs("<tr>\n", fp);
            ht = fputs("<th>Categoria:</th>\n", fp);
            ht = fputs("<th>Dia </th>\n", fp);
            ht = fputs("<th>Mês </th>\n", fp);
            ht = fputs("<th>Ano </th>\n", fp);
            ht = fputs("</tr>\n", fp);
            ht = fputs("<tr>\n", fp);
            char *htmlE = (char*)malloc(500 * sizeof(char));
            sprintf(htmlE,"<td>Valores</td>\n<td>Valor:%.3f</td>\n<td>Valor:%.3f</td>\n<td>Valor:%.3f</td>\n",estudos.D,estudos.M, estudos.A);
            ht = fputs("</tr>\n", fp);
            ht = fputs(htmlE, fp);
            ht = fputs("<tr>\n", fp);
            ht = fputs("</tr>\n", fp);
            ht = fputs("</table>\n", fp);
            ht = fputs("</body>\n", fp);
            ht = fputs("</html>\n", fp);
            fclose(fp);
            answer(); 
        }else if (op_of_the_move == 3){
            struct dados shuttle;
            FILE* fp = fopen("vale_transporte.html", "w+");
            int ht;
            char categoria4[100] = "Vale Transporte";
            printf("Seus gastos em transporte (%s): \n", categoria4);
            scanf("%lf", &spending_in_the_day);
            shuttle.D = spending_in_the_day;
            shuttle.M = shuttle.D * 30;
            shuttle.A = shuttle.M * 12;
            printf("Dia: %.3lf  Mês: %.3lf Ano: %.3lf", shuttle.D, shuttle.M, shuttle.A);
            if(fp == NULL){
                printf("\n");
                printf("Error");
                printf("\n");
            } 
            ht = fputs("<!DOCTYPE html>\n", fp);
            ht = fputs("<html lang = 'en'>\n", fp);
            ht = fputs("<head>\n", fp);
            ht = fputs("<meta charset='UTF-8'>\n", fp);
            ht = fputs("</head>\n", fp);
            ht = fputs("<body>\n", fp);
            ht = fputs("<table>\n", fp);
            ht = fputs("<tr>\n", fp);
            ht = fputs("<th>Categorias:</th>\n", fp);
            ht = fputs("<th>Gasto/dia</th>\n", fp);
            ht = fputs("<th>Gasto/mês</th>\n", fp);
            ht = fputs("<th>Gasto/ano</th>\n", fp);
            ht = fputs("</tr>\n", fp);
            ht = fputs("<tr>\n", fp);
            char *htmlVT = (char*)malloc(500 * sizeof(char));
            sprintf(htmlVT, "<td>Transporte</td>\n <td>Credito: %.3f</td>\n <td>Credito: %.3f</td>\n <td>Credito: %.3f</td>\n", shuttle.D, shuttle.M, shuttle.A);
            ht = fputs("</tr>\n", fp);
            ht = fputs(htmlVT, fp);
            ht = fputs("<tr>\n", fp);
            ht = fputs("</tr>\n", fp);
            ht = fputs("</table>\n", fp);
            ht = fputs("</body>\n", fp);
            ht = fputs("</html>\n", fp);
            fclose(fp);
            answer();
        }else if (op_of_the_move == 4){
            FILE* fp = fopen("Alimentacao.html", "w+");
            int ht;
            struct dados vale_alimenta;
            char cat4[150] = "Vale Alimentacao";
            printf("digite seu gasto por dia na categoria (%s): \n", cat4);
            scanf("%lf", &spending_in_the_day);
            vale_alimenta.D = spending_in_the_day;
            vale_alimenta.M = vale_alimenta.D * 30;
            vale_alimenta.A = vale_alimenta.M * 12;
            printf("Dia: %.3lf  Mês: %.3lf  Dia: %.3lf", vale_alimenta.D, vale_alimenta.M, vale_alimenta.A);
            if(fp == NULL){
                printf("\n");
                printf("Error");
                printf("\n");
            } 
            ht = fputs("<!DOCTYPE html>\n", fp);
            ht = fputs("<html lang = 'en'>\n", fp);
            ht = fputs("<head>\n", fp);
            ht = fputs("<meta charset='UTF-8'>\n", fp);
            ht = fputs("</head>\n", fp);
            ht = fputs("<body>\n", fp);
            ht = fputs("<table>\n", fp);
            ht = fputs("<tr>\n", fp);
            ht = fputs("<th>Categoria:</th>\n", fp);
            ht = fputs("<th>Dia</th>\n", fp);
            ht = fputs("<th>Mês</th>\n", fp);
            ht = fputs("<th>Ano</th>\n", fp);
            ht = fputs("</tr>\n", fp);
            ht = fputs("<tr>\n", fp);
            char *htmlAlim = (char*)malloc(500 * sizeof(char));
            sprintf(htmlAlim,"<td>Vale Alimentação</td>\n <td>Valor:%.3f</td>\n <td>Valor:%.3f</td>\n <td>Valor:%.3f</td>\n", vale_alimenta.D, vale_alimenta.M, vale_alimenta.A);
            ht = fputs("</tr>\n", fp);
            ht = fputs(htmlAlim, fp);
            ht = fputs("<tr>\n", fp);
            ht = fputs("</tr>\n", fp);
            ht = fputs("</table>\n", fp);
            ht = fputs("</body>\n", fp);
            ht = fputs("</html>\n", fp);
            fclose(fp);
            answer();
        }else if (op_of_the_move == 5){
            FILE* fp = fopen("Emprego_tab.html", "w+");
            int ht;
            char cat5[150] = "trabalho";
            printf("digite seu gasto por dia na categoria (%s): \n", cat5);
            scanf("%lf", &spending_in_the_day);
            struct dados trabalho;
            trabalho.D = spending_in_the_day;
            trabalho.M = trabalho.D * 30;
            trabalho.A = trabalho.M * 12;
            printf("Dia: %.3lf  Mês: %.3lf  Ano: %.3lf", trabalho.D, trabalho.M, trabalho.A);
            if(fp == NULL){
                printf("\n");
                printf("Error");
                printf("\n");
            } 
            ht = fputs("<!DOCTYPE html>\n", fp);
            ht = fputs("<html lang = 'en'>\n", fp);
            ht = fputs("<head>\n", fp);
            ht = fputs("<meta charset='UTF-8'>\n", fp);
            ht = fputs("</head>\n", fp);
            ht = fputs("<body>\n", fp);
            ht = fputs("<table>\n", fp);
            ht = fputs("<tr>\n", fp);
            ht = fputs("<th>Categorias:</th>\n", fp);
            ht = fputs("<th>Dia </th>\n", fp);
            ht = fputs("<th>Mês </th>\n", fp);
            ht = fputs("<th>Ano </th>\n", fp);
            ht = fputs("</tr>\n", fp);
            ht = fputs("<tr>\n", fp);
            char *htmlE = (char*)malloc(500 * sizeof(char));
            sprintf(htmlE, "<td>Valores</td>\n<td>Valor:%.3f</td>\n<td>Valor:%.3f</td>\n<td>Valor:%.3f</td>\n", trabalho.D, trabalho.M, trabalho.A);
            ht = fputs("</tr>\n", fp);
            ht = fputs(htmlE, fp);
            ht = fputs("<tr>\n", fp);
            ht = fputs("</tr>\n", fp);
            ht = fputs("</table>\n", fp);
            ht = fputs("</body>\n", fp);
            ht = fputs("</html>\n", fp);
            fclose(fp);
            answer();
        }else if(op_of_the_move == 6){
            main();
        }else{
            printf("\n");
            printf("Erro");
            printf("\n");
            return movi_dosgasto();
        }
}

int main(){
    int op;
    printf("BEM VINDO\n");
    printf("Receitas dos Gastos (1)");
    printf("\n");
    printf("Movimentação (2)");
    printf("\n");
    printf("Fechar (3)");
    printf("\n");
    printf("O que voce quer fazer? ");
    scanf("%d", &op);
    switch (op){
    case 1:
      gastos();
      break;
    case 2:
      movi_dosgasto();
      break;       
    case 3:
      printf("\n");
      printf("Obrigado e Feliz Natal <3.");
      printf("\n");
      break;
    default:
      printf("\n");
      printf("Erro");
      printf("\n");
      main();
      break;
    }
  return 0;
}