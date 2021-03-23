#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*funçao para gerar numeros aleatorios */

int aleatorio (int max)
{
    return rand()% max;
}

/*funçao para pegar dados com o usuario */

void user_preencher (int vet[4]){

int i, j=1;


for (i=0; i<4; i++){

    printf("Informe o %d° numero:  ", j++);

        scanf("%d", &vet[i]);

  }

}


int main()
{
    system("color cf");


setlocale(LC_ALL,"portuguese");

int vcomp[4], vjog[4], vpont[4] , i , j, valores_iguais=0,  contador=0, tentativas=0;

srand(time(NULL));

/* Aqui declaro valor aleatorio para o vetor do computador*/

for (i=0; i<4; i++){

    vcomp[i]= aleatorio(10);

}


printf("____________ BEM VINDO AO JOGO DA SENHA ____________\n\n O computador ira gerar 4 digitos aleatorios, seu objetivo e acertar esses 4 digitos.\n Para cada número que voce erra sera pontuado: -1\n Para cara número que voce acerta mas em ordem diferente sera pontuado: 0\n E para cada número acertado sera pontuado: 1\n\n");



while(contador <10){
tentativas++;

contador++;

vpont[0] = -1;
vpont[1] = -1;
vpont[2] = -1;
vpont[3] = -1;

user_preencher(vjog);

printf("\n\n\n:----------------------%d° Tentativa-----------------------: \n\n\n", tentativas);

valores_iguais=0;

/*------------------------------------------------------------------------------*/


/*somatorio de pontos */



/* caso ele acerte os 4 numeros */

for (i=0; i<4; i++){

    if (vcomp[i]== vjog[i]){

        valores_iguais++;
    }

    if (valores_iguais==4){

        contador = 12;

        tentativas = 10;

    }
}
/*--------------------------------------------------------------------------------------------------------------------*/


/* contaçao de pontos */


for (i=0; i<4; i++){
    for (j=0 ; j<4; j++){
             if (vjog[i]== vcomp[j]){
            vpont[i]=0;

        }

    }
}

for (i=0; i<4; i++){

    if (vjog[i]== vcomp[i]){

        vpont[i]= 1;

    }

}
/* imprimindo pontuaçao */


printf("\n Numeros Digitados Pelo Jogador: ");

for (i=0; i<4; i++){

    printf(" [%d] ", vjog[i]);

}

printf("\n Pontuaçao Do Jogador:          ");


    for (i=0; i<4; i++){

        printf(" [%d] ", vpont[i]);

}
if (tentativas < 10){

    printf("\n\n\n:-----------------------%d° Tentativa-----------------------: \n\n\n", tentativas+1);
}

getchar();


}
    if (contador>=10){
       if (valores_iguais==4){

        printf("\n O Sorteio Da Maquina Foi :     ");

            for (i=0; i<4; i++){

                printf(" [%d] ", vcomp[i]);

}


        printf("\n\n\n----------------------- Parabens Voce Acertou Todos Os Numeros -----------------------\n\n\n");
    }else{

        printf("\n O Sorteio Da Maquina Foi :      ");

            for (i=0; i<4; i++){

                printf(" [%d] ", vcomp[i]);

}


    printf("\n\n\n--------------------------------------- GAME OVER ---------------------------------------\n\n\n");

    printf("\n . . . . . .. . . . . . . . . . . ,.-‘”. . . . . . . . . .``~., \n. . . . . . . .. . . . . .,.-”. . . . . . . . . . . . . . . . . .“-., \n. . . . .. . . . . . ..,/. . . . . . . . . . . . . . . . . . . . . . . ”:, \n. . . . . . . .. .,?. . . . . . . . . . . . . . . . . . . . . . . . . . .\, \n . . . . . . . . . /. . . . . . . . . . . . . . . . . . . . . . . . . . . . ,} \n. . . . . . . . ./. . . . . . . . . . . . . . . . . . . . . . . . . . ,:`^`.} \n. . . . . . . ./. . . . . . . . . . . . . . . . . . . . . . . . . ,:”. . . ./ \n. . . . . . .?. . . __. . . . . . . . . . . . . . . . . . . . :`. . . ./ \n. . . . . . . /__.(. . .“~-,_. . . . . . . . . . . . . . ,:`. . . .. ./ \n. . . . . . /(_. . ”~,_. . . ..“~,_. . . . . . . . . .,:`. . . . _/ \n. . . .. .{.._$;_. . .”=,_. . . .“-,_. . . ,.-~-,}, .~”; /. .. .} \n. . .. . .((. . .*~_. . . .”=-._. . .“;,,./`. . /” . . . ./. .. ../ \n. . . .. . .\`~,. . ..“~.,. . . . . . . . . ..`. . .}. . . . . . ../ \n. . . . . .(. ..`=-,,. . . .`. . . . . . . . . . . ..(. . . ;_,,-” \n. . . . . ../.`~,. . ..`-.. . . . . . . . . . . . . . ..\. . /\ \n. . . . . . \`~.*-,. . . . . . . . . . . . . . . . . ..|,./.....\,__ \n,,_. . . . . }.>-._\. . . . . . . . . . . . . . . . . .|. . . . . . ..`=~-, \n. .. `=~-,_\_. . . `\,. . . . . . . . . . . . . . . . .\ \n. . . . . . . . . .`=~-,,.\,. . . . . . . . . . . . . . . .\ \n. . . . . . . . . . . . . . . . `:,, . . . . . . . . . . . . . `\. . . . . .");

    }
}

    return 0;
}
