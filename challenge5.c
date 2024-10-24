#include <stdio.h>

float addition(float a, float b) {
    return a + b;
}

float soustraction(float a, float b) {
    return a - b;
}

float multiplication(float a, float b) {
    return a * b;
}

float division(float a, float b) {
    while(b==0){


        printf("Erreur division par zero! \n Entrer un nouveau nombre :");
        scanf("%f",&b);


    }
        return a / b;

}

int main() {
    float a, b, c;
    char o;
    int cont=1;

    printf("entrez le premier nombre : ");
    scanf("%f", &a);

    printf("entrez le deuxieme nombre : ");
    scanf("%f", &b);


do{
        if(cont==1){
    printf("entrer une operation: ");
    scanf("%s", &o);

        }

    switch (o) {
        case '+':
            c = addition(a, b);
            printf("resultat : %f\n", c);
            cont=0;
            break;
        case '-':
            c = soustraction(a, b);
            printf("resultat : %f\n", c);
            cont=0;
            break;
        case '*':
            c = multiplication(a, b);
            printf("resultat : %f\n", c);
            cont=0;
            break;
        case '/':
            c = division(a, b);

                printf("resultat : %f\n", c);
                cont=0;
            break;
        default:
            printf("operateur invalide!\n");
            cont=1;
    }
    }while( cont==1);

    return 0;
}
