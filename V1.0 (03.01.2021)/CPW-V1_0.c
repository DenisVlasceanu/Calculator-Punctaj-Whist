//Copyright 2021 Vlasceanu Denis-Mihai 

#include <stdio.h>
#include <stdlib.h>

void joc_2(void)
{
    printf("CARTEA CU CEL MAI MIC NUMAR ESTE J\n");
    printf("\n");
    printf("\n");
    int punctaj_1 = 0;
    int punctaj_2 = 0;
    int pariu_1 = 0, pariu_2 = 0;
    int rezultat_1 = 0, rezultat_2 = 0;
    int aux1, aux2;
    int mana1, mana2, mana3, mana4, mana5, mana6, mana7, mana8;

printf("JOC DE 8 NR.1\n");
printf("\n");

        pariu_1 = 0, pariu_2 = 0;
        rezultat_1 = 0, rezultat_2 = 0;
        printf("PARIU JUCATOR 1: ");
        scanf("%d", &aux1);
        printf("JUCATORUL 2 NU ARE VOIE SA PARIEZE %d\n", 8 - aux1);
        printf("PARIU JUCATOR 2: ");
        scanf("%d", &aux2);
        pariu_1 = aux1;
        pariu_2 = aux2;
        printf("\n");

        printf("PARIU 1: %d\n", pariu_1);
        printf("PARIU 2: %d\n", pariu_2);

        printf("\n");
    printf("CINE IA MANA 1: ");
        scanf("%d", &mana1);
        if(mana1 == 1)
            rezultat_1++;
        else
            if(mana1 == 2)
                rezultat_2++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
    printf("CINE IA MANA 2: ");
        scanf("%d", &mana2);
        if(mana2 == 1)
            rezultat_1++;
        else
            if(mana2 == 2)
                rezultat_2++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
    printf("CINE IA MANA 3: ");
        scanf("%d", &mana3);
        if(mana3 == 1)
            rezultat_1++;
        else
            if(mana3 == 2)
                rezultat_2++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
    printf("CINE IA MANA 4: ");
        scanf("%d", &mana4);
        if(mana4 == 1)
            rezultat_1++;
        else
            if(mana4 == 2)
                rezultat_2++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
    printf("CINE IA MANA 5: ");
        scanf("%d", &mana5);
        if(mana5 == 1)
            rezultat_1++;
        else
            if(mana5 == 2)
                rezultat_2++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
    printf("CINE IA MANA 6: ");
        scanf("%d", &mana6);
        if(mana6 == 1)
            rezultat_1++;
        else
            if(mana6 == 2)
                rezultat_2++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
    printf("CINE IA MANA 7: ");
        scanf("%d", &mana7);
        if(mana7 == 1)
            rezultat_1++;
        else
            if(mana7 == 2)
                rezultat_2++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
    printf("CINE IA MANA 8: ");
        scanf("%d", &mana8);
        if(mana8 == 1)
            rezultat_1++;
        else
            if(mana8 == 2)
                rezultat_2++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("\n");

        if(rezultat_1 == pariu_1)
            {
                printf("JUCATORUL 1 SI-A FACUT MAINILE\n");
                punctaj_1 = punctaj_1 + (5 + pariu_1);
            }
        else
            {
                printf("JUCATORUL 1 S-A FRIPT CU %d\n", abs(rezultat_1 - pariu_1));
                punctaj_1 = punctaj_1 - (5 + abs(rezultat_1 - pariu_1));
            }

        if(rezultat_2 == pariu_2)
            {
                printf("JUCATORUL 2 SI-A FACUT MAINILE\n");
                punctaj_2 = punctaj_2 + (5 + pariu_2);
            }
        else
            {
                printf("JUCATORUL 2 S-A FRIPT CU %d\n", abs(rezultat_2 - pariu_2));
                punctaj_2 = punctaj_2 - (5 + abs(rezultat_2 - pariu_2));
            }
        printf("\n");
        printf("JUCATOR 1: %d\n", punctaj_1);
        printf("JUCATOR 2: %d\n", punctaj_2);
        printf("\n");
        printf("\n");


printf("JOC DE 8 NR.2\n");
printf("\n");

        pariu_1 = 0, pariu_2 = 0;
        rezultat_1 = 0, rezultat_2 = 0;
        printf("PARIU JUCATOR 2: ");
        scanf("%d", &aux2);
        printf("JUCATORUL 1 NU ARE VOIE SA PARIEZE %d\n", 8 - aux2);
        printf("PARIU JUCATOR 1: ");
        scanf("%d", &aux1);
        pariu_1 = aux1;
        pariu_2 = aux2;
        printf("\n");

        printf("PARIU 1: %d\n", pariu_1);
        printf("PARIU 2: %d\n", pariu_2);

        printf("\n");
    printf("CINE IA MANA 1: ");
        scanf("%d", &mana1);
        if(mana1 == 1)
            rezultat_1++;
        else
            if(mana1 == 2)
                rezultat_2++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
    printf("CINE IA MANA 2: ");
        scanf("%d", &mana2);
        if(mana2 == 1)
            rezultat_1++;
        else
            if(mana2 == 2)
                rezultat_2++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
    printf("CINE IA MANA 3: ");
        scanf("%d", &mana3);
        if(mana3 == 1)
            rezultat_1++;
        else
            if(mana3 == 2)
                rezultat_2++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
    printf("CINE IA MANA 4: ");
        scanf("%d", &mana4);
        if(mana4 == 1)
            rezultat_1++;
        else
            if(mana4 == 2)
                rezultat_2++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
    printf("CINE IA MANA 5: ");
        scanf("%d", &mana5);
        if(mana5 == 1)
            rezultat_1++;
        else
            if(mana5 == 2)
                rezultat_2++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
    printf("CINE IA MANA 6: ");
        scanf("%d", &mana6);
        if(mana6 == 1)
            rezultat_1++;
        else
            if(mana6 == 2)
                rezultat_2++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
    printf("CINE IA MANA 7: ");
        scanf("%d", &mana7);
        if(mana7 == 1)
            rezultat_1++;
        else
            if(mana7 == 2)
                rezultat_2++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
    printf("CINE IA MANA 8: ");
        scanf("%d", &mana8);
        if(mana8 == 1)
            rezultat_1++;
        else
            if(mana8 == 2)
                rezultat_2++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("\n");

        if(rezultat_1 == pariu_1)
            {
                printf("JUCATORUL 1 SI-A FACUT MAINILE\n");
                punctaj_1 = punctaj_1 + (5 + pariu_1);
            }
        else
            {
                printf("JUCATORUL 1 S-A FRIPT CU %d\n", abs(rezultat_1 - pariu_1));
                punctaj_1 = punctaj_1 - (5 + abs(rezultat_1 - pariu_1));
            }

        if(rezultat_2 == pariu_2)
            {
                printf("JUCATORUL 2 SI-A FACUT MAINILE\n");
                punctaj_2 = punctaj_2 + (5 + pariu_2);
            }
        else
            {
                printf("JUCATORUL 2 S-A FRIPT CU %d\n", abs(rezultat_2 - pariu_2));
                punctaj_2 = punctaj_2 - (5 + abs(rezultat_2 - pariu_2));
            }
        printf("\n");
        printf("JUCATOR 1: %d\n", punctaj_1);
        printf("JUCATOR 2: %d\n", punctaj_2);
        printf("\n");
        printf("\n");


printf("JOC DE 7\n");
printf("\n");

        pariu_1 = 0, pariu_2 = 0;
        rezultat_1 = 0, rezultat_2 = 0;
        printf("PARIU JUCATOR 1: ");
        scanf("%d", &aux1);
        printf("JUCATORUL 2 NU ARE VOIE SA PARIEZE %d\n", 7 - aux1);
        printf("PARIU JUCATOR 2: ");
        scanf("%d", &aux2);
        pariu_1 = aux1;
        pariu_2 = aux2;
        printf("\n");

        printf("PARIU 1: %d\n", pariu_1);
        printf("PARIU 2: %d\n", pariu_2);

        printf("\n");
    printf("CINE IA MANA 1: ");
        scanf("%d", &mana1);
        if(mana1 == 1)
            rezultat_1++;
        else
            if(mana1 == 2)
                rezultat_2++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
    printf("CINE IA MANA 2: ");
        scanf("%d", &mana2);
        if(mana2 == 1)
            rezultat_1++;
        else
            if(mana2 == 2)
                rezultat_2++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
    printf("CINE IA MANA 3: ");
        scanf("%d", &mana3);
        if(mana3 == 1)
            rezultat_1++;
        else
            if(mana3 == 2)
                rezultat_2++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
    printf("CINE IA MANA 4: ");
        scanf("%d", &mana4);
        if(mana4 == 1)
            rezultat_1++;
        else
            if(mana4 == 2)
                rezultat_2++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
    printf("CINE IA MANA 5: ");
        scanf("%d", &mana5);
        if(mana5 == 1)
            rezultat_1++;
        else
            if(mana5 == 2)
                rezultat_2++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
    printf("CINE IA MANA 6: ");
        scanf("%d", &mana6);
        if(mana6 == 1)
            rezultat_1++;
        else
            if(mana6 == 2)
                rezultat_2++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
    printf("CINE IA MANA 7: ");
        scanf("%d", &mana7);
        if(mana7 == 1)
            rezultat_1++;
        else
            if(mana7 == 2)
                rezultat_2++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("\n");

        if(rezultat_1 == pariu_1)
            {
                printf("JUCATORUL 1 SI-A FACUT MAINILE\n");
                punctaj_1 = punctaj_1 + (5 + pariu_1);
            }
        else
            {
                printf("JUCATORUL 1 S-A FRIPT CU %d\n", abs(rezultat_1 - pariu_1));
                punctaj_1 = punctaj_1 - (5 + abs(rezultat_1 - pariu_1));
            }

        if(rezultat_2 == pariu_2)
            {
                printf("JUCATORUL 2 SI-A FACUT MAINILE\n");
                punctaj_2 = punctaj_2 + (5 + pariu_2);
            }
        else
            {
                printf("JUCATORUL 2 S-A FRIPT CU %d\n", abs(rezultat_2 - pariu_2));
                punctaj_2 = punctaj_2 - (5 + abs(rezultat_2 - pariu_2));
            }
        printf("\n");
        printf("JUCATOR 1: %d\n", punctaj_1);
        printf("JUCATOR 2: %d\n", punctaj_2);
        printf("\n");
        printf("\n");

printf("JOC DE 6\n");
printf("\n");

        pariu_1 = 0, pariu_2 = 0;
        rezultat_1 = 0, rezultat_2 = 0;
        printf("PARIU JUCATOR 2: ");
        scanf("%d", &aux2);
        printf("JUCATORUL 1 NU ARE VOIE SA PARIEZE %d\n", 6 - aux2);
        printf("PARIU JUCATOR 1: ");
        scanf("%d", &aux1);
        pariu_1 = aux1;
        pariu_2 = aux2;
        printf("\n");

        printf("PARIU 1: %d\n", pariu_1);
        printf("PARIU 2: %d\n", pariu_2);

        printf("\n");
    printf("CINE IA MANA 1: ");
        scanf("%d", &mana1);
        if(mana1 == 1)
            rezultat_1++;
        else
            if(mana1 == 2)
                rezultat_2++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
    printf("CINE IA MANA 2: ");
        scanf("%d", &mana2);
        if(mana2 == 1)
            rezultat_1++;
        else
            if(mana2 == 2)
                rezultat_2++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
    printf("CINE IA MANA 3: ");
        scanf("%d", &mana3);
        if(mana3 == 1)
            rezultat_1++;
        else
            if(mana3 == 2)
                rezultat_2++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
    printf("CINE IA MANA 4: ");
        scanf("%d", &mana4);
        if(mana4 == 1)
            rezultat_1++;
        else
            if(mana4 == 2)
                rezultat_2++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
    printf("CINE IA MANA 5: ");
        scanf("%d", &mana5);
        if(mana5 == 1)
            rezultat_1++;
        else
            if(mana5 == 2)
                rezultat_2++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
    printf("CINE IA MANA 6: ");
        scanf("%d", &mana6);
        if(mana6 == 1)
            rezultat_1++;
        else
            if(mana6 == 2)
                rezultat_2++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("\n");

        if(rezultat_1 == pariu_1)
            {
                printf("JUCATORUL 1 SI-A FACUT MAINILE\n");
                punctaj_1 = punctaj_1 + (5 + pariu_1);
            }
        else
            {
                printf("JUCATORUL 1 S-A FRIPT CU %d\n", abs(rezultat_1 - pariu_1));
                punctaj_1 = punctaj_1 - (5 + abs(rezultat_1 - pariu_1));
            }

        if(rezultat_2 == pariu_2)
            {
                printf("JUCATORUL 2 SI-A FACUT MAINILE\n");
                punctaj_2 = punctaj_2 + (5 + pariu_2);
            }
        else
            {
                printf("JUCATORUL 2 S-A FRIPT CU %d\n", abs(rezultat_2 - pariu_2));
                punctaj_2 = punctaj_2 - (5 + abs(rezultat_2 - pariu_2));
            }
        printf("\n");
        printf("JUCATOR 1: %d\n", punctaj_1);
        printf("JUCATOR 2: %d\n", punctaj_2);
        printf("\n");
        printf("\n");

printf("JOC DE 5\n");
printf("\n");

        pariu_1 = 0, pariu_2 = 0;
        rezultat_1 = 0, rezultat_2 = 0;
        printf("PARIU JUCATOR 1: ");
        scanf("%d", &aux1);
        printf("JUCATORUL 2 NU ARE VOIE SA PARIEZE %d\n", 5 - aux1);
        printf("PARIU JUCATOR 2: ");
        scanf("%d", &aux2);
        pariu_1 = aux1;
        pariu_2 = aux2;
        printf("\n");

        printf("PARIU 1: %d\n", pariu_1);
        printf("PARIU 2: %d\n", pariu_2);

        printf("\n");
    printf("CINE IA MANA 1: ");
        scanf("%d", &mana1);
        if(mana1 == 1)
            rezultat_1++;
        else
            if(mana1 == 2)
                rezultat_2++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
    printf("CINE IA MANA 2: ");
        scanf("%d", &mana2);
        if(mana2 == 1)
            rezultat_1++;
        else
            if(mana2 == 2)
                rezultat_2++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
    printf("CINE IA MANA 3: ");
        scanf("%d", &mana3);
        if(mana3 == 1)
            rezultat_1++;
        else
            if(mana3 == 2)
                rezultat_2++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
    printf("CINE IA MANA 4: ");
        scanf("%d", &mana4);
        if(mana4 == 1)
            rezultat_1++;
        else
            if(mana4 == 2)
                rezultat_2++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
    printf("CINE IA MANA 5: ");
        scanf("%d", &mana5);
        if(mana5 == 1)
            rezultat_1++;
        else
            if(mana5 == 2)
                rezultat_2++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("\n");

        if(rezultat_1 == pariu_1)
            {
                printf("JUCATORUL 1 SI-A FACUT MAINILE\n");
                punctaj_1 = punctaj_1 + (5 + pariu_1);
            }
        else
            {
                printf("JUCATORUL 1 S-A FRIPT CU %d\n", abs(rezultat_1 - pariu_1));
                punctaj_1 = punctaj_1 - (5 + abs(rezultat_1 - pariu_1));
            }

        if(rezultat_2 == pariu_2)
            {
                printf("JUCATORUL 2 SI-A FACUT MAINILE\n");
                punctaj_2 = punctaj_2 + (5 + pariu_2);
            }
        else
            {
                printf("JUCATORUL 2 S-A FRIPT CU %d\n", abs(rezultat_2 - pariu_2));
                punctaj_2 = punctaj_2 - (5 + abs(rezultat_2 - pariu_2));
            }
        printf("\n");
        printf("JUCATOR 1: %d\n", punctaj_1);
        printf("JUCATOR 2: %d\n", punctaj_2);
        printf("\n");
        printf("\n");

printf("JOC DE 4\n");
printf("\n");

        pariu_1 = 0, pariu_2 = 0;
        rezultat_1 = 0, rezultat_2 = 0;
        printf("PARIU JUCATOR 2: ");
        scanf("%d", &aux2);
        printf("JUCATORUL 1 NU ARE VOIE SA PARIEZE %d\n", 4 - aux2);
        printf("PARIU JUCATOR 1: ");
        scanf("%d", &aux1);
        pariu_1 = aux1;
        pariu_2 = aux2;
        printf("\n");

        printf("PARIU 1: %d\n", pariu_1);
        printf("PARIU 2: %d\n", pariu_2);

        printf("\n");
    printf("CINE IA MANA 1: ");
        scanf("%d", &mana1);
        if(mana1 == 1)
            rezultat_1++;
        else
            if(mana1 == 2)
                rezultat_2++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
    printf("CINE IA MANA 2: ");
        scanf("%d", &mana2);
        if(mana2 == 1)
            rezultat_1++;
        else
            if(mana2 == 2)
                rezultat_2++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
    printf("CINE IA MANA 3: ");
        scanf("%d", &mana3);
        if(mana3 == 1)
            rezultat_1++;
        else
            if(mana3 == 2)
                rezultat_2++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
    printf("CINE IA MANA 4: ");
        scanf("%d", &mana4);
        if(mana4 == 1)
            rezultat_1++;
        else
            if(mana4 == 2)
                rezultat_2++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("\n");

        if(rezultat_1 == pariu_1)
            {
                printf("JUCATORUL 1 SI-A FACUT MAINILE\n");
                punctaj_1 = punctaj_1 + (5 + pariu_1);
            }
        else
            {
                printf("JUCATORUL 1 S-A FRIPT CU %d\n", abs(rezultat_1 - pariu_1));
                punctaj_1 = punctaj_1 - (5 + abs(rezultat_1 - pariu_1));
            }

        if(rezultat_2 == pariu_2)
            {
                printf("JUCATORUL 2 SI-A FACUT MAINILE\n");
                punctaj_2 = punctaj_2 + (5 + pariu_2);
            }
        else
            {
                printf("JUCATORUL 2 S-A FRIPT CU %d\n", abs(rezultat_2 - pariu_2));
                punctaj_2 = punctaj_2 - (5 + abs(rezultat_2 - pariu_2));
            }
        printf("\n");
        printf("JUCATOR 1: %d\n", punctaj_1);
        printf("JUCATOR 2: %d\n", punctaj_2);
        printf("\n");
        printf("\n");

printf("JOC DE 3\n");
printf("\n");

        pariu_1 = 0, pariu_2 = 0;
        rezultat_1 = 0, rezultat_2 = 0;
        printf("PARIU JUCATOR 1: ");
        scanf("%d", &aux1);
        printf("JUCATORUL 2 NU ARE VOIE SA PARIEZE %d\n", 3 - aux1);
        printf("PARIU JUCATOR 2: ");
        scanf("%d", &aux2);
        pariu_1 = aux1;
        pariu_2 = aux2;
        printf("\n");

        printf("PARIU 1: %d\n", pariu_1);
        printf("PARIU 2: %d\n", pariu_2);

        printf("\n");
    printf("CINE IA MANA 1: ");
        scanf("%d", &mana1);
        if(mana1 == 1)
            rezultat_1++;
        else
            if(mana1 == 2)
                rezultat_2++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
    printf("CINE IA MANA 2: ");
        scanf("%d", &mana2);
        if(mana2 == 1)
            rezultat_1++;
        else
            if(mana2 == 2)
                rezultat_2++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
    printf("CINE IA MANA 3: ");
        scanf("%d", &mana3);
        if(mana3 == 1)
            rezultat_1++;
        else
            if(mana3 == 2)
                rezultat_2++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("\n");

        if(rezultat_1 == pariu_1)
            {
                printf("JUCATORUL 1 SI-A FACUT MAINILE\n");
                punctaj_1 = punctaj_1 + (5 + pariu_1);
            }
        else
            {
                printf("JUCATORUL 1 S-A FRIPT CU %d\n", abs(rezultat_1 - pariu_1));
                punctaj_1 = punctaj_1 - (5 + abs(rezultat_1 - pariu_1));
            }

        if(rezultat_2 == pariu_2)
            {
                printf("JUCATORUL 2 SI-A FACUT MAINILE\n");
                punctaj_2 = punctaj_2 + (5 + pariu_2);
            }
        else
            {
                printf("JUCATORUL 2 S-A FRIPT CU %d\n", abs(rezultat_2 - pariu_2));
                punctaj_2 = punctaj_2 - (5 + abs(rezultat_2 - pariu_2));
            }
        printf("\n");
        printf("JUCATOR 1: %d\n", punctaj_1);
        printf("JUCATOR 2: %d\n", punctaj_2);
        printf("\n");
        printf("\n");

printf("JOC DE 2\n");
printf("\n");

        pariu_1 = 0, pariu_2 = 0;
        rezultat_1 = 0, rezultat_2 = 0;
        printf("PARIU JUCATOR 2: ");
        scanf("%d", &aux2);
        printf("JUCATORUL 1 NU ARE VOIE SA PARIEZE %d\n", 2 - aux2);
        printf("PARIU JUCATOR 1: ");
        scanf("%d", &aux1);
        pariu_1 = aux1;
        pariu_2 = aux2;
        printf("\n");

        printf("PARIU 1: %d\n", pariu_1);
        printf("PARIU 2: %d\n", pariu_2);

        printf("\n");
    printf("CINE IA MANA 1: ");
        scanf("%d", &mana1);
        if(mana1 == 1)
            rezultat_1++;
        else
            if(mana1 == 2)
                rezultat_2++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
    printf("CINE IA MANA 2: ");
        scanf("%d", &mana2);
        if(mana2 == 1)
            rezultat_1++;
        else
            if(mana2 == 2)
                rezultat_2++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("\n");

        if(rezultat_1 == pariu_1)
            {
                printf("JUCATORUL 1 SI-A FACUT MAINILE\n");
                punctaj_1 = punctaj_1 + (5 + pariu_1);
            }
        else
            {
                printf("JUCATORUL 1 S-A FRIPT CU %d\n", abs(rezultat_1 - pariu_1));
                punctaj_1 = punctaj_1 - (5 + abs(rezultat_1 - pariu_1));
            }

        if(rezultat_2 == pariu_2)
            {
                printf("JUCATORUL 2 SI-A FACUT MAINILE\n");
                punctaj_2 = punctaj_2 + (5 + pariu_2);
            }
        else
            {
                printf("JUCATORUL 2 S-A FRIPT CU %d\n", abs(rezultat_2 - pariu_2));
                punctaj_2 = punctaj_2 - (5 + abs(rezultat_2 - pariu_2));
            }
        printf("\n");
        printf("JUCATOR 1: %d\n", punctaj_1);
        printf("JUCATOR 2: %d\n", punctaj_2);
        printf("\n");
        printf("\n");

printf("JOC DE 1 NR.1\n");
printf("\n");

        pariu_1 = 0, pariu_2 = 0;
        rezultat_1 = 0, rezultat_2 = 0;
        printf("PARIU JUCATOR 1: ");
        scanf("%d", &aux1);
        printf("JUCATORUL 2 NU ARE VOIE SA PARIEZE %d\n", 1 - aux2);
        printf("PARIU JUCATOR 2: ");
        scanf("%d", &aux2);
        pariu_1 = aux1;
        pariu_2 = aux2;
        printf("\n");

        printf("PARIU 1: %d\n", pariu_1);
        printf("PARIU 2: %d\n", pariu_2);

        printf("\n");
    printf("CINE IA MANA 1: ");
        scanf("%d", &mana1);
        if(mana1 == 1)
            rezultat_1++;
        else
            if(mana1 == 2)
                rezultat_2++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("\n");

        if(rezultat_1 == pariu_1)
            {
                printf("JUCATORUL 1 SI-A FACUT MAINILE\n");
                punctaj_1 = punctaj_1 + (5 + pariu_1);
            }
        else
            {
                printf("JUCATORUL 1 S-A FRIPT CU %d\n", abs(rezultat_1 - pariu_1));
                punctaj_1 = punctaj_1 - (5 + abs(rezultat_1 - pariu_1));
            }

        if(rezultat_2 == pariu_2)
            {
                printf("JUCATORUL 2 SI-A FACUT MAINILE\n");
                punctaj_2 = punctaj_2 + (5 + pariu_2);
            }
        else
            {
                printf("JUCATORUL 2 S-A FRIPT CU %d\n", abs(rezultat_2 - pariu_2));
                punctaj_2 = punctaj_2 - (5 + abs(rezultat_2 - pariu_2));
            }
        printf("\n");
        printf("JUCATOR 1: %d\n", punctaj_1);
        printf("JUCATOR 2: %d\n", punctaj_2);
        printf("\n");
        printf("\n");

printf("JOC DE 1 NR.2\n");
printf("\n");

        pariu_1 = 0, pariu_2 = 0;
        rezultat_1 = 0, rezultat_2 = 0;
        printf("PARIU JUCATOR 2: ");
        scanf("%d", &aux2);
        printf("JUCATORUL 1 NU ARE VOIE SA PARIEZE %d\n", 1 - aux2);
        printf("PARIU JUCATOR 1: ");
        scanf("%d", &aux1);
        pariu_1 = aux1;
        pariu_2 = aux2;
        printf("\n");

        printf("PARIU 1: %d\n", pariu_1);
        printf("PARIU 2: %d\n", pariu_2);

        printf("\n");
    printf("CINE IA MANA 1: ");
        scanf("%d", &mana1);
        if(mana1 == 1)
            rezultat_1++;
        else
            if(mana1 == 2)
                rezultat_2++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("\n");

        if(rezultat_1 == pariu_1)
            {
                printf("JUCATORUL 1 SI-A FACUT MAINILE\n");
                punctaj_1 = punctaj_1 + (5 + pariu_1);
            }
        else
            {
                printf("JUCATORUL 1 S-A FRIPT CU %d\n", abs(rezultat_1 - pariu_1));
                punctaj_1 = punctaj_1 - (5 + abs(rezultat_1 - pariu_1));
            }

        if(rezultat_2 == pariu_2)
            {
                printf("JUCATORUL 2 SI-A FACUT MAINILE\n");
                punctaj_2 = punctaj_2 + (5 + pariu_2);
            }
        else
            {
                printf("JUCATORUL 2 S-A FRIPT CU %d\n", abs(rezultat_2 - pariu_2));
                punctaj_2 = punctaj_2 - (5 + abs(rezultat_2 - pariu_2));
            }
        printf("\n");
        printf("JUCATOR 1: %d\n", punctaj_1);
        printf("JUCATOR 2: %d\n", punctaj_2);
        printf("\n");
        printf("\n");

printf("JOC DE 2\n");
printf("\n");

        pariu_1 = 0, pariu_2 = 0;
        rezultat_1 = 0, rezultat_2 = 0;
        printf("PARIU JUCATOR 1: ");
        scanf("%d", &aux1);
        printf("JUCATORUL 2 NU ARE VOIE SA PARIEZE %d\n", 2 - aux1);
        printf("PARIU JUCATOR 2: ");
        scanf("%d", &aux2);
        pariu_1 = aux1;
        pariu_2 = aux2;
        printf("\n");

        printf("PARIU 1: %d\n", pariu_1);
        printf("PARIU 2: %d\n", pariu_2);

        printf("\n");
    printf("CINE IA MANA 1: ");
        scanf("%d", &mana1);
        if(mana1 == 1)
            rezultat_1++;
        else
            if(mana1 == 2)
                rezultat_2++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
    printf("CINE IA MANA 2: ");
        scanf("%d", &mana2);
        if(mana2 == 1)
            rezultat_1++;
        else
            if(mana2 == 2)
                rezultat_2++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("\n");

        if(rezultat_1 == pariu_1)
            {
                printf("JUCATORUL 1 SI-A FACUT MAINILE\n");
                punctaj_1 = punctaj_1 + (5 + pariu_1);
            }
        else
            {
                printf("JUCATORUL 1 S-A FRIPT CU %d\n", abs(rezultat_1 - pariu_1));
                punctaj_1 = punctaj_1 - (5 + abs(rezultat_1 - pariu_1));
            }

        if(rezultat_2 == pariu_2)
            {
                printf("JUCATORUL 2 SI-A FACUT MAINILE\n");
                punctaj_2 = punctaj_2 + (5 + pariu_2);
            }
        else
            {
                printf("JUCATORUL 2 S-A FRIPT CU %d\n", abs(rezultat_2 - pariu_2));
                punctaj_2 = punctaj_2 - (5 + abs(rezultat_2 - pariu_2));
            }
        printf("\n");
        printf("JUCATOR 1: %d\n", punctaj_1);
        printf("JUCATOR 2: %d\n", punctaj_2);
        printf("\n");
        printf("\n");

printf("JOC DE 3\n");
printf("\n");

        pariu_1 = 0, pariu_2 = 0;
        rezultat_1 = 0, rezultat_2 = 0;
        printf("PARIU JUCATOR 2: ");
        scanf("%d", &aux2);
        printf("JUCATORUL 1 NU ARE VOIE SA PARIEZE %d\n", 3 - aux2);
        printf("PARIU JUCATOR 1: ");
        scanf("%d", &aux1);
        pariu_1 = aux1;
        pariu_2 = aux2;
        printf("\n");

        printf("PARIU 1: %d\n", pariu_1);
        printf("PARIU 2: %d\n", pariu_2);

        printf("\n");
    printf("CINE IA MANA 1: ");
        scanf("%d", &mana1);
        if(mana1 == 1)
            rezultat_1++;
        else
            if(mana1 == 2)
                rezultat_2++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
    printf("CINE IA MANA 2: ");
        scanf("%d", &mana2);
        if(mana2 == 1)
            rezultat_1++;
        else
            if(mana2 == 2)
                rezultat_2++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
    printf("CINE IA MANA 3: ");
        scanf("%d", &mana3);
        if(mana3 == 1)
            rezultat_1++;
        else
            if(mana3 == 2)
                rezultat_2++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("\n");

        if(rezultat_1 == pariu_1)
            {
                printf("JUCATORUL 1 SI-A FACUT MAINILE\n");
                punctaj_1 = punctaj_1 + (5 + pariu_1);
            }
        else
            {
                printf("JUCATORUL 1 S-A FRIPT CU %d\n", abs(rezultat_1 - pariu_1));
                punctaj_1 = punctaj_1 - (5 + abs(rezultat_1 - pariu_1));
            }

        if(rezultat_2 == pariu_2)
            {
                printf("JUCATORUL 2 SI-A FACUT MAINILE\n");
                punctaj_2 = punctaj_2 + (5 + pariu_2);
            }
        else
            {
                printf("JUCATORUL 2 S-A FRIPT CU %d\n", abs(rezultat_2 - pariu_2));
                punctaj_2 = punctaj_2 - (5 + abs(rezultat_2 - pariu_2));
            }
        printf("\n");
        printf("JUCATOR 1: %d\n", punctaj_1);
        printf("JUCATOR 2: %d\n", punctaj_2);
        printf("\n");
        printf("\n");

printf("JOC DE 4\n");
printf("\n");

        pariu_1 = 0, pariu_2 = 0;
        rezultat_1 = 0, rezultat_2 = 0;
        printf("PARIU JUCATOR 1: ");
        scanf("%d", &aux1);
        printf("JUCATORUL 2 NU ARE VOIE SA PARIEZE %d\n", 4 - aux1);
        printf("PARIU JUCATOR 2: ");
        scanf("%d", &aux2);
        pariu_1 = aux1;
        pariu_2 = aux2;
        printf("\n");

        printf("PARIU 1: %d\n", pariu_1);
        printf("PARIU 2: %d\n", pariu_2);

        printf("\n");
    printf("CINE IA MANA 1: ");
        scanf("%d", &mana1);
        if(mana1 == 1)
            rezultat_1++;
        else
            if(mana1 == 2)
                rezultat_2++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
    printf("CINE IA MANA 2: ");
        scanf("%d", &mana2);
        if(mana2 == 1)
            rezultat_1++;
        else
            if(mana2 == 2)
                rezultat_2++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
    printf("CINE IA MANA 3: ");
        scanf("%d", &mana3);
        if(mana3 == 1)
            rezultat_1++;
        else
            if(mana3 == 2)
                rezultat_2++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
    printf("CINE IA MANA 4: ");
        scanf("%d", &mana4);
        if(mana4 == 1)
            rezultat_1++;
        else
            if(mana4 == 2)
                rezultat_2++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("\n");

        if(rezultat_1 == pariu_1)
            {
                printf("JUCATORUL 1 SI-A FACUT MAINILE\n");
                punctaj_1 = punctaj_1 + (5 + pariu_1);
            }
        else
            {
                printf("JUCATORUL 1 S-A FRIPT CU %d\n", abs(rezultat_1 - pariu_1));
                punctaj_1 = punctaj_1 - (5 + abs(rezultat_1 - pariu_1));
            }

        if(rezultat_2 == pariu_2)
            {
                printf("JUCATORUL 2 SI-A FACUT MAINILE\n");
                punctaj_2 = punctaj_2 + (5 + pariu_2);
            }
        else
            {
                printf("JUCATORUL 2 S-A FRIPT CU %d\n", abs(rezultat_2 - pariu_2));
                punctaj_2 = punctaj_2 - (5 + abs(rezultat_2 - pariu_2));
            }
        printf("\n");
        printf("JUCATOR 1: %d\n", punctaj_1);
        printf("JUCATOR 2: %d\n", punctaj_2);
        printf("\n");
        printf("\n");

printf("JOC DE 5\n");
printf("\n");

        pariu_1 = 0, pariu_2 = 0;
        rezultat_1 = 0, rezultat_2 = 0;
        printf("PARIU JUCATOR 2: ");
        scanf("%d", &aux2);
        printf("JUCATORUL 1 NU ARE VOIE SA PARIEZE %d\n", 5 - aux2);
        printf("PARIU JUCATOR 1: ");
        scanf("%d", &aux1);
        pariu_1 = aux1;
        pariu_2 = aux2;
        printf("\n");

        printf("PARIU 1: %d\n", pariu_1);
        printf("PARIU 2: %d\n", pariu_2);

        printf("\n");
    printf("CINE IA MANA 1: ");
        scanf("%d", &mana1);
        if(mana1 == 1)
            rezultat_1++;
        else
            if(mana1 == 2)
                rezultat_2++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
    printf("CINE IA MANA 2: ");
        scanf("%d", &mana2);
        if(mana2 == 1)
            rezultat_1++;
        else
            if(mana2 == 2)
                rezultat_2++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
    printf("CINE IA MANA 3: ");
        scanf("%d", &mana3);
        if(mana3 == 1)
            rezultat_1++;
        else
            if(mana3 == 2)
                rezultat_2++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
    printf("CINE IA MANA 4: ");
        scanf("%d", &mana4);
        if(mana4 == 1)
            rezultat_1++;
        else
            if(mana4 == 2)
                rezultat_2++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
    printf("CINE IA MANA 5: ");
        scanf("%d", &mana5);
        if(mana5 == 1)
            rezultat_1++;
        else
            if(mana5 == 2)
                rezultat_2++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("\n");

        if(rezultat_1 == pariu_1)
            {
                printf("JUCATORUL 1 SI-A FACUT MAINILE\n");
                punctaj_1 = punctaj_1 + (5 + pariu_1);
            }
        else
            {
                printf("JUCATORUL 1 S-A FRIPT CU %d\n", abs(rezultat_1 - pariu_1));
                punctaj_1 = punctaj_1 - (5 + abs(rezultat_1 - pariu_1));
            }

        if(rezultat_2 == pariu_2)
            {
                printf("JUCATORUL 2 SI-A FACUT MAINILE\n");
                punctaj_2 = punctaj_2 + (5 + pariu_2);
            }
        else
            {
                printf("JUCATORUL 2 S-A FRIPT CU %d\n", abs(rezultat_2 - pariu_2));
                punctaj_2 = punctaj_2 - (5 + abs(rezultat_2 - pariu_2));
            }
        printf("\n");
        printf("JUCATOR 1: %d\n", punctaj_1);
        printf("JUCATOR 2: %d\n", punctaj_2);
        printf("\n");
        printf("\n");

printf("JOC DE 6\n");
printf("\n");

        pariu_1 = 0, pariu_2 = 0;
        rezultat_1 = 0, rezultat_2 = 0;
        printf("PARIU JUCATOR 1: ");
        scanf("%d", &aux1);
        printf("JUCATORUL 2 NU ARE VOIE SA PARIEZE %d\n", 6 - aux1);
        printf("PARIU JUCATOR 2: ");
        scanf("%d", &aux2);
        pariu_1 = aux1;
        pariu_2 = aux2;
        printf("\n");

        printf("PARIU 1: %d\n", pariu_1);
        printf("PARIU 2: %d\n", pariu_2);

        printf("\n");
    printf("CINE IA MANA 1: ");
        scanf("%d", &mana1);
        if(mana1 == 1)
            rezultat_1++;
        else
            if(mana1 == 2)
                rezultat_2++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
    printf("CINE IA MANA 2: ");
        scanf("%d", &mana2);
        if(mana2 == 1)
            rezultat_1++;
        else
            if(mana2 == 2)
                rezultat_2++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
    printf("CINE IA MANA 3: ");
        scanf("%d", &mana3);
        if(mana3 == 1)
            rezultat_1++;
        else
            if(mana3 == 2)
                rezultat_2++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
    printf("CINE IA MANA 4: ");
        scanf("%d", &mana4);
        if(mana4 == 1)
            rezultat_1++;
        else
            if(mana4 == 2)
                rezultat_2++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
    printf("CINE IA MANA 5: ");
        scanf("%d", &mana5);
        if(mana5 == 1)
            rezultat_1++;
        else
            if(mana5 == 2)
                rezultat_2++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
    printf("CINE IA MANA 6: ");
        scanf("%d", &mana6);
        if(mana6 == 1)
            rezultat_1++;
        else
            if(mana6 == 2)
                rezultat_2++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("\n");

        if(rezultat_1 == pariu_1)
            {
                printf("JUCATORUL 1 SI-A FACUT MAINILE\n");
                punctaj_1 = punctaj_1 + (5 + pariu_1);
            }
        else
            {
                printf("JUCATORUL 1 S-A FRIPT CU %d\n", abs(rezultat_1 - pariu_1));
                punctaj_1 = punctaj_1 - (5 + abs(rezultat_1 - pariu_1));
            }

        if(rezultat_2 == pariu_2)
            {
                printf("JUCATORUL 2 SI-A FACUT MAINILE\n");
                punctaj_2 = punctaj_2 + (5 + pariu_2);
            }
        else
            {
                printf("JUCATORUL 2 S-A FRIPT CU %d\n", abs(rezultat_2 - pariu_2));
                punctaj_2 = punctaj_2 - (5 + abs(rezultat_2 - pariu_2));
            }
        printf("\n");
        printf("JUCATOR 1: %d\n", punctaj_1);
        printf("JUCATOR 2: %d\n", punctaj_2);
        printf("\n");
        printf("\n");

printf("JOC DE 7\n");
printf("\n");

        pariu_1 = 0, pariu_2 = 0;
        rezultat_1 = 0, rezultat_2 = 0;
        printf("PARIU JUCATOR 2: ");
        scanf("%d", &aux2);
        printf("JUCATORUL 1 NU ARE VOIE SA PARIEZE %d\n", 7 - aux2);
        printf("PARIU JUCATOR 1: ");
        scanf("%d", &aux1);
        pariu_1 = aux1;
        pariu_2 = aux2;
        printf("\n");

        printf("PARIU 1: %d\n", pariu_1);
        printf("PARIU 2: %d\n", pariu_2);

        printf("\n");
    printf("CINE IA MANA 1: ");
        scanf("%d", &mana1);
        if(mana1 == 1)
            rezultat_1++;
        else
            if(mana1 == 2)
                rezultat_2++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
    printf("CINE IA MANA 2: ");
        scanf("%d", &mana2);
        if(mana2 == 1)
            rezultat_1++;
        else
            if(mana2 == 2)
                rezultat_2++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
    printf("CINE IA MANA 3: ");
        scanf("%d", &mana3);
        if(mana3 == 1)
            rezultat_1++;
        else
            if(mana3 == 2)
                rezultat_2++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
    printf("CINE IA MANA 4: ");
        scanf("%d", &mana4);
        if(mana4 == 1)
            rezultat_1++;
        else
            if(mana4 == 2)
                rezultat_2++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
    printf("CINE IA MANA 5: ");
        scanf("%d", &mana5);
        if(mana5 == 1)
            rezultat_1++;
        else
            if(mana5 == 2)
                rezultat_2++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
    printf("CINE IA MANA 6: ");
        scanf("%d", &mana6);
        if(mana6 == 1)
            rezultat_1++;
        else
            if(mana6 == 2)
                rezultat_2++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
    printf("CINE IA MANA 7: ");
        scanf("%d", &mana7);
        if(mana7 == 1)
            rezultat_1++;
        else
            if(mana7 == 2)
                rezultat_2++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("\n");

        if(rezultat_1 == pariu_1)
            {
                printf("JUCATORUL 1 SI-A FACUT MAINILE\n");
                punctaj_1 = punctaj_1 + (5 + pariu_1);
            }
        else
            {
                printf("JUCATORUL 1 S-A FRIPT CU %d\n", abs(rezultat_1 - pariu_1));
                punctaj_1 = punctaj_1 - (5 + abs(rezultat_1 - pariu_1));
            }

        if(rezultat_2 == pariu_2)
            {
                printf("JUCATORUL 2 SI-A FACUT MAINILE\n");
                punctaj_2 = punctaj_2 + (5 + pariu_2);
            }
        else
            {
                printf("JUCATORUL 2 S-A FRIPT CU %d\n", abs(rezultat_2 - pariu_2));
                punctaj_2 = punctaj_2 - (5 + abs(rezultat_2 - pariu_2));
            }
        printf("\n");
        printf("JUCATOR 1: %d\n", punctaj_1);
        printf("JUCATOR 2: %d\n", punctaj_2);
        printf("\n");
        printf("\n");

printf("JOC DE 8 NR.1\n");
printf("\n");

        pariu_1 = 0, pariu_2 = 0;
        rezultat_1 = 0, rezultat_2 = 0;
        printf("PARIU JUCATOR 1: ");
        scanf("%d", &aux1);
        printf("JUCATORUL 2 NU ARE VOIE SA PARIEZE %d\n", 8 - aux1);
        printf("PARIU JUCATOR 2: ");
        scanf("%d", &aux2);
        pariu_1 = aux1;
        pariu_2 = aux2;
        printf("\n");

        printf("PARIU 1: %d\n", pariu_1);
        printf("PARIU 2: %d\n", pariu_2);

        printf("\n");
    printf("CINE IA MANA 1: ");
        scanf("%d", &mana1);
        if(mana1 == 1)
            rezultat_1++;
        else
            if(mana1 == 2)
                rezultat_2++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
    printf("CINE IA MANA 2: ");
        scanf("%d", &mana2);
        if(mana2 == 1)
            rezultat_1++;
        else
            if(mana2 == 2)
                rezultat_2++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
    printf("CINE IA MANA 3: ");
        scanf("%d", &mana3);
        if(mana3 == 1)
            rezultat_1++;
        else
            if(mana3 == 2)
                rezultat_2++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
    printf("CINE IA MANA 4: ");
        scanf("%d", &mana4);
        if(mana4 == 1)
            rezultat_1++;
        else
            if(mana4 == 2)
                rezultat_2++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
    printf("CINE IA MANA 5: ");
        scanf("%d", &mana5);
        if(mana5 == 1)
            rezultat_1++;
        else
            if(mana5 == 2)
                rezultat_2++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
    printf("CINE IA MANA 6: ");
        scanf("%d", &mana6);
        if(mana6 == 1)
            rezultat_1++;
        else
            if(mana6 == 2)
                rezultat_2++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
    printf("CINE IA MANA 7: ");
        scanf("%d", &mana7);
        if(mana7 == 1)
            rezultat_1++;
        else
            if(mana7 == 2)
                rezultat_2++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
    printf("CINE IA MANA 8: ");
        scanf("%d", &mana8);
        if(mana8 == 1)
            rezultat_1++;
        else
            if(mana8 == 2)
                rezultat_2++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("\n");

        if(rezultat_1 == pariu_1)
            {
                printf("JUCATORUL 1 SI-A FACUT MAINILE\n");
                punctaj_1 = punctaj_1 + (5 + pariu_1);
            }
        else
            {
                printf("JUCATORUL 1 S-A FRIPT CU %d\n", abs(rezultat_1 - pariu_1));
                punctaj_1 = punctaj_1 - (5 + abs(rezultat_1 - pariu_1));
            }

        if(rezultat_2 == pariu_2)
            {
                printf("JUCATORUL 2 SI-A FACUT MAINILE\n");
                punctaj_2 = punctaj_2 + (5 + pariu_2);
            }
        else
            {
                printf("JUCATORUL 2 S-A FRIPT CU %d\n", abs(rezultat_2 - pariu_2));
                punctaj_2 = punctaj_2 - (5 + abs(rezultat_2 - pariu_2));
            }
        printf("\n");
        printf("JUCATOR 1: %d\n", punctaj_1);
        printf("JUCATOR 2: %d\n", punctaj_2);
        printf("\n");
        printf("\n");


printf("JOC DE 8 NR.2\n");
printf("\n");

        pariu_1 = 0, pariu_2 = 0;
        rezultat_1 = 0, rezultat_2 = 0;
        printf("PARIU JUCATOR 2: ");
        scanf("%d", &aux2);
        printf("JUCATORUL 1 NU ARE VOIE SA PARIEZE %d\n", 8 - aux2);
        printf("PARIU JUCATOR 1: ");
        scanf("%d", &aux1);
        pariu_1 = aux1;
        pariu_2 = aux2;
        printf("\n");

        printf("PARIU 1: %d\n", pariu_1);
        printf("PARIU 2: %d\n", pariu_2);

        printf("\n");
    printf("CINE IA MANA 1: ");
        scanf("%d", &mana1);
        if(mana1 == 1)
            rezultat_1++;
        else
            if(mana1 == 2)
                rezultat_2++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
    printf("CINE IA MANA 2: ");
        scanf("%d", &mana2);
        if(mana2 == 1)
            rezultat_1++;
        else
            if(mana2 == 2)
                rezultat_2++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
    printf("CINE IA MANA 3: ");
        scanf("%d", &mana3);
        if(mana3 == 1)
            rezultat_1++;
        else
            if(mana3 == 2)
                rezultat_2++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
    printf("CINE IA MANA 4: ");
        scanf("%d", &mana4);
        if(mana4 == 1)
            rezultat_1++;
        else
            if(mana4 == 2)
                rezultat_2++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
    printf("CINE IA MANA 5: ");
        scanf("%d", &mana5);
        if(mana5 == 1)
            rezultat_1++;
        else
            if(mana5 == 2)
                rezultat_2++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
    printf("CINE IA MANA 6: ");
        scanf("%d", &mana6);
        if(mana6 == 1)
            rezultat_1++;
        else
            if(mana6 == 2)
                rezultat_2++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
    printf("CINE IA MANA 7: ");
        scanf("%d", &mana7);
        if(mana7 == 1)
            rezultat_1++;
        else
            if(mana7 == 2)
                rezultat_2++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
    printf("CINE IA MANA 8: ");
        scanf("%d", &mana8);
        if(mana8 == 1)
            rezultat_1++;
        else
            if(mana8 == 2)
                rezultat_2++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("\n");

        if(rezultat_1 == pariu_1)
            {
                printf("JUCATORUL 1 SI-A FACUT MAINILE\n");
                punctaj_1 = punctaj_1 + (5 + pariu_1);
            }
        else
            {
                printf("JUCATORUL 1 S-A FRIPT CU %d\n", abs(rezultat_1 - pariu_1));
                punctaj_1 = punctaj_1 - (5 + abs(rezultat_1 - pariu_1));
            }

        if(rezultat_2 == pariu_2)
            {
                printf("JUCATORUL 2 SI-A FACUT MAINILE\n");
                punctaj_2 = punctaj_2 + (5 + pariu_2);
            }
        else
            {
                printf("JUCATORUL 2 S-A FRIPT CU %d\n", abs(rezultat_2 - pariu_2));
                punctaj_2 = punctaj_2 - (5 + abs(rezultat_2 - pariu_2));
            }
        printf("\n");
        printf("\n");
        printf("JUCATOR 1: %d\n", punctaj_1);
        printf("JUCATOR 2: %d\n", punctaj_2);
        printf("\n");
        printf("\n");
}

void joc_3(void)
{
    printf("CARTEA CU CEL MAI MIC NUMAR ESTE 9\n");
    printf("\n");
    printf("\n");
    int punctaj_1 = 0;
    int punctaj_2 = 0;
    int punctaj_3 = 0;
    int pariu_1 = 0, pariu_2 = 0, pariu_3 = 0;
    int rezultat_1 = 0, rezultat_2 = 0, rezultat_3 = 0;
    int aux1, aux2, aux3;
    int mana1, mana2, mana3, mana4, mana5, mana6, mana7, mana8;

printf("JOC DE 8 NR.1\n");
printf("\n");

        pariu_1 = 0, pariu_2 = 0, pariu_3 = 0;
        rezultat_1 = 0, rezultat_2 = 0, rezultat_3 = 0;
        printf("PARIU JUCATOR 1: ");
        scanf("%d", &aux1);
        printf("PARIU JUCATOR 2: ");
        scanf("%d", &aux2);
        printf("JUCATORUL 3 NU ARE VOIE SA PARIEZE %d\n", 8 - aux1 - aux2);
        printf("PARIU JUCATOR 3: ");
        scanf("%d", &aux3);
        pariu_1 = aux1;
        pariu_2 = aux2;
        pariu_3 = aux3;
        printf("\n");

        printf("PARIU 1: %d\n", pariu_1);
        printf("PARIU 2: %d\n", pariu_2);
        printf("PARIU 3: %d\n", pariu_3);

        printf("\n");
    printf("CINE IA MANA 1: ");
        scanf("%d", &mana1);
        if(mana1 == 1)
            rezultat_1++;
        else
            if(mana1 == 2)
                rezultat_2++;
            else
                if(mana1 == 3)
                    rezultat_3++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
    printf("CINE IA MANA 2: ");
        scanf("%d", &mana2);
        if(mana2 == 1)
            rezultat_1++;
        else
            if(mana2 == 2)
                rezultat_2++;
            else
                if(mana2 == 3)
                    rezultat_3++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
    printf("CINE IA MANA 3: ");
        scanf("%d", &mana3);
        if(mana3 == 1)
            rezultat_1++;
        else
            if(mana3 == 2)
                rezultat_2++;
            else
                if(mana3 == 3)
                    rezultat_3++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
    printf("CINE IA MANA 4: ");
        scanf("%d", &mana4);
        if(mana4 == 1)
            rezultat_1++;
        else
            if(mana4 == 2)
                rezultat_2++;
            else
                if(mana4 == 3)
                    rezultat_3++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
    printf("CINE IA MANA 5: ");
        scanf("%d", &mana5);
        if(mana5 == 1)
            rezultat_1++;
        else
            if(mana5 == 2)
                rezultat_2++;
            else
                if(mana5 == 3)
                    rezultat_3++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
    printf("CINE IA MANA 6: ");
        scanf("%d", &mana6);
        if(mana6 == 1)
            rezultat_1++;
        else
            if(mana6 == 2)
                rezultat_2++;
            else
                if(mana6 == 3)
                    rezultat_3++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
    printf("CINE IA MANA 7: ");
        scanf("%d", &mana7);
        if(mana7 == 1)
            rezultat_1++;
        else
            if(mana7 == 2)
                rezultat_2++;
            else
                if(mana7 == 3)
                    rezultat_3++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
    printf("CINE IA MANA 8: ");
        scanf("%d", &mana8);
        if(mana8 == 1)
            rezultat_1++;
        else
            if(mana8 == 2)
                rezultat_2++;
            else
                if(mana8 == 3)
                    rezultat_3++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("\n");

        if(rezultat_1 == pariu_1)
            {
                printf("JUCATORUL 1 SI-A FACUT MAINILE\n");
                punctaj_1 = punctaj_1 + (5 + pariu_1);
            }
        else
            {
                printf("JUCATORUL 1 S-A FRIPT CU %d\n", abs(rezultat_1 - pariu_1));
                punctaj_1 = punctaj_1 - (5 + abs(rezultat_1 - pariu_1));
            }

        if(rezultat_2 == pariu_2)
            {
                printf("JUCATORUL 2 SI-A FACUT MAINILE\n");
                punctaj_2 = punctaj_2 + (5 + pariu_2);
            }
        else
            {
                printf("JUCATORUL 2 S-A FRIPT CU %d\n", abs(rezultat_2 - pariu_2));
                punctaj_2 = punctaj_2 - (5 + abs(rezultat_2 - pariu_2));
            }
        if(rezultat_3 == pariu_3)
            {
                printf("JUCATORUL 3 SI-A FACUT MAINILE\n");
                punctaj_3 = punctaj_3 + (5 + pariu_3);
            }
        else
            {
                printf("JUCATORUL 3 S-A FRIPT CU %d\n", abs(rezultat_3 - pariu_3));
                punctaj_3 = punctaj_3 - (5 + abs(rezultat_3 - pariu_3));
            }
        printf("\n");
        printf("JUCATOR 1: %d\n", punctaj_1);
        printf("JUCATOR 2: %d\n", punctaj_2);
        printf("JUCATOR 3: %d\n", punctaj_3);
        printf("\n");
        printf("\n");

printf("JOC DE 8 NR.2\n");
printf("\n");

        pariu_1 = 0, pariu_2 = 0, pariu_3 = 0;
        rezultat_1 = 0, rezultat_2 = 0, rezultat_3 = 0;
        printf("PARIU JUCATOR 2: ");
        scanf("%d", &aux2);
        printf("PARIU JUCATOR 3: ");
        scanf("%d", &aux3);
        printf("JUCATORUL 1 NU ARE VOIE SA PARIEZE %d\n", 8 - aux2 - aux3);
        printf("PARIU JUCATOR 1: ");
        scanf("%d", &aux1);
        pariu_1 = aux1;
        pariu_2 = aux2;
        pariu_3 = aux3;
        printf("\n");

        printf("PARIU 1: %d\n", pariu_1);
        printf("PARIU 2: %d\n", pariu_2);
        printf("PARIU 3: %d\n", pariu_3);

        printf("\n");
    printf("CINE IA MANA 1: ");
        scanf("%d", &mana1);
        if(mana1 == 1)
            rezultat_1++;
        else
            if(mana1 == 2)
                rezultat_2++;
            else
                if(mana1 == 3)
                    rezultat_3++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
    printf("CINE IA MANA 2: ");
        scanf("%d", &mana2);
        if(mana2 == 1)
            rezultat_1++;
        else
            if(mana2 == 2)
                rezultat_2++;
            else
                if(mana2 == 3)
                    rezultat_3++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
    printf("CINE IA MANA 3: ");
        scanf("%d", &mana3);
        if(mana3 == 1)
            rezultat_1++;
        else
            if(mana3 == 2)
                rezultat_2++;
            else
                if(mana3 == 3)
                    rezultat_3++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
    printf("CINE IA MANA 4: ");
        scanf("%d", &mana4);
        if(mana4 == 1)
            rezultat_1++;
        else
            if(mana4 == 2)
                rezultat_2++;
            else
                if(mana4 == 3)
                    rezultat_3++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
    printf("CINE IA MANA 5: ");
        scanf("%d", &mana5);
        if(mana5 == 1)
            rezultat_1++;
        else
            if(mana5 == 2)
                rezultat_2++;
            else
                if(mana5 == 3)
                    rezultat_3++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
    printf("CINE IA MANA 6: ");
        scanf("%d", &mana6);
        if(mana6 == 1)
            rezultat_1++;
        else
            if(mana6 == 2)
                rezultat_2++;
            else
                if(mana6 == 3)
                    rezultat_3++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
    printf("CINE IA MANA 7: ");
        scanf("%d", &mana7);
        if(mana7 == 1)
            rezultat_1++;
        else
            if(mana7 == 2)
                rezultat_2++;
            else
                if(mana7 == 3)
                    rezultat_3++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
    printf("CINE IA MANA 8: ");
        scanf("%d", &mana8);
        if(mana8 == 1)
            rezultat_1++;
        else
            if(mana8 == 2)
                rezultat_2++;
            else
                if(mana8 == 3)
                    rezultat_3++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("\n");

        if(rezultat_1 == pariu_1)
            {
                printf("JUCATORUL 1 SI-A FACUT MAINILE\n");
                punctaj_1 = punctaj_1 + (5 + pariu_1);
            }
        else
            {
                printf("JUCATORUL 1 S-A FRIPT CU %d\n", abs(rezultat_1 - pariu_1));
                punctaj_1 = punctaj_1 - (5 + abs(rezultat_1 - pariu_1));
            }

        if(rezultat_2 == pariu_2)
            {
                printf("JUCATORUL 2 SI-A FACUT MAINILE\n");
                punctaj_2 = punctaj_2 + (5 + pariu_2);
            }
        else
            {
                printf("JUCATORUL 2 S-A FRIPT CU %d\n", abs(rezultat_2 - pariu_2));
                punctaj_2 = punctaj_2 - (5 + abs(rezultat_2 - pariu_2));
            }
        if(rezultat_3 == pariu_3)
            {
                printf("JUCATORUL 3 SI-A FACUT MAINILE\n");
                punctaj_3 = punctaj_3 + (5 + pariu_3);
            }
        else
            {
                printf("JUCATORUL 3 S-A FRIPT CU %d\n", abs(rezultat_3 - pariu_3));
                punctaj_3 = punctaj_3 - (5 + abs(rezultat_3 - pariu_3));
            }
        printf("\n");
        printf("JUCATOR 1: %d\n", punctaj_1);
        printf("JUCATOR 2: %d\n", punctaj_2);
        printf("JUCATOR 3: %d\n", punctaj_3);
        printf("\n");
        printf("\n");

printf("JOC DE 8 NR.3\n");
printf("\n");

        pariu_1 = 0, pariu_2 = 0, pariu_3 = 0;
        rezultat_1 = 0, rezultat_2 = 0, rezultat_3 = 0;
        printf("PARIU JUCATOR 3: ");
        scanf("%d", &aux3);
        printf("PARIU JUCATOR 1: ");
        scanf("%d", &aux1);
        printf("JUCATORUL 2 NU ARE VOIE SA PARIEZE %d\n", 8 - aux3 - aux1);
        printf("PARIU JUCATOR 2: ");
        scanf("%d", &aux2);
        pariu_1 = aux1;
        pariu_2 = aux2;
        pariu_3 = aux3;
        printf("\n");

        printf("PARIU 1: %d\n", pariu_1);
        printf("PARIU 2: %d\n", pariu_2);
        printf("PARIU 3: %d\n", pariu_3);

        printf("\n");
    printf("CINE IA MANA 1: ");
        scanf("%d", &mana1);
        if(mana1 == 1)
            rezultat_1++;
        else
            if(mana1 == 2)
                rezultat_2++;
            else
                if(mana1 == 3)
                    rezultat_3++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
    printf("CINE IA MANA 2: ");
        scanf("%d", &mana2);
        if(mana2 == 1)
            rezultat_1++;
        else
            if(mana2 == 2)
                rezultat_2++;
            else
                if(mana2 == 3)
                    rezultat_3++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
    printf("CINE IA MANA 3: ");
        scanf("%d", &mana3);
        if(mana3 == 1)
            rezultat_1++;
        else
            if(mana3 == 2)
                rezultat_2++;
            else
                if(mana3 == 3)
                    rezultat_3++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
    printf("CINE IA MANA 4: ");
        scanf("%d", &mana4);
        if(mana4 == 1)
            rezultat_1++;
        else
            if(mana4 == 2)
                rezultat_2++;
            else
                if(mana4 == 3)
                    rezultat_3++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
    printf("CINE IA MANA 5: ");
        scanf("%d", &mana5);
        if(mana5 == 1)
            rezultat_1++;
        else
            if(mana5 == 2)
                rezultat_2++;
            else
                if(mana5 == 3)
                    rezultat_3++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
    printf("CINE IA MANA 6: ");
        scanf("%d", &mana6);
        if(mana6 == 1)
            rezultat_1++;
        else
            if(mana6 == 2)
                rezultat_2++;
            else
                if(mana6 == 3)
                    rezultat_3++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
    printf("CINE IA MANA 7: ");
        scanf("%d", &mana7);
        if(mana7 == 1)
            rezultat_1++;
        else
            if(mana7 == 2)
                rezultat_2++;
            else
                if(mana7 == 3)
                    rezultat_3++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
    printf("CINE IA MANA 8: ");
        scanf("%d", &mana8);
        if(mana8 == 1)
            rezultat_1++;
        else
            if(mana8 == 2)
                rezultat_2++;
            else
                if(mana8 == 3)
                    rezultat_3++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("\n");

        if(rezultat_1 == pariu_1)
            {
                printf("JUCATORUL 1 SI-A FACUT MAINILE\n");
                punctaj_1 = punctaj_1 + (5 + pariu_1);
            }
        else
            {
                printf("JUCATORUL 1 S-A FRIPT CU %d\n", abs(rezultat_1 - pariu_1));
                punctaj_1 = punctaj_1 - (5 + abs(rezultat_1 - pariu_1));
            }

        if(rezultat_2 == pariu_2)
            {
                printf("JUCATORUL 2 SI-A FACUT MAINILE\n");
                punctaj_2 = punctaj_2 + (5 + pariu_2);
            }
        else
            {
                printf("JUCATORUL 2 S-A FRIPT CU %d\n", abs(rezultat_2 - pariu_2));
                punctaj_2 = punctaj_2 - (5 + abs(rezultat_2 - pariu_2));
            }
        if(rezultat_3 == pariu_3)
            {
                printf("JUCATORUL 3 SI-A FACUT MAINILE\n");
                punctaj_3 = punctaj_3 + (5 + pariu_3);
            }
        else
            {
                printf("JUCATORUL 3 S-A FRIPT CU %d\n", abs(rezultat_3 - pariu_3));
                punctaj_3 = punctaj_3 - (5 + abs(rezultat_3 - pariu_3));
            }
        printf("\n");
        printf("JUCATOR 1: %d\n", punctaj_1);
        printf("JUCATOR 2: %d\n", punctaj_2);
        printf("JUCATOR 3: %d\n", punctaj_3);
        printf("\n");
        printf("\n");

printf("JOC DE 7\n");
printf("\n");

        pariu_1 = 0, pariu_2 = 0, pariu_3 = 0;
        rezultat_1 = 0, rezultat_2 = 0, rezultat_3 = 0;
        printf("PARIU JUCATOR 1: ");
        scanf("%d", &aux1);
        printf("PARIU JUCATOR 2: ");
        scanf("%d", &aux2);
        printf("JUCATORUL 3 NU ARE VOIE SA PARIEZE %d\n", 7 - aux1 - aux2);
        printf("PARIU JUCATOR 3: ");
        scanf("%d", &aux3);
        pariu_1 = aux1;
        pariu_2 = aux2;
        pariu_3 = aux3;
        printf("\n");

        printf("PARIU 1: %d\n", pariu_1);
        printf("PARIU 2: %d\n", pariu_2);
        printf("PARIU 3: %d\n", pariu_3);

        printf("\n");
    printf("CINE IA MANA 1: ");
        scanf("%d", &mana1);
        if(mana1 == 1)
            rezultat_1++;
        else
            if(mana1 == 2)
                rezultat_2++;
            else
                if(mana1 == 3)
                    rezultat_3++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
    printf("CINE IA MANA 2: ");
        scanf("%d", &mana2);
        if(mana2 == 1)
            rezultat_1++;
        else
            if(mana2 == 2)
                rezultat_2++;
            else
                if(mana2 == 3)
                    rezultat_3++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
    printf("CINE IA MANA 3: ");
        scanf("%d", &mana3);
        if(mana3 == 1)
            rezultat_1++;
        else
            if(mana3 == 2)
                rezultat_2++;
            else
                if(mana3 == 3)
                    rezultat_3++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
    printf("CINE IA MANA 4: ");
        scanf("%d", &mana4);
        if(mana4 == 1)
            rezultat_1++;
        else
            if(mana4 == 2)
                rezultat_2++;
            else
                if(mana4 == 3)
                    rezultat_3++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
    printf("CINE IA MANA 5: ");
        scanf("%d", &mana5);
        if(mana5 == 1)
            rezultat_1++;
        else
            if(mana5 == 2)
                rezultat_2++;
            else
                if(mana5 == 3)
                    rezultat_3++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
    printf("CINE IA MANA 6: ");
        scanf("%d", &mana6);
        if(mana6 == 1)
            rezultat_1++;
        else
            if(mana6 == 2)
                rezultat_2++;
            else
                if(mana6 == 3)
                    rezultat_3++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
    printf("CINE IA MANA 7: ");
        scanf("%d", &mana7);
        if(mana7 == 1)
            rezultat_1++;
        else
            if(mana7 == 2)
                rezultat_2++;
            else
                if(mana7 == 3)
                    rezultat_3++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("\n");


        if(rezultat_1 == pariu_1)
            {
                printf("JUCATORUL 1 SI-A FACUT MAINILE\n");
                punctaj_1 = punctaj_1 + (5 + pariu_1);
            }
        else
            {
                printf("JUCATORUL 1 S-A FRIPT CU %d\n", abs(rezultat_1 - pariu_1));
                punctaj_1 = punctaj_1 - (5 + abs(rezultat_1 - pariu_1));
            }

        if(rezultat_2 == pariu_2)
            {
                printf("JUCATORUL 2 SI-A FACUT MAINILE\n");
                punctaj_2 = punctaj_2 + (5 + pariu_2);
            }
        else
            {
                printf("JUCATORUL 2 S-A FRIPT CU %d\n", abs(rezultat_2 - pariu_2));
                punctaj_2 = punctaj_2 - (5 + abs(rezultat_2 - pariu_2));
            }
        if(rezultat_3 == pariu_3)
            {
                printf("JUCATORUL 3 SI-A FACUT MAINILE\n");
                punctaj_3 = punctaj_3 + (5 + pariu_3);
            }
        else
            {
                printf("JUCATORUL 3 S-A FRIPT CU %d\n", abs(rezultat_3 - pariu_3));
                punctaj_3 = punctaj_3 - (5 + abs(rezultat_3 - pariu_3));
            }
        printf("\n");
        printf("JUCATOR 1: %d\n", punctaj_1);
        printf("JUCATOR 2: %d\n", punctaj_2);
        printf("JUCATOR 3: %d\n", punctaj_3);
        printf("\n");
        printf("\n");

printf("JOC DE 6\n");
printf("\n");

        pariu_1 = 0, pariu_2 = 0, pariu_3 = 0;
        rezultat_1 = 0, rezultat_2 = 0, rezultat_3 = 0;
        printf("PARIU JUCATOR 2: ");
        scanf("%d", &aux2);
        printf("PARIU JUCATOR 3: ");
        scanf("%d", &aux3);
        printf("JUCATORUL 1 NU ARE VOIE SA PARIEZE %d\n", 6 - aux2 - aux3);
        printf("PARIU JUCATOR 1: ");
        scanf("%d", &aux1);
        pariu_1 = aux1;
        pariu_2 = aux2;
        pariu_3 = aux3;
        printf("\n");

        printf("PARIU 1: %d\n", pariu_1);
        printf("PARIU 2: %d\n", pariu_2);
        printf("PARIU 3: %d\n", pariu_3);

        printf("\n");
    printf("CINE IA MANA 1: ");
        scanf("%d", &mana1);
        if(mana1 == 1)
            rezultat_1++;
        else
            if(mana1 == 2)
                rezultat_2++;
            else
                if(mana1 == 3)
                    rezultat_3++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
    printf("CINE IA MANA 2: ");
        scanf("%d", &mana2);
        if(mana2 == 1)
            rezultat_1++;
        else
            if(mana2 == 2)
                rezultat_2++;
            else
                if(mana2 == 3)
                    rezultat_3++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
    printf("CINE IA MANA 3: ");
        scanf("%d", &mana3);
        if(mana3 == 1)
            rezultat_1++;
        else
            if(mana3 == 2)
                rezultat_2++;
            else
                if(mana3 == 3)
                    rezultat_3++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
    printf("CINE IA MANA 4: ");
        scanf("%d", &mana4);
        if(mana4 == 1)
            rezultat_1++;
        else
            if(mana4 == 2)
                rezultat_2++;
            else
                if(mana4 == 3)
                    rezultat_3++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
    printf("CINE IA MANA 5: ");
        scanf("%d", &mana5);
        if(mana5 == 1)
            rezultat_1++;
        else
            if(mana5 == 2)
                rezultat_2++;
            else
                if(mana5 == 3)
                    rezultat_3++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
    printf("CINE IA MANA 6: ");
        scanf("%d", &mana6);
        if(mana6 == 1)
            rezultat_1++;
        else
            if(mana6 == 2)
                rezultat_2++;
            else
                if(mana6 == 3)
                    rezultat_3++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("\n");


        if(rezultat_1 == pariu_1)
            {
                printf("JUCATORUL 1 SI-A FACUT MAINILE\n");
                punctaj_1 = punctaj_1 + (5 + pariu_1);
            }
        else
            {
                printf("JUCATORUL 1 S-A FRIPT CU %d\n", abs(rezultat_1 - pariu_1));
                punctaj_1 = punctaj_1 - (5 + abs(rezultat_1 - pariu_1));
            }

        if(rezultat_2 == pariu_2)
            {
                printf("JUCATORUL 2 SI-A FACUT MAINILE\n");
                punctaj_2 = punctaj_2 + (5 + pariu_2);
            }
        else
            {
                printf("JUCATORUL 2 S-A FRIPT CU %d\n", abs(rezultat_2 - pariu_2));
                punctaj_2 = punctaj_2 - (5 + abs(rezultat_2 - pariu_2));
            }
        if(rezultat_3 == pariu_3)
            {
                printf("JUCATORUL 3 SI-A FACUT MAINILE\n");
                punctaj_3 = punctaj_3 + (5 + pariu_3);
            }
        else
            {
                printf("JUCATORUL 3 S-A FRIPT CU %d\n", abs(rezultat_3 - pariu_3));
                punctaj_3 = punctaj_3 - (5 + abs(rezultat_3 - pariu_3));
            }
        printf("\n");
        printf("JUCATOR 1: %d\n", punctaj_1);
        printf("JUCATOR 2: %d\n", punctaj_2);
        printf("JUCATOR 3: %d\n", punctaj_3);
        printf("\n");
        printf("\n");

printf("JOC DE 5\n");
printf("\n");

        pariu_1 = 0, pariu_2 = 0, pariu_3 = 0;
        rezultat_1 = 0, rezultat_2 = 0, rezultat_3 = 0;
        printf("PARIU JUCATOR 3: ");
        scanf("%d", &aux3);
        printf("PARIU JUCATOR 1: ");
        scanf("%d", &aux1);
        printf("JUCATORUL 2 NU ARE VOIE SA PARIEZE %d\n", 5 - aux3 - aux1);
        printf("PARIU JUCATOR 2: ");
        scanf("%d", &aux2);
        pariu_1 = aux1;
        pariu_2 = aux2;
        pariu_3 = aux3;
        printf("\n");

        printf("PARIU 1: %d\n", pariu_1);
        printf("PARIU 2: %d\n", pariu_2);
        printf("PARIU 3: %d\n", pariu_3);

        printf("\n");
    printf("CINE IA MANA 1: ");
        scanf("%d", &mana1);
        if(mana1 == 1)
            rezultat_1++;
        else
            if(mana1 == 2)
                rezultat_2++;
            else
                if(mana1 == 3)
                    rezultat_3++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
    printf("CINE IA MANA 2: ");
        scanf("%d", &mana2);
        if(mana2 == 1)
            rezultat_1++;
        else
            if(mana2 == 2)
                rezultat_2++;
            else
                if(mana2 == 3)
                    rezultat_3++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
    printf("CINE IA MANA 3: ");
        scanf("%d", &mana3);
        if(mana3 == 1)
            rezultat_1++;
        else
            if(mana3 == 2)
                rezultat_2++;
            else
                if(mana3 == 3)
                    rezultat_3++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
    printf("CINE IA MANA 4: ");
        scanf("%d", &mana4);
        if(mana4 == 1)
            rezultat_1++;
        else
            if(mana4 == 2)
                rezultat_2++;
            else
                if(mana4 == 3)
                    rezultat_3++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
    printf("CINE IA MANA 5: ");
        scanf("%d", &mana5);
        if(mana5 == 1)
            rezultat_1++;
        else
            if(mana5 == 2)
                rezultat_2++;
            else
                if(mana5 == 3)
                    rezultat_3++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("\n");


        if(rezultat_1 == pariu_1)
            {
                printf("JUCATORUL 1 SI-A FACUT MAINILE\n");
                punctaj_1 = punctaj_1 + (5 + pariu_1);
            }
        else
            {
                printf("JUCATORUL 1 S-A FRIPT CU %d\n", abs(rezultat_1 - pariu_1));
                punctaj_1 = punctaj_1 - (5 + abs(rezultat_1 - pariu_1));
            }

        if(rezultat_2 == pariu_2)
            {
                printf("JUCATORUL 2 SI-A FACUT MAINILE\n");
                punctaj_2 = punctaj_2 + (5 + pariu_2);
            }
        else
            {
                printf("JUCATORUL 2 S-A FRIPT CU %d\n", abs(rezultat_2 - pariu_2));
                punctaj_2 = punctaj_2 - (5 + abs(rezultat_2 - pariu_2));
            }
        if(rezultat_3 == pariu_3)
            {
                printf("JUCATORUL 3 SI-A FACUT MAINILE\n");
                punctaj_3 = punctaj_3 + (5 + pariu_3);
            }
        else
            {
                printf("JUCATORUL 3 S-A FRIPT CU %d\n", abs(rezultat_3 - pariu_3));
                punctaj_3 = punctaj_3 - (5 + abs(rezultat_3 - pariu_3));
            }
        printf("\n");
        printf("JUCATOR 1: %d\n", punctaj_1);
        printf("JUCATOR 2: %d\n", punctaj_2);
        printf("JUCATOR 3: %d\n", punctaj_3);
        printf("\n");
        printf("\n");

printf("JOC DE 4\n");
printf("\n");

        pariu_1 = 0, pariu_2 = 0, pariu_3 = 0;
        rezultat_1 = 0, rezultat_2 = 0, rezultat_3 = 0;
        printf("PARIU JUCATOR 1: ");
        scanf("%d", &aux1);
        printf("PARIU JUCATOR 2: ");
        scanf("%d", &aux2);
        printf("JUCATORUL 3 NU ARE VOIE SA PARIEZE %d\n", 4 - aux1 - aux2);
        printf("PARIU JUCATOR 3: ");
        scanf("%d", &aux3);
        pariu_1 = aux1;
        pariu_2 = aux2;
        pariu_3 = aux3;
        printf("\n");

        printf("PARIU 1: %d\n", pariu_1);
        printf("PARIU 2: %d\n", pariu_2);
        printf("PARIU 3: %d\n", pariu_3);

        printf("\n");
    printf("CINE IA MANA 1: ");
        scanf("%d", &mana1);
        if(mana1 == 1)
            rezultat_1++;
        else
            if(mana1 == 2)
                rezultat_2++;
            else
                if(mana1 == 3)
                    rezultat_3++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
    printf("CINE IA MANA 2: ");
        scanf("%d", &mana2);
        if(mana2 == 1)
            rezultat_1++;
        else
            if(mana2 == 2)
                rezultat_2++;
            else
                if(mana2 == 3)
                    rezultat_3++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
    printf("CINE IA MANA 3: ");
        scanf("%d", &mana3);
        if(mana3 == 1)
            rezultat_1++;
        else
            if(mana3 == 2)
                rezultat_2++;
            else
                if(mana3 == 3)
                    rezultat_3++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
    printf("CINE IA MANA 4: ");
        scanf("%d", &mana4);
        if(mana4 == 1)
            rezultat_1++;
        else
            if(mana4 == 2)
                rezultat_2++;
            else
                if(mana4 == 3)
                    rezultat_3++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("\n");


        if(rezultat_1 == pariu_1)
            {
                printf("JUCATORUL 1 SI-A FACUT MAINILE\n");
                punctaj_1 = punctaj_1 + (5 + pariu_1);
            }
        else
            {
                printf("JUCATORUL 1 S-A FRIPT CU %d\n", abs(rezultat_1 - pariu_1));
                punctaj_1 = punctaj_1 - (5 + abs(rezultat_1 - pariu_1));
            }

        if(rezultat_2 == pariu_2)
            {
                printf("JUCATORUL 2 SI-A FACUT MAINILE\n");
                punctaj_2 = punctaj_2 + (5 + pariu_2);
            }
        else
            {
                printf("JUCATORUL 2 S-A FRIPT CU %d\n", abs(rezultat_2 - pariu_2));
                punctaj_2 = punctaj_2 - (5 + abs(rezultat_2 - pariu_2));
            }
        if(rezultat_3 == pariu_3)
            {
                printf("JUCATORUL 3 SI-A FACUT MAINILE\n");
                punctaj_3 = punctaj_3 + (5 + pariu_3);
            }
        else
            {
                printf("JUCATORUL 3 S-A FRIPT CU %d\n", abs(rezultat_3 - pariu_3));
                punctaj_3 = punctaj_3 - (5 + abs(rezultat_3 - pariu_3));
            }
        printf("\n");
        printf("JUCATOR 1: %d\n", punctaj_1);
        printf("JUCATOR 2: %d\n", punctaj_2);
        printf("JUCATOR 3: %d\n", punctaj_3);
        printf("\n");
        printf("\n");

printf("JOC DE 3\n");
printf("\n");

        pariu_1 = 0, pariu_2 = 0, pariu_3 = 0;
        rezultat_1 = 0, rezultat_2 = 0, rezultat_3 = 0;
        printf("PARIU JUCATOR 2: ");
        scanf("%d", &aux2);
        printf("PARIU JUCATOR 3: ");
        scanf("%d", &aux3);
        printf("JUCATORUL 1 NU ARE VOIE SA PARIEZE %d\n", 3 - aux2 - aux3);
        printf("PARIU JUCATOR 1: ");
        scanf("%d", &aux1);
        pariu_1 = aux1;
        pariu_2 = aux2;
        pariu_3 = aux3;
        printf("\n");

        printf("PARIU 1: %d\n", pariu_1);
        printf("PARIU 2: %d\n", pariu_2);
        printf("PARIU 3: %d\n", pariu_3);

        printf("\n");
    printf("CINE IA MANA 1: ");
        scanf("%d", &mana1);
        if(mana1 == 1)
            rezultat_1++;
        else
            if(mana1 == 2)
                rezultat_2++;
            else
                if(mana1 == 3)
                    rezultat_3++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
    printf("CINE IA MANA 2: ");
        scanf("%d", &mana2);
        if(mana2 == 1)
            rezultat_1++;
        else
            if(mana2 == 2)
                rezultat_2++;
            else
                if(mana2 == 3)
                    rezultat_3++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
    printf("CINE IA MANA 3: ");
        scanf("%d", &mana3);
        if(mana3 == 1)
            rezultat_1++;
        else
            if(mana3 == 2)
                rezultat_2++;
            else
                if(mana3 == 3)
                    rezultat_3++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("\n");


        if(rezultat_1 == pariu_1)
            {
                printf("JUCATORUL 1 SI-A FACUT MAINILE\n");
                punctaj_1 = punctaj_1 + (5 + pariu_1);
            }
        else
            {
                printf("JUCATORUL 1 S-A FRIPT CU %d\n", abs(rezultat_1 - pariu_1));
                punctaj_1 = punctaj_1 - (5 + abs(rezultat_1 - pariu_1));
            }

        if(rezultat_2 == pariu_2)
            {
                printf("JUCATORUL 2 SI-A FACUT MAINILE\n");
                punctaj_2 = punctaj_2 + (5 + pariu_2);
            }
        else
            {
                printf("JUCATORUL 2 S-A FRIPT CU %d\n", abs(rezultat_2 - pariu_2));
                punctaj_2 = punctaj_2 - (5 + abs(rezultat_2 - pariu_2));
            }
        if(rezultat_3 == pariu_3)
            {
                printf("JUCATORUL 3 SI-A FACUT MAINILE\n");
                punctaj_3 = punctaj_3 + (5 + pariu_3);
            }
        else
            {
                printf("JUCATORUL 3 S-A FRIPT CU %d\n", abs(rezultat_3 - pariu_3));
                punctaj_3 = punctaj_3 - (5 + abs(rezultat_3 - pariu_3));
            }
        printf("\n");
        printf("JUCATOR 1: %d\n", punctaj_1);
        printf("JUCATOR 2: %d\n", punctaj_2);
        printf("JUCATOR 3: %d\n", punctaj_3);
        printf("\n");
        printf("\n");

printf("JOC DE 2\n");
printf("\n");

        pariu_1 = 0, pariu_2 = 0, pariu_3 = 0;
        rezultat_1 = 0, rezultat_2 = 0, rezultat_3 = 0;
        printf("PARIU JUCATOR 3: ");
        scanf("%d", &aux3);
        printf("PARIU JUCATOR 1: ");
        scanf("%d", &aux1);
        printf("JUCATORUL 2 NU ARE VOIE SA PARIEZE %d\n", 2 - aux3 - aux1);
        printf("PARIU JUCATOR 2: ");
        scanf("%d", &aux2);
        pariu_1 = aux1;
        pariu_2 = aux2;
        pariu_3 = aux3;
        printf("\n");

        printf("PARIU 1: %d\n", pariu_1);
        printf("PARIU 2: %d\n", pariu_2);
        printf("PARIU 3: %d\n", pariu_3);

        printf("\n");
    printf("CINE IA MANA 1: ");
        scanf("%d", &mana1);
        if(mana1 == 1)
            rezultat_1++;
        else
            if(mana1 == 2)
                rezultat_2++;
            else
                if(mana1 == 3)
                    rezultat_3++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
    printf("CINE IA MANA 2: ");
        scanf("%d", &mana2);
        if(mana2 == 1)
            rezultat_1++;
        else
            if(mana2 == 2)
                rezultat_2++;
            else
                if(mana2 == 3)
                    rezultat_3++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("\n");


        if(rezultat_1 == pariu_1)
            {
                printf("JUCATORUL 1 SI-A FACUT MAINILE\n");
                punctaj_1 = punctaj_1 + (5 + pariu_1);
            }
        else
            {
                printf("JUCATORUL 1 S-A FRIPT CU %d\n", abs(rezultat_1 - pariu_1));
                punctaj_1 = punctaj_1 - (5 + abs(rezultat_1 - pariu_1));
            }

        if(rezultat_2 == pariu_2)
            {
                printf("JUCATORUL 2 SI-A FACUT MAINILE\n");
                punctaj_2 = punctaj_2 + (5 + pariu_2);
            }
        else
            {
                printf("JUCATORUL 2 S-A FRIPT CU %d\n", abs(rezultat_2 - pariu_2));
                punctaj_2 = punctaj_2 - (5 + abs(rezultat_2 - pariu_2));
            }
        if(rezultat_3 == pariu_3)
            {
                printf("JUCATORUL 3 SI-A FACUT MAINILE\n");
                punctaj_3 = punctaj_3 + (5 + pariu_3);
            }
        else
            {
                printf("JUCATORUL 3 S-A FRIPT CU %d\n", abs(rezultat_3 - pariu_3));
                punctaj_3 = punctaj_3 - (5 + abs(rezultat_3 - pariu_3));
            }
        printf("\n");
        printf("JUCATOR 1: %d\n", punctaj_1);
        printf("JUCATOR 2: %d\n", punctaj_2);
        printf("JUCATOR 3: %d\n", punctaj_3);
        printf("\n");
        printf("\n");

printf("JOC DE 1 NR. 1\n");
printf("\n");

        pariu_1 = 0, pariu_2 = 0, pariu_3 = 0;
        rezultat_1 = 0, rezultat_2 = 0, rezultat_3 = 0;
        printf("PARIU JUCATOR 1: ");
        scanf("%d", &aux1);
        printf("PARIU JUCATOR 2: ");
        scanf("%d", &aux2);
        printf("JUCATORUL 3 NU ARE VOIE SA PARIEZE %d\n", 1 - aux1 - aux2);
        printf("PARIU JUCATOR 3: ");
        scanf("%d", &aux3);
        pariu_1 = aux1;
        pariu_2 = aux2;
        pariu_3 = aux3;
        printf("\n");

        printf("PARIU 1: %d\n", pariu_1);
        printf("PARIU 2: %d\n", pariu_2);
        printf("PARIU 3: %d\n", pariu_3);

        printf("\n");
    printf("CINE IA MANA 1: ");
        scanf("%d", &mana1);
        if(mana1 == 1)
            rezultat_1++;
        else
            if(mana1 == 2)
                rezultat_2++;
            else
                if(mana1 == 3)
                    rezultat_3++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("\n");


        if(rezultat_1 == pariu_1)
            {
                printf("JUCATORUL 1 SI-A FACUT MAINILE\n");
                punctaj_1 = punctaj_1 + (5 + pariu_1);
            }
        else
            {
                printf("JUCATORUL 1 S-A FRIPT CU %d\n", abs(rezultat_1 - pariu_1));
                punctaj_1 = punctaj_1 - (5 + abs(rezultat_1 - pariu_1));
            }

        if(rezultat_2 == pariu_2)
            {
                printf("JUCATORUL 2 SI-A FACUT MAINILE\n");
                punctaj_2 = punctaj_2 + (5 + pariu_2);
            }
        else
            {
                printf("JUCATORUL 2 S-A FRIPT CU %d\n", abs(rezultat_2 - pariu_2));
                punctaj_2 = punctaj_2 - (5 + abs(rezultat_2 - pariu_2));
            }
        if(rezultat_3 == pariu_3)
            {
                printf("JUCATORUL 3 SI-A FACUT MAINILE\n");
                punctaj_3 = punctaj_3 + (5 + pariu_3);
            }
        else
            {
                printf("JUCATORUL 3 S-A FRIPT CU %d\n", abs(rezultat_3 - pariu_3));
                punctaj_3 = punctaj_3 - (5 + abs(rezultat_3 - pariu_3));
            }
        printf("\n");
        printf("JUCATOR 1: %d\n", punctaj_1);
        printf("JUCATOR 2: %d\n", punctaj_2);
        printf("JUCATOR 3: %d\n", punctaj_3);
        printf("\n");
        printf("\n");

printf("JOC DE 1 NR. 2\n");
printf("\n");

        pariu_1 = 0, pariu_2 = 0, pariu_3 = 0;
        rezultat_1 = 0, rezultat_2 = 0, rezultat_3 = 0;
        printf("PARIU JUCATOR 2: ");
        scanf("%d", &aux2);
        printf("PARIU JUCATOR 3: ");
        scanf("%d", &aux3);
        printf("JUCATORUL 1 NU ARE VOIE SA PARIEZE %d\n", 1 - aux2 - aux3);
        printf("PARIU JUCATOR 1: ");
        scanf("%d", &aux1);
        pariu_1 = aux1;
        pariu_2 = aux2;
        pariu_3 = aux3;
        printf("\n");

        printf("PARIU 1: %d\n", pariu_1);
        printf("PARIU 2: %d\n", pariu_2);
        printf("PARIU 3: %d\n", pariu_3);

        printf("\n");
    printf("CINE IA MANA 1: ");
        scanf("%d", &mana1);
        if(mana1 == 1)
            rezultat_1++;
        else
            if(mana1 == 2)
                rezultat_2++;
            else
                if(mana1 == 3)
                    rezultat_3++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("\n");


        if(rezultat_1 == pariu_1)
            {
                printf("JUCATORUL 1 SI-A FACUT MAINILE\n");
                punctaj_1 = punctaj_1 + (5 + pariu_1);
            }
        else
            {
                printf("JUCATORUL 1 S-A FRIPT CU %d\n", abs(rezultat_1 - pariu_1));
                punctaj_1 = punctaj_1 - (5 + abs(rezultat_1 - pariu_1));
            }

        if(rezultat_2 == pariu_2)
            {
                printf("JUCATORUL 2 SI-A FACUT MAINILE\n");
                punctaj_2 = punctaj_2 + (5 + pariu_2);
            }
        else
            {
                printf("JUCATORUL 2 S-A FRIPT CU %d\n", abs(rezultat_2 - pariu_2));
                punctaj_2 = punctaj_2 - (5 + abs(rezultat_2 - pariu_2));
            }
        if(rezultat_3 == pariu_3)
            {
                printf("JUCATORUL 3 SI-A FACUT MAINILE\n");
                punctaj_3 = punctaj_3 + (5 + pariu_3);
            }
        else
            {
                printf("JUCATORUL 3 S-A FRIPT CU %d\n", abs(rezultat_3 - pariu_3));
                punctaj_3 = punctaj_3 - (5 + abs(rezultat_3 - pariu_3));
            }
        printf("\n");
        printf("JUCATOR 1: %d\n", punctaj_1);
        printf("JUCATOR 2: %d\n", punctaj_2);
        printf("JUCATOR 3: %d\n", punctaj_3);
        printf("\n");
        printf("\n");

printf("JOC DE 1 NR. 3\n");
printf("\n");

        pariu_1 = 0, pariu_2 = 0, pariu_3 = 0;
        rezultat_1 = 0, rezultat_2 = 0, rezultat_3 = 0;
        printf("PARIU JUCATOR 3: ");
        scanf("%d", &aux3);
        printf("PARIU JUCATOR 1: ");
        scanf("%d", &aux1);
        printf("JUCATORUL 2 NU ARE VOIE SA PARIEZE %d\n", 1 - aux3 - aux1);
        printf("PARIU JUCATOR 2: ");
        scanf("%d", &aux2);
        pariu_1 = aux1;
        pariu_2 = aux2;
        pariu_3 = aux3;
        printf("\n");

        printf("PARIU 1: %d\n", pariu_1);
        printf("PARIU 2: %d\n", pariu_2);
        printf("PARIU 3: %d\n", pariu_3);

        printf("\n");
    printf("CINE IA MANA 1: ");
        scanf("%d", &mana1);
        if(mana1 == 1)
            rezultat_1++;
        else
            if(mana1 == 2)
                rezultat_2++;
            else
                if(mana1 == 3)
                    rezultat_3++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("\n");


        if(rezultat_1 == pariu_1)
            {
                printf("JUCATORUL 1 SI-A FACUT MAINILE\n");
                punctaj_1 = punctaj_1 + (5 + pariu_1);
            }
        else
            {
                printf("JUCATORUL 1 S-A FRIPT CU %d\n", abs(rezultat_1 - pariu_1));
                punctaj_1 = punctaj_1 - (5 + abs(rezultat_1 - pariu_1));
            }

        if(rezultat_2 == pariu_2)
            {
                printf("JUCATORUL 2 SI-A FACUT MAINILE\n");
                punctaj_2 = punctaj_2 + (5 + pariu_2);
            }
        else
            {
                printf("JUCATORUL 2 S-A FRIPT CU %d\n", abs(rezultat_2 - pariu_2));
                punctaj_2 = punctaj_2 - (5 + abs(rezultat_2 - pariu_2));
            }
        if(rezultat_3 == pariu_3)
            {
                printf("JUCATORUL 3 SI-A FACUT MAINILE\n");
                punctaj_3 = punctaj_3 + (5 + pariu_3);
            }
        else
            {
                printf("JUCATORUL 3 S-A FRIPT CU %d\n", abs(rezultat_3 - pariu_3));
                punctaj_3 = punctaj_3 - (5 + abs(rezultat_3 - pariu_3));
            }
        printf("\n");
        printf("JUCATOR 1: %d\n", punctaj_1);
        printf("JUCATOR 2: %d\n", punctaj_2);
        printf("JUCATOR 3: %d\n", punctaj_3);
        printf("\n");
        printf("\n");

printf("JOC DE 2\n");
printf("\n");

        pariu_1 = 0, pariu_2 = 0, pariu_3 = 0;
        rezultat_1 = 0, rezultat_2 = 0, rezultat_3 = 0;
        printf("PARIU JUCATOR 1: ");
        scanf("%d", &aux1);
        printf("PARIU JUCATOR 2: ");
        scanf("%d", &aux2);
        printf("JUCATORUL 3 NU ARE VOIE SA PARIEZE %d\n", 2 - aux1 - aux2);
        printf("PARIU JUCATOR 3: ");
        scanf("%d", &aux3);
        pariu_1 = aux1;
        pariu_2 = aux2;
        pariu_3 = aux3;
        printf("\n");

        printf("PARIU 1: %d\n", pariu_1);
        printf("PARIU 2: %d\n", pariu_2);
        printf("PARIU 3: %d\n", pariu_3);

        printf("\n");
    printf("CINE IA MANA 1: ");
        scanf("%d", &mana1);
        if(mana1 == 1)
            rezultat_1++;
        else
            if(mana1 == 2)
                rezultat_2++;
            else
                if(mana1 == 3)
                    rezultat_3++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
    printf("CINE IA MANA 2: ");
        scanf("%d", &mana2);
        if(mana2 == 1)
            rezultat_1++;
        else
            if(mana2 == 2)
                rezultat_2++;
            else
                if(mana2 == 3)
                    rezultat_3++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("\n");


        if(rezultat_1 == pariu_1)
            {
                printf("JUCATORUL 1 SI-A FACUT MAINILE\n");
                punctaj_1 = punctaj_1 + (5 + pariu_1);
            }
        else
            {
                printf("JUCATORUL 1 S-A FRIPT CU %d\n", abs(rezultat_1 - pariu_1));
                punctaj_1 = punctaj_1 - (5 + abs(rezultat_1 - pariu_1));
            }

        if(rezultat_2 == pariu_2)
            {
                printf("JUCATORUL 2 SI-A FACUT MAINILE\n");
                punctaj_2 = punctaj_2 + (5 + pariu_2);
            }
        else
            {
                printf("JUCATORUL 2 S-A FRIPT CU %d\n", abs(rezultat_2 - pariu_2));
                punctaj_2 = punctaj_2 - (5 + abs(rezultat_2 - pariu_2));
            }
        if(rezultat_3 == pariu_3)
            {
                printf("JUCATORUL 3 SI-A FACUT MAINILE\n");
                punctaj_3 = punctaj_3 + (5 + pariu_3);
            }
        else
            {
                printf("JUCATORUL 3 S-A FRIPT CU %d\n", abs(rezultat_3 - pariu_3));
                punctaj_3 = punctaj_3 - (5 + abs(rezultat_3 - pariu_3));
            }
        printf("\n");
        printf("JUCATOR 1: %d\n", punctaj_1);
        printf("JUCATOR 2: %d\n", punctaj_2);
        printf("JUCATOR 3: %d\n", punctaj_3);
        printf("\n");
        printf("\n");

printf("JOC DE 3\n");
printf("\n");

        pariu_1 = 0, pariu_2 = 0, pariu_3 = 0;
        rezultat_1 = 0, rezultat_2 = 0, rezultat_3 = 0;
        printf("PARIU JUCATOR 2: ");
        scanf("%d", &aux2);
        printf("PARIU JUCATOR 3: ");
        scanf("%d", &aux3);
        printf("JUCATORUL 1 NU ARE VOIE SA PARIEZE %d\n", 3 - aux2 - aux3);
        printf("PARIU JUCATOR 1: ");
        scanf("%d", &aux1);
        pariu_1 = aux1;
        pariu_2 = aux2;
        pariu_3 = aux3;
        printf("\n");

        printf("PARIU 1: %d\n", pariu_1);
        printf("PARIU 2: %d\n", pariu_2);
        printf("PARIU 3: %d\n", pariu_3);

        printf("\n");
    printf("CINE IA MANA 1: ");
        scanf("%d", &mana1);
        if(mana1 == 1)
            rezultat_1++;
        else
            if(mana1 == 2)
                rezultat_2++;
            else
                if(mana1 == 3)
                    rezultat_3++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
    printf("CINE IA MANA 2: ");
        scanf("%d", &mana2);
        if(mana2 == 1)
            rezultat_1++;
        else
            if(mana2 == 2)
                rezultat_2++;
            else
                if(mana2 == 3)
                    rezultat_3++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
    printf("CINE IA MANA 3: ");
        scanf("%d", &mana3);
        if(mana3 == 1)
            rezultat_1++;
        else
            if(mana3 == 2)
                rezultat_2++;
            else
                if(mana3 == 3)
                    rezultat_3++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("\n");


        if(rezultat_1 == pariu_1)
            {
                printf("JUCATORUL 1 SI-A FACUT MAINILE\n");
                punctaj_1 = punctaj_1 + (5 + pariu_1);
            }
        else
            {
                printf("JUCATORUL 1 S-A FRIPT CU %d\n", abs(rezultat_1 - pariu_1));
                punctaj_1 = punctaj_1 - (5 + abs(rezultat_1 - pariu_1));
            }

        if(rezultat_2 == pariu_2)
            {
                printf("JUCATORUL 2 SI-A FACUT MAINILE\n");
                punctaj_2 = punctaj_2 + (5 + pariu_2);
            }
        else
            {
                printf("JUCATORUL 2 S-A FRIPT CU %d\n", abs(rezultat_2 - pariu_2));
                punctaj_2 = punctaj_2 - (5 + abs(rezultat_2 - pariu_2));
            }
        if(rezultat_3 == pariu_3)
            {
                printf("JUCATORUL 3 SI-A FACUT MAINILE\n");
                punctaj_3 = punctaj_3 + (5 + pariu_3);
            }
        else
            {
                printf("JUCATORUL 3 S-A FRIPT CU %d\n", abs(rezultat_3 - pariu_3));
                punctaj_3 = punctaj_3 - (5 + abs(rezultat_3 - pariu_3));
            }
        printf("\n");
        printf("JUCATOR 1: %d\n", punctaj_1);
        printf("JUCATOR 2: %d\n", punctaj_2);
        printf("JUCATOR 3: %d\n", punctaj_3);
        printf("\n");
        printf("\n");

printf("JOC DE 4\n");
printf("\n");

        pariu_1 = 0, pariu_2 = 0, pariu_3 = 0;
        rezultat_1 = 0, rezultat_2 = 0, rezultat_3 = 0;
        printf("PARIU JUCATOR 3: ");
        scanf("%d", &aux3);
        printf("PARIU JUCATOR 1: ");
        scanf("%d", &aux1);
        printf("JUCATORUL 2 NU ARE VOIE SA PARIEZE %d\n", 4 - aux3 - aux1);
        printf("PARIU JUCATOR 2: ");
        scanf("%d", &aux2);
        pariu_1 = aux1;
        pariu_2 = aux2;
        pariu_3 = aux3;
        printf("\n");

        printf("PARIU 1: %d\n", pariu_1);
        printf("PARIU 2: %d\n", pariu_2);
        printf("PARIU 3: %d\n", pariu_3);

        printf("\n");
    printf("CINE IA MANA 1: ");
        scanf("%d", &mana1);
        if(mana1 == 1)
            rezultat_1++;
        else
            if(mana1 == 2)
                rezultat_2++;
            else
                if(mana1 == 3)
                    rezultat_3++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
    printf("CINE IA MANA 2: ");
        scanf("%d", &mana2);
        if(mana2 == 1)
            rezultat_1++;
        else
            if(mana2 == 2)
                rezultat_2++;
            else
                if(mana2 == 3)
                    rezultat_3++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
    printf("CINE IA MANA 3: ");
        scanf("%d", &mana3);
        if(mana3 == 1)
            rezultat_1++;
        else
            if(mana3 == 2)
                rezultat_2++;
            else
                if(mana3 == 3)
                    rezultat_3++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
    printf("CINE IA MANA 4: ");
        scanf("%d", &mana4);
        if(mana4 == 1)
            rezultat_1++;
        else
            if(mana4 == 2)
                rezultat_2++;
            else
                if(mana4 == 3)
                    rezultat_3++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("\n");


        if(rezultat_1 == pariu_1)
            {
                printf("JUCATORUL 1 SI-A FACUT MAINILE\n");
                punctaj_1 = punctaj_1 + (5 + pariu_1);
            }
        else
            {
                printf("JUCATORUL 1 S-A FRIPT CU %d\n", abs(rezultat_1 - pariu_1));
                punctaj_1 = punctaj_1 - (5 + abs(rezultat_1 - pariu_1));
            }

        if(rezultat_2 == pariu_2)
            {
                printf("JUCATORUL 2 SI-A FACUT MAINILE\n");
                punctaj_2 = punctaj_2 + (5 + pariu_2);
            }
        else
            {
                printf("JUCATORUL 2 S-A FRIPT CU %d\n", abs(rezultat_2 - pariu_2));
                punctaj_2 = punctaj_2 - (5 + abs(rezultat_2 - pariu_2));
            }
        if(rezultat_3 == pariu_3)
            {
                printf("JUCATORUL 3 SI-A FACUT MAINILE\n");
                punctaj_3 = punctaj_3 + (5 + pariu_3);
            }
        else
            {
                printf("JUCATORUL 3 S-A FRIPT CU %d\n", abs(rezultat_3 - pariu_3));
                punctaj_3 = punctaj_3 - (5 + abs(rezultat_3 - pariu_3));
            }
        printf("\n");
        printf("JUCATOR 1: %d\n", punctaj_1);
        printf("JUCATOR 2: %d\n", punctaj_2);
        printf("JUCATOR 3: %d\n", punctaj_3);
        printf("\n");
        printf("\n");

printf("JOC DE 5\n");
printf("\n");

        pariu_1 = 0, pariu_2 = 0, pariu_3 = 0;
        rezultat_1 = 0, rezultat_2 = 0, rezultat_3 = 0;
        printf("PARIU JUCATOR 1: ");
        scanf("%d", &aux1);
        printf("PARIU JUCATOR 2: ");
        scanf("%d", &aux2);
        printf("JUCATORUL 3 NU ARE VOIE SA PARIEZE %d\n", 5 - aux1 - aux2);
        printf("PARIU JUCATOR 3: ");
        scanf("%d", &aux3);
        pariu_1 = aux1;
        pariu_2 = aux2;
        pariu_3 = aux3;
        printf("\n");

        printf("PARIU 1: %d\n", pariu_1);
        printf("PARIU 2: %d\n", pariu_2);
        printf("PARIU 3: %d\n", pariu_3);

        printf("\n");
    printf("CINE IA MANA 1: ");
        scanf("%d", &mana1);
        if(mana1 == 1)
            rezultat_1++;
        else
            if(mana1 == 2)
                rezultat_2++;
            else
                if(mana1 == 3)
                    rezultat_3++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
    printf("CINE IA MANA 2: ");
        scanf("%d", &mana2);
        if(mana2 == 1)
            rezultat_1++;
        else
            if(mana2 == 2)
                rezultat_2++;
            else
                if(mana2 == 3)
                    rezultat_3++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
    printf("CINE IA MANA 3: ");
        scanf("%d", &mana3);
        if(mana3 == 1)
            rezultat_1++;
        else
            if(mana3 == 2)
                rezultat_2++;
            else
                if(mana3 == 3)
                    rezultat_3++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
    printf("CINE IA MANA 4: ");
        scanf("%d", &mana4);
        if(mana4 == 1)
            rezultat_1++;
        else
            if(mana4 == 2)
                rezultat_2++;
            else
                if(mana4 == 3)
                    rezultat_3++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
    printf("CINE IA MANA 5: ");
        scanf("%d", &mana5);
        if(mana5 == 1)
            rezultat_1++;
        else
            if(mana5 == 2)
                rezultat_2++;
            else
                if(mana5 == 3)
                    rezultat_3++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("\n");


        if(rezultat_1 == pariu_1)
            {
                printf("JUCATORUL 1 SI-A FACUT MAINILE\n");
                punctaj_1 = punctaj_1 + (5 + pariu_1);
            }
        else
            {
                printf("JUCATORUL 1 S-A FRIPT CU %d\n", abs(rezultat_1 - pariu_1));
                punctaj_1 = punctaj_1 - (5 + abs(rezultat_1 - pariu_1));
            }

        if(rezultat_2 == pariu_2)
            {
                printf("JUCATORUL 2 SI-A FACUT MAINILE\n");
                punctaj_2 = punctaj_2 + (5 + pariu_2);
            }
        else
            {
                printf("JUCATORUL 2 S-A FRIPT CU %d\n", abs(rezultat_2 - pariu_2));
                punctaj_2 = punctaj_2 - (5 + abs(rezultat_2 - pariu_2));
            }
        if(rezultat_3 == pariu_3)
            {
                printf("JUCATORUL 3 SI-A FACUT MAINILE\n");
                punctaj_3 = punctaj_3 + (5 + pariu_3);
            }
        else
            {
                printf("JUCATORUL 3 S-A FRIPT CU %d\n", abs(rezultat_3 - pariu_3));
                punctaj_3 = punctaj_3 - (5 + abs(rezultat_3 - pariu_3));
            }
        printf("\n");
        printf("JUCATOR 1: %d\n", punctaj_1);
        printf("JUCATOR 2: %d\n", punctaj_2);
        printf("JUCATOR 3: %d\n", punctaj_3);
        printf("\n");
        printf("\n");

printf("JOC DE 6\n");
printf("\n");

        pariu_1 = 0, pariu_2 = 0, pariu_3 = 0;
        rezultat_1 = 0, rezultat_2 = 0, rezultat_3 = 0;
        printf("PARIU JUCATOR 2: ");
        scanf("%d", &aux2);
        printf("PARIU JUCATOR 3: ");
        scanf("%d", &aux3);
        printf("JUCATORUL 1 NU ARE VOIE SA PARIEZE %d\n", 6 - aux2 - aux3);
        printf("PARIU JUCATOR 1: ");
        scanf("%d", &aux1);
        pariu_1 = aux1;
        pariu_2 = aux2;
        pariu_3 = aux3;
        printf("\n");

        printf("PARIU 1: %d\n", pariu_1);
        printf("PARIU 2: %d\n", pariu_2);
        printf("PARIU 3: %d\n", pariu_3);

        printf("\n");
    printf("CINE IA MANA 1: ");
        scanf("%d", &mana1);
        if(mana1 == 1)
            rezultat_1++;
        else
            if(mana1 == 2)
                rezultat_2++;
            else
                if(mana1 == 3)
                    rezultat_3++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
    printf("CINE IA MANA 2: ");
        scanf("%d", &mana2);
        if(mana2 == 1)
            rezultat_1++;
        else
            if(mana2 == 2)
                rezultat_2++;
            else
                if(mana2 == 3)
                    rezultat_3++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
    printf("CINE IA MANA 3: ");
        scanf("%d", &mana3);
        if(mana3 == 1)
            rezultat_1++;
        else
            if(mana3 == 2)
                rezultat_2++;
            else
                if(mana3 == 3)
                    rezultat_3++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
    printf("CINE IA MANA 4: ");
        scanf("%d", &mana4);
        if(mana4 == 1)
            rezultat_1++;
        else
            if(mana4 == 2)
                rezultat_2++;
            else
                if(mana4 == 3)
                    rezultat_3++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
    printf("CINE IA MANA 5: ");
        scanf("%d", &mana5);
        if(mana5 == 1)
            rezultat_1++;
        else
            if(mana5 == 2)
                rezultat_2++;
            else
                if(mana5 == 3)
                    rezultat_3++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
    printf("CINE IA MANA 6: ");
        scanf("%d", &mana6);
        if(mana6 == 1)
            rezultat_1++;
        else
            if(mana6 == 2)
                rezultat_2++;
            else
                if(mana6 == 3)
                    rezultat_3++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("\n");


        if(rezultat_1 == pariu_1)
            {
                printf("JUCATORUL 1 SI-A FACUT MAINILE\n");
                punctaj_1 = punctaj_1 + (5 + pariu_1);
            }
        else
            {
                printf("JUCATORUL 1 S-A FRIPT CU %d\n", abs(rezultat_1 - pariu_1));
                punctaj_1 = punctaj_1 - (5 + abs(rezultat_1 - pariu_1));
            }

        if(rezultat_2 == pariu_2)
            {
                printf("JUCATORUL 2 SI-A FACUT MAINILE\n");
                punctaj_2 = punctaj_2 + (5 + pariu_2);
            }
        else
            {
                printf("JUCATORUL 2 S-A FRIPT CU %d\n", abs(rezultat_2 - pariu_2));
                punctaj_2 = punctaj_2 - (5 + abs(rezultat_2 - pariu_2));
            }
        if(rezultat_3 == pariu_3)
            {
                printf("JUCATORUL 3 SI-A FACUT MAINILE\n");
                punctaj_3 = punctaj_3 + (5 + pariu_3);
            }
        else
            {
                printf("JUCATORUL 3 S-A FRIPT CU %d\n", abs(rezultat_3 - pariu_3));
                punctaj_3 = punctaj_3 - (5 + abs(rezultat_3 - pariu_3));
            }
        printf("\n");
        printf("JUCATOR 1: %d\n", punctaj_1);
        printf("JUCATOR 2: %d\n", punctaj_2);
        printf("JUCATOR 3: %d\n", punctaj_3);
        printf("\n");
        printf("\n");

printf("JOC DE 7\n");
printf("\n");

        pariu_1 = 0, pariu_2 = 0, pariu_3 = 0;
        rezultat_1 = 0, rezultat_2 = 0, rezultat_3 = 0;
        printf("PARIU JUCATOR 3: ");
        scanf("%d", &aux3);
        printf("PARIU JUCATOR 1: ");
        scanf("%d", &aux1);
        printf("JUCATORUL 2 NU ARE VOIE SA PARIEZE %d\n", 7 - aux3 - aux1);
        printf("PARIU JUCATOR 2: ");
        scanf("%d", &aux2);
        pariu_1 = aux1;
        pariu_2 = aux2;
        pariu_3 = aux3;
        printf("\n");

        printf("PARIU 1: %d\n", pariu_1);
        printf("PARIU 2: %d\n", pariu_2);
        printf("PARIU 3: %d\n", pariu_3);

        printf("\n");
    printf("CINE IA MANA 1: ");
        scanf("%d", &mana1);
        if(mana1 == 1)
            rezultat_1++;
        else
            if(mana1 == 2)
                rezultat_2++;
            else
                if(mana1 == 3)
                    rezultat_3++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
    printf("CINE IA MANA 2: ");
        scanf("%d", &mana2);
        if(mana2 == 1)
            rezultat_1++;
        else
            if(mana2 == 2)
                rezultat_2++;
            else
                if(mana2 == 3)
                    rezultat_3++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
    printf("CINE IA MANA 3: ");
        scanf("%d", &mana3);
        if(mana3 == 1)
            rezultat_1++;
        else
            if(mana3 == 2)
                rezultat_2++;
            else
                if(mana3 == 3)
                    rezultat_3++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
    printf("CINE IA MANA 4: ");
        scanf("%d", &mana4);
        if(mana4 == 1)
            rezultat_1++;
        else
            if(mana4 == 2)
                rezultat_2++;
            else
                if(mana4 == 3)
                    rezultat_3++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
    printf("CINE IA MANA 5: ");
        scanf("%d", &mana5);
        if(mana5 == 1)
            rezultat_1++;
        else
            if(mana5 == 2)
                rezultat_2++;
            else
                if(mana5 == 3)
                    rezultat_3++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
    printf("CINE IA MANA 6: ");
        scanf("%d", &mana6);
        if(mana6 == 1)
            rezultat_1++;
        else
            if(mana6 == 2)
                rezultat_2++;
            else
                if(mana6 == 3)
                    rezultat_3++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
    printf("CINE IA MANA 7: ");
        scanf("%d", &mana7);
        if(mana7 == 1)
            rezultat_1++;
        else
            if(mana7 == 2)
                rezultat_2++;
            else
                if(mana7 == 3)
                    rezultat_3++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("\n");


        if(rezultat_1 == pariu_1)
            {
                printf("JUCATORUL 1 SI-A FACUT MAINILE\n");
                punctaj_1 = punctaj_1 + (5 + pariu_1);
            }
        else
            {
                printf("JUCATORUL 1 S-A FRIPT CU %d\n", abs(rezultat_1 - pariu_1));
                punctaj_1 = punctaj_1 - (5 + abs(rezultat_1 - pariu_1));
            }

        if(rezultat_2 == pariu_2)
            {
                printf("JUCATORUL 2 SI-A FACUT MAINILE\n");
                punctaj_2 = punctaj_2 + (5 + pariu_2);
            }
        else
            {
                printf("JUCATORUL 2 S-A FRIPT CU %d\n", abs(rezultat_2 - pariu_2));
                punctaj_2 = punctaj_2 - (5 + abs(rezultat_2 - pariu_2));
            }
        if(rezultat_3 == pariu_3)
            {
                printf("JUCATORUL 3 SI-A FACUT MAINILE\n");
                punctaj_3 = punctaj_3 + (5 + pariu_3);
            }
        else
            {
                printf("JUCATORUL 3 S-A FRIPT CU %d\n", abs(rezultat_3 - pariu_3));
                punctaj_3 = punctaj_3 - (5 + abs(rezultat_3 - pariu_3));
            }
        printf("\n");
        printf("JUCATOR 1: %d\n", punctaj_1);
        printf("JUCATOR 2: %d\n", punctaj_2);
        printf("JUCATOR 3: %d\n", punctaj_3);
        printf("\n");
        printf("\n");

printf("JOC DE 8 NR.1\n");
printf("\n");

        pariu_1 = 0, pariu_2 = 0, pariu_3 = 0;
        rezultat_1 = 0, rezultat_2 = 0, rezultat_3 = 0;
        printf("PARIU JUCATOR 1: ");
        scanf("%d", &aux1);
        printf("PARIU JUCATOR 2: ");
        scanf("%d", &aux2);
        printf("JUCATORUL 3 NU ARE VOIE SA PARIEZE %d\n", 8 - aux1 - aux2);
        printf("PARIU JUCATOR 3: ");
        scanf("%d", &aux3);
        pariu_1 = aux1;
        pariu_2 = aux2;
        pariu_3 = aux3;
        printf("\n");

        printf("PARIU 1: %d\n", pariu_1);
        printf("PARIU 2: %d\n", pariu_2);
        printf("PARIU 3: %d\n", pariu_3);

        printf("\n");
    printf("CINE IA MANA 1: ");
        scanf("%d", &mana1);
        if(mana1 == 1)
            rezultat_1++;
        else
            if(mana1 == 2)
                rezultat_2++;
            else
                if(mana1 == 3)
                    rezultat_3++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
    printf("CINE IA MANA 2: ");
        scanf("%d", &mana2);
        if(mana2 == 1)
            rezultat_1++;
        else
            if(mana2 == 2)
                rezultat_2++;
            else
                if(mana2 == 3)
                    rezultat_3++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
    printf("CINE IA MANA 3: ");
        scanf("%d", &mana3);
        if(mana3 == 1)
            rezultat_1++;
        else
            if(mana3 == 2)
                rezultat_2++;
            else
                if(mana3 == 3)
                    rezultat_3++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
    printf("CINE IA MANA 4: ");
        scanf("%d", &mana4);
        if(mana4 == 1)
            rezultat_1++;
        else
            if(mana4 == 2)
                rezultat_2++;
            else
                if(mana4 == 3)
                    rezultat_3++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
    printf("CINE IA MANA 5: ");
        scanf("%d", &mana5);
        if(mana5 == 1)
            rezultat_1++;
        else
            if(mana5 == 2)
                rezultat_2++;
            else
                if(mana5 == 3)
                    rezultat_3++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
    printf("CINE IA MANA 6: ");
        scanf("%d", &mana6);
        if(mana6 == 1)
            rezultat_1++;
        else
            if(mana6 == 2)
                rezultat_2++;
            else
                if(mana6 == 3)
                    rezultat_3++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
    printf("CINE IA MANA 7: ");
        scanf("%d", &mana7);
        if(mana7 == 1)
            rezultat_1++;
        else
            if(mana7 == 2)
                rezultat_2++;
            else
                if(mana7 == 3)
                    rezultat_3++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
    printf("CINE IA MANA 8: ");
        scanf("%d", &mana8);
        if(mana8 == 1)
            rezultat_1++;
        else
            if(mana8 == 2)
                rezultat_2++;
            else
                if(mana8 == 3)
                    rezultat_3++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("\n");

        if(rezultat_1 == pariu_1)
            {
                printf("JUCATORUL 1 SI-A FACUT MAINILE\n");
                punctaj_1 = punctaj_1 + (5 + pariu_1);
            }
        else
            {
                printf("JUCATORUL 1 S-A FRIPT CU %d\n", abs(rezultat_1 - pariu_1));
                punctaj_1 = punctaj_1 - (5 + abs(rezultat_1 - pariu_1));
            }

        if(rezultat_2 == pariu_2)
            {
                printf("JUCATORUL 2 SI-A FACUT MAINILE\n");
                punctaj_2 = punctaj_2 + (5 + pariu_2);
            }
        else
            {
                printf("JUCATORUL 2 S-A FRIPT CU %d\n", abs(rezultat_2 - pariu_2));
                punctaj_2 = punctaj_2 - (5 + abs(rezultat_2 - pariu_2));
            }
        if(rezultat_3 == pariu_3)
            {
                printf("JUCATORUL 3 SI-A FACUT MAINILE\n");
                punctaj_3 = punctaj_3 + (5 + pariu_3);
            }
        else
            {
                printf("JUCATORUL 3 S-A FRIPT CU %d\n", abs(rezultat_3 - pariu_3));
                punctaj_3 = punctaj_3 - (5 + abs(rezultat_3 - pariu_3));
            }
        printf("\n");
        printf("JUCATOR 1: %d\n", punctaj_1);
        printf("JUCATOR 2: %d\n", punctaj_2);
        printf("JUCATOR 3: %d\n", punctaj_3);
        printf("\n");
        printf("\n");

printf("JOC DE 8 NR.2\n");
printf("\n");

        pariu_1 = 0, pariu_2 = 0, pariu_3 = 0;
        rezultat_1 = 0, rezultat_2 = 0, rezultat_3 = 0;
        printf("PARIU JUCATOR 2: ");
        scanf("%d", &aux2);
        printf("PARIU JUCATOR 3: ");
        scanf("%d", &aux3);
        printf("JUCATORUL 1 NU ARE VOIE SA PARIEZE %d\n", 8 - aux2 - aux3);
        printf("PARIU JUCATOR 1: ");
        scanf("%d", &aux1);
        pariu_1 = aux1;
        pariu_2 = aux2;
        pariu_3 = aux3;
        printf("\n");

        printf("PARIU 1: %d\n", pariu_1);
        printf("PARIU 2: %d\n", pariu_2);
        printf("PARIU 3: %d\n", pariu_3);

        printf("\n");
    printf("CINE IA MANA 1: ");
        scanf("%d", &mana1);
        if(mana1 == 1)
            rezultat_1++;
        else
            if(mana1 == 2)
                rezultat_2++;
            else
                if(mana1 == 3)
                    rezultat_3++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
    printf("CINE IA MANA 2: ");
        scanf("%d", &mana2);
        if(mana2 == 1)
            rezultat_1++;
        else
            if(mana2 == 2)
                rezultat_2++;
            else
                if(mana2 == 3)
                    rezultat_3++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
    printf("CINE IA MANA 3: ");
        scanf("%d", &mana3);
        if(mana3 == 1)
            rezultat_1++;
        else
            if(mana3 == 2)
                rezultat_2++;
            else
                if(mana3 == 3)
                    rezultat_3++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
    printf("CINE IA MANA 4: ");
        scanf("%d", &mana4);
        if(mana4 == 1)
            rezultat_1++;
        else
            if(mana4 == 2)
                rezultat_2++;
            else
                if(mana4 == 3)
                    rezultat_3++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
    printf("CINE IA MANA 5: ");
        scanf("%d", &mana5);
        if(mana5 == 1)
            rezultat_1++;
        else
            if(mana5 == 2)
                rezultat_2++;
            else
                if(mana5 == 3)
                    rezultat_3++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
    printf("CINE IA MANA 6: ");
        scanf("%d", &mana6);
        if(mana6 == 1)
            rezultat_1++;
        else
            if(mana6 == 2)
                rezultat_2++;
            else
                if(mana6 == 3)
                    rezultat_3++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
    printf("CINE IA MANA 7: ");
        scanf("%d", &mana7);
        if(mana7 == 1)
            rezultat_1++;
        else
            if(mana7 == 2)
                rezultat_2++;
            else
                if(mana7 == 3)
                    rezultat_3++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
    printf("CINE IA MANA 8: ");
        scanf("%d", &mana8);
        if(mana8 == 1)
            rezultat_1++;
        else
            if(mana8 == 2)
                rezultat_2++;
            else
                if(mana8 == 3)
                    rezultat_3++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("\n");

        if(rezultat_1 == pariu_1)
            {
                printf("JUCATORUL 1 SI-A FACUT MAINILE\n");
                punctaj_1 = punctaj_1 + (5 + pariu_1);
            }
        else
            {
                printf("JUCATORUL 1 S-A FRIPT CU %d\n", abs(rezultat_1 - pariu_1));
                punctaj_1 = punctaj_1 - (5 + abs(rezultat_1 - pariu_1));
            }

        if(rezultat_2 == pariu_2)
            {
                printf("JUCATORUL 2 SI-A FACUT MAINILE\n");
                punctaj_2 = punctaj_2 + (5 + pariu_2);
            }
        else
            {
                printf("JUCATORUL 2 S-A FRIPT CU %d\n", abs(rezultat_2 - pariu_2));
                punctaj_2 = punctaj_2 - (5 + abs(rezultat_2 - pariu_2));
            }
        if(rezultat_3 == pariu_3)
            {
                printf("JUCATORUL 3 SI-A FACUT MAINILE\n");
                punctaj_3 = punctaj_3 + (5 + pariu_3);
            }
        else
            {
                printf("JUCATORUL 3 S-A FRIPT CU %d\n", abs(rezultat_3 - pariu_3));
                punctaj_3 = punctaj_3 - (5 + abs(rezultat_3 - pariu_3));
            }
        printf("\n");
        printf("JUCATOR 1: %d\n", punctaj_1);
        printf("JUCATOR 2: %d\n", punctaj_2);
        printf("JUCATOR 3: %d\n", punctaj_3);
        printf("\n");
        printf("\n");

printf("JOC DE 8 NR.3\n");
printf("\n");

        pariu_1 = 0, pariu_2 = 0, pariu_3 = 0;
        rezultat_1 = 0, rezultat_2 = 0, rezultat_3 = 0;
        printf("PARIU JUCATOR 3: ");
        scanf("%d", &aux3);
        printf("PARIU JUCATOR 1: ");
        scanf("%d", &aux1);
        printf("JUCATORUL 2 NU ARE VOIE SA PARIEZE %d\n", 8 - aux3 - aux1);
        printf("PARIU JUCATOR 2: ");
        scanf("%d", &aux2);
        pariu_1 = aux1;
        pariu_2 = aux2;
        pariu_3 = aux3;
        printf("\n");

        printf("PARIU 1: %d\n", pariu_1);
        printf("PARIU 2: %d\n", pariu_2);
        printf("PARIU 3: %d\n", pariu_3);

        printf("\n");
    printf("CINE IA MANA 1: ");
        scanf("%d", &mana1);
        if(mana1 == 1)
            rezultat_1++;
        else
            if(mana1 == 2)
                rezultat_2++;
            else
                if(mana1 == 3)
                    rezultat_3++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
    printf("CINE IA MANA 2: ");
        scanf("%d", &mana2);
        if(mana2 == 1)
            rezultat_1++;
        else
            if(mana2 == 2)
                rezultat_2++;
            else
                if(mana2 == 3)
                    rezultat_3++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
    printf("CINE IA MANA 3: ");
        scanf("%d", &mana3);
        if(mana3 == 1)
            rezultat_1++;
        else
            if(mana3 == 2)
                rezultat_2++;
            else
                if(mana3 == 3)
                    rezultat_3++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
    printf("CINE IA MANA 4: ");
        scanf("%d", &mana4);
        if(mana4 == 1)
            rezultat_1++;
        else
            if(mana4 == 2)
                rezultat_2++;
            else
                if(mana4 == 3)
                    rezultat_3++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
    printf("CINE IA MANA 5: ");
        scanf("%d", &mana5);
        if(mana5 == 1)
            rezultat_1++;
        else
            if(mana5 == 2)
                rezultat_2++;
            else
                if(mana5 == 3)
                    rezultat_3++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
    printf("CINE IA MANA 6: ");
        scanf("%d", &mana6);
        if(mana6 == 1)
            rezultat_1++;
        else
            if(mana6 == 2)
                rezultat_2++;
            else
                if(mana6 == 3)
                    rezultat_3++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
    printf("CINE IA MANA 7: ");
        scanf("%d", &mana7);
        if(mana7 == 1)
            rezultat_1++;
        else
            if(mana7 == 2)
                rezultat_2++;
            else
                if(mana7 == 3)
                    rezultat_3++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
    printf("CINE IA MANA 8: ");
        scanf("%d", &mana8);
        if(mana8 == 1)
            rezultat_1++;
        else
            if(mana8 == 2)
                rezultat_2++;
            else
                if(mana8 == 3)
                    rezultat_3++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("\n");

        if(rezultat_1 == pariu_1)
            {
                printf("JUCATORUL 1 SI-A FACUT MAINILE\n");
                punctaj_1 = punctaj_1 + (5 + pariu_1);
            }
        else
            {
                printf("JUCATORUL 1 S-A FRIPT CU %d\n", abs(rezultat_1 - pariu_1));
                punctaj_1 = punctaj_1 - (5 + abs(rezultat_1 - pariu_1));
            }

        if(rezultat_2 == pariu_2)
            {
                printf("JUCATORUL 2 SI-A FACUT MAINILE\n");
                punctaj_2 = punctaj_2 + (5 + pariu_2);
            }
        else
            {
                printf("JUCATORUL 2 S-A FRIPT CU %d\n", abs(rezultat_2 - pariu_2));
                punctaj_2 = punctaj_2 - (5 + abs(rezultat_2 - pariu_2));
            }
        if(rezultat_3 == pariu_3)
            {
                printf("JUCATORUL 3 SI-A FACUT MAINILE\n");
                punctaj_3 = punctaj_3 + (5 + pariu_3);
            }
        else
            {
                printf("JUCATORUL 3 S-A FRIPT CU %d\n", abs(rezultat_3 - pariu_3));
                punctaj_3 = punctaj_3 - (5 + abs(rezultat_3 - pariu_3));
            }
        printf("\n");
        printf("\n");
        printf("JUCATOR 1: %d\n", punctaj_1);
        printf("JUCATOR 2: %d\n", punctaj_2);
        printf("JUCATOR 3: %d\n", punctaj_3);
        printf("\n");
        printf("\n");
}

void joc_4(void)
{
    printf("CARTEA CU CEL MAI MIC NUMAR ESTE 7\n");
    printf("\n");
    printf("\n");
    int punctaj_1 = 0;
    int punctaj_2 = 0;
    int punctaj_3 = 0;
    int punctaj_4 = 0;
    int pariu_1 = 0, pariu_2 = 0, pariu_3 = 0, pariu_4 = 0;
    int rezultat_1 = 0, rezultat_2 = 0, rezultat_3 = 0, rezultat_4 = 0;
    int aux1, aux2, aux3, aux4;
    int mana1, mana2, mana3, mana4, mana5, mana6, mana7, mana8;

printf("JOC DE 8 NR.1\n");
printf("\n");

        pariu_1 = 0, pariu_2 = 0, pariu_3 = 0, pariu_4 = 0;
        rezultat_1 = 0, rezultat_2 = 0, rezultat_3 = 0, rezultat_4 = 0;
        printf("PARIU JUCATOR 1: ");
        scanf("%d", &aux1);
        printf("PARIU JUCATOR 2: ");
        scanf("%d", &aux2);
        printf("PARIU JUCATOR 3: ");
        scanf("%d", &aux3);
        printf("JUCATORUL 4 NU ARE VOIE SA PARIEZE %d\n", 8 - aux1 - aux2 - aux3);
        printf("PARIU JUCATOR 4: ");
        scanf("%d", &aux4);
        pariu_1 = aux1;
        pariu_2 = aux2;
        pariu_3 = aux3;
        pariu_4 = aux4;
        printf("\n");

        printf("PARIU 1: %d\n", pariu_1);
        printf("PARIU 2: %d\n", pariu_2);
        printf("PARIU 3: %d\n", pariu_3);
        printf("PARIU 4: %d\n", pariu_4);

        printf("\n");
    printf("CINE IA MANA 1: ");
        scanf("%d", &mana1);
        if(mana1 == 1)
            rezultat_1++;
        else
            if(mana1 == 2)
                rezultat_2++;
            else
                if(mana1 == 3)
                    rezultat_3++;
                else
                    if(mana1 == 4)
                       rezultat_4++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
    printf("CINE IA MANA 2: ");
        scanf("%d", &mana2);
        if(mana2 == 1)
            rezultat_1++;
        else
            if(mana2 == 2)
                rezultat_2++;
            else
                if(mana2 == 3)
                    rezultat_3++;
                else
                    if(mana2 == 4)
                       rezultat_4++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
    printf("CINE IA MANA 3: ");
        scanf("%d", &mana3);
        if(mana3 == 1)
            rezultat_1++;
        else
            if(mana3 == 2)
                rezultat_2++;
            else
                if(mana3 == 3)
                    rezultat_3++;
                else
                    if(mana3 == 4)
                       rezultat_4++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
    printf("CINE IA MANA 4: ");
        scanf("%d", &mana4);
        if(mana4 == 1)
            rezultat_1++;
        else
            if(mana4 == 2)
                rezultat_2++;
            else
                if(mana4 == 3)
                    rezultat_3++;
                else
                    if(mana4 == 4)
                       rezultat_4++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
    printf("CINE IA MANA 5: ");
        scanf("%d", &mana5);
        if(mana5 == 1)
            rezultat_1++;
        else
            if(mana5 == 2)
                rezultat_2++;
            else
                if(mana5 == 3)
                    rezultat_3++;
                else
                    if(mana5 == 4)
                       rezultat_4++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
    printf("CINE IA MANA 6: ");
        scanf("%d", &mana6);
        if(mana6 == 1)
            rezultat_1++;
        else
            if(mana6 == 2)
                rezultat_2++;
            else
                if(mana6 == 3)
                    rezultat_3++;
                else
                    if(mana6 == 4)
                       rezultat_4++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
    printf("CINE IA MANA 7: ");
        scanf("%d", &mana7);
        if(mana7 == 1)
            rezultat_1++;
        else
            if(mana7 == 2)
                rezultat_2++;
            else
                if(mana7 == 3)
                    rezultat_3++;
                else
                    if(mana7 == 4)
                       rezultat_4++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
    printf("CINE IA MANA 8: ");
        scanf("%d", &mana8);
        if(mana8 == 1)
            rezultat_1++;
        else
            if(mana8 == 2)
                rezultat_2++;
            else
                if(mana8 == 3)
                    rezultat_3++;
                else
                    if(mana8 == 4)
                       rezultat_4++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("\n");

        if(rezultat_1 == pariu_1)
            {
                printf("JUCATORUL 1 SI-A FACUT MAINILE\n");
                punctaj_1 = punctaj_1 + (5 + pariu_1);
            }
        else
            {
                printf("JUCATORUL 1 S-A FRIPT CU %d\n", abs(rezultat_1 - pariu_1));
                punctaj_1 = punctaj_1 - (5 + abs(rezultat_1 - pariu_1));
            }

        if(rezultat_2 == pariu_2)
            {
                printf("JUCATORUL 2 SI-A FACUT MAINILE\n");
                punctaj_2 = punctaj_2 + (5 + pariu_2);
            }
        else
            {
                printf("JUCATORUL 2 S-A FRIPT CU %d\n", abs(rezultat_2 - pariu_2));
                punctaj_2 = punctaj_2 - (5 + abs(rezultat_2 - pariu_2));
            }
        if(rezultat_3 == pariu_3)
            {
                printf("JUCATORUL 3 SI-A FACUT MAINILE\n");
                punctaj_3 = punctaj_3 + (5 + pariu_3);
            }
        else
            {
                printf("JUCATORUL 3 S-A FRIPT CU %d\n", abs(rezultat_3 - pariu_3));
                punctaj_3 = punctaj_3 - (5 + abs(rezultat_3 - pariu_3));
            }
        if(rezultat_4 == pariu_4)
            {
                printf("JUCATORUL 4 SI-A FACUT MAINILE\n");
                punctaj_4 = punctaj_4 + (5 + pariu_4);
            }
        else
            {
                printf("JUCATORUL 4 S-A FRIPT CU %d\n", abs(rezultat_4 - pariu_4));
                punctaj_4 = punctaj_4 - (5 + abs(rezultat_4 - pariu_4));
            }
        printf("\n");
        printf("JUCATOR 1: %d\n", punctaj_1);
        printf("JUCATOR 2: %d\n", punctaj_2);
        printf("JUCATOR 3: %d\n", punctaj_3);
        printf("JUCATOR 4: %d\n", punctaj_4);
        printf("\n");
        printf("\n");

printf("JOC DE 8 NR.2\n");
printf("\n");

        pariu_1 = 0, pariu_2 = 0, pariu_3 = 0, pariu_4 = 0;
        rezultat_1 = 0, rezultat_2 = 0, rezultat_3 = 0, rezultat_4 = 0;
        printf("PARIU JUCATOR 2: ");
        scanf("%d", &aux2);
        printf("PARIU JUCATOR 3: ");
        scanf("%d", &aux3);
        printf("PARIU JUCATOR 4: ");
        scanf("%d", &aux4);
        printf("JUCATORUL 1 NU ARE VOIE SA PARIEZE %d\n", 8 - aux2 - aux3 - aux4);
        printf("PARIU JUCATOR 1: ");
        scanf("%d", &aux1);
        pariu_1 = aux1;
        pariu_2 = aux2;
        pariu_3 = aux3;
        pariu_4 = aux4;
        printf("\n");

        printf("PARIU 1: %d\n", pariu_1);
        printf("PARIU 2: %d\n", pariu_2);
        printf("PARIU 3: %d\n", pariu_3);
        printf("PARIU 4: %d\n", pariu_4);

        printf("\n");
    printf("CINE IA MANA 1: ");
        scanf("%d", &mana1);
        if(mana1 == 1)
            rezultat_1++;
        else
            if(mana1 == 2)
                rezultat_2++;
            else
                if(mana1 == 3)
                    rezultat_3++;
                else
                    if(mana1 == 4)
                       rezultat_4++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
    printf("CINE IA MANA 2: ");
        scanf("%d", &mana2);
        if(mana2 == 1)
            rezultat_1++;
        else
            if(mana2 == 2)
                rezultat_2++;
            else
                if(mana2 == 3)
                    rezultat_3++;
                else
                    if(mana2 == 4)
                       rezultat_4++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
    printf("CINE IA MANA 3: ");
        scanf("%d", &mana3);
        if(mana3 == 1)
            rezultat_1++;
        else
            if(mana3 == 2)
                rezultat_2++;
            else
                if(mana3 == 3)
                    rezultat_3++;
                else
                    if(mana3 == 4)
                       rezultat_4++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
    printf("CINE IA MANA 4: ");
        scanf("%d", &mana4);
        if(mana4 == 1)
            rezultat_1++;
        else
            if(mana4 == 2)
                rezultat_2++;
            else
                if(mana4 == 3)
                    rezultat_3++;
                else
                    if(mana4 == 4)
                       rezultat_4++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
    printf("CINE IA MANA 5: ");
        scanf("%d", &mana5);
        if(mana5 == 1)
            rezultat_1++;
        else
            if(mana5 == 2)
                rezultat_2++;
            else
                if(mana5 == 3)
                    rezultat_3++;
                else
                    if(mana5 == 4)
                       rezultat_4++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
    printf("CINE IA MANA 6: ");
        scanf("%d", &mana6);
        if(mana6 == 1)
            rezultat_1++;
        else
            if(mana6 == 2)
                rezultat_2++;
            else
                if(mana6 == 3)
                    rezultat_3++;
                else
                    if(mana6 == 4)
                       rezultat_4++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
    printf("CINE IA MANA 7: ");
        scanf("%d", &mana7);
        if(mana7 == 1)
            rezultat_1++;
        else
            if(mana7 == 2)
                rezultat_2++;
            else
                if(mana7 == 3)
                    rezultat_3++;
                else
                    if(mana7 == 4)
                       rezultat_4++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
    printf("CINE IA MANA 8: ");
        scanf("%d", &mana8);
        if(mana8 == 1)
            rezultat_1++;
        else
            if(mana8 == 2)
                rezultat_2++;
            else
                if(mana8 == 3)
                    rezultat_3++;
                else
                    if(mana8 == 4)
                       rezultat_4++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("\n");

        if(rezultat_1 == pariu_1)
            {
                printf("JUCATORUL 1 SI-A FACUT MAINILE\n");
                punctaj_1 = punctaj_1 + (5 + pariu_1);
            }
        else
            {
                printf("JUCATORUL 1 S-A FRIPT CU %d\n", abs(rezultat_1 - pariu_1));
                punctaj_1 = punctaj_1 - (5 + abs(rezultat_1 - pariu_1));
            }

        if(rezultat_2 == pariu_2)
            {
                printf("JUCATORUL 2 SI-A FACUT MAINILE\n");
                punctaj_2 = punctaj_2 + (5 + pariu_2);
            }
        else
            {
                printf("JUCATORUL 2 S-A FRIPT CU %d\n", abs(rezultat_2 - pariu_2));
                punctaj_2 = punctaj_2 - (5 + abs(rezultat_2 - pariu_2));
            }
        if(rezultat_3 == pariu_3)
            {
                printf("JUCATORUL 3 SI-A FACUT MAINILE\n");
                punctaj_3 = punctaj_3 + (5 + pariu_3);
            }
        else
            {
                printf("JUCATORUL 3 S-A FRIPT CU %d\n", abs(rezultat_3 - pariu_3));
                punctaj_3 = punctaj_3 - (5 + abs(rezultat_3 - pariu_3));
            }
        if(rezultat_4 == pariu_4)
            {
                printf("JUCATORUL 4 SI-A FACUT MAINILE\n");
                punctaj_4 = punctaj_4 + (5 + pariu_4);
            }
        else
            {
                printf("JUCATORUL 4 S-A FRIPT CU %d\n", abs(rezultat_4 - pariu_4));
                punctaj_4 = punctaj_4 - (5 + abs(rezultat_4 - pariu_4));
            }
        printf("\n");
        printf("JUCATOR 1: %d\n", punctaj_1);
        printf("JUCATOR 2: %d\n", punctaj_2);
        printf("JUCATOR 3: %d\n", punctaj_3);
        printf("JUCATOR 4: %d\n", punctaj_4);
        printf("\n");
        printf("\n");

printf("JOC DE 8 NR.3\n");
printf("\n");

        pariu_1 = 0, pariu_2 = 0, pariu_3 = 0, pariu_4 = 0;
        rezultat_1 = 0, rezultat_2 = 0, rezultat_3 = 0, rezultat_4 = 0;
        printf("PARIU JUCATOR 3: ");
        scanf("%d", &aux3);
        printf("PARIU JUCATOR 4: ");
        scanf("%d", &aux4);
        printf("PARIU JUCATOR 1: ");
        scanf("%d", &aux1);
        printf("JUCATORUL 2 NU ARE VOIE SA PARIEZE %d\n", 8 - aux3 - aux4 - aux1);
        printf("PARIU JUCATOR 2: ");
        scanf("%d", &aux2);
        pariu_1 = aux1;
        pariu_2 = aux2;
        pariu_3 = aux3;
        pariu_4 = aux4;
        printf("\n");

        printf("PARIU 1: %d\n", pariu_1);
        printf("PARIU 2: %d\n", pariu_2);
        printf("PARIU 3: %d\n", pariu_3);
        printf("PARIU 4: %d\n", pariu_4);

        printf("\n");
    printf("CINE IA MANA 1: ");
        scanf("%d", &mana1);
        if(mana1 == 1)
            rezultat_1++;
        else
            if(mana1 == 2)
                rezultat_2++;
            else
                if(mana1 == 3)
                    rezultat_3++;
                else
                    if(mana1 == 4)
                       rezultat_4++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
    printf("CINE IA MANA 2: ");
        scanf("%d", &mana2);
        if(mana2 == 1)
            rezultat_1++;
        else
            if(mana2 == 2)
                rezultat_2++;
            else
                if(mana2 == 3)
                    rezultat_3++;
                else
                    if(mana2 == 4)
                       rezultat_4++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
    printf("CINE IA MANA 3: ");
        scanf("%d", &mana3);
        if(mana3 == 1)
            rezultat_1++;
        else
            if(mana3 == 2)
                rezultat_2++;
            else
                if(mana3 == 3)
                    rezultat_3++;
                else
                    if(mana3 == 4)
                       rezultat_4++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
    printf("CINE IA MANA 4: ");
        scanf("%d", &mana4);
        if(mana4 == 1)
            rezultat_1++;
        else
            if(mana4 == 2)
                rezultat_2++;
            else
                if(mana4 == 3)
                    rezultat_3++;
                else
                    if(mana4 == 4)
                       rezultat_4++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
    printf("CINE IA MANA 5: ");
        scanf("%d", &mana5);
        if(mana5 == 1)
            rezultat_1++;
        else
            if(mana5 == 2)
                rezultat_2++;
            else
                if(mana5 == 3)
                    rezultat_3++;
                else
                    if(mana5 == 4)
                       rezultat_4++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
    printf("CINE IA MANA 6: ");
        scanf("%d", &mana6);
        if(mana6 == 1)
            rezultat_1++;
        else
            if(mana6 == 2)
                rezultat_2++;
            else
                if(mana6 == 3)
                    rezultat_3++;
                else
                    if(mana6 == 4)
                       rezultat_4++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
    printf("CINE IA MANA 7: ");
        scanf("%d", &mana7);
        if(mana7 == 1)
            rezultat_1++;
        else
            if(mana7 == 2)
                rezultat_2++;
            else
                if(mana7 == 3)
                    rezultat_3++;
                else
                    if(mana7 == 4)
                       rezultat_4++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
    printf("CINE IA MANA 8: ");
        scanf("%d", &mana8);
        if(mana8 == 1)
            rezultat_1++;
        else
            if(mana8 == 2)
                rezultat_2++;
            else
                if(mana8 == 3)
                    rezultat_3++;
                else
                    if(mana8 == 4)
                       rezultat_4++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("\n");

        if(rezultat_1 == pariu_1)
            {
                printf("JUCATORUL 1 SI-A FACUT MAINILE\n");
                punctaj_1 = punctaj_1 + (5 + pariu_1);
            }
        else
            {
                printf("JUCATORUL 1 S-A FRIPT CU %d\n", abs(rezultat_1 - pariu_1));
                punctaj_1 = punctaj_1 - (5 + abs(rezultat_1 - pariu_1));
            }

        if(rezultat_2 == pariu_2)
            {
                printf("JUCATORUL 2 SI-A FACUT MAINILE\n");
                punctaj_2 = punctaj_2 + (5 + pariu_2);
            }
        else
            {
                printf("JUCATORUL 2 S-A FRIPT CU %d\n", abs(rezultat_2 - pariu_2));
                punctaj_2 = punctaj_2 - (5 + abs(rezultat_2 - pariu_2));
            }
        if(rezultat_3 == pariu_3)
            {
                printf("JUCATORUL 3 SI-A FACUT MAINILE\n");
                punctaj_3 = punctaj_3 + (5 + pariu_3);
            }
        else
            {
                printf("JUCATORUL 3 S-A FRIPT CU %d\n", abs(rezultat_3 - pariu_3));
                punctaj_3 = punctaj_3 - (5 + abs(rezultat_3 - pariu_3));
            }
        if(rezultat_4 == pariu_4)
            {
                printf("JUCATORUL 4 SI-A FACUT MAINILE\n");
                punctaj_4 = punctaj_4 + (5 + pariu_4);
            }
        else
            {
                printf("JUCATORUL 4 S-A FRIPT CU %d\n", abs(rezultat_4 - pariu_4));
                punctaj_4 = punctaj_4 - (5 + abs(rezultat_4 - pariu_4));
            }
        printf("\n");
        printf("JUCATOR 1: %d\n", punctaj_1);
        printf("JUCATOR 2: %d\n", punctaj_2);
        printf("JUCATOR 3: %d\n", punctaj_3);
        printf("JUCATOR 4: %d\n", punctaj_4);
        printf("\n");
        printf("\n");

printf("JOC DE 8 NR.4\n");
printf("\n");

        pariu_1 = 0, pariu_2 = 0, pariu_3 = 0, pariu_4 = 0;
        rezultat_1 = 0, rezultat_2 = 0, rezultat_3 = 0, rezultat_4 = 0;
        printf("PARIU JUCATOR 4: ");
        scanf("%d", &aux4);
        printf("PARIU JUCATOR 1: ");
        scanf("%d", &aux1);
        printf("PARIU JUCATOR 2: ");
        scanf("%d", &aux2);
        printf("JUCATORUL 3 NU ARE VOIE SA PARIEZE %d\n", 8 - aux4 - aux1 - aux2);
        printf("PARIU JUCATOR 3: ");
        scanf("%d", &aux3);
        pariu_1 = aux1;
        pariu_2 = aux2;
        pariu_3 = aux3;
        pariu_4 = aux4;
        printf("\n");

        printf("PARIU 1: %d\n", pariu_1);
        printf("PARIU 2: %d\n", pariu_2);
        printf("PARIU 3: %d\n", pariu_3);
        printf("PARIU 4: %d\n", pariu_4);

        printf("\n");
    printf("CINE IA MANA 1: ");
        scanf("%d", &mana1);
        if(mana1 == 1)
            rezultat_1++;
        else
            if(mana1 == 2)
                rezultat_2++;
            else
                if(mana1 == 3)
                    rezultat_3++;
                else
                    if(mana1 == 4)
                       rezultat_4++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
    printf("CINE IA MANA 2: ");
        scanf("%d", &mana2);
        if(mana2 == 1)
            rezultat_1++;
        else
            if(mana2 == 2)
                rezultat_2++;
            else
                if(mana2 == 3)
                    rezultat_3++;
                else
                    if(mana2 == 4)
                       rezultat_4++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
    printf("CINE IA MANA 3: ");
        scanf("%d", &mana3);
        if(mana3 == 1)
            rezultat_1++;
        else
            if(mana3 == 2)
                rezultat_2++;
            else
                if(mana3 == 3)
                    rezultat_3++;
                else
                    if(mana3 == 4)
                       rezultat_4++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
    printf("CINE IA MANA 4: ");
        scanf("%d", &mana4);
        if(mana4 == 1)
            rezultat_1++;
        else
            if(mana4 == 2)
                rezultat_2++;
            else
                if(mana4 == 3)
                    rezultat_3++;
                else
                    if(mana4 == 4)
                       rezultat_4++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
    printf("CINE IA MANA 5: ");
        scanf("%d", &mana5);
        if(mana5 == 1)
            rezultat_1++;
        else
            if(mana5 == 2)
                rezultat_2++;
            else
                if(mana5 == 3)
                    rezultat_3++;
                else
                    if(mana5 == 4)
                       rezultat_4++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
    printf("CINE IA MANA 6: ");
        scanf("%d", &mana6);
        if(mana6 == 1)
            rezultat_1++;
        else
            if(mana6 == 2)
                rezultat_2++;
            else
                if(mana6 == 3)
                    rezultat_3++;
                else
                    if(mana6 == 4)
                       rezultat_4++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
    printf("CINE IA MANA 7: ");
        scanf("%d", &mana7);
        if(mana7 == 1)
            rezultat_1++;
        else
            if(mana7 == 2)
                rezultat_2++;
            else
                if(mana7 == 3)
                    rezultat_3++;
                else
                    if(mana7 == 4)
                       rezultat_4++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
    printf("CINE IA MANA 8: ");
        scanf("%d", &mana8);
        if(mana8 == 1)
            rezultat_1++;
        else
            if(mana8 == 2)
                rezultat_2++;
            else
                if(mana8 == 3)
                    rezultat_3++;
                else
                    if(mana8 == 4)
                       rezultat_4++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("\n");

        if(rezultat_1 == pariu_1)
            {
                printf("JUCATORUL 1 SI-A FACUT MAINILE\n");
                punctaj_1 = punctaj_1 + (5 + pariu_1);
            }
        else
            {
                printf("JUCATORUL 1 S-A FRIPT CU %d\n", abs(rezultat_1 - pariu_1));
                punctaj_1 = punctaj_1 - (5 + abs(rezultat_1 - pariu_1));
            }

        if(rezultat_2 == pariu_2)
            {
                printf("JUCATORUL 2 SI-A FACUT MAINILE\n");
                punctaj_2 = punctaj_2 + (5 + pariu_2);
            }
        else
            {
                printf("JUCATORUL 2 S-A FRIPT CU %d\n", abs(rezultat_2 - pariu_2));
                punctaj_2 = punctaj_2 - (5 + abs(rezultat_2 - pariu_2));
            }
        if(rezultat_3 == pariu_3)
            {
                printf("JUCATORUL 3 SI-A FACUT MAINILE\n");
                punctaj_3 = punctaj_3 + (5 + pariu_3);
            }
        else
            {
                printf("JUCATORUL 3 S-A FRIPT CU %d\n", abs(rezultat_3 - pariu_3));
                punctaj_3 = punctaj_3 - (5 + abs(rezultat_3 - pariu_3));
            }
        if(rezultat_4 == pariu_4)
            {
                printf("JUCATORUL 4 SI-A FACUT MAINILE\n");
                punctaj_4 = punctaj_4 + (5 + pariu_4);
            }
        else
            {
                printf("JUCATORUL 4 S-A FRIPT CU %d\n", abs(rezultat_4 - pariu_4));
                punctaj_4 = punctaj_4 - (5 + abs(rezultat_4 - pariu_4));
            }
        printf("\n");
        printf("JUCATOR 1: %d\n", punctaj_1);
        printf("JUCATOR 2: %d\n", punctaj_2);
        printf("JUCATOR 3: %d\n", punctaj_3);
        printf("JUCATOR 4: %d\n", punctaj_4);
        printf("\n");
        printf("\n");

printf("JOC DE 7\n");
printf("\n");

        pariu_1 = 0, pariu_2 = 0, pariu_3 = 0, pariu_4 = 0;
        rezultat_1 = 0, rezultat_2 = 0, rezultat_3 = 0, rezultat_4 = 0;
        printf("PARIU JUCATOR 1: ");
        scanf("%d", &aux1);
        printf("PARIU JUCATOR 2: ");
        scanf("%d", &aux2);
        printf("PARIU JUCATOR 3: ");
        scanf("%d", &aux3);
        printf("JUCATORUL 4 NU ARE VOIE SA PARIEZE %d\n", 7 - aux1 - aux2 - aux3);
        printf("PARIU JUCATOR 4: ");
        scanf("%d", &aux4);
        pariu_1 = aux1;
        pariu_2 = aux2;
        pariu_3 = aux3;
        pariu_4 = aux4;
        printf("\n");

        printf("PARIU 1: %d\n", pariu_1);
        printf("PARIU 2: %d\n", pariu_2);
        printf("PARIU 3: %d\n", pariu_3);
        printf("PARIU 4: %d\n", pariu_4);

        printf("\n");
    printf("CINE IA MANA 1: ");
        scanf("%d", &mana1);
        if(mana1 == 1)
            rezultat_1++;
        else
            if(mana1 == 2)
                rezultat_2++;
            else
                if(mana1 == 3)
                    rezultat_3++;
                else
                    if(mana1 == 4)
                       rezultat_4++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
    printf("CINE IA MANA 2: ");
        scanf("%d", &mana2);
        if(mana2 == 1)
            rezultat_1++;
        else
            if(mana2 == 2)
                rezultat_2++;
            else
                if(mana2 == 3)
                    rezultat_3++;
                else
                    if(mana2 == 4)
                       rezultat_4++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
    printf("CINE IA MANA 3: ");
        scanf("%d", &mana3);
        if(mana3 == 1)
            rezultat_1++;
        else
            if(mana3 == 2)
                rezultat_2++;
            else
                if(mana3 == 3)
                    rezultat_3++;
                else
                    if(mana3 == 4)
                       rezultat_4++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
    printf("CINE IA MANA 4: ");
        scanf("%d", &mana4);
        if(mana4 == 1)
            rezultat_1++;
        else
            if(mana4 == 2)
                rezultat_2++;
            else
                if(mana4 == 3)
                    rezultat_3++;
                else
                    if(mana4 == 4)
                       rezultat_4++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
    printf("CINE IA MANA 5: ");
        scanf("%d", &mana5);
        if(mana5 == 1)
            rezultat_1++;
        else
            if(mana5 == 2)
                rezultat_2++;
            else
                if(mana5 == 3)
                    rezultat_3++;
                else
                    if(mana5 == 4)
                       rezultat_4++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
    printf("CINE IA MANA 6: ");
        scanf("%d", &mana6);
        if(mana6 == 1)
            rezultat_1++;
        else
            if(mana6 == 2)
                rezultat_2++;
            else
                if(mana6 == 3)
                    rezultat_3++;
                else
                    if(mana6 == 4)
                       rezultat_4++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
    printf("CINE IA MANA 7: ");
        scanf("%d", &mana7);
        if(mana7 == 1)
            rezultat_1++;
        else
            if(mana7 == 2)
                rezultat_2++;
            else
                if(mana7 == 3)
                    rezultat_3++;
                else
                    if(mana7 == 4)
                       rezultat_4++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("\n");

        if(rezultat_1 == pariu_1)
            {
                printf("JUCATORUL 1 SI-A FACUT MAINILE\n");
                punctaj_1 = punctaj_1 + (5 + pariu_1);
            }
        else
            {
                printf("JUCATORUL 1 S-A FRIPT CU %d\n", abs(rezultat_1 - pariu_1));
                punctaj_1 = punctaj_1 - (5 + abs(rezultat_1 - pariu_1));
            }

        if(rezultat_2 == pariu_2)
            {
                printf("JUCATORUL 2 SI-A FACUT MAINILE\n");
                punctaj_2 = punctaj_2 + (5 + pariu_2);
            }
        else
            {
                printf("JUCATORUL 2 S-A FRIPT CU %d\n", abs(rezultat_2 - pariu_2));
                punctaj_2 = punctaj_2 - (5 + abs(rezultat_2 - pariu_2));
            }
        if(rezultat_3 == pariu_3)
            {
                printf("JUCATORUL 3 SI-A FACUT MAINILE\n");
                punctaj_3 = punctaj_3 + (5 + pariu_3);
            }
        else
            {
                printf("JUCATORUL 3 S-A FRIPT CU %d\n", abs(rezultat_3 - pariu_3));
                punctaj_3 = punctaj_3 - (5 + abs(rezultat_3 - pariu_3));
            }
        if(rezultat_4 == pariu_4)
            {
                printf("JUCATORUL 4 SI-A FACUT MAINILE\n");
                punctaj_4 = punctaj_4 + (5 + pariu_4);
            }
        else
            {
                printf("JUCATORUL 4 S-A FRIPT CU %d\n", abs(rezultat_4 - pariu_4));
                punctaj_4 = punctaj_4 - (5 + abs(rezultat_4 - pariu_4));
            }
        printf("\n");
        printf("JUCATOR 1: %d\n", punctaj_1);
        printf("JUCATOR 2: %d\n", punctaj_2);
        printf("JUCATOR 3: %d\n", punctaj_3);
        printf("JUCATOR 4: %d\n", punctaj_4);
        printf("\n");
        printf("\n");

printf("JOC DE 6\n");
printf("\n");

        pariu_1 = 0, pariu_2 = 0, pariu_3 = 0, pariu_4 = 0;
        rezultat_1 = 0, rezultat_2 = 0, rezultat_3 = 0, rezultat_4 = 0;
        printf("PARIU JUCATOR 2: ");
        scanf("%d", &aux2);
        printf("PARIU JUCATOR 3: ");
        scanf("%d", &aux3);
        printf("PARIU JUCATOR 4: ");
        scanf("%d", &aux4);
        printf("JUCATORUL 1 NU ARE VOIE SA PARIEZE %d\n", 6 - aux2 - aux3 - aux4);
        printf("PARIU JUCATOR 1: ");
        scanf("%d", &aux1);
        pariu_1 = aux1;
        pariu_2 = aux2;
        pariu_3 = aux3;
        pariu_4 = aux4;
        printf("\n");

        printf("PARIU 1: %d\n", pariu_1);
        printf("PARIU 2: %d\n", pariu_2);
        printf("PARIU 3: %d\n", pariu_3);
        printf("PARIU 4: %d\n", pariu_4);

        printf("\n");
    printf("CINE IA MANA 1: ");
        scanf("%d", &mana1);
        if(mana1 == 1)
            rezultat_1++;
        else
            if(mana1 == 2)
                rezultat_2++;
            else
                if(mana1 == 3)
                    rezultat_3++;
                else
                    if(mana1 == 4)
                       rezultat_4++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
    printf("CINE IA MANA 2: ");
        scanf("%d", &mana2);
        if(mana2 == 1)
            rezultat_1++;
        else
            if(mana2 == 2)
                rezultat_2++;
            else
                if(mana2 == 3)
                    rezultat_3++;
                else
                    if(mana2 == 4)
                       rezultat_4++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
    printf("CINE IA MANA 3: ");
        scanf("%d", &mana3);
        if(mana3 == 1)
            rezultat_1++;
        else
            if(mana3 == 2)
                rezultat_2++;
            else
                if(mana3 == 3)
                    rezultat_3++;
                else
                    if(mana3 == 4)
                       rezultat_4++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
    printf("CINE IA MANA 4: ");
        scanf("%d", &mana4);
        if(mana4 == 1)
            rezultat_1++;
        else
            if(mana4 == 2)
                rezultat_2++;
            else
                if(mana4 == 3)
                    rezultat_3++;
                else
                    if(mana4 == 4)
                       rezultat_4++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
    printf("CINE IA MANA 5: ");
        scanf("%d", &mana5);
        if(mana5 == 1)
            rezultat_1++;
        else
            if(mana5 == 2)
                rezultat_2++;
            else
                if(mana5 == 3)
                    rezultat_3++;
                else
                    if(mana5 == 4)
                       rezultat_4++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
    printf("CINE IA MANA 6: ");
        scanf("%d", &mana6);
        if(mana6 == 1)
            rezultat_1++;
        else
            if(mana6 == 2)
                rezultat_2++;
            else
                if(mana6 == 3)
                    rezultat_3++;
                else
                    if(mana6 == 4)
                       rezultat_4++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("\n");

        if(rezultat_1 == pariu_1)
            {
                printf("JUCATORUL 1 SI-A FACUT MAINILE\n");
                punctaj_1 = punctaj_1 + (5 + pariu_1);
            }
        else
            {
                printf("JUCATORUL 1 S-A FRIPT CU %d\n", abs(rezultat_1 - pariu_1));
                punctaj_1 = punctaj_1 - (5 + abs(rezultat_1 - pariu_1));
            }

        if(rezultat_2 == pariu_2)
            {
                printf("JUCATORUL 2 SI-A FACUT MAINILE\n");
                punctaj_2 = punctaj_2 + (5 + pariu_2);
            }
        else
            {
                printf("JUCATORUL 2 S-A FRIPT CU %d\n", abs(rezultat_2 - pariu_2));
                punctaj_2 = punctaj_2 - (5 + abs(rezultat_2 - pariu_2));
            }
        if(rezultat_3 == pariu_3)
            {
                printf("JUCATORUL 3 SI-A FACUT MAINILE\n");
                punctaj_3 = punctaj_3 + (5 + pariu_3);
            }
        else
            {
                printf("JUCATORUL 3 S-A FRIPT CU %d\n", abs(rezultat_3 - pariu_3));
                punctaj_3 = punctaj_3 - (5 + abs(rezultat_3 - pariu_3));
            }
        if(rezultat_4 == pariu_4)
            {
                printf("JUCATORUL 4 SI-A FACUT MAINILE\n");
                punctaj_4 = punctaj_4 + (5 + pariu_4);
            }
        else
            {
                printf("JUCATORUL 4 S-A FRIPT CU %d\n", abs(rezultat_4 - pariu_4));
                punctaj_4 = punctaj_4 - (5 + abs(rezultat_4 - pariu_4));
            }
        printf("\n");
        printf("JUCATOR 1: %d\n", punctaj_1);
        printf("JUCATOR 2: %d\n", punctaj_2);
        printf("JUCATOR 3: %d\n", punctaj_3);
        printf("JUCATOR 4: %d\n", punctaj_4);
        printf("\n");
        printf("\n");

printf("JOC DE 5\n");
printf("\n");

        pariu_1 = 0, pariu_2 = 0, pariu_3 = 0, pariu_4 = 0;
        rezultat_1 = 0, rezultat_2 = 0, rezultat_3 = 0, rezultat_4 = 0;
        printf("PARIU JUCATOR 3: ");
        scanf("%d", &aux3);
        printf("PARIU JUCATOR 4: ");
        scanf("%d", &aux4);
        printf("PARIU JUCATOR 1: ");
        scanf("%d", &aux1);
        printf("JUCATORUL 2 NU ARE VOIE SA PARIEZE %d\n", 5 - aux3 - aux4 - aux1);
        printf("PARIU JUCATOR 2: ");
        scanf("%d", &aux2);
        pariu_1 = aux1;
        pariu_2 = aux2;
        pariu_3 = aux3;
        pariu_4 = aux4;
        printf("\n");

        printf("PARIU 1: %d\n", pariu_1);
        printf("PARIU 2: %d\n", pariu_2);
        printf("PARIU 3: %d\n", pariu_3);
        printf("PARIU 4: %d\n", pariu_4);

        printf("\n");
    printf("CINE IA MANA 1: ");
        scanf("%d", &mana1);
        if(mana1 == 1)
            rezultat_1++;
        else
            if(mana1 == 2)
                rezultat_2++;
            else
                if(mana1 == 3)
                    rezultat_3++;
                else
                    if(mana1 == 4)
                       rezultat_4++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
    printf("CINE IA MANA 2: ");
        scanf("%d", &mana2);
        if(mana2 == 1)
            rezultat_1++;
        else
            if(mana2 == 2)
                rezultat_2++;
            else
                if(mana2 == 3)
                    rezultat_3++;
                else
                    if(mana2 == 4)
                       rezultat_4++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
    printf("CINE IA MANA 3: ");
        scanf("%d", &mana3);
        if(mana3 == 1)
            rezultat_1++;
        else
            if(mana3 == 2)
                rezultat_2++;
            else
                if(mana3 == 3)
                    rezultat_3++;
                else
                    if(mana3 == 4)
                       rezultat_4++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
    printf("CINE IA MANA 4: ");
        scanf("%d", &mana4);
        if(mana4 == 1)
            rezultat_1++;
        else
            if(mana4 == 2)
                rezultat_2++;
            else
                if(mana4 == 3)
                    rezultat_3++;
                else
                    if(mana4 == 4)
                       rezultat_4++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
    printf("CINE IA MANA 5: ");
        scanf("%d", &mana5);
        if(mana5 == 1)
            rezultat_1++;
        else
            if(mana5 == 2)
                rezultat_2++;
            else
                if(mana5 == 3)
                    rezultat_3++;
                else
                    if(mana5 == 4)
                       rezultat_4++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("\n");

        if(rezultat_1 == pariu_1)
            {
                printf("JUCATORUL 1 SI-A FACUT MAINILE\n");
                punctaj_1 = punctaj_1 + (5 + pariu_1);
            }
        else
            {
                printf("JUCATORUL 1 S-A FRIPT CU %d\n", abs(rezultat_1 - pariu_1));
                punctaj_1 = punctaj_1 - (5 + abs(rezultat_1 - pariu_1));
            }

        if(rezultat_2 == pariu_2)
            {
                printf("JUCATORUL 2 SI-A FACUT MAINILE\n");
                punctaj_2 = punctaj_2 + (5 + pariu_2);
            }
        else
            {
                printf("JUCATORUL 2 S-A FRIPT CU %d\n", abs(rezultat_2 - pariu_2));
                punctaj_2 = punctaj_2 - (5 + abs(rezultat_2 - pariu_2));
            }
        if(rezultat_3 == pariu_3)
            {
                printf("JUCATORUL 3 SI-A FACUT MAINILE\n");
                punctaj_3 = punctaj_3 + (5 + pariu_3);
            }
        else
            {
                printf("JUCATORUL 3 S-A FRIPT CU %d\n", abs(rezultat_3 - pariu_3));
                punctaj_3 = punctaj_3 - (5 + abs(rezultat_3 - pariu_3));
            }
        if(rezultat_4 == pariu_4)
            {
                printf("JUCATORUL 4 SI-A FACUT MAINILE\n");
                punctaj_4 = punctaj_4 + (5 + pariu_4);
            }
        else
            {
                printf("JUCATORUL 4 S-A FRIPT CU %d\n", abs(rezultat_4 - pariu_4));
                punctaj_4 = punctaj_4 - (5 + abs(rezultat_4 - pariu_4));
            }
        printf("\n");
        printf("JUCATOR 1: %d\n", punctaj_1);
        printf("JUCATOR 2: %d\n", punctaj_2);
        printf("JUCATOR 3: %d\n", punctaj_3);
        printf("JUCATOR 4: %d\n", punctaj_4);
        printf("\n");
        printf("\n");

printf("JOC DE 4\n");
printf("\n");

        pariu_1 = 0, pariu_2 = 0, pariu_3 = 0, pariu_4 = 0;
        rezultat_1 = 0, rezultat_2 = 0, rezultat_3 = 0, rezultat_4 = 0;
        printf("PARIU JUCATOR 4: ");
        scanf("%d", &aux4);
        printf("PARIU JUCATOR 1: ");
        scanf("%d", &aux1);
        printf("PARIU JUCATOR 2: ");
        scanf("%d", &aux2);
        printf("JUCATORUL 3 NU ARE VOIE SA PARIEZE %d\n", 4 - aux4 - aux1 - aux2);
        printf("PARIU JUCATOR 3: ");
        scanf("%d", &aux3);
        pariu_1 = aux1;
        pariu_2 = aux2;
        pariu_3 = aux3;
        pariu_4 = aux4;
        printf("\n");

        printf("PARIU 1: %d\n", pariu_1);
        printf("PARIU 2: %d\n", pariu_2);
        printf("PARIU 3: %d\n", pariu_3);
        printf("PARIU 4: %d\n", pariu_4);

        printf("\n");
    printf("CINE IA MANA 1: ");
        scanf("%d", &mana1);
        if(mana1 == 1)
            rezultat_1++;
        else
            if(mana1 == 2)
                rezultat_2++;
            else
                if(mana1 == 3)
                    rezultat_3++;
                else
                    if(mana1 == 4)
                       rezultat_4++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
    printf("CINE IA MANA 2: ");
        scanf("%d", &mana2);
        if(mana2 == 1)
            rezultat_1++;
        else
            if(mana2 == 2)
                rezultat_2++;
            else
                if(mana2 == 3)
                    rezultat_3++;
                else
                    if(mana2 == 4)
                       rezultat_4++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
    printf("CINE IA MANA 3: ");
        scanf("%d", &mana3);
        if(mana3 == 1)
            rezultat_1++;
        else
            if(mana3 == 2)
                rezultat_2++;
            else
                if(mana3 == 3)
                    rezultat_3++;
                else
                    if(mana3 == 4)
                       rezultat_4++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
    printf("CINE IA MANA 4: ");
        scanf("%d", &mana4);
        if(mana4 == 1)
            rezultat_1++;
        else
            if(mana4 == 2)
                rezultat_2++;
            else
                if(mana4 == 3)
                    rezultat_3++;
                else
                    if(mana4 == 4)
                       rezultat_4++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("\n");

        if(rezultat_1 == pariu_1)
            {
                printf("JUCATORUL 1 SI-A FACUT MAINILE\n");
                punctaj_1 = punctaj_1 + (5 + pariu_1);
            }
        else
            {
                printf("JUCATORUL 1 S-A FRIPT CU %d\n", abs(rezultat_1 - pariu_1));
                punctaj_1 = punctaj_1 - (5 + abs(rezultat_1 - pariu_1));
            }

        if(rezultat_2 == pariu_2)
            {
                printf("JUCATORUL 2 SI-A FACUT MAINILE\n");
                punctaj_2 = punctaj_2 + (5 + pariu_2);
            }
        else
            {
                printf("JUCATORUL 2 S-A FRIPT CU %d\n", abs(rezultat_2 - pariu_2));
                punctaj_2 = punctaj_2 - (5 + abs(rezultat_2 - pariu_2));
            }
        if(rezultat_3 == pariu_3)
            {
                printf("JUCATORUL 3 SI-A FACUT MAINILE\n");
                punctaj_3 = punctaj_3 + (5 + pariu_3);
            }
        else
            {
                printf("JUCATORUL 3 S-A FRIPT CU %d\n", abs(rezultat_3 - pariu_3));
                punctaj_3 = punctaj_3 - (5 + abs(rezultat_3 - pariu_3));
            }
        if(rezultat_4 == pariu_4)
            {
                printf("JUCATORUL 4 SI-A FACUT MAINILE\n");
                punctaj_4 = punctaj_4 + (5 + pariu_4);
            }
        else
            {
                printf("JUCATORUL 4 S-A FRIPT CU %d\n", abs(rezultat_4 - pariu_4));
                punctaj_4 = punctaj_4 - (5 + abs(rezultat_4 - pariu_4));
            }
        printf("\n");
        printf("JUCATOR 1: %d\n", punctaj_1);
        printf("JUCATOR 2: %d\n", punctaj_2);
        printf("JUCATOR 3: %d\n", punctaj_3);
        printf("JUCATOR 4: %d\n", punctaj_4);
        printf("\n");
        printf("\n");

printf("JOC DE 3\n");
printf("\n");

        pariu_1 = 0, pariu_2 = 0, pariu_3 = 0, pariu_4 = 0;
        rezultat_1 = 0, rezultat_2 = 0, rezultat_3 = 0, rezultat_4 = 0;
        printf("PARIU JUCATOR 1: ");
        scanf("%d", &aux1);
        printf("PARIU JUCATOR 2: ");
        scanf("%d", &aux2);
        printf("PARIU JUCATOR 3: ");
        scanf("%d", &aux3);
        printf("JUCATORUL 4 NU ARE VOIE SA PARIEZE %d\n", 3 - aux1 - aux2 - aux3);
        printf("PARIU JUCATOR 4: ");
        scanf("%d", &aux4);
        pariu_1 = aux1;
        pariu_2 = aux2;
        pariu_3 = aux3;
        pariu_4 = aux4;
        printf("\n");

        printf("PARIU 1: %d\n", pariu_1);
        printf("PARIU 2: %d\n", pariu_2);
        printf("PARIU 3: %d\n", pariu_3);
        printf("PARIU 4: %d\n", pariu_4);

        printf("\n");
    printf("CINE IA MANA 1: ");
        scanf("%d", &mana1);
        if(mana1 == 1)
            rezultat_1++;
        else
            if(mana1 == 2)
                rezultat_2++;
            else
                if(mana1 == 3)
                    rezultat_3++;
                else
                    if(mana1 == 4)
                       rezultat_4++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
    printf("CINE IA MANA 2: ");
        scanf("%d", &mana2);
        if(mana2 == 1)
            rezultat_1++;
        else
            if(mana2 == 2)
                rezultat_2++;
            else
                if(mana2 == 3)
                    rezultat_3++;
                else
                    if(mana2 == 4)
                       rezultat_4++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
    printf("CINE IA MANA 3: ");
        scanf("%d", &mana3);
        if(mana3 == 1)
            rezultat_1++;
        else
            if(mana3 == 2)
                rezultat_2++;
            else
                if(mana3 == 3)
                    rezultat_3++;
                else
                    if(mana3 == 4)
                       rezultat_4++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("\n");

        if(rezultat_1 == pariu_1)
            {
                printf("JUCATORUL 1 SI-A FACUT MAINILE\n");
                punctaj_1 = punctaj_1 + (5 + pariu_1);
            }
        else
            {
                printf("JUCATORUL 1 S-A FRIPT CU %d\n", abs(rezultat_1 - pariu_1));
                punctaj_1 = punctaj_1 - (5 + abs(rezultat_1 - pariu_1));
            }

        if(rezultat_2 == pariu_2)
            {
                printf("JUCATORUL 2 SI-A FACUT MAINILE\n");
                punctaj_2 = punctaj_2 + (5 + pariu_2);
            }
        else
            {
                printf("JUCATORUL 2 S-A FRIPT CU %d\n", abs(rezultat_2 - pariu_2));
                punctaj_2 = punctaj_2 - (5 + abs(rezultat_2 - pariu_2));
            }
        if(rezultat_3 == pariu_3)
            {
                printf("JUCATORUL 3 SI-A FACUT MAINILE\n");
                punctaj_3 = punctaj_3 + (5 + pariu_3);
            }
        else
            {
                printf("JUCATORUL 3 S-A FRIPT CU %d\n", abs(rezultat_3 - pariu_3));
                punctaj_3 = punctaj_3 - (5 + abs(rezultat_3 - pariu_3));
            }
        if(rezultat_4 == pariu_4)
            {
                printf("JUCATORUL 4 SI-A FACUT MAINILE\n");
                punctaj_4 = punctaj_4 + (5 + pariu_4);
            }
        else
            {
                printf("JUCATORUL 4 S-A FRIPT CU %d\n", abs(rezultat_4 - pariu_4));
                punctaj_4 = punctaj_4 - (5 + abs(rezultat_4 - pariu_4));
            }
        printf("\n");
        printf("JUCATOR 1: %d\n", punctaj_1);
        printf("JUCATOR 2: %d\n", punctaj_2);
        printf("JUCATOR 3: %d\n", punctaj_3);
        printf("JUCATOR 4: %d\n", punctaj_4);
        printf("\n");
        printf("\n");

printf("JOC DE 2\n");
printf("\n");

        pariu_1 = 0, pariu_2 = 0, pariu_3 = 0, pariu_4 = 0;
        rezultat_1 = 0, rezultat_2 = 0, rezultat_3 = 0, rezultat_4 = 0;
        printf("PARIU JUCATOR 2: ");
        scanf("%d", &aux2);
        printf("PARIU JUCATOR 3: ");
        scanf("%d", &aux3);
        printf("PARIU JUCATOR 4: ");
        scanf("%d", &aux4);
        printf("JUCATORUL 1 NU ARE VOIE SA PARIEZE %d\n", 2 - aux2 - aux3 - aux4);
        printf("PARIU JUCATOR 1: ");
        scanf("%d", &aux1);
        pariu_1 = aux1;
        pariu_2 = aux2;
        pariu_3 = aux3;
        pariu_4 = aux4;
        printf("\n");

        printf("PARIU 1: %d\n", pariu_1);
        printf("PARIU 2: %d\n", pariu_2);
        printf("PARIU 3: %d\n", pariu_3);
        printf("PARIU 4: %d\n", pariu_4);

        printf("\n");
    printf("CINE IA MANA 1: ");
        scanf("%d", &mana1);
        if(mana1 == 1)
            rezultat_1++;
        else
            if(mana1 == 2)
                rezultat_2++;
            else
                if(mana1 == 3)
                    rezultat_3++;
                else
                    if(mana1 == 4)
                       rezultat_4++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
    printf("CINE IA MANA 2: ");
        scanf("%d", &mana2);
        if(mana2 == 1)
            rezultat_1++;
        else
            if(mana2 == 2)
                rezultat_2++;
            else
                if(mana2 == 3)
                    rezultat_3++;
                else
                    if(mana2 == 4)
                       rezultat_4++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("\n");

        if(rezultat_1 == pariu_1)
            {
                printf("JUCATORUL 1 SI-A FACUT MAINILE\n");
                punctaj_1 = punctaj_1 + (5 + pariu_1);
            }
        else
            {
                printf("JUCATORUL 1 S-A FRIPT CU %d\n", abs(rezultat_1 - pariu_1));
                punctaj_1 = punctaj_1 - (5 + abs(rezultat_1 - pariu_1));
            }

        if(rezultat_2 == pariu_2)
            {
                printf("JUCATORUL 2 SI-A FACUT MAINILE\n");
                punctaj_2 = punctaj_2 + (5 + pariu_2);
            }
        else
            {
                printf("JUCATORUL 2 S-A FRIPT CU %d\n", abs(rezultat_2 - pariu_2));
                punctaj_2 = punctaj_2 - (5 + abs(rezultat_2 - pariu_2));
            }
        if(rezultat_3 == pariu_3)
            {
                printf("JUCATORUL 3 SI-A FACUT MAINILE\n");
                punctaj_3 = punctaj_3 + (5 + pariu_3);
            }
        else
            {
                printf("JUCATORUL 3 S-A FRIPT CU %d\n", abs(rezultat_3 - pariu_3));
                punctaj_3 = punctaj_3 - (5 + abs(rezultat_3 - pariu_3));
            }
        if(rezultat_4 == pariu_4)
            {
                printf("JUCATORUL 4 SI-A FACUT MAINILE\n");
                punctaj_4 = punctaj_4 + (5 + pariu_4);
            }
        else
            {
                printf("JUCATORUL 4 S-A FRIPT CU %d\n", abs(rezultat_4 - pariu_4));
                punctaj_4 = punctaj_4 - (5 + abs(rezultat_4 - pariu_4));
            }
        printf("\n");
        printf("JUCATOR 1: %d\n", punctaj_1);
        printf("JUCATOR 2: %d\n", punctaj_2);
        printf("JUCATOR 3: %d\n", punctaj_3);
        printf("JUCATOR 4: %d\n", punctaj_4);
        printf("\n");
        printf("\n");

printf("JOC DE 1 NR. 1\n");
printf("\n");

        pariu_1 = 0, pariu_2 = 0, pariu_3 = 0, pariu_4 = 0;
        rezultat_1 = 0, rezultat_2 = 0, rezultat_3 = 0, rezultat_4 = 0;
        printf("PARIU JUCATOR 3: ");
        scanf("%d", &aux3);
        printf("PARIU JUCATOR 4: ");
        scanf("%d", &aux4);
        printf("PARIU JUCATOR 1: ");
        scanf("%d", &aux1);
        printf("JUCATORUL 2 NU ARE VOIE SA PARIEZE %d\n", 1 - aux3 - aux4 - aux1);
        printf("PARIU JUCATOR 2: ");
        scanf("%d", &aux2);
        pariu_1 = aux1;
        pariu_2 = aux2;
        pariu_3 = aux3;
        pariu_4 = aux4;
        printf("\n");

        printf("PARIU 1: %d\n", pariu_1);
        printf("PARIU 2: %d\n", pariu_2);
        printf("PARIU 3: %d\n", pariu_3);
        printf("PARIU 4: %d\n", pariu_4);

        printf("\n");
    printf("CINE IA MANA 1: ");
        scanf("%d", &mana1);
        if(mana1 == 1)
            rezultat_1++;
        else
            if(mana1 == 2)
                rezultat_2++;
            else
                if(mana1 == 3)
                    rezultat_3++;
                else
                    if(mana1 == 4)
                       rezultat_4++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("\n");

        if(rezultat_1 == pariu_1)
            {
                printf("JUCATORUL 1 SI-A FACUT MAINILE\n");
                punctaj_1 = punctaj_1 + (5 + pariu_1);
            }
        else
            {
                printf("JUCATORUL 1 S-A FRIPT CU %d\n", abs(rezultat_1 - pariu_1));
                punctaj_1 = punctaj_1 - (5 + abs(rezultat_1 - pariu_1));
            }

        if(rezultat_2 == pariu_2)
            {
                printf("JUCATORUL 2 SI-A FACUT MAINILE\n");
                punctaj_2 = punctaj_2 + (5 + pariu_2);
            }
        else
            {
                printf("JUCATORUL 2 S-A FRIPT CU %d\n", abs(rezultat_2 - pariu_2));
                punctaj_2 = punctaj_2 - (5 + abs(rezultat_2 - pariu_2));
            }
        if(rezultat_3 == pariu_3)
            {
                printf("JUCATORUL 3 SI-A FACUT MAINILE\n");
                punctaj_3 = punctaj_3 + (5 + pariu_3);
            }
        else
            {
                printf("JUCATORUL 3 S-A FRIPT CU %d\n", abs(rezultat_3 - pariu_3));
                punctaj_3 = punctaj_3 - (5 + abs(rezultat_3 - pariu_3));
            }
        if(rezultat_4 == pariu_4)
            {
                printf("JUCATORUL 4 SI-A FACUT MAINILE\n");
                punctaj_4 = punctaj_4 + (5 + pariu_4);
            }
        else
            {
                printf("JUCATORUL 4 S-A FRIPT CU %d\n", abs(rezultat_4 - pariu_4));
                punctaj_4 = punctaj_4 - (5 + abs(rezultat_4 - pariu_4));
            }
        printf("\n");
        printf("JUCATOR 1: %d\n", punctaj_1);
        printf("JUCATOR 2: %d\n", punctaj_2);
        printf("JUCATOR 3: %d\n", punctaj_3);
        printf("JUCATOR 4: %d\n", punctaj_4);
        printf("\n");
        printf("\n");

printf("JOC DE 1 NR. 2\n");
printf("\n");

        pariu_1 = 0, pariu_2 = 0, pariu_3 = 0, pariu_4 = 0;
        rezultat_1 = 0, rezultat_2 = 0, rezultat_3 = 0, rezultat_4 = 0;
        printf("PARIU JUCATOR 4: ");
        scanf("%d", &aux4);
        printf("PARIU JUCATOR 1: ");
        scanf("%d", &aux1);
        printf("PARIU JUCATOR 2: ");
        scanf("%d", &aux2);
        printf("JUCATORUL 3 NU ARE VOIE SA PARIEZE %d\n", 1 - aux4 - aux1 - aux2);
        printf("PARIU JUCATOR 3: ");
        scanf("%d", &aux3);
        pariu_1 = aux1;
        pariu_2 = aux2;
        pariu_3 = aux3;
        pariu_4 = aux4;
        printf("\n");

        printf("PARIU 1: %d\n", pariu_1);
        printf("PARIU 2: %d\n", pariu_2);
        printf("PARIU 3: %d\n", pariu_3);
        printf("PARIU 4: %d\n", pariu_4);

        printf("\n");
    printf("CINE IA MANA 1: ");
        scanf("%d", &mana1);
        if(mana1 == 1)
            rezultat_1++;
        else
            if(mana1 == 2)
                rezultat_2++;
            else
                if(mana1 == 3)
                    rezultat_3++;
                else
                    if(mana1 == 4)
                       rezultat_4++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("\n");

        if(rezultat_1 == pariu_1)
            {
                printf("JUCATORUL 1 SI-A FACUT MAINILE\n");
                punctaj_1 = punctaj_1 + (5 + pariu_1);
            }
        else
            {
                printf("JUCATORUL 1 S-A FRIPT CU %d\n", abs(rezultat_1 - pariu_1));
                punctaj_1 = punctaj_1 - (5 + abs(rezultat_1 - pariu_1));
            }

        if(rezultat_2 == pariu_2)
            {
                printf("JUCATORUL 2 SI-A FACUT MAINILE\n");
                punctaj_2 = punctaj_2 + (5 + pariu_2);
            }
        else
            {
                printf("JUCATORUL 2 S-A FRIPT CU %d\n", abs(rezultat_2 - pariu_2));
                punctaj_2 = punctaj_2 - (5 + abs(rezultat_2 - pariu_2));
            }
        if(rezultat_3 == pariu_3)
            {
                printf("JUCATORUL 3 SI-A FACUT MAINILE\n");
                punctaj_3 = punctaj_3 + (5 + pariu_3);
            }
        else
            {
                printf("JUCATORUL 3 S-A FRIPT CU %d\n", abs(rezultat_3 - pariu_3));
                punctaj_3 = punctaj_3 - (5 + abs(rezultat_3 - pariu_3));
            }
        if(rezultat_4 == pariu_4)
            {
                printf("JUCATORUL 4 SI-A FACUT MAINILE\n");
                punctaj_4 = punctaj_4 + (5 + pariu_4);
            }
        else
            {
                printf("JUCATORUL 4 S-A FRIPT CU %d\n", abs(rezultat_4 - pariu_4));
                punctaj_4 = punctaj_4 - (5 + abs(rezultat_4 - pariu_4));
            }
        printf("\n");
        printf("JUCATOR 1: %d\n", punctaj_1);
        printf("JUCATOR 2: %d\n", punctaj_2);
        printf("JUCATOR 3: %d\n", punctaj_3);
        printf("JUCATOR 4: %d\n", punctaj_4);
        printf("\n");
        printf("\n");

printf("JOC DE 1 NR. 3\n");
printf("\n");

        pariu_1 = 0, pariu_2 = 0, pariu_3 = 0, pariu_4 = 0;
        rezultat_1 = 0, rezultat_2 = 0, rezultat_3 = 0, rezultat_4 = 0;
        printf("PARIU JUCATOR 1: ");
        scanf("%d", &aux1);
        printf("PARIU JUCATOR 2: ");
        scanf("%d", &aux2);
        printf("PARIU JUCATOR 3: ");
        scanf("%d", &aux3);
        printf("JUCATORUL 4 NU ARE VOIE SA PARIEZE %d\n", 1 - aux1 - aux2 - aux3);
        printf("PARIU JUCATOR 4: ");
        scanf("%d", &aux4);
        pariu_1 = aux1;
        pariu_2 = aux2;
        pariu_3 = aux3;
        pariu_4 = aux4;
        printf("\n");

        printf("PARIU 1: %d\n", pariu_1);
        printf("PARIU 2: %d\n", pariu_2);
        printf("PARIU 3: %d\n", pariu_3);
        printf("PARIU 4: %d\n", pariu_4);

        printf("\n");
    printf("CINE IA MANA 1: ");
        scanf("%d", &mana1);
        if(mana1 == 1)
            rezultat_1++;
        else
            if(mana1 == 2)
                rezultat_2++;
            else
                if(mana1 == 3)
                    rezultat_3++;
                else
                    if(mana1 == 4)
                       rezultat_4++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("\n");

        if(rezultat_1 == pariu_1)
            {
                printf("JUCATORUL 1 SI-A FACUT MAINILE\n");
                punctaj_1 = punctaj_1 + (5 + pariu_1);
            }
        else
            {
                printf("JUCATORUL 1 S-A FRIPT CU %d\n", abs(rezultat_1 - pariu_1));
                punctaj_1 = punctaj_1 - (5 + abs(rezultat_1 - pariu_1));
            }

        if(rezultat_2 == pariu_2)
            {
                printf("JUCATORUL 2 SI-A FACUT MAINILE\n");
                punctaj_2 = punctaj_2 + (5 + pariu_2);
            }
        else
            {
                printf("JUCATORUL 2 S-A FRIPT CU %d\n", abs(rezultat_2 - pariu_2));
                punctaj_2 = punctaj_2 - (5 + abs(rezultat_2 - pariu_2));
            }
        if(rezultat_3 == pariu_3)
            {
                printf("JUCATORUL 3 SI-A FACUT MAINILE\n");
                punctaj_3 = punctaj_3 + (5 + pariu_3);
            }
        else
            {
                printf("JUCATORUL 3 S-A FRIPT CU %d\n", abs(rezultat_3 - pariu_3));
                punctaj_3 = punctaj_3 - (5 + abs(rezultat_3 - pariu_3));
            }
        if(rezultat_4 == pariu_4)
            {
                printf("JUCATORUL 4 SI-A FACUT MAINILE\n");
                punctaj_4 = punctaj_4 + (5 + pariu_4);
            }
        else
            {
                printf("JUCATORUL 4 S-A FRIPT CU %d\n", abs(rezultat_4 - pariu_4));
                punctaj_4 = punctaj_4 - (5 + abs(rezultat_4 - pariu_4));
            }
        printf("\n");
        printf("JUCATOR 1: %d\n", punctaj_1);
        printf("JUCATOR 2: %d\n", punctaj_2);
        printf("JUCATOR 3: %d\n", punctaj_3);
        printf("JUCATOR 4: %d\n", punctaj_4);
        printf("\n");
        printf("\n");

printf("JOC DE 1 NR. 4\n");
printf("\n");

        pariu_1 = 0, pariu_2 = 0, pariu_3 = 0, pariu_4 = 0;
        rezultat_1 = 0, rezultat_2 = 0, rezultat_3 = 0, rezultat_4 = 0;
        printf("PARIU JUCATOR 2: ");
        scanf("%d", &aux2);
        printf("PARIU JUCATOR 3: ");
        scanf("%d", &aux3);
        printf("PARIU JUCATOR 4: ");
        scanf("%d", &aux4);
        printf("JUCATORUL 1 NU ARE VOIE SA PARIEZE %d\n", 1 - aux2 - aux3 - aux4);
        printf("PARIU JUCATOR 1: ");
        scanf("%d", &aux1);
        pariu_1 = aux1;
        pariu_2 = aux2;
        pariu_3 = aux3;
        pariu_4 = aux4;
        printf("\n");

        printf("PARIU 1: %d\n", pariu_1);
        printf("PARIU 2: %d\n", pariu_2);
        printf("PARIU 3: %d\n", pariu_3);
        printf("PARIU 4: %d\n", pariu_4);

        printf("\n");
    printf("CINE IA MANA 1: ");
        scanf("%d", &mana1);
        if(mana1 == 1)
            rezultat_1++;
        else
            if(mana1 == 2)
                rezultat_2++;
            else
                if(mana1 == 3)
                    rezultat_3++;
                else
                    if(mana1 == 4)
                       rezultat_4++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("\n");

        if(rezultat_1 == pariu_1)
            {
                printf("JUCATORUL 1 SI-A FACUT MAINILE\n");
                punctaj_1 = punctaj_1 + (5 + pariu_1);
            }
        else
            {
                printf("JUCATORUL 1 S-A FRIPT CU %d\n", abs(rezultat_1 - pariu_1));
                punctaj_1 = punctaj_1 - (5 + abs(rezultat_1 - pariu_1));
            }

        if(rezultat_2 == pariu_2)
            {
                printf("JUCATORUL 2 SI-A FACUT MAINILE\n");
                punctaj_2 = punctaj_2 + (5 + pariu_2);
            }
        else
            {
                printf("JUCATORUL 2 S-A FRIPT CU %d\n", abs(rezultat_2 - pariu_2));
                punctaj_2 = punctaj_2 - (5 + abs(rezultat_2 - pariu_2));
            }
        if(rezultat_3 == pariu_3)
            {
                printf("JUCATORUL 3 SI-A FACUT MAINILE\n");
                punctaj_3 = punctaj_3 + (5 + pariu_3);
            }
        else
            {
                printf("JUCATORUL 3 S-A FRIPT CU %d\n", abs(rezultat_3 - pariu_3));
                punctaj_3 = punctaj_3 - (5 + abs(rezultat_3 - pariu_3));
            }
        if(rezultat_4 == pariu_4)
            {
                printf("JUCATORUL 4 SI-A FACUT MAINILE\n");
                punctaj_4 = punctaj_4 + (5 + pariu_4);
            }
        else
            {
                printf("JUCATORUL 4 S-A FRIPT CU %d\n", abs(rezultat_4 - pariu_4));
                punctaj_4 = punctaj_4 - (5 + abs(rezultat_4 - pariu_4));
            }
        printf("\n");
        printf("JUCATOR 1: %d\n", punctaj_1);
        printf("JUCATOR 2: %d\n", punctaj_2);
        printf("JUCATOR 3: %d\n", punctaj_3);
        printf("JUCATOR 4: %d\n", punctaj_4);
        printf("\n");
        printf("\n");

printf("JOC DE 2\n");
printf("\n");

        pariu_1 = 0, pariu_2 = 0, pariu_3 = 0, pariu_4 = 0;
        rezultat_1 = 0, rezultat_2 = 0, rezultat_3 = 0, rezultat_4 = 0;
        printf("PARIU JUCATOR 3: ");
        scanf("%d", &aux3);
        printf("PARIU JUCATOR 4: ");
        scanf("%d", &aux4);
        printf("PARIU JUCATOR 1: ");
        scanf("%d", &aux1);
        printf("JUCATORUL 2 NU ARE VOIE SA PARIEZE %d\n", 2 - aux3 - aux4 - aux1);
        printf("PARIU JUCATOR 2: ");
        scanf("%d", &aux2);
        pariu_1 = aux1;
        pariu_2 = aux2;
        pariu_3 = aux3;
        pariu_4 = aux4;
        printf("\n");

        printf("PARIU 1: %d\n", pariu_1);
        printf("PARIU 2: %d\n", pariu_2);
        printf("PARIU 3: %d\n", pariu_3);
        printf("PARIU 4: %d\n", pariu_4);

        printf("\n");
    printf("CINE IA MANA 1: ");
        scanf("%d", &mana1);
        if(mana1 == 1)
            rezultat_1++;
        else
            if(mana1 == 2)
                rezultat_2++;
            else
                if(mana1 == 3)
                    rezultat_3++;
                else
                    if(mana1 == 4)
                       rezultat_4++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
    printf("CINE IA MANA 2: ");
        scanf("%d", &mana2);
        if(mana2 == 1)
            rezultat_1++;
        else
            if(mana2 == 2)
                rezultat_2++;
            else
                if(mana2 == 3)
                    rezultat_3++;
                else
                    if(mana2 == 4)
                       rezultat_4++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("\n");

        if(rezultat_1 == pariu_1)
            {
                printf("JUCATORUL 1 SI-A FACUT MAINILE\n");
                punctaj_1 = punctaj_1 + (5 + pariu_1);
            }
        else
            {
                printf("JUCATORUL 1 S-A FRIPT CU %d\n", abs(rezultat_1 - pariu_1));
                punctaj_1 = punctaj_1 - (5 + abs(rezultat_1 - pariu_1));
            }

        if(rezultat_2 == pariu_2)
            {
                printf("JUCATORUL 2 SI-A FACUT MAINILE\n");
                punctaj_2 = punctaj_2 + (5 + pariu_2);
            }
        else
            {
                printf("JUCATORUL 2 S-A FRIPT CU %d\n", abs(rezultat_2 - pariu_2));
                punctaj_2 = punctaj_2 - (5 + abs(rezultat_2 - pariu_2));
            }
        if(rezultat_3 == pariu_3)
            {
                printf("JUCATORUL 3 SI-A FACUT MAINILE\n");
                punctaj_3 = punctaj_3 + (5 + pariu_3);
            }
        else
            {
                printf("JUCATORUL 3 S-A FRIPT CU %d\n", abs(rezultat_3 - pariu_3));
                punctaj_3 = punctaj_3 - (5 + abs(rezultat_3 - pariu_3));
            }
        if(rezultat_4 == pariu_4)
            {
                printf("JUCATORUL 4 SI-A FACUT MAINILE\n");
                punctaj_4 = punctaj_4 + (5 + pariu_4);
            }
        else
            {
                printf("JUCATORUL 4 S-A FRIPT CU %d\n", abs(rezultat_4 - pariu_4));
                punctaj_4 = punctaj_4 - (5 + abs(rezultat_4 - pariu_4));
            }
        printf("\n");
        printf("JUCATOR 1: %d\n", punctaj_1);
        printf("JUCATOR 2: %d\n", punctaj_2);
        printf("JUCATOR 3: %d\n", punctaj_3);
        printf("JUCATOR 4: %d\n", punctaj_4);
        printf("\n");
        printf("\n");

printf("JOC DE 3\n");
printf("\n");

        pariu_1 = 0, pariu_2 = 0, pariu_3 = 0, pariu_4 = 0;
        rezultat_1 = 0, rezultat_2 = 0, rezultat_3 = 0, rezultat_4 = 0;
        printf("PARIU JUCATOR 4: ");
        scanf("%d", &aux4);
        printf("PARIU JUCATOR 1: ");
        scanf("%d", &aux1);
        printf("PARIU JUCATOR 2: ");
        scanf("%d", &aux2);
        printf("JUCATORUL 3 NU ARE VOIE SA PARIEZE %d\n", 3 - aux4 - aux1 - aux2);
        printf("PARIU JUCATOR 3: ");
        scanf("%d", &aux3);
        pariu_1 = aux1;
        pariu_2 = aux2;
        pariu_3 = aux3;
        pariu_4 = aux4;
        printf("\n");

        printf("PARIU 1: %d\n", pariu_1);
        printf("PARIU 2: %d\n", pariu_2);
        printf("PARIU 3: %d\n", pariu_3);
        printf("PARIU 4: %d\n", pariu_4);

        printf("\n");
    printf("CINE IA MANA 1: ");
        scanf("%d", &mana1);
        if(mana1 == 1)
            rezultat_1++;
        else
            if(mana1 == 2)
                rezultat_2++;
            else
                if(mana1 == 3)
                    rezultat_3++;
                else
                    if(mana1 == 4)
                       rezultat_4++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
    printf("CINE IA MANA 2: ");
        scanf("%d", &mana2);
        if(mana2 == 1)
            rezultat_1++;
        else
            if(mana2 == 2)
                rezultat_2++;
            else
                if(mana2 == 3)
                    rezultat_3++;
                else
                    if(mana2 == 4)
                       rezultat_4++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
    printf("CINE IA MANA 3: ");
        scanf("%d", &mana3);
        if(mana3 == 1)
            rezultat_1++;
        else
            if(mana3 == 2)
                rezultat_2++;
            else
                if(mana3 == 3)
                    rezultat_3++;
                else
                    if(mana3 == 4)
                       rezultat_4++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("\n");

        if(rezultat_1 == pariu_1)
            {
                printf("JUCATORUL 1 SI-A FACUT MAINILE\n");
                punctaj_1 = punctaj_1 + (5 + pariu_1);
            }
        else
            {
                printf("JUCATORUL 1 S-A FRIPT CU %d\n", abs(rezultat_1 - pariu_1));
                punctaj_1 = punctaj_1 - (5 + abs(rezultat_1 - pariu_1));
            }

        if(rezultat_2 == pariu_2)
            {
                printf("JUCATORUL 2 SI-A FACUT MAINILE\n");
                punctaj_2 = punctaj_2 + (5 + pariu_2);
            }
        else
            {
                printf("JUCATORUL 2 S-A FRIPT CU %d\n", abs(rezultat_2 - pariu_2));
                punctaj_2 = punctaj_2 - (5 + abs(rezultat_2 - pariu_2));
            }
        if(rezultat_3 == pariu_3)
            {
                printf("JUCATORUL 3 SI-A FACUT MAINILE\n");
                punctaj_3 = punctaj_3 + (5 + pariu_3);
            }
        else
            {
                printf("JUCATORUL 3 S-A FRIPT CU %d\n", abs(rezultat_3 - pariu_3));
                punctaj_3 = punctaj_3 - (5 + abs(rezultat_3 - pariu_3));
            }
        if(rezultat_4 == pariu_4)
            {
                printf("JUCATORUL 4 SI-A FACUT MAINILE\n");
                punctaj_4 = punctaj_4 + (5 + pariu_4);
            }
        else
            {
                printf("JUCATORUL 4 S-A FRIPT CU %d\n", abs(rezultat_4 - pariu_4));
                punctaj_4 = punctaj_4 - (5 + abs(rezultat_4 - pariu_4));
            }
        printf("\n");
        printf("JUCATOR 1: %d\n", punctaj_1);
        printf("JUCATOR 2: %d\n", punctaj_2);
        printf("JUCATOR 3: %d\n", punctaj_3);
        printf("JUCATOR 4: %d\n", punctaj_4);
        printf("\n");
        printf("\n");

printf("JOC DE 4\n");
printf("\n");

        pariu_1 = 0, pariu_2 = 0, pariu_3 = 0, pariu_4 = 0;
        rezultat_1 = 0, rezultat_2 = 0, rezultat_3 = 0, rezultat_4 = 0;
        printf("PARIU JUCATOR 1: ");
        scanf("%d", &aux1);
        printf("PARIU JUCATOR 2: ");
        scanf("%d", &aux2);
        printf("PARIU JUCATOR 3: ");
        scanf("%d", &aux3);
        printf("JUCATORUL 4 NU ARE VOIE SA PARIEZE %d\n", 4 - aux1 - aux2 - aux3);
        printf("PARIU JUCATOR 4: ");
        scanf("%d", &aux4);
        pariu_1 = aux1;
        pariu_2 = aux2;
        pariu_3 = aux3;
        pariu_4 = aux4;
        printf("\n");

        printf("PARIU 1: %d\n", pariu_1);
        printf("PARIU 2: %d\n", pariu_2);
        printf("PARIU 3: %d\n", pariu_3);
        printf("PARIU 4: %d\n", pariu_4);

        printf("\n");
    printf("CINE IA MANA 1: ");
        scanf("%d", &mana1);
        if(mana1 == 1)
            rezultat_1++;
        else
            if(mana1 == 2)
                rezultat_2++;
            else
                if(mana1 == 3)
                    rezultat_3++;
                else
                    if(mana1 == 4)
                       rezultat_4++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
    printf("CINE IA MANA 2: ");
        scanf("%d", &mana2);
        if(mana2 == 1)
            rezultat_1++;
        else
            if(mana2 == 2)
                rezultat_2++;
            else
                if(mana2 == 3)
                    rezultat_3++;
                else
                    if(mana2 == 4)
                       rezultat_4++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
    printf("CINE IA MANA 3: ");
        scanf("%d", &mana3);
        if(mana3 == 1)
            rezultat_1++;
        else
            if(mana3 == 2)
                rezultat_2++;
            else
                if(mana3 == 3)
                    rezultat_3++;
                else
                    if(mana3 == 4)
                       rezultat_4++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
    printf("CINE IA MANA 4: ");
        scanf("%d", &mana4);
        if(mana4 == 1)
            rezultat_1++;
        else
            if(mana4 == 2)
                rezultat_2++;
            else
                if(mana4 == 3)
                    rezultat_3++;
                else
                    if(mana4 == 4)
                       rezultat_4++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("\n");

        if(rezultat_1 == pariu_1)
            {
                printf("JUCATORUL 1 SI-A FACUT MAINILE\n");
                punctaj_1 = punctaj_1 + (5 + pariu_1);
            }
        else
            {
                printf("JUCATORUL 1 S-A FRIPT CU %d\n", abs(rezultat_1 - pariu_1));
                punctaj_1 = punctaj_1 - (5 + abs(rezultat_1 - pariu_1));
            }

        if(rezultat_2 == pariu_2)
            {
                printf("JUCATORUL 2 SI-A FACUT MAINILE\n");
                punctaj_2 = punctaj_2 + (5 + pariu_2);
            }
        else
            {
                printf("JUCATORUL 2 S-A FRIPT CU %d\n", abs(rezultat_2 - pariu_2));
                punctaj_2 = punctaj_2 - (5 + abs(rezultat_2 - pariu_2));
            }
        if(rezultat_3 == pariu_3)
            {
                printf("JUCATORUL 3 SI-A FACUT MAINILE\n");
                punctaj_3 = punctaj_3 + (5 + pariu_3);
            }
        else
            {
                printf("JUCATORUL 3 S-A FRIPT CU %d\n", abs(rezultat_3 - pariu_3));
                punctaj_3 = punctaj_3 - (5 + abs(rezultat_3 - pariu_3));
            }
        if(rezultat_4 == pariu_4)
            {
                printf("JUCATORUL 4 SI-A FACUT MAINILE\n");
                punctaj_4 = punctaj_4 + (5 + pariu_4);
            }
        else
            {
                printf("JUCATORUL 4 S-A FRIPT CU %d\n", abs(rezultat_4 - pariu_4));
                punctaj_4 = punctaj_4 - (5 + abs(rezultat_4 - pariu_4));
            }
        printf("\n");
        printf("JUCATOR 1: %d\n", punctaj_1);
        printf("JUCATOR 2: %d\n", punctaj_2);
        printf("JUCATOR 3: %d\n", punctaj_3);
        printf("JUCATOR 4: %d\n", punctaj_4);
        printf("\n");
        printf("\n");

printf("JOC DE 5\n");
printf("\n");

        pariu_1 = 0, pariu_2 = 0, pariu_3 = 0, pariu_4 = 0;
        rezultat_1 = 0, rezultat_2 = 0, rezultat_3 = 0, rezultat_4 = 0;
        printf("PARIU JUCATOR 2: ");
        scanf("%d", &aux2);
        printf("PARIU JUCATOR 3: ");
        scanf("%d", &aux3);
        printf("PARIU JUCATOR 4: ");
        scanf("%d", &aux4);
        printf("JUCATORUL 1 NU ARE VOIE SA PARIEZE %d\n", 5 - aux2 - aux3 - aux4);
        printf("PARIU JUCATOR 1: ");
        scanf("%d", &aux1);
        pariu_1 = aux1;
        pariu_2 = aux2;
        pariu_3 = aux3;
        pariu_4 = aux4;
        printf("\n");

        printf("PARIU 1: %d\n", pariu_1);
        printf("PARIU 2: %d\n", pariu_2);
        printf("PARIU 3: %d\n", pariu_3);
        printf("PARIU 4: %d\n", pariu_4);

        printf("\n");
    printf("CINE IA MANA 1: ");
        scanf("%d", &mana1);
        if(mana1 == 1)
            rezultat_1++;
        else
            if(mana1 == 2)
                rezultat_2++;
            else
                if(mana1 == 3)
                    rezultat_3++;
                else
                    if(mana1 == 4)
                       rezultat_4++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
    printf("CINE IA MANA 2: ");
        scanf("%d", &mana2);
        if(mana2 == 1)
            rezultat_1++;
        else
            if(mana2 == 2)
                rezultat_2++;
            else
                if(mana2 == 3)
                    rezultat_3++;
                else
                    if(mana2 == 4)
                       rezultat_4++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
    printf("CINE IA MANA 3: ");
        scanf("%d", &mana3);
        if(mana3 == 1)
            rezultat_1++;
        else
            if(mana3 == 2)
                rezultat_2++;
            else
                if(mana3 == 3)
                    rezultat_3++;
                else
                    if(mana3 == 4)
                       rezultat_4++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
    printf("CINE IA MANA 4: ");
        scanf("%d", &mana4);
        if(mana4 == 1)
            rezultat_1++;
        else
            if(mana4 == 2)
                rezultat_2++;
            else
                if(mana4 == 3)
                    rezultat_3++;
                else
                    if(mana4 == 4)
                       rezultat_4++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
    printf("CINE IA MANA 5: ");
        scanf("%d", &mana5);
        if(mana5 == 1)
            rezultat_1++;
        else
            if(mana5 == 2)
                rezultat_2++;
            else
                if(mana5 == 3)
                    rezultat_3++;
                else
                    if(mana5 == 4)
                       rezultat_4++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("\n");

        if(rezultat_1 == pariu_1)
            {
                printf("JUCATORUL 1 SI-A FACUT MAINILE\n");
                punctaj_1 = punctaj_1 + (5 + pariu_1);
            }
        else
            {
                printf("JUCATORUL 1 S-A FRIPT CU %d\n", abs(rezultat_1 - pariu_1));
                punctaj_1 = punctaj_1 - (5 + abs(rezultat_1 - pariu_1));
            }

        if(rezultat_2 == pariu_2)
            {
                printf("JUCATORUL 2 SI-A FACUT MAINILE\n");
                punctaj_2 = punctaj_2 + (5 + pariu_2);
            }
        else
            {
                printf("JUCATORUL 2 S-A FRIPT CU %d\n", abs(rezultat_2 - pariu_2));
                punctaj_2 = punctaj_2 - (5 + abs(rezultat_2 - pariu_2));
            }
        if(rezultat_3 == pariu_3)
            {
                printf("JUCATORUL 3 SI-A FACUT MAINILE\n");
                punctaj_3 = punctaj_3 + (5 + pariu_3);
            }
        else
            {
                printf("JUCATORUL 3 S-A FRIPT CU %d\n", abs(rezultat_3 - pariu_3));
                punctaj_3 = punctaj_3 - (5 + abs(rezultat_3 - pariu_3));
            }
        if(rezultat_4 == pariu_4)
            {
                printf("JUCATORUL 4 SI-A FACUT MAINILE\n");
                punctaj_4 = punctaj_4 + (5 + pariu_4);
            }
        else
            {
                printf("JUCATORUL 4 S-A FRIPT CU %d\n", abs(rezultat_4 - pariu_4));
                punctaj_4 = punctaj_4 - (5 + abs(rezultat_4 - pariu_4));
            }
        printf("\n");
        printf("JUCATOR 1: %d\n", punctaj_1);
        printf("JUCATOR 2: %d\n", punctaj_2);
        printf("JUCATOR 3: %d\n", punctaj_3);
        printf("JUCATOR 4: %d\n", punctaj_4);
        printf("\n");
        printf("\n");

printf("JOC DE 6\n");
printf("\n");

        pariu_1 = 0, pariu_2 = 0, pariu_3 = 0, pariu_4 = 0;
        rezultat_1 = 0, rezultat_2 = 0, rezultat_3 = 0, rezultat_4 = 0;
        printf("PARIU JUCATOR 3: ");
        scanf("%d", &aux3);
        printf("PARIU JUCATOR 4: ");
        scanf("%d", &aux4);
        printf("PARIU JUCATOR 1: ");
        scanf("%d", &aux1);
        printf("JUCATORUL 2 NU ARE VOIE SA PARIEZE %d\n", 6 - aux3 - aux4 - aux1);
        printf("PARIU JUCATOR 2: ");
        scanf("%d", &aux2);
        pariu_1 = aux1;
        pariu_2 = aux2;
        pariu_3 = aux3;
        pariu_4 = aux4;
        printf("\n");

        printf("PARIU 1: %d\n", pariu_1);
        printf("PARIU 2: %d\n", pariu_2);
        printf("PARIU 3: %d\n", pariu_3);
        printf("PARIU 4: %d\n", pariu_4);

        printf("\n");
    printf("CINE IA MANA 1: ");
        scanf("%d", &mana1);
        if(mana1 == 1)
            rezultat_1++;
        else
            if(mana1 == 2)
                rezultat_2++;
            else
                if(mana1 == 3)
                    rezultat_3++;
                else
                    if(mana1 == 4)
                       rezultat_4++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
    printf("CINE IA MANA 2: ");
        scanf("%d", &mana2);
        if(mana2 == 1)
            rezultat_1++;
        else
            if(mana2 == 2)
                rezultat_2++;
            else
                if(mana2 == 3)
                    rezultat_3++;
                else
                    if(mana2 == 4)
                       rezultat_4++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
    printf("CINE IA MANA 3: ");
        scanf("%d", &mana3);
        if(mana3 == 1)
            rezultat_1++;
        else
            if(mana3 == 2)
                rezultat_2++;
            else
                if(mana3 == 3)
                    rezultat_3++;
                else
                    if(mana3 == 4)
                       rezultat_4++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
    printf("CINE IA MANA 4: ");
        scanf("%d", &mana4);
        if(mana4 == 1)
            rezultat_1++;
        else
            if(mana4 == 2)
                rezultat_2++;
            else
                if(mana4 == 3)
                    rezultat_3++;
                else
                    if(mana4 == 4)
                       rezultat_4++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
    printf("CINE IA MANA 5: ");
        scanf("%d", &mana5);
        if(mana5 == 1)
            rezultat_1++;
        else
            if(mana5 == 2)
                rezultat_2++;
            else
                if(mana5 == 3)
                    rezultat_3++;
                else
                    if(mana5 == 4)
                       rezultat_4++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
    printf("CINE IA MANA 6: ");
        scanf("%d", &mana6);
        if(mana6 == 1)
            rezultat_1++;
        else
            if(mana6 == 2)
                rezultat_2++;
            else
                if(mana6 == 3)
                    rezultat_3++;
                else
                    if(mana6 == 4)
                       rezultat_4++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("\n");

        if(rezultat_1 == pariu_1)
            {
                printf("JUCATORUL 1 SI-A FACUT MAINILE\n");
                punctaj_1 = punctaj_1 + (5 + pariu_1);
            }
        else
            {
                printf("JUCATORUL 1 S-A FRIPT CU %d\n", abs(rezultat_1 - pariu_1));
                punctaj_1 = punctaj_1 - (5 + abs(rezultat_1 - pariu_1));
            }

        if(rezultat_2 == pariu_2)
            {
                printf("JUCATORUL 2 SI-A FACUT MAINILE\n");
                punctaj_2 = punctaj_2 + (5 + pariu_2);
            }
        else
            {
                printf("JUCATORUL 2 S-A FRIPT CU %d\n", abs(rezultat_2 - pariu_2));
                punctaj_2 = punctaj_2 - (5 + abs(rezultat_2 - pariu_2));
            }
        if(rezultat_3 == pariu_3)
            {
                printf("JUCATORUL 3 SI-A FACUT MAINILE\n");
                punctaj_3 = punctaj_3 + (5 + pariu_3);
            }
        else
            {
                printf("JUCATORUL 3 S-A FRIPT CU %d\n", abs(rezultat_3 - pariu_3));
                punctaj_3 = punctaj_3 - (5 + abs(rezultat_3 - pariu_3));
            }
        if(rezultat_4 == pariu_4)
            {
                printf("JUCATORUL 4 SI-A FACUT MAINILE\n");
                punctaj_4 = punctaj_4 + (5 + pariu_4);
            }
        else
            {
                printf("JUCATORUL 4 S-A FRIPT CU %d\n", abs(rezultat_4 - pariu_4));
                punctaj_4 = punctaj_4 - (5 + abs(rezultat_4 - pariu_4));
            }
        printf("\n");
        printf("JUCATOR 1: %d\n", punctaj_1);
        printf("JUCATOR 2: %d\n", punctaj_2);
        printf("JUCATOR 3: %d\n", punctaj_3);
        printf("JUCATOR 4: %d\n", punctaj_4);
        printf("\n");
        printf("\n");

printf("JOC DE 7\n");
printf("\n");

        pariu_1 = 0, pariu_2 = 0, pariu_3 = 0, pariu_4 = 0;
        rezultat_1 = 0, rezultat_2 = 0, rezultat_3 = 0, rezultat_4 = 0;
        printf("PARIU JUCATOR 4: ");
        scanf("%d", &aux4);
        printf("PARIU JUCATOR 1: ");
        scanf("%d", &aux1);
        printf("PARIU JUCATOR 2: ");
        scanf("%d", &aux2);
        printf("JUCATORUL 3 NU ARE VOIE SA PARIEZE %d\n", 7 - aux4 - aux1 - aux2);
        printf("PARIU JUCATOR 3: ");
        scanf("%d", &aux3);
        pariu_1 = aux1;
        pariu_2 = aux2;
        pariu_3 = aux3;
        pariu_4 = aux4;
        printf("\n");

        printf("PARIU 1: %d\n", pariu_1);
        printf("PARIU 2: %d\n", pariu_2);
        printf("PARIU 3: %d\n", pariu_3);
        printf("PARIU 4: %d\n", pariu_4);

        printf("\n");
    printf("CINE IA MANA 1: ");
        scanf("%d", &mana1);
        if(mana1 == 1)
            rezultat_1++;
        else
            if(mana1 == 2)
                rezultat_2++;
            else
                if(mana1 == 3)
                    rezultat_3++;
                else
                    if(mana1 == 4)
                       rezultat_4++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
    printf("CINE IA MANA 2: ");
        scanf("%d", &mana2);
        if(mana2 == 1)
            rezultat_1++;
        else
            if(mana2 == 2)
                rezultat_2++;
            else
                if(mana2 == 3)
                    rezultat_3++;
                else
                    if(mana2 == 4)
                       rezultat_4++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
    printf("CINE IA MANA 3: ");
        scanf("%d", &mana3);
        if(mana3 == 1)
            rezultat_1++;
        else
            if(mana3 == 2)
                rezultat_2++;
            else
                if(mana3 == 3)
                    rezultat_3++;
                else
                    if(mana3 == 4)
                       rezultat_4++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
    printf("CINE IA MANA 4: ");
        scanf("%d", &mana4);
        if(mana4 == 1)
            rezultat_1++;
        else
            if(mana4 == 2)
                rezultat_2++;
            else
                if(mana4 == 3)
                    rezultat_3++;
                else
                    if(mana4 == 4)
                       rezultat_4++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
    printf("CINE IA MANA 5: ");
        scanf("%d", &mana5);
        if(mana5 == 1)
            rezultat_1++;
        else
            if(mana5 == 2)
                rezultat_2++;
            else
                if(mana5 == 3)
                    rezultat_3++;
                else
                    if(mana5 == 4)
                       rezultat_4++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
    printf("CINE IA MANA 6: ");
        scanf("%d", &mana6);
        if(mana6 == 1)
            rezultat_1++;
        else
            if(mana6 == 2)
                rezultat_2++;
            else
                if(mana6 == 3)
                    rezultat_3++;
                else
                    if(mana6 == 4)
                       rezultat_4++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
    printf("CINE IA MANA 7: ");
        scanf("%d", &mana7);
        if(mana7 == 1)
            rezultat_1++;
        else
            if(mana7 == 2)
                rezultat_2++;
            else
                if(mana7 == 3)
                    rezultat_3++;
                else
                    if(mana7 == 4)
                       rezultat_4++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("\n");

        if(rezultat_1 == pariu_1)
            {
                printf("JUCATORUL 1 SI-A FACUT MAINILE\n");
                punctaj_1 = punctaj_1 + (5 + pariu_1);
            }
        else
            {
                printf("JUCATORUL 1 S-A FRIPT CU %d\n", abs(rezultat_1 - pariu_1));
                punctaj_1 = punctaj_1 - (5 + abs(rezultat_1 - pariu_1));
            }

        if(rezultat_2 == pariu_2)
            {
                printf("JUCATORUL 2 SI-A FACUT MAINILE\n");
                punctaj_2 = punctaj_2 + (5 + pariu_2);
            }
        else
            {
                printf("JUCATORUL 2 S-A FRIPT CU %d\n", abs(rezultat_2 - pariu_2));
                punctaj_2 = punctaj_2 - (5 + abs(rezultat_2 - pariu_2));
            }
        if(rezultat_3 == pariu_3)
            {
                printf("JUCATORUL 3 SI-A FACUT MAINILE\n");
                punctaj_3 = punctaj_3 + (5 + pariu_3);
            }
        else
            {
                printf("JUCATORUL 3 S-A FRIPT CU %d\n", abs(rezultat_3 - pariu_3));
                punctaj_3 = punctaj_3 - (5 + abs(rezultat_3 - pariu_3));
            }
        if(rezultat_4 == pariu_4)
            {
                printf("JUCATORUL 4 SI-A FACUT MAINILE\n");
                punctaj_4 = punctaj_4 + (5 + pariu_4);
            }
        else
            {
                printf("JUCATORUL 4 S-A FRIPT CU %d\n", abs(rezultat_4 - pariu_4));
                punctaj_4 = punctaj_4 - (5 + abs(rezultat_4 - pariu_4));
            }
        printf("\n");
        printf("JUCATOR 1: %d\n", punctaj_1);
        printf("JUCATOR 2: %d\n", punctaj_2);
        printf("JUCATOR 3: %d\n", punctaj_3);
        printf("JUCATOR 4: %d\n", punctaj_4);
        printf("\n");
        printf("\n");

printf("JOC DE 8 NR.1\n");
printf("\n");

        pariu_1 = 0, pariu_2 = 0, pariu_3 = 0, pariu_4 = 0;
        rezultat_1 = 0, rezultat_2 = 0, rezultat_3 = 0, rezultat_4 = 0;
        printf("PARIU JUCATOR 1: ");
        scanf("%d", &aux1);
        printf("PARIU JUCATOR 2: ");
        scanf("%d", &aux2);
        printf("PARIU JUCATOR 3: ");
        scanf("%d", &aux3);
        printf("JUCATORUL 4 NU ARE VOIE SA PARIEZE %d\n", 8 - aux1 - aux2 - aux3);
        printf("PARIU JUCATOR 4: ");
        scanf("%d", &aux4);
        pariu_1 = aux1;
        pariu_2 = aux2;
        pariu_3 = aux3;
        pariu_4 = aux4;
        printf("\n");

        printf("PARIU 1: %d\n", pariu_1);
        printf("PARIU 2: %d\n", pariu_2);
        printf("PARIU 3: %d\n", pariu_3);
        printf("PARIU 4: %d\n", pariu_4);

        printf("\n");
    printf("CINE IA MANA 1: ");
        scanf("%d", &mana1);
        if(mana1 == 1)
            rezultat_1++;
        else
            if(mana1 == 2)
                rezultat_2++;
            else
                if(mana1 == 3)
                    rezultat_3++;
                else
                    if(mana1 == 4)
                       rezultat_4++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
    printf("CINE IA MANA 2: ");
        scanf("%d", &mana2);
        if(mana2 == 1)
            rezultat_1++;
        else
            if(mana2 == 2)
                rezultat_2++;
            else
                if(mana2 == 3)
                    rezultat_3++;
                else
                    if(mana2 == 4)
                       rezultat_4++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
    printf("CINE IA MANA 3: ");
        scanf("%d", &mana3);
        if(mana3 == 1)
            rezultat_1++;
        else
            if(mana3 == 2)
                rezultat_2++;
            else
                if(mana3 == 3)
                    rezultat_3++;
                else
                    if(mana3 == 4)
                       rezultat_4++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
    printf("CINE IA MANA 4: ");
        scanf("%d", &mana4);
        if(mana4 == 1)
            rezultat_1++;
        else
            if(mana4 == 2)
                rezultat_2++;
            else
                if(mana4 == 3)
                    rezultat_3++;
                else
                    if(mana4 == 4)
                       rezultat_4++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
    printf("CINE IA MANA 5: ");
        scanf("%d", &mana5);
        if(mana5 == 1)
            rezultat_1++;
        else
            if(mana5 == 2)
                rezultat_2++;
            else
                if(mana5 == 3)
                    rezultat_3++;
                else
                    if(mana5 == 4)
                       rezultat_4++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
    printf("CINE IA MANA 6: ");
        scanf("%d", &mana6);
        if(mana6 == 1)
            rezultat_1++;
        else
            if(mana6 == 2)
                rezultat_2++;
            else
                if(mana6 == 3)
                    rezultat_3++;
                else
                    if(mana6 == 4)
                       rezultat_4++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
    printf("CINE IA MANA 7: ");
        scanf("%d", &mana7);
        if(mana7 == 1)
            rezultat_1++;
        else
            if(mana7 == 2)
                rezultat_2++;
            else
                if(mana7 == 3)
                    rezultat_3++;
                else
                    if(mana7 == 4)
                       rezultat_4++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
    printf("CINE IA MANA 8: ");
        scanf("%d", &mana8);
        if(mana8 == 1)
            rezultat_1++;
        else
            if(mana8 == 2)
                rezultat_2++;
            else
                if(mana8 == 3)
                    rezultat_3++;
                else
                    if(mana8 == 4)
                       rezultat_4++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("\n");

        if(rezultat_1 == pariu_1)
            {
                printf("JUCATORUL 1 SI-A FACUT MAINILE\n");
                punctaj_1 = punctaj_1 + (5 + pariu_1);
            }
        else
            {
                printf("JUCATORUL 1 S-A FRIPT CU %d\n", abs(rezultat_1 - pariu_1));
                punctaj_1 = punctaj_1 - (5 + abs(rezultat_1 - pariu_1));
            }

        if(rezultat_2 == pariu_2)
            {
                printf("JUCATORUL 2 SI-A FACUT MAINILE\n");
                punctaj_2 = punctaj_2 + (5 + pariu_2);
            }
        else
            {
                printf("JUCATORUL 2 S-A FRIPT CU %d\n", abs(rezultat_2 - pariu_2));
                punctaj_2 = punctaj_2 - (5 + abs(rezultat_2 - pariu_2));
            }
        if(rezultat_3 == pariu_3)
            {
                printf("JUCATORUL 3 SI-A FACUT MAINILE\n");
                punctaj_3 = punctaj_3 + (5 + pariu_3);
            }
        else
            {
                printf("JUCATORUL 3 S-A FRIPT CU %d\n", abs(rezultat_3 - pariu_3));
                punctaj_3 = punctaj_3 - (5 + abs(rezultat_3 - pariu_3));
            }
        if(rezultat_4 == pariu_4)
            {
                printf("JUCATORUL 4 SI-A FACUT MAINILE\n");
                punctaj_4 = punctaj_4 + (5 + pariu_4);
            }
        else
            {
                printf("JUCATORUL 4 S-A FRIPT CU %d\n", abs(rezultat_4 - pariu_4));
                punctaj_4 = punctaj_4 - (5 + abs(rezultat_4 - pariu_4));
            }
        printf("\n");
        printf("JUCATOR 1: %d\n", punctaj_1);
        printf("JUCATOR 2: %d\n", punctaj_2);
        printf("JUCATOR 3: %d\n", punctaj_3);
        printf("JUCATOR 4: %d\n", punctaj_4);
        printf("\n");
        printf("\n");

printf("JOC DE 8 NR.2\n");
printf("\n");

        pariu_1 = 0, pariu_2 = 0, pariu_3 = 0, pariu_4 = 0;
        rezultat_1 = 0, rezultat_2 = 0, rezultat_3 = 0, rezultat_4 = 0;
        printf("PARIU JUCATOR 2: ");
        scanf("%d", &aux2);
        printf("PARIU JUCATOR 3: ");
        scanf("%d", &aux3);
        printf("PARIU JUCATOR 4: ");
        scanf("%d", &aux4);
        printf("JUCATORUL 1 NU ARE VOIE SA PARIEZE %d\n", 8 - aux2 - aux3 - aux4);
        printf("PARIU JUCATOR 1: ");
        scanf("%d", &aux1);
        pariu_1 = aux1;
        pariu_2 = aux2;
        pariu_3 = aux3;
        pariu_4 = aux4;
        printf("\n");

        printf("PARIU 1: %d\n", pariu_1);
        printf("PARIU 2: %d\n", pariu_2);
        printf("PARIU 3: %d\n", pariu_3);
        printf("PARIU 4: %d\n", pariu_4);

        printf("\n");
    printf("CINE IA MANA 1: ");
        scanf("%d", &mana1);
        if(mana1 == 1)
            rezultat_1++;
        else
            if(mana1 == 2)
                rezultat_2++;
            else
                if(mana1 == 3)
                    rezultat_3++;
                else
                    if(mana1 == 4)
                       rezultat_4++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
    printf("CINE IA MANA 2: ");
        scanf("%d", &mana2);
        if(mana2 == 1)
            rezultat_1++;
        else
            if(mana2 == 2)
                rezultat_2++;
            else
                if(mana2 == 3)
                    rezultat_3++;
                else
                    if(mana2 == 4)
                       rezultat_4++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
    printf("CINE IA MANA 3: ");
        scanf("%d", &mana3);
        if(mana3 == 1)
            rezultat_1++;
        else
            if(mana3 == 2)
                rezultat_2++;
            else
                if(mana3 == 3)
                    rezultat_3++;
                else
                    if(mana3 == 4)
                       rezultat_4++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
    printf("CINE IA MANA 4: ");
        scanf("%d", &mana4);
        if(mana4 == 1)
            rezultat_1++;
        else
            if(mana4 == 2)
                rezultat_2++;
            else
                if(mana4 == 3)
                    rezultat_3++;
                else
                    if(mana4 == 4)
                       rezultat_4++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
    printf("CINE IA MANA 5: ");
        scanf("%d", &mana5);
        if(mana5 == 1)
            rezultat_1++;
        else
            if(mana5 == 2)
                rezultat_2++;
            else
                if(mana5 == 3)
                    rezultat_3++;
                else
                    if(mana5 == 4)
                       rezultat_4++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
    printf("CINE IA MANA 6: ");
        scanf("%d", &mana6);
        if(mana6 == 1)
            rezultat_1++;
        else
            if(mana6 == 2)
                rezultat_2++;
            else
                if(mana6 == 3)
                    rezultat_3++;
                else
                    if(mana6 == 4)
                       rezultat_4++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
    printf("CINE IA MANA 7: ");
        scanf("%d", &mana7);
        if(mana7 == 1)
            rezultat_1++;
        else
            if(mana7 == 2)
                rezultat_2++;
            else
                if(mana7 == 3)
                    rezultat_3++;
                else
                    if(mana7 == 4)
                       rezultat_4++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
    printf("CINE IA MANA 8: ");
        scanf("%d", &mana8);
        if(mana8 == 1)
            rezultat_1++;
        else
            if(mana8 == 2)
                rezultat_2++;
            else
                if(mana8 == 3)
                    rezultat_3++;
                else
                    if(mana8 == 4)
                       rezultat_4++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("\n");

        if(rezultat_1 == pariu_1)
            {
                printf("JUCATORUL 1 SI-A FACUT MAINILE\n");
                punctaj_1 = punctaj_1 + (5 + pariu_1);
            }
        else
            {
                printf("JUCATORUL 1 S-A FRIPT CU %d\n", abs(rezultat_1 - pariu_1));
                punctaj_1 = punctaj_1 - (5 + abs(rezultat_1 - pariu_1));
            }

        if(rezultat_2 == pariu_2)
            {
                printf("JUCATORUL 2 SI-A FACUT MAINILE\n");
                punctaj_2 = punctaj_2 + (5 + pariu_2);
            }
        else
            {
                printf("JUCATORUL 2 S-A FRIPT CU %d\n", abs(rezultat_2 - pariu_2));
                punctaj_2 = punctaj_2 - (5 + abs(rezultat_2 - pariu_2));
            }
        if(rezultat_3 == pariu_3)
            {
                printf("JUCATORUL 3 SI-A FACUT MAINILE\n");
                punctaj_3 = punctaj_3 + (5 + pariu_3);
            }
        else
            {
                printf("JUCATORUL 3 S-A FRIPT CU %d\n", abs(rezultat_3 - pariu_3));
                punctaj_3 = punctaj_3 - (5 + abs(rezultat_3 - pariu_3));
            }
        if(rezultat_4 == pariu_4)
            {
                printf("JUCATORUL 4 SI-A FACUT MAINILE\n");
                punctaj_4 = punctaj_4 + (5 + pariu_4);
            }
        else
            {
                printf("JUCATORUL 4 S-A FRIPT CU %d\n", abs(rezultat_4 - pariu_4));
                punctaj_4 = punctaj_4 - (5 + abs(rezultat_4 - pariu_4));
            }
        printf("\n");
        printf("JUCATOR 1: %d\n", punctaj_1);
        printf("JUCATOR 2: %d\n", punctaj_2);
        printf("JUCATOR 3: %d\n", punctaj_3);
        printf("JUCATOR 4: %d\n", punctaj_4);
        printf("\n");
        printf("\n");

printf("JOC DE 8 NR.3\n");
printf("\n");

        pariu_1 = 0, pariu_2 = 0, pariu_3 = 0, pariu_4 = 0;
        rezultat_1 = 0, rezultat_2 = 0, rezultat_3 = 0, rezultat_4 = 0;
        printf("PARIU JUCATOR 3: ");
        scanf("%d", &aux3);
        printf("PARIU JUCATOR 4: ");
        scanf("%d", &aux4);
        printf("PARIU JUCATOR 1: ");
        scanf("%d", &aux1);
        printf("JUCATORUL 2 NU ARE VOIE SA PARIEZE %d\n", 8 - aux3 - aux4 - aux1);
        printf("PARIU JUCATOR 2: ");
        scanf("%d", &aux2);
        pariu_1 = aux1;
        pariu_2 = aux2;
        pariu_3 = aux3;
        pariu_4 = aux4;
        printf("\n");

        printf("PARIU 1: %d\n", pariu_1);
        printf("PARIU 2: %d\n", pariu_2);
        printf("PARIU 3: %d\n", pariu_3);
        printf("PARIU 4: %d\n", pariu_4);

        printf("\n");
    printf("CINE IA MANA 1: ");
        scanf("%d", &mana1);
        if(mana1 == 1)
            rezultat_1++;
        else
            if(mana1 == 2)
                rezultat_2++;
            else
                if(mana1 == 3)
                    rezultat_3++;
                else
                    if(mana1 == 4)
                       rezultat_4++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
    printf("CINE IA MANA 2: ");
        scanf("%d", &mana2);
        if(mana2 == 1)
            rezultat_1++;
        else
            if(mana2 == 2)
                rezultat_2++;
            else
                if(mana2 == 3)
                    rezultat_3++;
                else
                    if(mana2 == 4)
                       rezultat_4++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
    printf("CINE IA MANA 3: ");
        scanf("%d", &mana3);
        if(mana3 == 1)
            rezultat_1++;
        else
            if(mana3 == 2)
                rezultat_2++;
            else
                if(mana3 == 3)
                    rezultat_3++;
                else
                    if(mana3 == 4)
                       rezultat_4++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
    printf("CINE IA MANA 4: ");
        scanf("%d", &mana4);
        if(mana4 == 1)
            rezultat_1++;
        else
            if(mana4 == 2)
                rezultat_2++;
            else
                if(mana4 == 3)
                    rezultat_3++;
                else
                    if(mana4 == 4)
                       rezultat_4++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
    printf("CINE IA MANA 5: ");
        scanf("%d", &mana5);
        if(mana5 == 1)
            rezultat_1++;
        else
            if(mana5 == 2)
                rezultat_2++;
            else
                if(mana5 == 3)
                    rezultat_3++;
                else
                    if(mana5 == 4)
                       rezultat_4++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
    printf("CINE IA MANA 6: ");
        scanf("%d", &mana6);
        if(mana6 == 1)
            rezultat_1++;
        else
            if(mana6 == 2)
                rezultat_2++;
            else
                if(mana6 == 3)
                    rezultat_3++;
                else
                    if(mana6 == 4)
                       rezultat_4++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
    printf("CINE IA MANA 7: ");
        scanf("%d", &mana7);
        if(mana7 == 1)
            rezultat_1++;
        else
            if(mana7 == 2)
                rezultat_2++;
            else
                if(mana7 == 3)
                    rezultat_3++;
                else
                    if(mana7 == 4)
                       rezultat_4++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
    printf("CINE IA MANA 8: ");
        scanf("%d", &mana8);
        if(mana8 == 1)
            rezultat_1++;
        else
            if(mana8 == 2)
                rezultat_2++;
            else
                if(mana8 == 3)
                    rezultat_3++;
                else
                    if(mana8 == 4)
                       rezultat_4++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("\n");

        if(rezultat_1 == pariu_1)
            {
                printf("JUCATORUL 1 SI-A FACUT MAINILE\n");
                punctaj_1 = punctaj_1 + (5 + pariu_1);
            }
        else
            {
                printf("JUCATORUL 1 S-A FRIPT CU %d\n", abs(rezultat_1 - pariu_1));
                punctaj_1 = punctaj_1 - (5 + abs(rezultat_1 - pariu_1));
            }

        if(rezultat_2 == pariu_2)
            {
                printf("JUCATORUL 2 SI-A FACUT MAINILE\n");
                punctaj_2 = punctaj_2 + (5 + pariu_2);
            }
        else
            {
                printf("JUCATORUL 2 S-A FRIPT CU %d\n", abs(rezultat_2 - pariu_2));
                punctaj_2 = punctaj_2 - (5 + abs(rezultat_2 - pariu_2));
            }
        if(rezultat_3 == pariu_3)
            {
                printf("JUCATORUL 3 SI-A FACUT MAINILE\n");
                punctaj_3 = punctaj_3 + (5 + pariu_3);
            }
        else
            {
                printf("JUCATORUL 3 S-A FRIPT CU %d\n", abs(rezultat_3 - pariu_3));
                punctaj_3 = punctaj_3 - (5 + abs(rezultat_3 - pariu_3));
            }
        if(rezultat_4 == pariu_4)
            {
                printf("JUCATORUL 4 SI-A FACUT MAINILE\n");
                punctaj_4 = punctaj_4 + (5 + pariu_4);
            }
        else
            {
                printf("JUCATORUL 4 S-A FRIPT CU %d\n", abs(rezultat_4 - pariu_4));
                punctaj_4 = punctaj_4 - (5 + abs(rezultat_4 - pariu_4));
            }
        printf("\n");
        printf("JUCATOR 1: %d\n", punctaj_1);
        printf("JUCATOR 2: %d\n", punctaj_2);
        printf("JUCATOR 3: %d\n", punctaj_3);
        printf("JUCATOR 4: %d\n", punctaj_4);
        printf("\n");
        printf("\n");

printf("JOC DE 8 NR.4\n");
printf("\n");

        pariu_1 = 0, pariu_2 = 0, pariu_3 = 0, pariu_4 = 0;
        rezultat_1 = 0, rezultat_2 = 0, rezultat_3 = 0, rezultat_4 = 0;
        printf("PARIU JUCATOR 4: ");
        scanf("%d", &aux4);
        printf("PARIU JUCATOR 1: ");
        scanf("%d", &aux1);
        printf("PARIU JUCATOR 2: ");
        scanf("%d", &aux2);
        printf("JUCATORUL 3 NU ARE VOIE SA PARIEZE %d\n", 8 - aux4 - aux1 - aux2);
        printf("PARIU JUCATOR 3: ");
        scanf("%d", &aux3);
        pariu_1 = aux1;
        pariu_2 = aux2;
        pariu_3 = aux3;
        pariu_4 = aux4;
        printf("\n");

        printf("PARIU 1: %d\n", pariu_1);
        printf("PARIU 2: %d\n", pariu_2);
        printf("PARIU 3: %d\n", pariu_3);
        printf("PARIU 4: %d\n", pariu_4);

        printf("\n");
    printf("CINE IA MANA 1: ");
        scanf("%d", &mana1);
        if(mana1 == 1)
            rezultat_1++;
        else
            if(mana1 == 2)
                rezultat_2++;
            else
                if(mana1 == 3)
                    rezultat_3++;
                else
                    if(mana1 == 4)
                       rezultat_4++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
    printf("CINE IA MANA 2: ");
        scanf("%d", &mana2);
        if(mana2 == 1)
            rezultat_1++;
        else
            if(mana2 == 2)
                rezultat_2++;
            else
                if(mana2 == 3)
                    rezultat_3++;
                else
                    if(mana2 == 4)
                       rezultat_4++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
    printf("CINE IA MANA 3: ");
        scanf("%d", &mana3);
        if(mana3 == 1)
            rezultat_1++;
        else
            if(mana3 == 2)
                rezultat_2++;
            else
                if(mana3 == 3)
                    rezultat_3++;
                else
                    if(mana3 == 4)
                       rezultat_4++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
    printf("CINE IA MANA 4: ");
        scanf("%d", &mana4);
        if(mana4 == 1)
            rezultat_1++;
        else
            if(mana4 == 2)
                rezultat_2++;
            else
                if(mana4 == 3)
                    rezultat_3++;
                else
                    if(mana4 == 4)
                       rezultat_4++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
    printf("CINE IA MANA 5: ");
        scanf("%d", &mana5);
        if(mana5 == 1)
            rezultat_1++;
        else
            if(mana5 == 2)
                rezultat_2++;
            else
                if(mana5 == 3)
                    rezultat_3++;
                else
                    if(mana5 == 4)
                       rezultat_4++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
    printf("CINE IA MANA 6: ");
        scanf("%d", &mana6);
        if(mana6 == 1)
            rezultat_1++;
        else
            if(mana6 == 2)
                rezultat_2++;
            else
                if(mana6 == 3)
                    rezultat_3++;
                else
                    if(mana6 == 4)
                       rezultat_4++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
    printf("CINE IA MANA 7: ");
        scanf("%d", &mana7);
        if(mana7 == 1)
            rezultat_1++;
        else
            if(mana7 == 2)
                rezultat_2++;
            else
                if(mana7 == 3)
                    rezultat_3++;
                else
                    if(mana7 == 4)
                       rezultat_4++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
    printf("CINE IA MANA 8: ");
        scanf("%d", &mana8);
        if(mana8 == 1)
            rezultat_1++;
        else
            if(mana8 == 2)
                rezultat_2++;
            else
                if(mana8 == 3)
                    rezultat_3++;
                else
                    if(mana8 == 4)
                       rezultat_4++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("\n");

        if(rezultat_1 == pariu_1)
            {
                printf("JUCATORUL 1 SI-A FACUT MAINILE\n");
                punctaj_1 = punctaj_1 + (5 + pariu_1);
            }
        else
            {
                printf("JUCATORUL 1 S-A FRIPT CU %d\n", abs(rezultat_1 - pariu_1));
                punctaj_1 = punctaj_1 - (5 + abs(rezultat_1 - pariu_1));
            }

        if(rezultat_2 == pariu_2)
            {
                printf("JUCATORUL 2 SI-A FACUT MAINILE\n");
                punctaj_2 = punctaj_2 + (5 + pariu_2);
            }
        else
            {
                printf("JUCATORUL 2 S-A FRIPT CU %d\n", abs(rezultat_2 - pariu_2));
                punctaj_2 = punctaj_2 - (5 + abs(rezultat_2 - pariu_2));
            }
        if(rezultat_3 == pariu_3)
            {
                printf("JUCATORUL 3 SI-A FACUT MAINILE\n");
                punctaj_3 = punctaj_3 + (5 + pariu_3);
            }
        else
            {
                printf("JUCATORUL 3 S-A FRIPT CU %d\n", abs(rezultat_3 - pariu_3));
                punctaj_3 = punctaj_3 - (5 + abs(rezultat_3 - pariu_3));
            }
        if(rezultat_4 == pariu_4)
            {
                printf("JUCATORUL 4 SI-A FACUT MAINILE\n");
                punctaj_4 = punctaj_4 + (5 + pariu_4);
            }
        else
            {
                printf("JUCATORUL 4 S-A FRIPT CU %d\n", abs(rezultat_4 - pariu_4));
                punctaj_4 = punctaj_4 - (5 + abs(rezultat_4 - pariu_4));
            }
        printf("\n");
        printf("\n");
        printf("JUCATOR 1: %d\n", punctaj_1);
        printf("JUCATOR 2: %d\n", punctaj_2);
        printf("JUCATOR 3: %d\n", punctaj_3);
        printf("JUCATOR 4: %d\n", punctaj_4);
        printf("\n");
        printf("\n");
}

void joc_5(void)
{
    printf("CARTEA CU CEL MAI MIC NUMAR ESTE 5\n");
    printf("\n");
    printf("\n");
    int punctaj_1 = 0;
    int punctaj_2 = 0;
    int punctaj_3 = 0;
    int punctaj_4 = 0;
    int punctaj_5 = 0;
    int pariu_1 = 0, pariu_2 = 0, pariu_3 = 0, pariu_4 = 0, pariu_5 = 0;
    int rezultat_1 = 0, rezultat_2 = 0, rezultat_3 = 0, rezultat_4 = 0, rezultat_5 = 0;
    int aux1, aux2, aux3, aux4, aux5;
    int mana1, mana2, mana3, mana4, mana5, mana6, mana7, mana8;

printf("JOC DE 8 NR.1\n");
printf("\n");

    pariu_1 = 0, pariu_2 = 0, pariu_3 = 0, pariu_4 = 0, pariu_5 = 0;
        rezultat_1 = 0, rezultat_2 = 0, rezultat_3 = 0, rezultat_4 = 0, rezultat_5 = 0;
        printf("PARIU JUCATOR 1: ");
        scanf("%d", &aux1);
        printf("PARIU JUCATOR 2: ");
        scanf("%d", &aux2);
        printf("PARIU JUCATOR 3: ");
        scanf("%d", &aux3);
        printf("PARIU JUCATOR 4: ");
        scanf("%d", &aux4);
        printf("JUCATORUL 5 NU ARE VOIE SA PARIEZE %d\n", 8 - aux1 - aux2 - aux3 - aux4);
        printf("PARIU JUCATOR 5: ");
        scanf("%d", &aux5);
        pariu_1 = aux1;
        pariu_2 = aux2;
        pariu_3 = aux3;
        pariu_4 = aux4;
        pariu_5 = aux5;
        printf("\n");

        printf("PARIU 1: %d\n", pariu_1);
        printf("PARIU 2: %d\n", pariu_2);
        printf("PARIU 3: %d\n", pariu_3);
        printf("PARIU 4: %d\n", pariu_4);
        printf("PARIU 5: %d\n", pariu_5);

        printf("\n");
        printf("CINE IA MANA 1: ");
        scanf("%d", &mana1);
        if(mana1 == 1)
            rezultat_1++;
        else
            if(mana1 == 2)
                rezultat_2++;
            else
                if(mana1 == 3)
                    rezultat_3++;
                else
                    if(mana1 == 4)
                       rezultat_4++;
                    else
                        if(mana1 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
    printf("CINE IA MANA 2: ");
        scanf("%d", &mana2);
        if(mana2 == 1)
            rezultat_1++;
        else
            if(mana2 == 2)
                rezultat_2++;
            else
                if(mana2 == 3)
                    rezultat_3++;
                else
                    if(mana2 == 4)
                       rezultat_4++;
                    else
                        if(mana2 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
    printf("CINE IA MANA 3: ");
        scanf("%d", &mana3);
        if(mana3 == 1)
            rezultat_1++;
        else
            if(mana3 == 2)
                rezultat_2++;
            else
                if(mana3 == 3)
                    rezultat_3++;
                else
                    if(mana3 == 4)
                       rezultat_4++;
                    else
                        if(mana3 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
    printf("CINE IA MANA 4: ");
        scanf("%d", &mana4);
        if(mana4 == 1)
            rezultat_1++;
        else
            if(mana4 == 2)
                rezultat_2++;
            else
                if(mana4 == 3)
                    rezultat_3++;
                else
                    if(mana4 == 4)
                       rezultat_4++;
                    else
                        if(mana4 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
    printf("CINE IA MANA 5: ");
        scanf("%d", &mana5);
        if(mana5 == 1)
            rezultat_1++;
        else
            if(mana5 == 2)
                rezultat_2++;
            else
                if(mana5 == 3)
                    rezultat_3++;
                else
                    if(mana5 == 4)
                       rezultat_4++;
                    else
                        if(mana5 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
    printf("CINE IA MANA 6: ");
        scanf("%d", &mana6);
        if(mana6 == 1)
            rezultat_1++;
        else
            if(mana6 == 2)
                rezultat_2++;
            else
                if(mana6 == 3)
                    rezultat_3++;
                else
                    if(mana6 == 4)
                       rezultat_4++;
                    else
                        if(mana6 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
    printf("CINE IA MANA 7: ");
        scanf("%d", &mana7);
        if(mana7 == 1)
            rezultat_1++;
        else
            if(mana7 == 2)
                rezultat_2++;
            else
                if(mana7 == 3)
                    rezultat_3++;
                else
                    if(mana7 == 4)
                       rezultat_4++;
                    else
                        if(mana7 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
    printf("CINE IA MANA 8: ");
        scanf("%d", &mana8);
        if(mana8 == 1)
            rezultat_1++;
        else
            if(mana8 == 2)
                rezultat_2++;
            else
                if(mana8 == 3)
                    rezultat_3++;
                else
                    if(mana8 == 4)
                       rezultat_4++;
                    else
                        if(mana8 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("\n");

        if(rezultat_1 == pariu_1)
            {
                printf("JUCATORUL 1 SI-A FACUT MAINILE\n");
                punctaj_1 = punctaj_1 + (5 + pariu_1);
            }
        else
            {
                printf("JUCATORUL 1 S-A FRIPT CU %d\n", abs(rezultat_1 - pariu_1));
                punctaj_1 = punctaj_1 - (5 + abs(rezultat_1 - pariu_1));
            }

        if(rezultat_2 == pariu_2)
            {
                printf("JUCATORUL 2 SI-A FACUT MAINILE\n");
                punctaj_2 = punctaj_2 + (5 + pariu_2);
            }
        else
            {
                printf("JUCATORUL 2 S-A FRIPT CU %d\n", abs(rezultat_2 - pariu_2));
                punctaj_2 = punctaj_2 - (5 + abs(rezultat_2 - pariu_2));
            }
        if(rezultat_3 == pariu_3)
            {
                printf("JUCATORUL 3 SI-A FACUT MAINILE\n");
                punctaj_3 = punctaj_3 + (5 + pariu_3);
            }
        else
            {
                printf("JUCATORUL 3 S-A FRIPT CU %d\n", abs(rezultat_3 - pariu_3));
                punctaj_3 = punctaj_3 - (5 + abs(rezultat_3 - pariu_3));
            }
        if(rezultat_4 == pariu_4)
            {
                printf("JUCATORUL 4 SI-A FACUT MAINILE\n");
                punctaj_4 = punctaj_4 + (5 + pariu_4);
            }
        else
            {
                printf("JUCATORUL 4 S-A FRIPT CU %d\n", abs(rezultat_4 - pariu_4));
                punctaj_4 = punctaj_4 - (5 + abs(rezultat_4 - pariu_4));
            }
        if(rezultat_5 == pariu_5)
            {
                printf("JUCATORUL 5 SI-A FACUT MAINILE\n");
                punctaj_5 = punctaj_5 + (5 + pariu_5);
            }
        else
            {
                printf("JUCATORUL 5 S-A FRIPT CU %d\n", abs(rezultat_5 - pariu_5));
                punctaj_5 = punctaj_5 - (5 + abs(rezultat_5 - pariu_5));
            }
        printf("\n");
        printf("JUCATOR 1: %d\n", punctaj_1);
        printf("JUCATOR 2: %d\n", punctaj_2);
        printf("JUCATOR 3: %d\n", punctaj_3);
        printf("JUCATOR 4: %d\n", punctaj_4);
        printf("JUCATOR 5: %d\n", punctaj_5);
        printf("\n");
        printf("\n");


printf("JOC DE 8 NR.2\n");
printf("\n");

    pariu_1 = 0, pariu_2 = 0, pariu_3 = 0, pariu_4 = 0, pariu_5 = 0;
        rezultat_1 = 0, rezultat_2 = 0, rezultat_3 = 0, rezultat_4 = 0, rezultat_5 = 0;
        printf("PARIU JUCATOR 2: ");
        scanf("%d", &aux2);
        printf("PARIU JUCATOR 3: ");
        scanf("%d", &aux3);
        printf("PARIU JUCATOR 4: ");
        scanf("%d", &aux4);
        printf("PARIU JUCATOR 5: ");
        scanf("%d", &aux5);
        printf("JUCATORUL 1 NU ARE VOIE SA PARIEZE %d\n", 8 - aux2 - aux3 - aux4 - aux5);
        printf("PARIU JUCATOR 1: ");
        scanf("%d", &aux1);
        pariu_1 = aux1;
        pariu_2 = aux2;
        pariu_3 = aux3;
        pariu_4 = aux4;
        pariu_5 = aux5;
        printf("\n");

        printf("PARIU 1: %d\n", pariu_1);
        printf("PARIU 2: %d\n", pariu_2);
        printf("PARIU 3: %d\n", pariu_3);
        printf("PARIU 4: %d\n", pariu_4);
        printf("PARIU 5: %d\n", pariu_5);

        printf("\n");
        printf("CINE IA MANA 1: ");
        scanf("%d", &mana1);
        if(mana1 == 1)
            rezultat_1++;
        else
            if(mana1 == 2)
                rezultat_2++;
            else
                if(mana1 == 3)
                    rezultat_3++;
                else
                    if(mana1 == 4)
                       rezultat_4++;
                    else
                        if(mana1 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
    printf("CINE IA MANA 2: ");
        scanf("%d", &mana2);
        if(mana2 == 1)
            rezultat_1++;
        else
            if(mana2 == 2)
                rezultat_2++;
            else
                if(mana2 == 3)
                    rezultat_3++;
                else
                    if(mana2 == 4)
                       rezultat_4++;
                    else
                        if(mana2 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
    printf("CINE IA MANA 3: ");
        scanf("%d", &mana3);
        if(mana3 == 1)
            rezultat_1++;
        else
            if(mana3 == 2)
                rezultat_2++;
            else
                if(mana3 == 3)
                    rezultat_3++;
                else
                    if(mana3 == 4)
                       rezultat_4++;
                    else
                        if(mana3 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
    printf("CINE IA MANA 4: ");
        scanf("%d", &mana4);
        if(mana4 == 1)
            rezultat_1++;
        else
            if(mana4 == 2)
                rezultat_2++;
            else
                if(mana4 == 3)
                    rezultat_3++;
                else
                    if(mana4 == 4)
                       rezultat_4++;
                    else
                        if(mana4 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
    printf("CINE IA MANA 5: ");
        scanf("%d", &mana5);
        if(mana5 == 1)
            rezultat_1++;
        else
            if(mana5 == 2)
                rezultat_2++;
            else
                if(mana5 == 3)
                    rezultat_3++;
                else
                    if(mana5 == 4)
                       rezultat_4++;
                    else
                        if(mana5 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
    printf("CINE IA MANA 6: ");
        scanf("%d", &mana6);
        if(mana6 == 1)
            rezultat_1++;
        else
            if(mana6 == 2)
                rezultat_2++;
            else
                if(mana6 == 3)
                    rezultat_3++;
                else
                    if(mana6 == 4)
                       rezultat_4++;
                    else
                        if(mana6 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
    printf("CINE IA MANA 7: ");
        scanf("%d", &mana7);
        if(mana7 == 1)
            rezultat_1++;
        else
            if(mana7 == 2)
                rezultat_2++;
            else
                if(mana7 == 3)
                    rezultat_3++;
                else
                    if(mana7 == 4)
                       rezultat_4++;
                    else
                        if(mana7 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
    printf("CINE IA MANA 8: ");
        scanf("%d", &mana8);
        if(mana8 == 1)
            rezultat_1++;
        else
            if(mana8 == 2)
                rezultat_2++;
            else
                if(mana8 == 3)
                    rezultat_3++;
                else
                    if(mana8 == 4)
                       rezultat_4++;
                    else
                        if(mana8 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("\n");

        if(rezultat_1 == pariu_1)
            {
                printf("JUCATORUL 1 SI-A FACUT MAINILE\n");
                punctaj_1 = punctaj_1 + (5 + pariu_1);
            }
        else
            {
                printf("JUCATORUL 1 S-A FRIPT CU %d\n", abs(rezultat_1 - pariu_1));
                punctaj_1 = punctaj_1 - (5 + abs(rezultat_1 - pariu_1));
            }

        if(rezultat_2 == pariu_2)
            {
                printf("JUCATORUL 2 SI-A FACUT MAINILE\n");
                punctaj_2 = punctaj_2 + (5 + pariu_2);
            }
        else
            {
                printf("JUCATORUL 2 S-A FRIPT CU %d\n", abs(rezultat_2 - pariu_2));
                punctaj_2 = punctaj_2 - (5 + abs(rezultat_2 - pariu_2));
            }
        if(rezultat_3 == pariu_3)
            {
                printf("JUCATORUL 3 SI-A FACUT MAINILE\n");
                punctaj_3 = punctaj_3 + (5 + pariu_3);
            }
        else
            {
                printf("JUCATORUL 3 S-A FRIPT CU %d\n", abs(rezultat_3 - pariu_3));
                punctaj_3 = punctaj_3 - (5 + abs(rezultat_3 - pariu_3));
            }
        if(rezultat_4 == pariu_4)
            {
                printf("JUCATORUL 4 SI-A FACUT MAINILE\n");
                punctaj_4 = punctaj_4 + (5 + pariu_4);
            }
        else
            {
                printf("JUCATORUL 4 S-A FRIPT CU %d\n", abs(rezultat_4 - pariu_4));
                punctaj_4 = punctaj_4 - (5 + abs(rezultat_4 - pariu_4));
            }
        if(rezultat_5 == pariu_5)
            {
                printf("JUCATORUL 5 SI-A FACUT MAINILE\n");
                punctaj_5 = punctaj_5 + (5 + pariu_5);
            }
        else
            {
                printf("JUCATORUL 5 S-A FRIPT CU %d\n", abs(rezultat_5 - pariu_5));
                punctaj_5 = punctaj_5 - (5 + abs(rezultat_5 - pariu_5));
            }
        printf("\n");
        printf("JUCATOR 1: %d\n", punctaj_1);
        printf("JUCATOR 2: %d\n", punctaj_2);
        printf("JUCATOR 3: %d\n", punctaj_3);
        printf("JUCATOR 4: %d\n", punctaj_4);
        printf("JUCATOR 5: %d\n", punctaj_5);
        printf("\n");
        printf("\n");

printf("JOC DE 8 NR.3\n");
printf("\n");

    pariu_1 = 0, pariu_2 = 0, pariu_3 = 0, pariu_4 = 0, pariu_5 = 0;
        rezultat_1 = 0, rezultat_2 = 0, rezultat_3 = 0, rezultat_4 = 0, rezultat_5 = 0;
        printf("PARIU JUCATOR 3: ");
        scanf("%d", &aux3);
        printf("PARIU JUCATOR 4: ");
        scanf("%d", &aux4);
        printf("PARIU JUCATOR 5: ");
        scanf("%d", &aux5);
        printf("PARIU JUCATOR 1: ");
        scanf("%d", &aux1);
        printf("JUCATORUL 2 NU ARE VOIE SA PARIEZE %d\n", 8 - aux3 - aux4 - aux5 - aux1);
        printf("PARIU JUCATOR 2: ");
        scanf("%d", &aux2);
        pariu_1 = aux1;
        pariu_2 = aux2;
        pariu_3 = aux3;
        pariu_4 = aux4;
        pariu_5 = aux5;
        printf("\n");

        printf("PARIU 1: %d\n", pariu_1);
        printf("PARIU 2: %d\n", pariu_2);
        printf("PARIU 3: %d\n", pariu_3);
        printf("PARIU 4: %d\n", pariu_4);
        printf("PARIU 5: %d\n", pariu_5);

        printf("\n");
        printf("CINE IA MANA 1: ");
        scanf("%d", &mana1);
        if(mana1 == 1)
            rezultat_1++;
        else
            if(mana1 == 2)
                rezultat_2++;
            else
                if(mana1 == 3)
                    rezultat_3++;
                else
                    if(mana1 == 4)
                       rezultat_4++;
                    else
                        if(mana1 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
    printf("CINE IA MANA 2: ");
        scanf("%d", &mana2);
        if(mana2 == 1)
            rezultat_1++;
        else
            if(mana2 == 2)
                rezultat_2++;
            else
                if(mana2 == 3)
                    rezultat_3++;
                else
                    if(mana2 == 4)
                       rezultat_4++;
                    else
                        if(mana2 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
    printf("CINE IA MANA 3: ");
        scanf("%d", &mana3);
        if(mana3 == 1)
            rezultat_1++;
        else
            if(mana3 == 2)
                rezultat_2++;
            else
                if(mana3 == 3)
                    rezultat_3++;
                else
                    if(mana3 == 4)
                       rezultat_4++;
                    else
                        if(mana3 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
    printf("CINE IA MANA 4: ");
        scanf("%d", &mana4);
        if(mana4 == 1)
            rezultat_1++;
        else
            if(mana4 == 2)
                rezultat_2++;
            else
                if(mana4 == 3)
                    rezultat_3++;
                else
                    if(mana4 == 4)
                       rezultat_4++;
                    else
                        if(mana4 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
    printf("CINE IA MANA 5: ");
        scanf("%d", &mana5);
        if(mana5 == 1)
            rezultat_1++;
        else
            if(mana5 == 2)
                rezultat_2++;
            else
                if(mana5 == 3)
                    rezultat_3++;
                else
                    if(mana5 == 4)
                       rezultat_4++;
                    else
                        if(mana5 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
    printf("CINE IA MANA 6: ");
        scanf("%d", &mana6);
        if(mana6 == 1)
            rezultat_1++;
        else
            if(mana6 == 2)
                rezultat_2++;
            else
                if(mana6 == 3)
                    rezultat_3++;
                else
                    if(mana6 == 4)
                       rezultat_4++;
                    else
                        if(mana6 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
    printf("CINE IA MANA 7: ");
        scanf("%d", &mana7);
        if(mana7 == 1)
            rezultat_1++;
        else
            if(mana7 == 2)
                rezultat_2++;
            else
                if(mana7 == 3)
                    rezultat_3++;
                else
                    if(mana7 == 4)
                       rezultat_4++;
                    else
                        if(mana7 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
    printf("CINE IA MANA 8: ");
        scanf("%d", &mana8);
        if(mana8 == 1)
            rezultat_1++;
        else
            if(mana8 == 2)
                rezultat_2++;
            else
                if(mana8 == 3)
                    rezultat_3++;
                else
                    if(mana8 == 4)
                       rezultat_4++;
                    else
                        if(mana8 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("\n");

        if(rezultat_1 == pariu_1)
            {
                printf("JUCATORUL 1 SI-A FACUT MAINILE\n");
                punctaj_1 = punctaj_1 + (5 + pariu_1);
            }
        else
            {
                printf("JUCATORUL 1 S-A FRIPT CU %d\n", abs(rezultat_1 - pariu_1));
                punctaj_1 = punctaj_1 - (5 + abs(rezultat_1 - pariu_1));
            }

        if(rezultat_2 == pariu_2)
            {
                printf("JUCATORUL 2 SI-A FACUT MAINILE\n");
                punctaj_2 = punctaj_2 + (5 + pariu_2);
            }
        else
            {
                printf("JUCATORUL 2 S-A FRIPT CU %d\n", abs(rezultat_2 - pariu_2));
                punctaj_2 = punctaj_2 - (5 + abs(rezultat_2 - pariu_2));
            }
        if(rezultat_3 == pariu_3)
            {
                printf("JUCATORUL 3 SI-A FACUT MAINILE\n");
                punctaj_3 = punctaj_3 + (5 + pariu_3);
            }
        else
            {
                printf("JUCATORUL 3 S-A FRIPT CU %d\n", abs(rezultat_3 - pariu_3));
                punctaj_3 = punctaj_3 - (5 + abs(rezultat_3 - pariu_3));
            }
        if(rezultat_4 == pariu_4)
            {
                printf("JUCATORUL 4 SI-A FACUT MAINILE\n");
                punctaj_4 = punctaj_4 + (5 + pariu_4);
            }
        else
            {
                printf("JUCATORUL 4 S-A FRIPT CU %d\n", abs(rezultat_4 - pariu_4));
                punctaj_4 = punctaj_4 - (5 + abs(rezultat_4 - pariu_4));
            }
        if(rezultat_5 == pariu_5)
            {
                printf("JUCATORUL 5 SI-A FACUT MAINILE\n");
                punctaj_5 = punctaj_5 + (5 + pariu_5);
            }
        else
            {
                printf("JUCATORUL 5 S-A FRIPT CU %d\n", abs(rezultat_5 - pariu_5));
                punctaj_5 = punctaj_5 - (5 + abs(rezultat_5 - pariu_5));
            }
        printf("\n");
        printf("JUCATOR 1: %d\n", punctaj_1);
        printf("JUCATOR 2: %d\n", punctaj_2);
        printf("JUCATOR 3: %d\n", punctaj_3);
        printf("JUCATOR 4: %d\n", punctaj_4);
        printf("JUCATOR 5: %d\n", punctaj_5);
        printf("\n");
        printf("\n");

printf("JOC DE 8 NR.4\n");
printf("\n");

    pariu_1 = 0, pariu_2 = 0, pariu_3 = 0, pariu_4 = 0, pariu_5 = 0;
        rezultat_1 = 0, rezultat_2 = 0, rezultat_3 = 0, rezultat_4 = 0, rezultat_5 = 0;
        printf("PARIU JUCATOR 4: ");
        scanf("%d", &aux4);
        printf("PARIU JUCATOR 5: ");
        scanf("%d", &aux5);
        printf("PARIU JUCATOR 1: ");
        scanf("%d", &aux1);
        printf("PARIU JUCATOR 2: ");
        scanf("%d", &aux2);
        printf("JUCATORUL 3 NU ARE VOIE SA PARIEZE %d\n", 8 - aux4 - aux5 - aux1 - aux2);
        printf("PARIU JUCATOR 3: ");
        scanf("%d", &aux3);
        pariu_1 = aux1;
        pariu_2 = aux2;
        pariu_3 = aux3;
        pariu_4 = aux4;
        pariu_5 = aux5;
        printf("\n");

        printf("PARIU 1: %d\n", pariu_1);
        printf("PARIU 2: %d\n", pariu_2);
        printf("PARIU 3: %d\n", pariu_3);
        printf("PARIU 4: %d\n", pariu_4);
        printf("PARIU 5: %d\n", pariu_5);

        printf("\n");
        printf("CINE IA MANA 1: ");
        scanf("%d", &mana1);
        if(mana1 == 1)
            rezultat_1++;
        else
            if(mana1 == 2)
                rezultat_2++;
            else
                if(mana1 == 3)
                    rezultat_3++;
                else
                    if(mana1 == 4)
                       rezultat_4++;
                    else
                        if(mana1 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
    printf("CINE IA MANA 2: ");
        scanf("%d", &mana2);
        if(mana2 == 1)
            rezultat_1++;
        else
            if(mana2 == 2)
                rezultat_2++;
            else
                if(mana2 == 3)
                    rezultat_3++;
                else
                    if(mana2 == 4)
                       rezultat_4++;
                    else
                        if(mana2 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
    printf("CINE IA MANA 3: ");
        scanf("%d", &mana3);
        if(mana3 == 1)
            rezultat_1++;
        else
            if(mana3 == 2)
                rezultat_2++;
            else
                if(mana3 == 3)
                    rezultat_3++;
                else
                    if(mana3 == 4)
                       rezultat_4++;
                    else
                        if(mana3 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
    printf("CINE IA MANA 4: ");
        scanf("%d", &mana4);
        if(mana4 == 1)
            rezultat_1++;
        else
            if(mana4 == 2)
                rezultat_2++;
            else
                if(mana4 == 3)
                    rezultat_3++;
                else
                    if(mana4 == 4)
                       rezultat_4++;
                    else
                        if(mana4 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
    printf("CINE IA MANA 5: ");
        scanf("%d", &mana5);
        if(mana5 == 1)
            rezultat_1++;
        else
            if(mana5 == 2)
                rezultat_2++;
            else
                if(mana5 == 3)
                    rezultat_3++;
                else
                    if(mana5 == 4)
                       rezultat_4++;
                    else
                        if(mana5 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
    printf("CINE IA MANA 6: ");
        scanf("%d", &mana6);
        if(mana6 == 1)
            rezultat_1++;
        else
            if(mana6 == 2)
                rezultat_2++;
            else
                if(mana6 == 3)
                    rezultat_3++;
                else
                    if(mana6 == 4)
                       rezultat_4++;
                    else
                        if(mana6 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
    printf("CINE IA MANA 7: ");
        scanf("%d", &mana7);
        if(mana7 == 1)
            rezultat_1++;
        else
            if(mana7 == 2)
                rezultat_2++;
            else
                if(mana7 == 3)
                    rezultat_3++;
                else
                    if(mana7 == 4)
                       rezultat_4++;
                    else
                        if(mana7 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
    printf("CINE IA MANA 8: ");
        scanf("%d", &mana8);
        if(mana8 == 1)
            rezultat_1++;
        else
            if(mana8 == 2)
                rezultat_2++;
            else
                if(mana8 == 3)
                    rezultat_3++;
                else
                    if(mana8 == 4)
                       rezultat_4++;
                    else
                        if(mana8 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("\n");

        if(rezultat_1 == pariu_1)
            {
                printf("JUCATORUL 1 SI-A FACUT MAINILE\n");
                punctaj_1 = punctaj_1 + (5 + pariu_1);
            }
        else
            {
                printf("JUCATORUL 1 S-A FRIPT CU %d\n", abs(rezultat_1 - pariu_1));
                punctaj_1 = punctaj_1 - (5 + abs(rezultat_1 - pariu_1));
            }

        if(rezultat_2 == pariu_2)
            {
                printf("JUCATORUL 2 SI-A FACUT MAINILE\n");
                punctaj_2 = punctaj_2 + (5 + pariu_2);
            }
        else
            {
                printf("JUCATORUL 2 S-A FRIPT CU %d\n", abs(rezultat_2 - pariu_2));
                punctaj_2 = punctaj_2 - (5 + abs(rezultat_2 - pariu_2));
            }
        if(rezultat_3 == pariu_3)
            {
                printf("JUCATORUL 3 SI-A FACUT MAINILE\n");
                punctaj_3 = punctaj_3 + (5 + pariu_3);
            }
        else
            {
                printf("JUCATORUL 3 S-A FRIPT CU %d\n", abs(rezultat_3 - pariu_3));
                punctaj_3 = punctaj_3 - (5 + abs(rezultat_3 - pariu_3));
            }
        if(rezultat_4 == pariu_4)
            {
                printf("JUCATORUL 4 SI-A FACUT MAINILE\n");
                punctaj_4 = punctaj_4 + (5 + pariu_4);
            }
        else
            {
                printf("JUCATORUL 4 S-A FRIPT CU %d\n", abs(rezultat_4 - pariu_4));
                punctaj_4 = punctaj_4 - (5 + abs(rezultat_4 - pariu_4));
            }
        if(rezultat_5 == pariu_5)
            {
                printf("JUCATORUL 5 SI-A FACUT MAINILE\n");
                punctaj_5 = punctaj_5 + (5 + pariu_5);
            }
        else
            {
                printf("JUCATORUL 5 S-A FRIPT CU %d\n", abs(rezultat_5 - pariu_5));
                punctaj_5 = punctaj_5 - (5 + abs(rezultat_5 - pariu_5));
            }
        printf("\n");
        printf("JUCATOR 1: %d\n", punctaj_1);
        printf("JUCATOR 2: %d\n", punctaj_2);
        printf("JUCATOR 3: %d\n", punctaj_3);
        printf("JUCATOR 4: %d\n", punctaj_4);
        printf("JUCATOR 5: %d\n", punctaj_5);
        printf("\n");
        printf("\n");

printf("JOC DE 8 NR.5\n");
printf("\n");

    pariu_1 = 0, pariu_2 = 0, pariu_3 = 0, pariu_4 = 0, pariu_5 = 0;
        rezultat_1 = 0, rezultat_2 = 0, rezultat_3 = 0, rezultat_4 = 0, rezultat_5 = 0;
        printf("PARIU JUCATOR 5: ");
        scanf("%d", &aux5);
        printf("PARIU JUCATOR 1: ");
        scanf("%d", &aux1);
        printf("PARIU JUCATOR 2: ");
        scanf("%d", &aux2);
        printf("PARIU JUCATOR 3: ");
        scanf("%d", &aux3);
        printf("JUCATORUL 4 NU ARE VOIE SA PARIEZE %d\n", 8 - aux5 - aux1 - aux2 - aux3);
        printf("PARIU JUCATOR 4: ");
        scanf("%d", &aux4);
        pariu_1 = aux1;
        pariu_2 = aux2;
        pariu_3 = aux3;
        pariu_4 = aux4;
        pariu_5 = aux5;
        printf("\n");

        printf("PARIU 1: %d\n", pariu_1);
        printf("PARIU 2: %d\n", pariu_2);
        printf("PARIU 3: %d\n", pariu_3);
        printf("PARIU 4: %d\n", pariu_4);
        printf("PARIU 5: %d\n", pariu_5);

        printf("\n");
        printf("CINE IA MANA 1: ");
        scanf("%d", &mana1);
        if(mana1 == 1)
            rezultat_1++;
        else
            if(mana1 == 2)
                rezultat_2++;
            else
                if(mana1 == 3)
                    rezultat_3++;
                else
                    if(mana1 == 4)
                       rezultat_4++;
                    else
                        if(mana1 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
    printf("CINE IA MANA 2: ");
        scanf("%d", &mana2);
        if(mana2 == 1)
            rezultat_1++;
        else
            if(mana2 == 2)
                rezultat_2++;
            else
                if(mana2 == 3)
                    rezultat_3++;
                else
                    if(mana2 == 4)
                       rezultat_4++;
                    else
                        if(mana2 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
    printf("CINE IA MANA 3: ");
        scanf("%d", &mana3);
        if(mana3 == 1)
            rezultat_1++;
        else
            if(mana3 == 2)
                rezultat_2++;
            else
                if(mana3 == 3)
                    rezultat_3++;
                else
                    if(mana3 == 4)
                       rezultat_4++;
                    else
                        if(mana3 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
    printf("CINE IA MANA 4: ");
        scanf("%d", &mana4);
        if(mana4 == 1)
            rezultat_1++;
        else
            if(mana4 == 2)
                rezultat_2++;
            else
                if(mana4 == 3)
                    rezultat_3++;
                else
                    if(mana4 == 4)
                       rezultat_4++;
                    else
                        if(mana4 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
    printf("CINE IA MANA 5: ");
        scanf("%d", &mana5);
        if(mana5 == 1)
            rezultat_1++;
        else
            if(mana5 == 2)
                rezultat_2++;
            else
                if(mana5 == 3)
                    rezultat_3++;
                else
                    if(mana5 == 4)
                       rezultat_4++;
                    else
                        if(mana5 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
    printf("CINE IA MANA 6: ");
        scanf("%d", &mana6);
        if(mana6 == 1)
            rezultat_1++;
        else
            if(mana6 == 2)
                rezultat_2++;
            else
                if(mana6 == 3)
                    rezultat_3++;
                else
                    if(mana6 == 4)
                       rezultat_4++;
                    else
                        if(mana6 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
    printf("CINE IA MANA 7: ");
        scanf("%d", &mana7);
        if(mana7 == 1)
            rezultat_1++;
        else
            if(mana7 == 2)
                rezultat_2++;
            else
                if(mana7 == 3)
                    rezultat_3++;
                else
                    if(mana7 == 4)
                       rezultat_4++;
                    else
                        if(mana7 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
    printf("CINE IA MANA 8: ");
        scanf("%d", &mana8);
        if(mana8 == 1)
            rezultat_1++;
        else
            if(mana8 == 2)
                rezultat_2++;
            else
                if(mana8 == 3)
                    rezultat_3++;
                else
                    if(mana8 == 4)
                       rezultat_4++;
                    else
                        if(mana8 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("\n");

        if(rezultat_1 == pariu_1)
            {
                printf("JUCATORUL 1 SI-A FACUT MAINILE\n");
                punctaj_1 = punctaj_1 + (5 + pariu_1);
            }
        else
            {
                printf("JUCATORUL 1 S-A FRIPT CU %d\n", abs(rezultat_1 - pariu_1));
                punctaj_1 = punctaj_1 - (5 + abs(rezultat_1 - pariu_1));
            }

        if(rezultat_2 == pariu_2)
            {
                printf("JUCATORUL 2 SI-A FACUT MAINILE\n");
                punctaj_2 = punctaj_2 + (5 + pariu_2);
            }
        else
            {
                printf("JUCATORUL 2 S-A FRIPT CU %d\n", abs(rezultat_2 - pariu_2));
                punctaj_2 = punctaj_2 - (5 + abs(rezultat_2 - pariu_2));
            }
        if(rezultat_3 == pariu_3)
            {
                printf("JUCATORUL 3 SI-A FACUT MAINILE\n");
                punctaj_3 = punctaj_3 + (5 + pariu_3);
            }
        else
            {
                printf("JUCATORUL 3 S-A FRIPT CU %d\n", abs(rezultat_3 - pariu_3));
                punctaj_3 = punctaj_3 - (5 + abs(rezultat_3 - pariu_3));
            }
        if(rezultat_4 == pariu_4)
            {
                printf("JUCATORUL 4 SI-A FACUT MAINILE\n");
                punctaj_4 = punctaj_4 + (5 + pariu_4);
            }
        else
            {
                printf("JUCATORUL 4 S-A FRIPT CU %d\n", abs(rezultat_4 - pariu_4));
                punctaj_4 = punctaj_4 - (5 + abs(rezultat_4 - pariu_4));
            }
        if(rezultat_5 == pariu_5)
            {
                printf("JUCATORUL 5 SI-A FACUT MAINILE\n");
                punctaj_5 = punctaj_5 + (5 + pariu_5);
            }
        else
            {
                printf("JUCATORUL 5 S-A FRIPT CU %d\n", abs(rezultat_5 - pariu_5));
                punctaj_5 = punctaj_5 - (5 + abs(rezultat_5 - pariu_5));
            }
        printf("\n");
        printf("JUCATOR 1: %d\n", punctaj_1);
        printf("JUCATOR 2: %d\n", punctaj_2);
        printf("JUCATOR 3: %d\n", punctaj_3);
        printf("JUCATOR 4: %d\n", punctaj_4);
        printf("JUCATOR 5: %d\n", punctaj_5);
        printf("\n");
        printf("\n");

printf("JOC DE 7\n");
printf("\n");

    pariu_1 = 0, pariu_2 = 0, pariu_3 = 0, pariu_4 = 0, pariu_5 = 0;
        rezultat_1 = 0, rezultat_2 = 0, rezultat_3 = 0, rezultat_4 = 0, rezultat_5 = 0;
        printf("PARIU JUCATOR 1: ");
        scanf("%d", &aux1);
        printf("PARIU JUCATOR 2: ");
        scanf("%d", &aux2);
        printf("PARIU JUCATOR 3: ");
        scanf("%d", &aux3);
        printf("PARIU JUCATOR 4: ");
        scanf("%d", &aux4);
        printf("JUCATORUL 5 NU ARE VOIE SA PARIEZE %d\n", 7 - aux1 - aux2 - aux3 - aux4);
        printf("PARIU JUCATOR 5: ");
        scanf("%d", &aux5);
        pariu_1 = aux1;
        pariu_2 = aux2;
        pariu_3 = aux3;
        pariu_4 = aux4;
        pariu_5 = aux5;
        printf("\n");

        printf("PARIU 1: %d\n", pariu_1);
        printf("PARIU 2: %d\n", pariu_2);
        printf("PARIU 3: %d\n", pariu_3);
        printf("PARIU 4: %d\n", pariu_4);
        printf("PARIU 5: %d\n", pariu_5);

        printf("\n");
        printf("CINE IA MANA 1: ");
        scanf("%d", &mana1);
        if(mana1 == 1)
            rezultat_1++;
        else
            if(mana1 == 2)
                rezultat_2++;
            else
                if(mana1 == 3)
                    rezultat_3++;
                else
                    if(mana1 == 4)
                       rezultat_4++;
                    else
                        if(mana1 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
    printf("CINE IA MANA 2: ");
        scanf("%d", &mana2);
        if(mana2 == 1)
            rezultat_1++;
        else
            if(mana2 == 2)
                rezultat_2++;
            else
                if(mana2 == 3)
                    rezultat_3++;
                else
                    if(mana2 == 4)
                       rezultat_4++;
                    else
                        if(mana2 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
    printf("CINE IA MANA 3: ");
        scanf("%d", &mana3);
        if(mana3 == 1)
            rezultat_1++;
        else
            if(mana3 == 2)
                rezultat_2++;
            else
                if(mana3 == 3)
                    rezultat_3++;
                else
                    if(mana3 == 4)
                       rezultat_4++;
                    else
                        if(mana3 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
    printf("CINE IA MANA 4: ");
        scanf("%d", &mana4);
        if(mana4 == 1)
            rezultat_1++;
        else
            if(mana4 == 2)
                rezultat_2++;
            else
                if(mana4 == 3)
                    rezultat_3++;
                else
                    if(mana4 == 4)
                       rezultat_4++;
                    else
                        if(mana4 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
    printf("CINE IA MANA 5: ");
        scanf("%d", &mana5);
        if(mana5 == 1)
            rezultat_1++;
        else
            if(mana5 == 2)
                rezultat_2++;
            else
                if(mana5 == 3)
                    rezultat_3++;
                else
                    if(mana5 == 4)
                       rezultat_4++;
                    else
                        if(mana5 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
    printf("CINE IA MANA 6: ");
        scanf("%d", &mana6);
        if(mana6 == 1)
            rezultat_1++;
        else
            if(mana6 == 2)
                rezultat_2++;
            else
                if(mana6 == 3)
                    rezultat_3++;
                else
                    if(mana6 == 4)
                       rezultat_4++;
                    else
                        if(mana6 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
    printf("CINE IA MANA 7: ");
        scanf("%d", &mana7);
        if(mana7 == 1)
            rezultat_1++;
        else
            if(mana7 == 2)
                rezultat_2++;
            else
                if(mana7 == 3)
                    rezultat_3++;
                else
                    if(mana7 == 4)
                       rezultat_4++;
                    else
                        if(mana7 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("\n");

        if(rezultat_1 == pariu_1)
            {
                printf("JUCATORUL 1 SI-A FACUT MAINILE\n");
                punctaj_1 = punctaj_1 + (5 + pariu_1);
            }
        else
            {
                printf("JUCATORUL 1 S-A FRIPT CU %d\n", abs(rezultat_1 - pariu_1));
                punctaj_1 = punctaj_1 - (5 + abs(rezultat_1 - pariu_1));
            }

        if(rezultat_2 == pariu_2)
            {
                printf("JUCATORUL 2 SI-A FACUT MAINILE\n");
                punctaj_2 = punctaj_2 + (5 + pariu_2);
            }
        else
            {
                printf("JUCATORUL 2 S-A FRIPT CU %d\n", abs(rezultat_2 - pariu_2));
                punctaj_2 = punctaj_2 - (5 + abs(rezultat_2 - pariu_2));
            }
        if(rezultat_3 == pariu_3)
            {
                printf("JUCATORUL 3 SI-A FACUT MAINILE\n");
                punctaj_3 = punctaj_3 + (5 + pariu_3);
            }
        else
            {
                printf("JUCATORUL 3 S-A FRIPT CU %d\n", abs(rezultat_3 - pariu_3));
                punctaj_3 = punctaj_3 - (5 + abs(rezultat_3 - pariu_3));
            }
        if(rezultat_4 == pariu_4)
            {
                printf("JUCATORUL 4 SI-A FACUT MAINILE\n");
                punctaj_4 = punctaj_4 + (5 + pariu_4);
            }
        else
            {
                printf("JUCATORUL 4 S-A FRIPT CU %d\n", abs(rezultat_4 - pariu_4));
                punctaj_4 = punctaj_4 - (5 + abs(rezultat_4 - pariu_4));
            }
        if(rezultat_5 == pariu_5)
            {
                printf("JUCATORUL 5 SI-A FACUT MAINILE\n");
                punctaj_5 = punctaj_5 + (5 + pariu_5);
            }
        else
            {
                printf("JUCATORUL 5 S-A FRIPT CU %d\n", abs(rezultat_5 - pariu_5));
                punctaj_5 = punctaj_5 - (5 + abs(rezultat_5 - pariu_5));
            }
        printf("\n");
        printf("JUCATOR 1: %d\n", punctaj_1);
        printf("JUCATOR 2: %d\n", punctaj_2);
        printf("JUCATOR 3: %d\n", punctaj_3);
        printf("JUCATOR 4: %d\n", punctaj_4);
        printf("JUCATOR 5: %d\n", punctaj_5);
        printf("\n");
        printf("\n");

printf("JOC DE 6\n");
printf("\n");

    pariu_1 = 0, pariu_2 = 0, pariu_3 = 0, pariu_4 = 0, pariu_5 = 0;
        rezultat_1 = 0, rezultat_2 = 0, rezultat_3 = 0, rezultat_4 = 0, rezultat_5 = 0;
        printf("PARIU JUCATOR 2: ");
        scanf("%d", &aux2);
        printf("PARIU JUCATOR 3: ");
        scanf("%d", &aux3);
        printf("PARIU JUCATOR 4: ");
        scanf("%d", &aux4);
        printf("PARIU JUCATOR 5: ");
        scanf("%d", &aux5);
        printf("JUCATORUL 1 NU ARE VOIE SA PARIEZE %d\n", 6 - aux2 - aux3 - aux4 - aux5);
        printf("PARIU JUCATOR 1: ");
        scanf("%d", &aux1);
        pariu_1 = aux1;
        pariu_2 = aux2;
        pariu_3 = aux3;
        pariu_4 = aux4;
        pariu_5 = aux5;
        printf("\n");

        printf("PARIU 1: %d\n", pariu_1);
        printf("PARIU 2: %d\n", pariu_2);
        printf("PARIU 3: %d\n", pariu_3);
        printf("PARIU 4: %d\n", pariu_4);
        printf("PARIU 5: %d\n", pariu_5);

        printf("\n");
        printf("CINE IA MANA 1: ");
        scanf("%d", &mana1);
        if(mana1 == 1)
            rezultat_1++;
        else
            if(mana1 == 2)
                rezultat_2++;
            else
                if(mana1 == 3)
                    rezultat_3++;
                else
                    if(mana1 == 4)
                       rezultat_4++;
                    else
                        if(mana1 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
    printf("CINE IA MANA 2: ");
        scanf("%d", &mana2);
        if(mana2 == 1)
            rezultat_1++;
        else
            if(mana2 == 2)
                rezultat_2++;
            else
                if(mana2 == 3)
                    rezultat_3++;
                else
                    if(mana2 == 4)
                       rezultat_4++;
                    else
                        if(mana2 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
    printf("CINE IA MANA 3: ");
        scanf("%d", &mana3);
        if(mana3 == 1)
            rezultat_1++;
        else
            if(mana3 == 2)
                rezultat_2++;
            else
                if(mana3 == 3)
                    rezultat_3++;
                else
                    if(mana3 == 4)
                       rezultat_4++;
                    else
                        if(mana3 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
    printf("CINE IA MANA 4: ");
        scanf("%d", &mana4);
        if(mana4 == 1)
            rezultat_1++;
        else
            if(mana4 == 2)
                rezultat_2++;
            else
                if(mana4 == 3)
                    rezultat_3++;
                else
                    if(mana4 == 4)
                       rezultat_4++;
                    else
                        if(mana4 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
    printf("CINE IA MANA 5: ");
        scanf("%d", &mana5);
        if(mana5 == 1)
            rezultat_1++;
        else
            if(mana5 == 2)
                rezultat_2++;
            else
                if(mana5 == 3)
                    rezultat_3++;
                else
                    if(mana5 == 4)
                       rezultat_4++;
                    else
                        if(mana5 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
    printf("CINE IA MANA 6: ");
        scanf("%d", &mana6);
        if(mana6 == 1)
            rezultat_1++;
        else
            if(mana6 == 2)
                rezultat_2++;
            else
                if(mana6 == 3)
                    rezultat_3++;
                else
                    if(mana6 == 4)
                       rezultat_4++;
                    else
                        if(mana6 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("\n");

        if(rezultat_1 == pariu_1)
            {
                printf("JUCATORUL 1 SI-A FACUT MAINILE\n");
                punctaj_1 = punctaj_1 + (5 + pariu_1);
            }
        else
            {
                printf("JUCATORUL 1 S-A FRIPT CU %d\n", abs(rezultat_1 - pariu_1));
                punctaj_1 = punctaj_1 - (5 + abs(rezultat_1 - pariu_1));
            }

        if(rezultat_2 == pariu_2)
            {
                printf("JUCATORUL 2 SI-A FACUT MAINILE\n");
                punctaj_2 = punctaj_2 + (5 + pariu_2);
            }
        else
            {
                printf("JUCATORUL 2 S-A FRIPT CU %d\n", abs(rezultat_2 - pariu_2));
                punctaj_2 = punctaj_2 - (5 + abs(rezultat_2 - pariu_2));
            }
        if(rezultat_3 == pariu_3)
            {
                printf("JUCATORUL 3 SI-A FACUT MAINILE\n");
                punctaj_3 = punctaj_3 + (5 + pariu_3);
            }
        else
            {
                printf("JUCATORUL 3 S-A FRIPT CU %d\n", abs(rezultat_3 - pariu_3));
                punctaj_3 = punctaj_3 - (5 + abs(rezultat_3 - pariu_3));
            }
        if(rezultat_4 == pariu_4)
            {
                printf("JUCATORUL 4 SI-A FACUT MAINILE\n");
                punctaj_4 = punctaj_4 + (5 + pariu_4);
            }
        else
            {
                printf("JUCATORUL 4 S-A FRIPT CU %d\n", abs(rezultat_4 - pariu_4));
                punctaj_4 = punctaj_4 - (5 + abs(rezultat_4 - pariu_4));
            }
        if(rezultat_5 == pariu_5)
            {
                printf("JUCATORUL 5 SI-A FACUT MAINILE\n");
                punctaj_5 = punctaj_5 + (5 + pariu_5);
            }
        else
            {
                printf("JUCATORUL 5 S-A FRIPT CU %d\n", abs(rezultat_5 - pariu_5));
                punctaj_5 = punctaj_5 - (5 + abs(rezultat_5 - pariu_5));
            }
        printf("\n");
        printf("JUCATOR 1: %d\n", punctaj_1);
        printf("JUCATOR 2: %d\n", punctaj_2);
        printf("JUCATOR 3: %d\n", punctaj_3);
        printf("JUCATOR 4: %d\n", punctaj_4);
        printf("JUCATOR 5: %d\n", punctaj_5);
        printf("\n");
        printf("\n");

printf("JOC DE 5\n");
printf("\n");

    pariu_1 = 0, pariu_2 = 0, pariu_3 = 0, pariu_4 = 0, pariu_5 = 0;
        rezultat_1 = 0, rezultat_2 = 0, rezultat_3 = 0, rezultat_4 = 0, rezultat_5 = 0;
        printf("PARIU JUCATOR 3: ");
        scanf("%d", &aux3);
        printf("PARIU JUCATOR 4: ");
        scanf("%d", &aux4);
        printf("PARIU JUCATOR 5: ");
        scanf("%d", &aux5);
        printf("PARIU JUCATOR 1: ");
        scanf("%d", &aux1);
        printf("JUCATORUL 2 NU ARE VOIE SA PARIEZE %d\n", 5 - aux3 - aux4 - aux5 - aux1);
        printf("PARIU JUCATOR 2: ");
        scanf("%d", &aux2);
        pariu_1 = aux1;
        pariu_2 = aux2;
        pariu_3 = aux3;
        pariu_4 = aux4;
        pariu_5 = aux5;
        printf("\n");

        printf("PARIU 1: %d\n", pariu_1);
        printf("PARIU 2: %d\n", pariu_2);
        printf("PARIU 3: %d\n", pariu_3);
        printf("PARIU 4: %d\n", pariu_4);
        printf("PARIU 5: %d\n", pariu_5);

        printf("\n");
        printf("CINE IA MANA 1: ");
        scanf("%d", &mana1);
        if(mana1 == 1)
            rezultat_1++;
        else
            if(mana1 == 2)
                rezultat_2++;
            else
                if(mana1 == 3)
                    rezultat_3++;
                else
                    if(mana1 == 4)
                       rezultat_4++;
                    else
                        if(mana1 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
    printf("CINE IA MANA 2: ");
        scanf("%d", &mana2);
        if(mana2 == 1)
            rezultat_1++;
        else
            if(mana2 == 2)
                rezultat_2++;
            else
                if(mana2 == 3)
                    rezultat_3++;
                else
                    if(mana2 == 4)
                       rezultat_4++;
                    else
                        if(mana2 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
    printf("CINE IA MANA 3: ");
        scanf("%d", &mana3);
        if(mana3 == 1)
            rezultat_1++;
        else
            if(mana3 == 2)
                rezultat_2++;
            else
                if(mana3 == 3)
                    rezultat_3++;
                else
                    if(mana3 == 4)
                       rezultat_4++;
                    else
                        if(mana3 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
    printf("CINE IA MANA 4: ");
        scanf("%d", &mana4);
        if(mana4 == 1)
            rezultat_1++;
        else
            if(mana4 == 2)
                rezultat_2++;
            else
                if(mana4 == 3)
                    rezultat_3++;
                else
                    if(mana4 == 4)
                       rezultat_4++;
                    else
                        if(mana4 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
    printf("CINE IA MANA 5: ");
        scanf("%d", &mana5);
        if(mana5 == 1)
            rezultat_1++;
        else
            if(mana5 == 2)
                rezultat_2++;
            else
                if(mana5 == 3)
                    rezultat_3++;
                else
                    if(mana5 == 4)
                       rezultat_4++;
                    else
                        if(mana5 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("\n");

        if(rezultat_1 == pariu_1)
            {
                printf("JUCATORUL 1 SI-A FACUT MAINILE\n");
                punctaj_1 = punctaj_1 + (5 + pariu_1);
            }
        else
            {
                printf("JUCATORUL 1 S-A FRIPT CU %d\n", abs(rezultat_1 - pariu_1));
                punctaj_1 = punctaj_1 - (5 + abs(rezultat_1 - pariu_1));
            }

        if(rezultat_2 == pariu_2)
            {
                printf("JUCATORUL 2 SI-A FACUT MAINILE\n");
                punctaj_2 = punctaj_2 + (5 + pariu_2);
            }
        else
            {
                printf("JUCATORUL 2 S-A FRIPT CU %d\n", abs(rezultat_2 - pariu_2));
                punctaj_2 = punctaj_2 - (5 + abs(rezultat_2 - pariu_2));
            }
        if(rezultat_3 == pariu_3)
            {
                printf("JUCATORUL 3 SI-A FACUT MAINILE\n");
                punctaj_3 = punctaj_3 + (5 + pariu_3);
            }
        else
            {
                printf("JUCATORUL 3 S-A FRIPT CU %d\n", abs(rezultat_3 - pariu_3));
                punctaj_3 = punctaj_3 - (5 + abs(rezultat_3 - pariu_3));
            }
        if(rezultat_4 == pariu_4)
            {
                printf("JUCATORUL 4 SI-A FACUT MAINILE\n");
                punctaj_4 = punctaj_4 + (5 + pariu_4);
            }
        else
            {
                printf("JUCATORUL 4 S-A FRIPT CU %d\n", abs(rezultat_4 - pariu_4));
                punctaj_4 = punctaj_4 - (5 + abs(rezultat_4 - pariu_4));
            }
        if(rezultat_5 == pariu_5)
            {
                printf("JUCATORUL 5 SI-A FACUT MAINILE\n");
                punctaj_5 = punctaj_5 + (5 + pariu_5);
            }
        else
            {
                printf("JUCATORUL 5 S-A FRIPT CU %d\n", abs(rezultat_5 - pariu_5));
                punctaj_5 = punctaj_5 - (5 + abs(rezultat_5 - pariu_5));
            }
        printf("\n");
        printf("JUCATOR 1: %d\n", punctaj_1);
        printf("JUCATOR 2: %d\n", punctaj_2);
        printf("JUCATOR 3: %d\n", punctaj_3);
        printf("JUCATOR 4: %d\n", punctaj_4);
        printf("JUCATOR 5: %d\n", punctaj_5);
        printf("\n");
        printf("\n");

printf("JOC DE 4\n");
printf("\n");

    pariu_1 = 0, pariu_2 = 0, pariu_3 = 0, pariu_4 = 0, pariu_5 = 0;
        rezultat_1 = 0, rezultat_2 = 0, rezultat_3 = 0, rezultat_4 = 0, rezultat_5 = 0;
        printf("PARIU JUCATOR 4: ");
        scanf("%d", &aux4);
        printf("PARIU JUCATOR 5: ");
        scanf("%d", &aux5);
        printf("PARIU JUCATOR 1: ");
        scanf("%d", &aux1);
        printf("PARIU JUCATOR 2: ");
        scanf("%d", &aux2);
        printf("JUCATORUL 3 NU ARE VOIE SA PARIEZE %d\n", 4 - aux4 - aux5 - aux1 - aux2);
        printf("PARIU JUCATOR 3: ");
        scanf("%d", &aux3);
        pariu_1 = aux1;
        pariu_2 = aux2;
        pariu_3 = aux3;
        pariu_4 = aux4;
        pariu_5 = aux5;
        printf("\n");

        printf("PARIU 1: %d\n", pariu_1);
        printf("PARIU 2: %d\n", pariu_2);
        printf("PARIU 3: %d\n", pariu_3);
        printf("PARIU 4: %d\n", pariu_4);
        printf("PARIU 5: %d\n", pariu_5);

        printf("\n");
        printf("CINE IA MANA 1: ");
        scanf("%d", &mana1);
        if(mana1 == 1)
            rezultat_1++;
        else
            if(mana1 == 2)
                rezultat_2++;
            else
                if(mana1 == 3)
                    rezultat_3++;
                else
                    if(mana1 == 4)
                       rezultat_4++;
                    else
                        if(mana1 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
    printf("CINE IA MANA 2: ");
        scanf("%d", &mana2);
        if(mana2 == 1)
            rezultat_1++;
        else
            if(mana2 == 2)
                rezultat_2++;
            else
                if(mana2 == 3)
                    rezultat_3++;
                else
                    if(mana2 == 4)
                       rezultat_4++;
                    else
                        if(mana2 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
    printf("CINE IA MANA 3: ");
        scanf("%d", &mana3);
        if(mana3 == 1)
            rezultat_1++;
        else
            if(mana3 == 2)
                rezultat_2++;
            else
                if(mana3 == 3)
                    rezultat_3++;
                else
                    if(mana3 == 4)
                       rezultat_4++;
                    else
                        if(mana3 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
    printf("CINE IA MANA 4: ");
        scanf("%d", &mana4);
        if(mana4 == 1)
            rezultat_1++;
        else
            if(mana4 == 2)
                rezultat_2++;
            else
                if(mana4 == 3)
                    rezultat_3++;
                else
                    if(mana4 == 4)
                       rezultat_4++;
                    else
                        if(mana4 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("\n");

        if(rezultat_1 == pariu_1)
            {
                printf("JUCATORUL 1 SI-A FACUT MAINILE\n");
                punctaj_1 = punctaj_1 + (5 + pariu_1);
            }
        else
            {
                printf("JUCATORUL 1 S-A FRIPT CU %d\n", abs(rezultat_1 - pariu_1));
                punctaj_1 = punctaj_1 - (5 + abs(rezultat_1 - pariu_1));
            }

        if(rezultat_2 == pariu_2)
            {
                printf("JUCATORUL 2 SI-A FACUT MAINILE\n");
                punctaj_2 = punctaj_2 + (5 + pariu_2);
            }
        else
            {
                printf("JUCATORUL 2 S-A FRIPT CU %d\n", abs(rezultat_2 - pariu_2));
                punctaj_2 = punctaj_2 - (5 + abs(rezultat_2 - pariu_2));
            }
        if(rezultat_3 == pariu_3)
            {
                printf("JUCATORUL 3 SI-A FACUT MAINILE\n");
                punctaj_3 = punctaj_3 + (5 + pariu_3);
            }
        else
            {
                printf("JUCATORUL 3 S-A FRIPT CU %d\n", abs(rezultat_3 - pariu_3));
                punctaj_3 = punctaj_3 - (5 + abs(rezultat_3 - pariu_3));
            }
        if(rezultat_4 == pariu_4)
            {
                printf("JUCATORUL 4 SI-A FACUT MAINILE\n");
                punctaj_4 = punctaj_4 + (5 + pariu_4);
            }
        else
            {
                printf("JUCATORUL 4 S-A FRIPT CU %d\n", abs(rezultat_4 - pariu_4));
                punctaj_4 = punctaj_4 - (5 + abs(rezultat_4 - pariu_4));
            }
        if(rezultat_5 == pariu_5)
            {
                printf("JUCATORUL 5 SI-A FACUT MAINILE\n");
                punctaj_5 = punctaj_5 + (5 + pariu_5);
            }
        else
            {
                printf("JUCATORUL 5 S-A FRIPT CU %d\n", abs(rezultat_5 - pariu_5));
                punctaj_5 = punctaj_5 - (5 + abs(rezultat_5 - pariu_5));
            }
        printf("\n");
        printf("JUCATOR 1: %d\n", punctaj_1);
        printf("JUCATOR 2: %d\n", punctaj_2);
        printf("JUCATOR 3: %d\n", punctaj_3);
        printf("JUCATOR 4: %d\n", punctaj_4);
        printf("JUCATOR 5: %d\n", punctaj_5);
        printf("\n");
        printf("\n");

printf("JOC DE 3\n");
printf("\n");

    pariu_1 = 0, pariu_2 = 0, pariu_3 = 0, pariu_4 = 0, pariu_5 = 0;
        rezultat_1 = 0, rezultat_2 = 0, rezultat_3 = 0, rezultat_4 = 0, rezultat_5 = 0;
        printf("PARIU JUCATOR 5: ");
        scanf("%d", &aux5);
        printf("PARIU JUCATOR 1: ");
        scanf("%d", &aux1);
        printf("PARIU JUCATOR 2: ");
        scanf("%d", &aux2);
        printf("PARIU JUCATOR 3: ");
        scanf("%d", &aux3);
        printf("JUCATORUL 4 NU ARE VOIE SA PARIEZE %d\n", 3 - aux5 - aux1 - aux2 - aux3);
        printf("PARIU JUCATOR 4: ");
        scanf("%d", &aux4);
        pariu_1 = aux1;
        pariu_2 = aux2;
        pariu_3 = aux3;
        pariu_4 = aux4;
        pariu_5 = aux5;
        printf("\n");

        printf("PARIU 1: %d\n", pariu_1);
        printf("PARIU 2: %d\n", pariu_2);
        printf("PARIU 3: %d\n", pariu_3);
        printf("PARIU 4: %d\n", pariu_4);
        printf("PARIU 5: %d\n", pariu_5);

        printf("\n");
        printf("CINE IA MANA 1: ");
        scanf("%d", &mana1);
        if(mana1 == 1)
            rezultat_1++;
        else
            if(mana1 == 2)
                rezultat_2++;
            else
                if(mana1 == 3)
                    rezultat_3++;
                else
                    if(mana1 == 4)
                       rezultat_4++;
                    else
                        if(mana1 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
    printf("CINE IA MANA 2: ");
        scanf("%d", &mana2);
        if(mana2 == 1)
            rezultat_1++;
        else
            if(mana2 == 2)
                rezultat_2++;
            else
                if(mana2 == 3)
                    rezultat_3++;
                else
                    if(mana2 == 4)
                       rezultat_4++;
                    else
                        if(mana2 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
    printf("CINE IA MANA 3: ");
        scanf("%d", &mana3);
        if(mana3 == 1)
            rezultat_1++;
        else
            if(mana3 == 2)
                rezultat_2++;
            else
                if(mana3 == 3)
                    rezultat_3++;
                else
                    if(mana3 == 4)
                       rezultat_4++;
                    else
                        if(mana3 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("\n");

        if(rezultat_1 == pariu_1)
            {
                printf("JUCATORUL 1 SI-A FACUT MAINILE\n");
                punctaj_1 = punctaj_1 + (5 + pariu_1);
            }
        else
            {
                printf("JUCATORUL 1 S-A FRIPT CU %d\n", abs(rezultat_1 - pariu_1));
                punctaj_1 = punctaj_1 - (5 + abs(rezultat_1 - pariu_1));
            }

        if(rezultat_2 == pariu_2)
            {
                printf("JUCATORUL 2 SI-A FACUT MAINILE\n");
                punctaj_2 = punctaj_2 + (5 + pariu_2);
            }
        else
            {
                printf("JUCATORUL 2 S-A FRIPT CU %d\n", abs(rezultat_2 - pariu_2));
                punctaj_2 = punctaj_2 - (5 + abs(rezultat_2 - pariu_2));
            }
        if(rezultat_3 == pariu_3)
            {
                printf("JUCATORUL 3 SI-A FACUT MAINILE\n");
                punctaj_3 = punctaj_3 + (5 + pariu_3);
            }
        else
            {
                printf("JUCATORUL 3 S-A FRIPT CU %d\n", abs(rezultat_3 - pariu_3));
                punctaj_3 = punctaj_3 - (5 + abs(rezultat_3 - pariu_3));
            }
        if(rezultat_4 == pariu_4)
            {
                printf("JUCATORUL 4 SI-A FACUT MAINILE\n");
                punctaj_4 = punctaj_4 + (5 + pariu_4);
            }
        else
            {
                printf("JUCATORUL 4 S-A FRIPT CU %d\n", abs(rezultat_4 - pariu_4));
                punctaj_4 = punctaj_4 - (5 + abs(rezultat_4 - pariu_4));
            }
        if(rezultat_5 == pariu_5)
            {
                printf("JUCATORUL 5 SI-A FACUT MAINILE\n");
                punctaj_5 = punctaj_5 + (5 + pariu_5);
            }
        else
            {
                printf("JUCATORUL 5 S-A FRIPT CU %d\n", abs(rezultat_5 - pariu_5));
                punctaj_5 = punctaj_5 - (5 + abs(rezultat_5 - pariu_5));
            }
        printf("\n");
        printf("JUCATOR 1: %d\n", punctaj_1);
        printf("JUCATOR 2: %d\n", punctaj_2);
        printf("JUCATOR 3: %d\n", punctaj_3);
        printf("JUCATOR 4: %d\n", punctaj_4);
        printf("JUCATOR 5: %d\n", punctaj_5);
        printf("\n");
        printf("\n");

printf("JOC DE 2\n");
printf("\n");

    pariu_1 = 0, pariu_2 = 0, pariu_3 = 0, pariu_4 = 0, pariu_5 = 0;
        rezultat_1 = 0, rezultat_2 = 0, rezultat_3 = 0, rezultat_4 = 0, rezultat_5 = 0;
        printf("PARIU JUCATOR 1: ");
        scanf("%d", &aux1);
        printf("PARIU JUCATOR 2: ");
        scanf("%d", &aux2);
        printf("PARIU JUCATOR 3: ");
        scanf("%d", &aux3);
        printf("PARIU JUCATOR 4: ");
        scanf("%d", &aux4);
        printf("JUCATORUL 5 NU ARE VOIE SA PARIEZE %d\n", 2 - aux1 - aux2 - aux3 - aux4);
        printf("PARIU JUCATOR 5: ");
        scanf("%d", &aux5);
        pariu_1 = aux1;
        pariu_2 = aux2;
        pariu_3 = aux3;
        pariu_4 = aux4;
        pariu_5 = aux5;
        printf("\n");

        printf("PARIU 1: %d\n", pariu_1);
        printf("PARIU 2: %d\n", pariu_2);
        printf("PARIU 3: %d\n", pariu_3);
        printf("PARIU 4: %d\n", pariu_4);
        printf("PARIU 5: %d\n", pariu_5);

        printf("\n");
        printf("CINE IA MANA 1: ");
        scanf("%d", &mana1);
        if(mana1 == 1)
            rezultat_1++;
        else
            if(mana1 == 2)
                rezultat_2++;
            else
                if(mana1 == 3)
                    rezultat_3++;
                else
                    if(mana1 == 4)
                       rezultat_4++;
                    else
                        if(mana1 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
    printf("CINE IA MANA 2: ");
        scanf("%d", &mana2);
        if(mana2 == 1)
            rezultat_1++;
        else
            if(mana2 == 2)
                rezultat_2++;
            else
                if(mana2 == 3)
                    rezultat_3++;
                else
                    if(mana2 == 4)
                       rezultat_4++;
                    else
                        if(mana2 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("\n");

        if(rezultat_1 == pariu_1)
            {
                printf("JUCATORUL 1 SI-A FACUT MAINILE\n");
                punctaj_1 = punctaj_1 + (5 + pariu_1);
            }
        else
            {
                printf("JUCATORUL 1 S-A FRIPT CU %d\n", abs(rezultat_1 - pariu_1));
                punctaj_1 = punctaj_1 - (5 + abs(rezultat_1 - pariu_1));
            }

        if(rezultat_2 == pariu_2)
            {
                printf("JUCATORUL 2 SI-A FACUT MAINILE\n");
                punctaj_2 = punctaj_2 + (5 + pariu_2);
            }
        else
            {
                printf("JUCATORUL 2 S-A FRIPT CU %d\n", abs(rezultat_2 - pariu_2));
                punctaj_2 = punctaj_2 - (5 + abs(rezultat_2 - pariu_2));
            }
        if(rezultat_3 == pariu_3)
            {
                printf("JUCATORUL 3 SI-A FACUT MAINILE\n");
                punctaj_3 = punctaj_3 + (5 + pariu_3);
            }
        else
            {
                printf("JUCATORUL 3 S-A FRIPT CU %d\n", abs(rezultat_3 - pariu_3));
                punctaj_3 = punctaj_3 - (5 + abs(rezultat_3 - pariu_3));
            }
        if(rezultat_4 == pariu_4)
            {
                printf("JUCATORUL 4 SI-A FACUT MAINILE\n");
                punctaj_4 = punctaj_4 + (5 + pariu_4);
            }
        else
            {
                printf("JUCATORUL 4 S-A FRIPT CU %d\n", abs(rezultat_4 - pariu_4));
                punctaj_4 = punctaj_4 - (5 + abs(rezultat_4 - pariu_4));
            }
        if(rezultat_5 == pariu_5)
            {
                printf("JUCATORUL 5 SI-A FACUT MAINILE\n");
                punctaj_5 = punctaj_5 + (5 + pariu_5);
            }
        else
            {
                printf("JUCATORUL 5 S-A FRIPT CU %d\n", abs(rezultat_5 - pariu_5));
                punctaj_5 = punctaj_5 - (5 + abs(rezultat_5 - pariu_5));
            }
        printf("\n");
        printf("JUCATOR 1: %d\n", punctaj_1);
        printf("JUCATOR 2: %d\n", punctaj_2);
        printf("JUCATOR 3: %d\n", punctaj_3);
        printf("JUCATOR 4: %d\n", punctaj_4);
        printf("JUCATOR 5: %d\n", punctaj_5);
        printf("\n");
        printf("\n");

printf("JOC DE 1 NR.1\n");
printf("\n");

    pariu_1 = 0, pariu_2 = 0, pariu_3 = 0, pariu_4 = 0, pariu_5 = 0;
        rezultat_1 = 0, rezultat_2 = 0, rezultat_3 = 0, rezultat_4 = 0, rezultat_5 = 0;
        printf("PARIU JUCATOR 2: ");
        scanf("%d", &aux2);
        printf("PARIU JUCATOR 3: ");
        scanf("%d", &aux3);
        printf("PARIU JUCATOR 4: ");
        scanf("%d", &aux4);
        printf("PARIU JUCATOR 5: ");
        scanf("%d", &aux5);
        printf("JUCATORUL 1 NU ARE VOIE SA PARIEZE %d\n", 1 - aux2 - aux3 - aux4 - aux5);
        printf("PARIU JUCATOR 1: ");
        scanf("%d", &aux1);
        pariu_1 = aux1;
        pariu_2 = aux2;
        pariu_3 = aux3;
        pariu_4 = aux4;
        pariu_5 = aux5;
        printf("\n");

        printf("PARIU 1: %d\n", pariu_1);
        printf("PARIU 2: %d\n", pariu_2);
        printf("PARIU 3: %d\n", pariu_3);
        printf("PARIU 4: %d\n", pariu_4);
        printf("PARIU 5: %d\n", pariu_5);

        printf("\n");
        printf("CINE IA MANA 1: ");
        scanf("%d", &mana1);
        if(mana1 == 1)
            rezultat_1++;
        else
            if(mana1 == 2)
                rezultat_2++;
            else
                if(mana1 == 3)
                    rezultat_3++;
                else
                    if(mana1 == 4)
                       rezultat_4++;
                    else
                        if(mana1 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("\n");

        if(rezultat_1 == pariu_1)
            {
                printf("JUCATORUL 1 SI-A FACUT MAINILE\n");
                punctaj_1 = punctaj_1 + (5 + pariu_1);
            }
        else
            {
                printf("JUCATORUL 1 S-A FRIPT CU %d\n", abs(rezultat_1 - pariu_1));
                punctaj_1 = punctaj_1 - (5 + abs(rezultat_1 - pariu_1));
            }

        if(rezultat_2 == pariu_2)
            {
                printf("JUCATORUL 2 SI-A FACUT MAINILE\n");
                punctaj_2 = punctaj_2 + (5 + pariu_2);
            }
        else
            {
                printf("JUCATORUL 2 S-A FRIPT CU %d\n", abs(rezultat_2 - pariu_2));
                punctaj_2 = punctaj_2 - (5 + abs(rezultat_2 - pariu_2));
            }
        if(rezultat_3 == pariu_3)
            {
                printf("JUCATORUL 3 SI-A FACUT MAINILE\n");
                punctaj_3 = punctaj_3 + (5 + pariu_3);
            }
        else
            {
                printf("JUCATORUL 3 S-A FRIPT CU %d\n", abs(rezultat_3 - pariu_3));
                punctaj_3 = punctaj_3 - (5 + abs(rezultat_3 - pariu_3));
            }
        if(rezultat_4 == pariu_4)
            {
                printf("JUCATORUL 4 SI-A FACUT MAINILE\n");
                punctaj_4 = punctaj_4 + (5 + pariu_4);
            }
        else
            {
                printf("JUCATORUL 4 S-A FRIPT CU %d\n", abs(rezultat_4 - pariu_4));
                punctaj_4 = punctaj_4 - (5 + abs(rezultat_4 - pariu_4));
            }
        if(rezultat_5 == pariu_5)
            {
                printf("JUCATORUL 5 SI-A FACUT MAINILE\n");
                punctaj_5 = punctaj_5 + (5 + pariu_5);
            }
        else
            {
                printf("JUCATORUL 5 S-A FRIPT CU %d\n", abs(rezultat_5 - pariu_5));
                punctaj_5 = punctaj_5 - (5 + abs(rezultat_5 - pariu_5));
            }
        printf("\n");
        printf("JUCATOR 1: %d\n", punctaj_1);
        printf("JUCATOR 2: %d\n", punctaj_2);
        printf("JUCATOR 3: %d\n", punctaj_3);
        printf("JUCATOR 4: %d\n", punctaj_4);
        printf("JUCATOR 5: %d\n", punctaj_5);
        printf("\n");
        printf("\n");

printf("JOC DE 1 NR.2\n");
printf("\n");

    pariu_1 = 0, pariu_2 = 0, pariu_3 = 0, pariu_4 = 0, pariu_5 = 0;
        rezultat_1 = 0, rezultat_2 = 0, rezultat_3 = 0, rezultat_4 = 0, rezultat_5 = 0;
        printf("PARIU JUCATOR 3: ");
        scanf("%d", &aux3);
        printf("PARIU JUCATOR 4: ");
        scanf("%d", &aux4);
        printf("PARIU JUCATOR 5: ");
        scanf("%d", &aux5);
        printf("PARIU JUCATOR 1: ");
        scanf("%d", &aux1);
        printf("JUCATORUL 2 NU ARE VOIE SA PARIEZE %d\n", 1 - aux3 - aux4 - aux5 - aux1);
        printf("PARIU JUCATOR 2: ");
        scanf("%d", &aux2);
        pariu_1 = aux1;
        pariu_2 = aux2;
        pariu_3 = aux3;
        pariu_4 = aux4;
        pariu_5 = aux5;
        printf("\n");

        printf("PARIU 1: %d\n", pariu_1);
        printf("PARIU 2: %d\n", pariu_2);
        printf("PARIU 3: %d\n", pariu_3);
        printf("PARIU 4: %d\n", pariu_4);
        printf("PARIU 5: %d\n", pariu_5);

        printf("\n");
        printf("CINE IA MANA 1: ");
        scanf("%d", &mana1);
        if(mana1 == 1)
            rezultat_1++;
        else
            if(mana1 == 2)
                rezultat_2++;
            else
                if(mana1 == 3)
                    rezultat_3++;
                else
                    if(mana1 == 4)
                       rezultat_4++;
                    else
                        if(mana1 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("\n");

        if(rezultat_1 == pariu_1)
            {
                printf("JUCATORUL 1 SI-A FACUT MAINILE\n");
                punctaj_1 = punctaj_1 + (5 + pariu_1);
            }
        else
            {
                printf("JUCATORUL 1 S-A FRIPT CU %d\n", abs(rezultat_1 - pariu_1));
                punctaj_1 = punctaj_1 - (5 + abs(rezultat_1 - pariu_1));
            }

        if(rezultat_2 == pariu_2)
            {
                printf("JUCATORUL 2 SI-A FACUT MAINILE\n");
                punctaj_2 = punctaj_2 + (5 + pariu_2);
            }
        else
            {
                printf("JUCATORUL 2 S-A FRIPT CU %d\n", abs(rezultat_2 - pariu_2));
                punctaj_2 = punctaj_2 - (5 + abs(rezultat_2 - pariu_2));
            }
        if(rezultat_3 == pariu_3)
            {
                printf("JUCATORUL 3 SI-A FACUT MAINILE\n");
                punctaj_3 = punctaj_3 + (5 + pariu_3);
            }
        else
            {
                printf("JUCATORUL 3 S-A FRIPT CU %d\n", abs(rezultat_3 - pariu_3));
                punctaj_3 = punctaj_3 - (5 + abs(rezultat_3 - pariu_3));
            }
        if(rezultat_4 == pariu_4)
            {
                printf("JUCATORUL 4 SI-A FACUT MAINILE\n");
                punctaj_4 = punctaj_4 + (5 + pariu_4);
            }
        else
            {
                printf("JUCATORUL 4 S-A FRIPT CU %d\n", abs(rezultat_4 - pariu_4));
                punctaj_4 = punctaj_4 - (5 + abs(rezultat_4 - pariu_4));
            }
        if(rezultat_5 == pariu_5)
            {
                printf("JUCATORUL 5 SI-A FACUT MAINILE\n");
                punctaj_5 = punctaj_5 + (5 + pariu_5);
            }
        else
            {
                printf("JUCATORUL 5 S-A FRIPT CU %d\n", abs(rezultat_5 - pariu_5));
                punctaj_5 = punctaj_5 - (5 + abs(rezultat_5 - pariu_5));
            }
        printf("\n");
        printf("JUCATOR 1: %d\n", punctaj_1);
        printf("JUCATOR 2: %d\n", punctaj_2);
        printf("JUCATOR 3: %d\n", punctaj_3);
        printf("JUCATOR 4: %d\n", punctaj_4);
        printf("JUCATOR 5: %d\n", punctaj_5);
        printf("\n");
        printf("\n");

printf("JOC DE 1 NR.3\n");
printf("\n");

    pariu_1 = 0, pariu_2 = 0, pariu_3 = 0, pariu_4 = 0, pariu_5 = 0;
        rezultat_1 = 0, rezultat_2 = 0, rezultat_3 = 0, rezultat_4 = 0, rezultat_5 = 0;
        printf("PARIU JUCATOR 4: ");
        scanf("%d", &aux4);
        printf("PARIU JUCATOR 5: ");
        scanf("%d", &aux5);
        printf("PARIU JUCATOR 1: ");
        scanf("%d", &aux1);
        printf("PARIU JUCATOR 2: ");
        scanf("%d", &aux2);
        printf("JUCATORUL 3 NU ARE VOIE SA PARIEZE %d\n", 1 - aux4 - aux5 - aux1 - aux2);
        printf("PARIU JUCATOR 3: ");
        scanf("%d", &aux3);
        pariu_1 = aux1;
        pariu_2 = aux2;
        pariu_3 = aux3;
        pariu_4 = aux4;
        pariu_5 = aux5;
        printf("\n");

        printf("PARIU 1: %d\n", pariu_1);
        printf("PARIU 2: %d\n", pariu_2);
        printf("PARIU 3: %d\n", pariu_3);
        printf("PARIU 4: %d\n", pariu_4);
        printf("PARIU 5: %d\n", pariu_5);

        printf("\n");
        printf("CINE IA MANA 1: ");
        scanf("%d", &mana1);
        if(mana1 == 1)
            rezultat_1++;
        else
            if(mana1 == 2)
                rezultat_2++;
            else
                if(mana1 == 3)
                    rezultat_3++;
                else
                    if(mana1 == 4)
                       rezultat_4++;
                    else
                        if(mana1 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("\n");

        if(rezultat_1 == pariu_1)
            {
                printf("JUCATORUL 1 SI-A FACUT MAINILE\n");
                punctaj_1 = punctaj_1 + (5 + pariu_1);
            }
        else
            {
                printf("JUCATORUL 1 S-A FRIPT CU %d\n", abs(rezultat_1 - pariu_1));
                punctaj_1 = punctaj_1 - (5 + abs(rezultat_1 - pariu_1));
            }

        if(rezultat_2 == pariu_2)
            {
                printf("JUCATORUL 2 SI-A FACUT MAINILE\n");
                punctaj_2 = punctaj_2 + (5 + pariu_2);
            }
        else
            {
                printf("JUCATORUL 2 S-A FRIPT CU %d\n", abs(rezultat_2 - pariu_2));
                punctaj_2 = punctaj_2 - (5 + abs(rezultat_2 - pariu_2));
            }
        if(rezultat_3 == pariu_3)
            {
                printf("JUCATORUL 3 SI-A FACUT MAINILE\n");
                punctaj_3 = punctaj_3 + (5 + pariu_3);
            }
        else
            {
                printf("JUCATORUL 3 S-A FRIPT CU %d\n", abs(rezultat_3 - pariu_3));
                punctaj_3 = punctaj_3 - (5 + abs(rezultat_3 - pariu_3));
            }
        if(rezultat_4 == pariu_4)
            {
                printf("JUCATORUL 4 SI-A FACUT MAINILE\n");
                punctaj_4 = punctaj_4 + (5 + pariu_4);
            }
        else
            {
                printf("JUCATORUL 4 S-A FRIPT CU %d\n", abs(rezultat_4 - pariu_4));
                punctaj_4 = punctaj_4 - (5 + abs(rezultat_4 - pariu_4));
            }
        if(rezultat_5 == pariu_5)
            {
                printf("JUCATORUL 5 SI-A FACUT MAINILE\n");
                punctaj_5 = punctaj_5 + (5 + pariu_5);
            }
        else
            {
                printf("JUCATORUL 5 S-A FRIPT CU %d\n", abs(rezultat_5 - pariu_5));
                punctaj_5 = punctaj_5 - (5 + abs(rezultat_5 - pariu_5));
            }
        printf("\n");
        printf("JUCATOR 1: %d\n", punctaj_1);
        printf("JUCATOR 2: %d\n", punctaj_2);
        printf("JUCATOR 3: %d\n", punctaj_3);
        printf("JUCATOR 4: %d\n", punctaj_4);
        printf("JUCATOR 5: %d\n", punctaj_5);
        printf("\n");
        printf("\n");

printf("JOC DE 1 NR.4\n");
printf("\n");

    pariu_1 = 0, pariu_2 = 0, pariu_3 = 0, pariu_4 = 0, pariu_5 = 0;
        rezultat_1 = 0, rezultat_2 = 0, rezultat_3 = 0, rezultat_4 = 0, rezultat_5 = 0;
        printf("PARIU JUCATOR 5: ");
        scanf("%d", &aux5);
        printf("PARIU JUCATOR 1: ");
        scanf("%d", &aux1);
        printf("PARIU JUCATOR 2: ");
        scanf("%d", &aux2);
        printf("PARIU JUCATOR 3: ");
        scanf("%d", &aux3);
        printf("JUCATORUL 4 NU ARE VOIE SA PARIEZE %d\n", 1 - aux5 - aux1 - aux2 - aux3);
        printf("PARIU JUCATOR 4: ");
        scanf("%d", &aux4);
        pariu_1 = aux1;
        pariu_2 = aux2;
        pariu_3 = aux3;
        pariu_4 = aux4;
        pariu_5 = aux5;
        printf("\n");

        printf("PARIU 1: %d\n", pariu_1);
        printf("PARIU 2: %d\n", pariu_2);
        printf("PARIU 3: %d\n", pariu_3);
        printf("PARIU 4: %d\n", pariu_4);
        printf("PARIU 5: %d\n", pariu_5);

        printf("\n");
        printf("CINE IA MANA 1: ");
        scanf("%d", &mana1);
        if(mana1 == 1)
            rezultat_1++;
        else
            if(mana1 == 2)
                rezultat_2++;
            else
                if(mana1 == 3)
                    rezultat_3++;
                else
                    if(mana1 == 4)
                       rezultat_4++;
                    else
                        if(mana1 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("\n");

        if(rezultat_1 == pariu_1)
            {
                printf("JUCATORUL 1 SI-A FACUT MAINILE\n");
                punctaj_1 = punctaj_1 + (5 + pariu_1);
            }
        else
            {
                printf("JUCATORUL 1 S-A FRIPT CU %d\n", abs(rezultat_1 - pariu_1));
                punctaj_1 = punctaj_1 - (5 + abs(rezultat_1 - pariu_1));
            }

        if(rezultat_2 == pariu_2)
            {
                printf("JUCATORUL 2 SI-A FACUT MAINILE\n");
                punctaj_2 = punctaj_2 + (5 + pariu_2);
            }
        else
            {
                printf("JUCATORUL 2 S-A FRIPT CU %d\n", abs(rezultat_2 - pariu_2));
                punctaj_2 = punctaj_2 - (5 + abs(rezultat_2 - pariu_2));
            }
        if(rezultat_3 == pariu_3)
            {
                printf("JUCATORUL 3 SI-A FACUT MAINILE\n");
                punctaj_3 = punctaj_3 + (5 + pariu_3);
            }
        else
            {
                printf("JUCATORUL 3 S-A FRIPT CU %d\n", abs(rezultat_3 - pariu_3));
                punctaj_3 = punctaj_3 - (5 + abs(rezultat_3 - pariu_3));
            }
        if(rezultat_4 == pariu_4)
            {
                printf("JUCATORUL 4 SI-A FACUT MAINILE\n");
                punctaj_4 = punctaj_4 + (5 + pariu_4);
            }
        else
            {
                printf("JUCATORUL 4 S-A FRIPT CU %d\n", abs(rezultat_4 - pariu_4));
                punctaj_4 = punctaj_4 - (5 + abs(rezultat_4 - pariu_4));
            }
        if(rezultat_5 == pariu_5)
            {
                printf("JUCATORUL 5 SI-A FACUT MAINILE\n");
                punctaj_5 = punctaj_5 + (5 + pariu_5);
            }
        else
            {
                printf("JUCATORUL 5 S-A FRIPT CU %d\n", abs(rezultat_5 - pariu_5));
                punctaj_5 = punctaj_5 - (5 + abs(rezultat_5 - pariu_5));
            }
        printf("\n");
        printf("JUCATOR 1: %d\n", punctaj_1);
        printf("JUCATOR 2: %d\n", punctaj_2);
        printf("JUCATOR 3: %d\n", punctaj_3);
        printf("JUCATOR 4: %d\n", punctaj_4);
        printf("JUCATOR 5: %d\n", punctaj_5);
        printf("\n");
        printf("\n");

printf("JOC DE 1 NR.5\n");
printf("\n");

    pariu_1 = 0, pariu_2 = 0, pariu_3 = 0, pariu_4 = 0, pariu_5 = 0;
        rezultat_1 = 0, rezultat_2 = 0, rezultat_3 = 0, rezultat_4 = 0, rezultat_5 = 0;
        printf("PARIU JUCATOR 1: ");
        scanf("%d", &aux1);
        printf("PARIU JUCATOR 2: ");
        scanf("%d", &aux2);
        printf("PARIU JUCATOR 3: ");
        scanf("%d", &aux3);
        printf("PARIU JUCATOR 4: ");
        scanf("%d", &aux4);
        printf("JUCATORUL 5 NU ARE VOIE SA PARIEZE %d\n", 1 - aux1 - aux2 - aux3 - aux4);
        printf("PARIU JUCATOR 5: ");
        scanf("%d", &aux5);
        pariu_1 = aux1;
        pariu_2 = aux2;
        pariu_3 = aux3;
        pariu_4 = aux4;
        pariu_5 = aux5;
        printf("\n");

        printf("PARIU 1: %d\n", pariu_1);
        printf("PARIU 2: %d\n", pariu_2);
        printf("PARIU 3: %d\n", pariu_3);
        printf("PARIU 4: %d\n", pariu_4);
        printf("PARIU 5: %d\n", pariu_5);

        printf("\n");
        printf("CINE IA MANA 1: ");
        scanf("%d", &mana1);
        if(mana1 == 1)
            rezultat_1++;
        else
            if(mana1 == 2)
                rezultat_2++;
            else
                if(mana1 == 3)
                    rezultat_3++;
                else
                    if(mana1 == 4)
                       rezultat_4++;
                    else
                        if(mana1 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("\n");

        if(rezultat_1 == pariu_1)
            {
                printf("JUCATORUL 1 SI-A FACUT MAINILE\n");
                punctaj_1 = punctaj_1 + (5 + pariu_1);
            }
        else
            {
                printf("JUCATORUL 1 S-A FRIPT CU %d\n", abs(rezultat_1 - pariu_1));
                punctaj_1 = punctaj_1 - (5 + abs(rezultat_1 - pariu_1));
            }

        if(rezultat_2 == pariu_2)
            {
                printf("JUCATORUL 2 SI-A FACUT MAINILE\n");
                punctaj_2 = punctaj_2 + (5 + pariu_2);
            }
        else
            {
                printf("JUCATORUL 2 S-A FRIPT CU %d\n", abs(rezultat_2 - pariu_2));
                punctaj_2 = punctaj_2 - (5 + abs(rezultat_2 - pariu_2));
            }
        if(rezultat_3 == pariu_3)
            {
                printf("JUCATORUL 3 SI-A FACUT MAINILE\n");
                punctaj_3 = punctaj_3 + (5 + pariu_3);
            }
        else
            {
                printf("JUCATORUL 3 S-A FRIPT CU %d\n", abs(rezultat_3 - pariu_3));
                punctaj_3 = punctaj_3 - (5 + abs(rezultat_3 - pariu_3));
            }
        if(rezultat_4 == pariu_4)
            {
                printf("JUCATORUL 4 SI-A FACUT MAINILE\n");
                punctaj_4 = punctaj_4 + (5 + pariu_4);
            }
        else
            {
                printf("JUCATORUL 4 S-A FRIPT CU %d\n", abs(rezultat_4 - pariu_4));
                punctaj_4 = punctaj_4 - (5 + abs(rezultat_4 - pariu_4));
            }
        if(rezultat_5 == pariu_5)
            {
                printf("JUCATORUL 5 SI-A FACUT MAINILE\n");
                punctaj_5 = punctaj_5 + (5 + pariu_5);
            }
        else
            {
                printf("JUCATORUL 5 S-A FRIPT CU %d\n", abs(rezultat_5 - pariu_5));
                punctaj_5 = punctaj_5 - (5 + abs(rezultat_5 - pariu_5));
            }
        printf("\n");
        printf("JUCATOR 1: %d\n", punctaj_1);
        printf("JUCATOR 2: %d\n", punctaj_2);
        printf("JUCATOR 3: %d\n", punctaj_3);
        printf("JUCATOR 4: %d\n", punctaj_4);
        printf("JUCATOR 5: %d\n", punctaj_5);
        printf("\n");
        printf("\n");

printf("JOC DE 2\n");
printf("\n");

    pariu_1 = 0, pariu_2 = 0, pariu_3 = 0, pariu_4 = 0, pariu_5 = 0;
        rezultat_1 = 0, rezultat_2 = 0, rezultat_3 = 0, rezultat_4 = 0, rezultat_5 = 0;
        printf("PARIU JUCATOR 2: ");
        scanf("%d", &aux2);
        printf("PARIU JUCATOR 3: ");
        scanf("%d", &aux3);
        printf("PARIU JUCATOR 4: ");
        scanf("%d", &aux4);
        printf("PARIU JUCATOR 5: ");
        scanf("%d", &aux5);
        printf("JUCATORUL 1 NU ARE VOIE SA PARIEZE %d\n", 2 - aux2 - aux3 - aux4 - aux5);
        printf("PARIU JUCATOR 1: ");
        scanf("%d", &aux1);
        pariu_1 = aux1;
        pariu_2 = aux2;
        pariu_3 = aux3;
        pariu_4 = aux4;
        pariu_5 = aux5;
        printf("\n");

        printf("PARIU 1: %d\n", pariu_1);
        printf("PARIU 2: %d\n", pariu_2);
        printf("PARIU 3: %d\n", pariu_3);
        printf("PARIU 4: %d\n", pariu_4);
        printf("PARIU 5: %d\n", pariu_5);

        printf("\n");
        printf("CINE IA MANA 1: ");
        scanf("%d", &mana1);
        if(mana1 == 1)
            rezultat_1++;
        else
            if(mana1 == 2)
                rezultat_2++;
            else
                if(mana1 == 3)
                    rezultat_3++;
                else
                    if(mana1 == 4)
                       rezultat_4++;
                    else
                        if(mana1 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
    printf("CINE IA MANA 2: ");
        scanf("%d", &mana2);
        if(mana2 == 1)
            rezultat_1++;
        else
            if(mana2 == 2)
                rezultat_2++;
            else
                if(mana2 == 3)
                    rezultat_3++;
                else
                    if(mana2 == 4)
                       rezultat_4++;
                    else
                        if(mana2 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("\n");

        if(rezultat_1 == pariu_1)
            {
                printf("JUCATORUL 1 SI-A FACUT MAINILE\n");
                punctaj_1 = punctaj_1 + (5 + pariu_1);
            }
        else
            {
                printf("JUCATORUL 1 S-A FRIPT CU %d\n", abs(rezultat_1 - pariu_1));
                punctaj_1 = punctaj_1 - (5 + abs(rezultat_1 - pariu_1));
            }

        if(rezultat_2 == pariu_2)
            {
                printf("JUCATORUL 2 SI-A FACUT MAINILE\n");
                punctaj_2 = punctaj_2 + (5 + pariu_2);
            }
        else
            {
                printf("JUCATORUL 2 S-A FRIPT CU %d\n", abs(rezultat_2 - pariu_2));
                punctaj_2 = punctaj_2 - (5 + abs(rezultat_2 - pariu_2));
            }
        if(rezultat_3 == pariu_3)
            {
                printf("JUCATORUL 3 SI-A FACUT MAINILE\n");
                punctaj_3 = punctaj_3 + (5 + pariu_3);
            }
        else
            {
                printf("JUCATORUL 3 S-A FRIPT CU %d\n", abs(rezultat_3 - pariu_3));
                punctaj_3 = punctaj_3 - (5 + abs(rezultat_3 - pariu_3));
            }
        if(rezultat_4 == pariu_4)
            {
                printf("JUCATORUL 4 SI-A FACUT MAINILE\n");
                punctaj_4 = punctaj_4 + (5 + pariu_4);
            }
        else
            {
                printf("JUCATORUL 4 S-A FRIPT CU %d\n", abs(rezultat_4 - pariu_4));
                punctaj_4 = punctaj_4 - (5 + abs(rezultat_4 - pariu_4));
            }
        if(rezultat_5 == pariu_5)
            {
                printf("JUCATORUL 5 SI-A FACUT MAINILE\n");
                punctaj_5 = punctaj_5 + (5 + pariu_5);
            }
        else
            {
                printf("JUCATORUL 5 S-A FRIPT CU %d\n", abs(rezultat_5 - pariu_5));
                punctaj_5 = punctaj_5 - (5 + abs(rezultat_5 - pariu_5));
            }
        printf("\n");
        printf("JUCATOR 1: %d\n", punctaj_1);
        printf("JUCATOR 2: %d\n", punctaj_2);
        printf("JUCATOR 3: %d\n", punctaj_3);
        printf("JUCATOR 4: %d\n", punctaj_4);
        printf("JUCATOR 5: %d\n", punctaj_5);
        printf("\n");
        printf("\n");

printf("JOC DE 3\n");
printf("\n");

    pariu_1 = 0, pariu_2 = 0, pariu_3 = 0, pariu_4 = 0, pariu_5 = 0;
        rezultat_1 = 0, rezultat_2 = 0, rezultat_3 = 0, rezultat_4 = 0, rezultat_5 = 0;
        printf("PARIU JUCATOR 3: ");
        scanf("%d", &aux3);
        printf("PARIU JUCATOR 4: ");
        scanf("%d", &aux4);
        printf("PARIU JUCATOR 5: ");
        scanf("%d", &aux5);
        printf("PARIU JUCATOR 1: ");
        scanf("%d", &aux1);
        printf("JUCATORUL 2 NU ARE VOIE SA PARIEZE %d\n", 3 - aux3 - aux4 - aux5 - aux1);
        printf("PARIU JUCATOR 2: ");
        scanf("%d", &aux2);
        pariu_1 = aux1;
        pariu_2 = aux2;
        pariu_3 = aux3;
        pariu_4 = aux4;
        pariu_5 = aux5;
        printf("\n");

        printf("PARIU 1: %d\n", pariu_1);
        printf("PARIU 2: %d\n", pariu_2);
        printf("PARIU 3: %d\n", pariu_3);
        printf("PARIU 4: %d\n", pariu_4);
        printf("PARIU 5: %d\n", pariu_5);

        printf("\n");
        printf("CINE IA MANA 1: ");
        scanf("%d", &mana1);
        if(mana1 == 1)
            rezultat_1++;
        else
            if(mana1 == 2)
                rezultat_2++;
            else
                if(mana1 == 3)
                    rezultat_3++;
                else
                    if(mana1 == 4)
                       rezultat_4++;
                    else
                        if(mana1 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
    printf("CINE IA MANA 2: ");
        scanf("%d", &mana2);
        if(mana2 == 1)
            rezultat_1++;
        else
            if(mana2 == 2)
                rezultat_2++;
            else
                if(mana2 == 3)
                    rezultat_3++;
                else
                    if(mana2 == 4)
                       rezultat_4++;
                    else
                        if(mana2 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
    printf("CINE IA MANA 3: ");
        scanf("%d", &mana3);
        if(mana3 == 1)
            rezultat_1++;
        else
            if(mana3 == 2)
                rezultat_2++;
            else
                if(mana3 == 3)
                    rezultat_3++;
                else
                    if(mana3 == 4)
                       rezultat_4++;
                    else
                        if(mana3 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("\n");

        if(rezultat_1 == pariu_1)
            {
                printf("JUCATORUL 1 SI-A FACUT MAINILE\n");
                punctaj_1 = punctaj_1 + (5 + pariu_1);
            }
        else
            {
                printf("JUCATORUL 1 S-A FRIPT CU %d\n", abs(rezultat_1 - pariu_1));
                punctaj_1 = punctaj_1 - (5 + abs(rezultat_1 - pariu_1));
            }

        if(rezultat_2 == pariu_2)
            {
                printf("JUCATORUL 2 SI-A FACUT MAINILE\n");
                punctaj_2 = punctaj_2 + (5 + pariu_2);
            }
        else
            {
                printf("JUCATORUL 2 S-A FRIPT CU %d\n", abs(rezultat_2 - pariu_2));
                punctaj_2 = punctaj_2 - (5 + abs(rezultat_2 - pariu_2));
            }
        if(rezultat_3 == pariu_3)
            {
                printf("JUCATORUL 3 SI-A FACUT MAINILE\n");
                punctaj_3 = punctaj_3 + (5 + pariu_3);
            }
        else
            {
                printf("JUCATORUL 3 S-A FRIPT CU %d\n", abs(rezultat_3 - pariu_3));
                punctaj_3 = punctaj_3 - (5 + abs(rezultat_3 - pariu_3));
            }
        if(rezultat_4 == pariu_4)
            {
                printf("JUCATORUL 4 SI-A FACUT MAINILE\n");
                punctaj_4 = punctaj_4 + (5 + pariu_4);
            }
        else
            {
                printf("JUCATORUL 4 S-A FRIPT CU %d\n", abs(rezultat_4 - pariu_4));
                punctaj_4 = punctaj_4 - (5 + abs(rezultat_4 - pariu_4));
            }
        if(rezultat_5 == pariu_5)
            {
                printf("JUCATORUL 5 SI-A FACUT MAINILE\n");
                punctaj_5 = punctaj_5 + (5 + pariu_5);
            }
        else
            {
                printf("JUCATORUL 5 S-A FRIPT CU %d\n", abs(rezultat_5 - pariu_5));
                punctaj_5 = punctaj_5 - (5 + abs(rezultat_5 - pariu_5));
            }
        printf("\n");
        printf("JUCATOR 1: %d\n", punctaj_1);
        printf("JUCATOR 2: %d\n", punctaj_2);
        printf("JUCATOR 3: %d\n", punctaj_3);
        printf("JUCATOR 4: %d\n", punctaj_4);
        printf("JUCATOR 5: %d\n", punctaj_5);
        printf("\n");
        printf("\n");

printf("JOC DE 4\n");
printf("\n");

    pariu_1 = 0, pariu_2 = 0, pariu_3 = 0, pariu_4 = 0, pariu_5 = 0;
        rezultat_1 = 0, rezultat_2 = 0, rezultat_3 = 0, rezultat_4 = 0, rezultat_5 = 0;
        printf("PARIU JUCATOR 4: ");
        scanf("%d", &aux4);
        printf("PARIU JUCATOR 5: ");
        scanf("%d", &aux5);
        printf("PARIU JUCATOR 1: ");
        scanf("%d", &aux1);
        printf("PARIU JUCATOR 2: ");
        scanf("%d", &aux2);
        printf("JUCATORUL 3 NU ARE VOIE SA PARIEZE %d\n", 4 - aux4 - aux5 - aux1 - aux2);
        printf("PARIU JUCATOR 3: ");
        scanf("%d", &aux3);
        pariu_1 = aux1;
        pariu_2 = aux2;
        pariu_3 = aux3;
        pariu_4 = aux4;
        pariu_5 = aux5;
        printf("\n");

        printf("PARIU 1: %d\n", pariu_1);
        printf("PARIU 2: %d\n", pariu_2);
        printf("PARIU 3: %d\n", pariu_3);
        printf("PARIU 4: %d\n", pariu_4);
        printf("PARIU 5: %d\n", pariu_5);

        printf("\n");
        printf("CINE IA MANA 1: ");
        scanf("%d", &mana1);
        if(mana1 == 1)
            rezultat_1++;
        else
            if(mana1 == 2)
                rezultat_2++;
            else
                if(mana1 == 3)
                    rezultat_3++;
                else
                    if(mana1 == 4)
                       rezultat_4++;
                    else
                        if(mana1 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
    printf("CINE IA MANA 2: ");
        scanf("%d", &mana2);
        if(mana2 == 1)
            rezultat_1++;
        else
            if(mana2 == 2)
                rezultat_2++;
            else
                if(mana2 == 3)
                    rezultat_3++;
                else
                    if(mana2 == 4)
                       rezultat_4++;
                    else
                        if(mana2 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
    printf("CINE IA MANA 3: ");
        scanf("%d", &mana3);
        if(mana3 == 1)
            rezultat_1++;
        else
            if(mana3 == 2)
                rezultat_2++;
            else
                if(mana3 == 3)
                    rezultat_3++;
                else
                    if(mana3 == 4)
                       rezultat_4++;
                    else
                        if(mana3 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
    printf("CINE IA MANA 4: ");
        scanf("%d", &mana4);
        if(mana4 == 1)
            rezultat_1++;
        else
            if(mana4 == 2)
                rezultat_2++;
            else
                if(mana4 == 3)
                    rezultat_3++;
                else
                    if(mana4 == 4)
                       rezultat_4++;
                    else
                        if(mana4 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("\n");

        if(rezultat_1 == pariu_1)
            {
                printf("JUCATORUL 1 SI-A FACUT MAINILE\n");
                punctaj_1 = punctaj_1 + (5 + pariu_1);
            }
        else
            {
                printf("JUCATORUL 1 S-A FRIPT CU %d\n", abs(rezultat_1 - pariu_1));
                punctaj_1 = punctaj_1 - (5 + abs(rezultat_1 - pariu_1));
            }

        if(rezultat_2 == pariu_2)
            {
                printf("JUCATORUL 2 SI-A FACUT MAINILE\n");
                punctaj_2 = punctaj_2 + (5 + pariu_2);
            }
        else
            {
                printf("JUCATORUL 2 S-A FRIPT CU %d\n", abs(rezultat_2 - pariu_2));
                punctaj_2 = punctaj_2 - (5 + abs(rezultat_2 - pariu_2));
            }
        if(rezultat_3 == pariu_3)
            {
                printf("JUCATORUL 3 SI-A FACUT MAINILE\n");
                punctaj_3 = punctaj_3 + (5 + pariu_3);
            }
        else
            {
                printf("JUCATORUL 3 S-A FRIPT CU %d\n", abs(rezultat_3 - pariu_3));
                punctaj_3 = punctaj_3 - (5 + abs(rezultat_3 - pariu_3));
            }
        if(rezultat_4 == pariu_4)
            {
                printf("JUCATORUL 4 SI-A FACUT MAINILE\n");
                punctaj_4 = punctaj_4 + (5 + pariu_4);
            }
        else
            {
                printf("JUCATORUL 4 S-A FRIPT CU %d\n", abs(rezultat_4 - pariu_4));
                punctaj_4 = punctaj_4 - (5 + abs(rezultat_4 - pariu_4));
            }
        if(rezultat_5 == pariu_5)
            {
                printf("JUCATORUL 5 SI-A FACUT MAINILE\n");
                punctaj_5 = punctaj_5 + (5 + pariu_5);
            }
        else
            {
                printf("JUCATORUL 5 S-A FRIPT CU %d\n", abs(rezultat_5 - pariu_5));
                punctaj_5 = punctaj_5 - (5 + abs(rezultat_5 - pariu_5));
            }
        printf("\n");
        printf("JUCATOR 1: %d\n", punctaj_1);
        printf("JUCATOR 2: %d\n", punctaj_2);
        printf("JUCATOR 3: %d\n", punctaj_3);
        printf("JUCATOR 4: %d\n", punctaj_4);
        printf("JUCATOR 5: %d\n", punctaj_5);
        printf("\n");
        printf("\n");

printf("JOC DE 5\n");
printf("\n");

    pariu_1 = 0, pariu_2 = 0, pariu_3 = 0, pariu_4 = 0, pariu_5 = 0;
        rezultat_1 = 0, rezultat_2 = 0, rezultat_3 = 0, rezultat_4 = 0, rezultat_5 = 0;
        printf("PARIU JUCATOR 5: ");
        scanf("%d", &aux5);
        printf("PARIU JUCATOR 1: ");
        scanf("%d", &aux1);
        printf("PARIU JUCATOR 2: ");
        scanf("%d", &aux2);
        printf("PARIU JUCATOR 3: ");
        scanf("%d", &aux3);
        printf("JUCATORUL 4 NU ARE VOIE SA PARIEZE %d\n", 5 - aux5 - aux1 - aux2 - aux3);
        printf("PARIU JUCATOR 4: ");
        scanf("%d", &aux4);
        pariu_1 = aux1;
        pariu_2 = aux2;
        pariu_3 = aux3;
        pariu_4 = aux4;
        pariu_5 = aux5;
        printf("\n");

        printf("PARIU 1: %d\n", pariu_1);
        printf("PARIU 2: %d\n", pariu_2);
        printf("PARIU 3: %d\n", pariu_3);
        printf("PARIU 4: %d\n", pariu_4);
        printf("PARIU 5: %d\n", pariu_5);

        printf("\n");
        printf("CINE IA MANA 1: ");
        scanf("%d", &mana1);
        if(mana1 == 1)
            rezultat_1++;
        else
            if(mana1 == 2)
                rezultat_2++;
            else
                if(mana1 == 3)
                    rezultat_3++;
                else
                    if(mana1 == 4)
                       rezultat_4++;
                    else
                        if(mana1 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
    printf("CINE IA MANA 2: ");
        scanf("%d", &mana2);
        if(mana2 == 1)
            rezultat_1++;
        else
            if(mana2 == 2)
                rezultat_2++;
            else
                if(mana2 == 3)
                    rezultat_3++;
                else
                    if(mana2 == 4)
                       rezultat_4++;
                    else
                        if(mana2 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
    printf("CINE IA MANA 3: ");
        scanf("%d", &mana3);
        if(mana3 == 1)
            rezultat_1++;
        else
            if(mana3 == 2)
                rezultat_2++;
            else
                if(mana3 == 3)
                    rezultat_3++;
                else
                    if(mana3 == 4)
                       rezultat_4++;
                    else
                        if(mana3 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
    printf("CINE IA MANA 4: ");
        scanf("%d", &mana4);
        if(mana4 == 1)
            rezultat_1++;
        else
            if(mana4 == 2)
                rezultat_2++;
            else
                if(mana4 == 3)
                    rezultat_3++;
                else
                    if(mana4 == 4)
                       rezultat_4++;
                    else
                        if(mana4 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
    printf("CINE IA MANA 5: ");
        scanf("%d", &mana5);
        if(mana5 == 1)
            rezultat_1++;
        else
            if(mana5 == 2)
                rezultat_2++;
            else
                if(mana5 == 3)
                    rezultat_3++;
                else
                    if(mana5 == 4)
                       rezultat_4++;
                    else
                        if(mana5 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("\n");

        if(rezultat_1 == pariu_1)
            {
                printf("JUCATORUL 1 SI-A FACUT MAINILE\n");
                punctaj_1 = punctaj_1 + (5 + pariu_1);
            }
        else
            {
                printf("JUCATORUL 1 S-A FRIPT CU %d\n", abs(rezultat_1 - pariu_1));
                punctaj_1 = punctaj_1 - (5 + abs(rezultat_1 - pariu_1));
            }

        if(rezultat_2 == pariu_2)
            {
                printf("JUCATORUL 2 SI-A FACUT MAINILE\n");
                punctaj_2 = punctaj_2 + (5 + pariu_2);
            }
        else
            {
                printf("JUCATORUL 2 S-A FRIPT CU %d\n", abs(rezultat_2 - pariu_2));
                punctaj_2 = punctaj_2 - (5 + abs(rezultat_2 - pariu_2));
            }
        if(rezultat_3 == pariu_3)
            {
                printf("JUCATORUL 3 SI-A FACUT MAINILE\n");
                punctaj_3 = punctaj_3 + (5 + pariu_3);
            }
        else
            {
                printf("JUCATORUL 3 S-A FRIPT CU %d\n", abs(rezultat_3 - pariu_3));
                punctaj_3 = punctaj_3 - (5 + abs(rezultat_3 - pariu_3));
            }
        if(rezultat_4 == pariu_4)
            {
                printf("JUCATORUL 4 SI-A FACUT MAINILE\n");
                punctaj_4 = punctaj_4 + (5 + pariu_4);
            }
        else
            {
                printf("JUCATORUL 4 S-A FRIPT CU %d\n", abs(rezultat_4 - pariu_4));
                punctaj_4 = punctaj_4 - (5 + abs(rezultat_4 - pariu_4));
            }
        if(rezultat_5 == pariu_5)
            {
                printf("JUCATORUL 5 SI-A FACUT MAINILE\n");
                punctaj_5 = punctaj_5 + (5 + pariu_5);
            }
        else
            {
                printf("JUCATORUL 5 S-A FRIPT CU %d\n", abs(rezultat_5 - pariu_5));
                punctaj_5 = punctaj_5 - (5 + abs(rezultat_5 - pariu_5));
            }
        printf("\n");
        printf("JUCATOR 1: %d\n", punctaj_1);
        printf("JUCATOR 2: %d\n", punctaj_2);
        printf("JUCATOR 3: %d\n", punctaj_3);
        printf("JUCATOR 4: %d\n", punctaj_4);
        printf("JUCATOR 5: %d\n", punctaj_5);
        printf("\n");
        printf("\n");

printf("JOC DE 6\n");
printf("\n");

    pariu_1 = 0, pariu_2 = 0, pariu_3 = 0, pariu_4 = 0, pariu_5 = 0;
        rezultat_1 = 0, rezultat_2 = 0, rezultat_3 = 0, rezultat_4 = 0, rezultat_5 = 0;
        printf("PARIU JUCATOR 1: ");
        scanf("%d", &aux1);
        printf("PARIU JUCATOR 2: ");
        scanf("%d", &aux2);
        printf("PARIU JUCATOR 3: ");
        scanf("%d", &aux3);
        printf("PARIU JUCATOR 4: ");
        scanf("%d", &aux4);
        printf("JUCATORUL 5 NU ARE VOIE SA PARIEZE %d\n", 6 - aux1 - aux2 - aux3 - aux4);
        printf("PARIU JUCATOR 5: ");
        scanf("%d", &aux5);
        pariu_1 = aux1;
        pariu_2 = aux2;
        pariu_3 = aux3;
        pariu_4 = aux4;
        pariu_5 = aux5;
        printf("\n");

        printf("PARIU 1: %d\n", pariu_1);
        printf("PARIU 2: %d\n", pariu_2);
        printf("PARIU 3: %d\n", pariu_3);
        printf("PARIU 4: %d\n", pariu_4);
        printf("PARIU 5: %d\n", pariu_5);

        printf("\n");
        printf("CINE IA MANA 1: ");
        scanf("%d", &mana1);
        if(mana1 == 1)
            rezultat_1++;
        else
            if(mana1 == 2)
                rezultat_2++;
            else
                if(mana1 == 3)
                    rezultat_3++;
                else
                    if(mana1 == 4)
                       rezultat_4++;
                    else
                        if(mana1 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
    printf("CINE IA MANA 2: ");
        scanf("%d", &mana2);
        if(mana2 == 1)
            rezultat_1++;
        else
            if(mana2 == 2)
                rezultat_2++;
            else
                if(mana2 == 3)
                    rezultat_3++;
                else
                    if(mana2 == 4)
                       rezultat_4++;
                    else
                        if(mana2 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
    printf("CINE IA MANA 3: ");
        scanf("%d", &mana3);
        if(mana3 == 1)
            rezultat_1++;
        else
            if(mana3 == 2)
                rezultat_2++;
            else
                if(mana3 == 3)
                    rezultat_3++;
                else
                    if(mana3 == 4)
                       rezultat_4++;
                    else
                        if(mana3 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
    printf("CINE IA MANA 4: ");
        scanf("%d", &mana4);
        if(mana4 == 1)
            rezultat_1++;
        else
            if(mana4 == 2)
                rezultat_2++;
            else
                if(mana4 == 3)
                    rezultat_3++;
                else
                    if(mana4 == 4)
                       rezultat_4++;
                    else
                        if(mana4 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
    printf("CINE IA MANA 5: ");
        scanf("%d", &mana5);
        if(mana5 == 1)
            rezultat_1++;
        else
            if(mana5 == 2)
                rezultat_2++;
            else
                if(mana5 == 3)
                    rezultat_3++;
                else
                    if(mana5 == 4)
                       rezultat_4++;
                    else
                        if(mana5 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
    printf("CINE IA MANA 6: ");
        scanf("%d", &mana6);
        if(mana6 == 1)
            rezultat_1++;
        else
            if(mana6 == 2)
                rezultat_2++;
            else
                if(mana6 == 3)
                    rezultat_3++;
                else
                    if(mana6 == 4)
                       rezultat_4++;
                    else
                        if(mana6 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("\n");

        if(rezultat_1 == pariu_1)
            {
                printf("JUCATORUL 1 SI-A FACUT MAINILE\n");
                punctaj_1 = punctaj_1 + (5 + pariu_1);
            }
        else
            {
                printf("JUCATORUL 1 S-A FRIPT CU %d\n", abs(rezultat_1 - pariu_1));
                punctaj_1 = punctaj_1 - (5 + abs(rezultat_1 - pariu_1));
            }

        if(rezultat_2 == pariu_2)
            {
                printf("JUCATORUL 2 SI-A FACUT MAINILE\n");
                punctaj_2 = punctaj_2 + (5 + pariu_2);
            }
        else
            {
                printf("JUCATORUL 2 S-A FRIPT CU %d\n", abs(rezultat_2 - pariu_2));
                punctaj_2 = punctaj_2 - (5 + abs(rezultat_2 - pariu_2));
            }
        if(rezultat_3 == pariu_3)
            {
                printf("JUCATORUL 3 SI-A FACUT MAINILE\n");
                punctaj_3 = punctaj_3 + (5 + pariu_3);
            }
        else
            {
                printf("JUCATORUL 3 S-A FRIPT CU %d\n", abs(rezultat_3 - pariu_3));
                punctaj_3 = punctaj_3 - (5 + abs(rezultat_3 - pariu_3));
            }
        if(rezultat_4 == pariu_4)
            {
                printf("JUCATORUL 4 SI-A FACUT MAINILE\n");
                punctaj_4 = punctaj_4 + (5 + pariu_4);
            }
        else
            {
                printf("JUCATORUL 4 S-A FRIPT CU %d\n", abs(rezultat_4 - pariu_4));
                punctaj_4 = punctaj_4 - (5 + abs(rezultat_4 - pariu_4));
            }
        if(rezultat_5 == pariu_5)
            {
                printf("JUCATORUL 5 SI-A FACUT MAINILE\n");
                punctaj_5 = punctaj_5 + (5 + pariu_5);
            }
        else
            {
                printf("JUCATORUL 5 S-A FRIPT CU %d\n", abs(rezultat_5 - pariu_5));
                punctaj_5 = punctaj_5 - (5 + abs(rezultat_5 - pariu_5));
            }
        printf("\n");
        printf("JUCATOR 1: %d\n", punctaj_1);
        printf("JUCATOR 2: %d\n", punctaj_2);
        printf("JUCATOR 3: %d\n", punctaj_3);
        printf("JUCATOR 4: %d\n", punctaj_4);
        printf("JUCATOR 5: %d\n", punctaj_5);
        printf("\n");
        printf("\n");

printf("JOC DE 7\n");
printf("\n");

    pariu_1 = 0, pariu_2 = 0, pariu_3 = 0, pariu_4 = 0, pariu_5 = 0;
        rezultat_1 = 0, rezultat_2 = 0, rezultat_3 = 0, rezultat_4 = 0, rezultat_5 = 0;
        printf("PARIU JUCATOR 2: ");
        scanf("%d", &aux2);
        printf("PARIU JUCATOR 3: ");
        scanf("%d", &aux3);
        printf("PARIU JUCATOR 4: ");
        scanf("%d", &aux4);
        printf("PARIU JUCATOR 5: ");
        scanf("%d", &aux5);
        printf("JUCATORUL 1 NU ARE VOIE SA PARIEZE %d\n", 7 - aux2 - aux3 - aux4 - aux5);
        printf("PARIU JUCATOR 1: ");
        scanf("%d", &aux1);
        pariu_1 = aux1;
        pariu_2 = aux2;
        pariu_3 = aux3;
        pariu_4 = aux4;
        pariu_5 = aux5;
        printf("\n");

        printf("PARIU 1: %d\n", pariu_1);
        printf("PARIU 2: %d\n", pariu_2);
        printf("PARIU 3: %d\n", pariu_3);
        printf("PARIU 4: %d\n", pariu_4);
        printf("PARIU 5: %d\n", pariu_5);

        printf("\n");
        printf("CINE IA MANA 1: ");
        scanf("%d", &mana1);
        if(mana1 == 1)
            rezultat_1++;
        else
            if(mana1 == 2)
                rezultat_2++;
            else
                if(mana1 == 3)
                    rezultat_3++;
                else
                    if(mana1 == 4)
                       rezultat_4++;
                    else
                        if(mana1 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
    printf("CINE IA MANA 2: ");
        scanf("%d", &mana2);
        if(mana2 == 1)
            rezultat_1++;
        else
            if(mana2 == 2)
                rezultat_2++;
            else
                if(mana2 == 3)
                    rezultat_3++;
                else
                    if(mana2 == 4)
                       rezultat_4++;
                    else
                        if(mana2 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
    printf("CINE IA MANA 3: ");
        scanf("%d", &mana3);
        if(mana3 == 1)
            rezultat_1++;
        else
            if(mana3 == 2)
                rezultat_2++;
            else
                if(mana3 == 3)
                    rezultat_3++;
                else
                    if(mana3 == 4)
                       rezultat_4++;
                    else
                        if(mana3 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
    printf("CINE IA MANA 4: ");
        scanf("%d", &mana4);
        if(mana4 == 1)
            rezultat_1++;
        else
            if(mana4 == 2)
                rezultat_2++;
            else
                if(mana4 == 3)
                    rezultat_3++;
                else
                    if(mana4 == 4)
                       rezultat_4++;
                    else
                        if(mana4 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
    printf("CINE IA MANA 5: ");
        scanf("%d", &mana5);
        if(mana5 == 1)
            rezultat_1++;
        else
            if(mana5 == 2)
                rezultat_2++;
            else
                if(mana5 == 3)
                    rezultat_3++;
                else
                    if(mana5 == 4)
                       rezultat_4++;
                    else
                        if(mana5 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
    printf("CINE IA MANA 6: ");
        scanf("%d", &mana6);
        if(mana6 == 1)
            rezultat_1++;
        else
            if(mana6 == 2)
                rezultat_2++;
            else
                if(mana6 == 3)
                    rezultat_3++;
                else
                    if(mana6 == 4)
                       rezultat_4++;
                    else
                        if(mana6 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
    printf("CINE IA MANA 7: ");
        scanf("%d", &mana7);
        if(mana7 == 1)
            rezultat_1++;
        else
            if(mana7 == 2)
                rezultat_2++;
            else
                if(mana7 == 3)
                    rezultat_3++;
                else
                    if(mana7 == 4)
                       rezultat_4++;
                    else
                        if(mana7 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("\n");

        if(rezultat_1 == pariu_1)
            {
                printf("JUCATORUL 1 SI-A FACUT MAINILE\n");
                punctaj_1 = punctaj_1 + (5 + pariu_1);
            }
        else
            {
                printf("JUCATORUL 1 S-A FRIPT CU %d\n", abs(rezultat_1 - pariu_1));
                punctaj_1 = punctaj_1 - (5 + abs(rezultat_1 - pariu_1));
            }

        if(rezultat_2 == pariu_2)
            {
                printf("JUCATORUL 2 SI-A FACUT MAINILE\n");
                punctaj_2 = punctaj_2 + (5 + pariu_2);
            }
        else
            {
                printf("JUCATORUL 2 S-A FRIPT CU %d\n", abs(rezultat_2 - pariu_2));
                punctaj_2 = punctaj_2 - (5 + abs(rezultat_2 - pariu_2));
            }
        if(rezultat_3 == pariu_3)
            {
                printf("JUCATORUL 3 SI-A FACUT MAINILE\n");
                punctaj_3 = punctaj_3 + (5 + pariu_3);
            }
        else
            {
                printf("JUCATORUL 3 S-A FRIPT CU %d\n", abs(rezultat_3 - pariu_3));
                punctaj_3 = punctaj_3 - (5 + abs(rezultat_3 - pariu_3));
            }
        if(rezultat_4 == pariu_4)
            {
                printf("JUCATORUL 4 SI-A FACUT MAINILE\n");
                punctaj_4 = punctaj_4 + (5 + pariu_4);
            }
        else
            {
                printf("JUCATORUL 4 S-A FRIPT CU %d\n", abs(rezultat_4 - pariu_4));
                punctaj_4 = punctaj_4 - (5 + abs(rezultat_4 - pariu_4));
            }
        if(rezultat_5 == pariu_5)
            {
                printf("JUCATORUL 5 SI-A FACUT MAINILE\n");
                punctaj_5 = punctaj_5 + (5 + pariu_5);
            }
        else
            {
                printf("JUCATORUL 5 S-A FRIPT CU %d\n", abs(rezultat_5 - pariu_5));
                punctaj_5 = punctaj_5 - (5 + abs(rezultat_5 - pariu_5));
            }
        printf("\n");
        printf("JUCATOR 1: %d\n", punctaj_1);
        printf("JUCATOR 2: %d\n", punctaj_2);
        printf("JUCATOR 3: %d\n", punctaj_3);
        printf("JUCATOR 4: %d\n", punctaj_4);
        printf("JUCATOR 5: %d\n", punctaj_5);
        printf("\n");
        printf("\n");

printf("JOC DE 8 NR.1\n");
printf("\n");

    pariu_1 = 0, pariu_2 = 0, pariu_3 = 0, pariu_4 = 0, pariu_5 = 0;
        rezultat_1 = 0, rezultat_2 = 0, rezultat_3 = 0, rezultat_4 = 0, rezultat_5 = 0;
        printf("PARIU JUCATOR 3: ");
        scanf("%d", &aux3);
        printf("PARIU JUCATOR 4: ");
        scanf("%d", &aux4);
        printf("PARIU JUCATOR 5: ");
        scanf("%d", &aux5);
        printf("PARIU JUCATOR 1: ");
        scanf("%d", &aux1);
        printf("JUCATORUL 2 NU ARE VOIE SA PARIEZE %d\n", 8 - aux3 - aux4 - aux5 - aux1);
        printf("PARIU JUCATOR 2: ");
        scanf("%d", &aux2);
        pariu_1 = aux1;
        pariu_2 = aux2;
        pariu_3 = aux3;
        pariu_4 = aux4;
        pariu_5 = aux5;
        printf("\n");

        printf("PARIU 1: %d\n", pariu_1);
        printf("PARIU 2: %d\n", pariu_2);
        printf("PARIU 3: %d\n", pariu_3);
        printf("PARIU 4: %d\n", pariu_4);
        printf("PARIU 5: %d\n", pariu_5);

        printf("\n");
        printf("CINE IA MANA 1: ");
        scanf("%d", &mana1);
        if(mana1 == 1)
            rezultat_1++;
        else
            if(mana1 == 2)
                rezultat_2++;
            else
                if(mana1 == 3)
                    rezultat_3++;
                else
                    if(mana1 == 4)
                       rezultat_4++;
                    else
                        if(mana1 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
    printf("CINE IA MANA 2: ");
        scanf("%d", &mana2);
        if(mana2 == 1)
            rezultat_1++;
        else
            if(mana2 == 2)
                rezultat_2++;
            else
                if(mana2 == 3)
                    rezultat_3++;
                else
                    if(mana2 == 4)
                       rezultat_4++;
                    else
                        if(mana2 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
    printf("CINE IA MANA 3: ");
        scanf("%d", &mana3);
        if(mana3 == 1)
            rezultat_1++;
        else
            if(mana3 == 2)
                rezultat_2++;
            else
                if(mana3 == 3)
                    rezultat_3++;
                else
                    if(mana3 == 4)
                       rezultat_4++;
                    else
                        if(mana3 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
    printf("CINE IA MANA 4: ");
        scanf("%d", &mana4);
        if(mana4 == 1)
            rezultat_1++;
        else
            if(mana4 == 2)
                rezultat_2++;
            else
                if(mana4 == 3)
                    rezultat_3++;
                else
                    if(mana4 == 4)
                       rezultat_4++;
                    else
                        if(mana4 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
    printf("CINE IA MANA 5: ");
        scanf("%d", &mana5);
        if(mana5 == 1)
            rezultat_1++;
        else
            if(mana5 == 2)
                rezultat_2++;
            else
                if(mana5 == 3)
                    rezultat_3++;
                else
                    if(mana5 == 4)
                       rezultat_4++;
                    else
                        if(mana5 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
    printf("CINE IA MANA 6: ");
        scanf("%d", &mana6);
        if(mana6 == 1)
            rezultat_1++;
        else
            if(mana6 == 2)
                rezultat_2++;
            else
                if(mana6 == 3)
                    rezultat_3++;
                else
                    if(mana6 == 4)
                       rezultat_4++;
                    else
                        if(mana6 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
    printf("CINE IA MANA 7: ");
        scanf("%d", &mana7);
        if(mana7 == 1)
            rezultat_1++;
        else
            if(mana7 == 2)
                rezultat_2++;
            else
                if(mana7 == 3)
                    rezultat_3++;
                else
                    if(mana7 == 4)
                       rezultat_4++;
                    else
                        if(mana7 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
    printf("CINE IA MANA 8: ");
        scanf("%d", &mana8);
        if(mana8 == 1)
            rezultat_1++;
        else
            if(mana8 == 2)
                rezultat_2++;
            else
                if(mana8 == 3)
                    rezultat_3++;
                else
                    if(mana8 == 4)
                       rezultat_4++;
                    else
                        if(mana8 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("\n");

        if(rezultat_1 == pariu_1)
            {
                printf("JUCATORUL 1 SI-A FACUT MAINILE\n");
                punctaj_1 = punctaj_1 + (5 + pariu_1);
            }
        else
            {
                printf("JUCATORUL 1 S-A FRIPT CU %d\n", abs(rezultat_1 - pariu_1));
                punctaj_1 = punctaj_1 - (5 + abs(rezultat_1 - pariu_1));
            }

        if(rezultat_2 == pariu_2)
            {
                printf("JUCATORUL 2 SI-A FACUT MAINILE\n");
                punctaj_2 = punctaj_2 + (5 + pariu_2);
            }
        else
            {
                printf("JUCATORUL 2 S-A FRIPT CU %d\n", abs(rezultat_2 - pariu_2));
                punctaj_2 = punctaj_2 - (5 + abs(rezultat_2 - pariu_2));
            }
        if(rezultat_3 == pariu_3)
            {
                printf("JUCATORUL 3 SI-A FACUT MAINILE\n");
                punctaj_3 = punctaj_3 + (5 + pariu_3);
            }
        else
            {
                printf("JUCATORUL 3 S-A FRIPT CU %d\n", abs(rezultat_3 - pariu_3));
                punctaj_3 = punctaj_3 - (5 + abs(rezultat_3 - pariu_3));
            }
        if(rezultat_4 == pariu_4)
            {
                printf("JUCATORUL 4 SI-A FACUT MAINILE\n");
                punctaj_4 = punctaj_4 + (5 + pariu_4);
            }
        else
            {
                printf("JUCATORUL 4 S-A FRIPT CU %d\n", abs(rezultat_4 - pariu_4));
                punctaj_4 = punctaj_4 - (5 + abs(rezultat_4 - pariu_4));
            }
        if(rezultat_5 == pariu_5)
            {
                printf("JUCATORUL 5 SI-A FACUT MAINILE\n");
                punctaj_5 = punctaj_5 + (5 + pariu_5);
            }
        else
            {
                printf("JUCATORUL 5 S-A FRIPT CU %d\n", abs(rezultat_5 - pariu_5));
                punctaj_5 = punctaj_5 - (5 + abs(rezultat_5 - pariu_5));
            }
        printf("\n");
        printf("JUCATOR 1: %d\n", punctaj_1);
        printf("JUCATOR 2: %d\n", punctaj_2);
        printf("JUCATOR 3: %d\n", punctaj_3);
        printf("JUCATOR 4: %d\n", punctaj_4);
        printf("JUCATOR 5: %d\n", punctaj_5);
        printf("\n");
        printf("\n");

printf("JOC DE 8 NR.2\n");
printf("\n");

    pariu_1 = 0, pariu_2 = 0, pariu_3 = 0, pariu_4 = 0, pariu_5 = 0;
        rezultat_1 = 0, rezultat_2 = 0, rezultat_3 = 0, rezultat_4 = 0, rezultat_5 = 0;
        printf("PARIU JUCATOR 4: ");
        scanf("%d", &aux4);
        printf("PARIU JUCATOR 5: ");
        scanf("%d", &aux5);
        printf("PARIU JUCATOR 1: ");
        scanf("%d", &aux1);
        printf("PARIU JUCATOR 2: ");
        scanf("%d", &aux2);
        printf("JUCATORUL 3 NU ARE VOIE SA PARIEZE %d\n", 8 - aux4 - aux5 - aux1 - aux2);
        printf("PARIU JUCATOR 3: ");
        scanf("%d", &aux3);
        pariu_1 = aux1;
        pariu_2 = aux2;
        pariu_3 = aux3;
        pariu_4 = aux4;
        pariu_5 = aux5;
        printf("\n");

        printf("PARIU 1: %d\n", pariu_1);
        printf("PARIU 2: %d\n", pariu_2);
        printf("PARIU 3: %d\n", pariu_3);
        printf("PARIU 4: %d\n", pariu_4);
        printf("PARIU 5: %d\n", pariu_5);

        printf("\n");
        printf("CINE IA MANA 1: ");
        scanf("%d", &mana1);
        if(mana1 == 1)
            rezultat_1++;
        else
            if(mana1 == 2)
                rezultat_2++;
            else
                if(mana1 == 3)
                    rezultat_3++;
                else
                    if(mana1 == 4)
                       rezultat_4++;
                    else
                        if(mana1 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
    printf("CINE IA MANA 2: ");
        scanf("%d", &mana2);
        if(mana2 == 1)
            rezultat_1++;
        else
            if(mana2 == 2)
                rezultat_2++;
            else
                if(mana2 == 3)
                    rezultat_3++;
                else
                    if(mana2 == 4)
                       rezultat_4++;
                    else
                        if(mana2 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
    printf("CINE IA MANA 3: ");
        scanf("%d", &mana3);
        if(mana3 == 1)
            rezultat_1++;
        else
            if(mana3 == 2)
                rezultat_2++;
            else
                if(mana3 == 3)
                    rezultat_3++;
                else
                    if(mana3 == 4)
                       rezultat_4++;
                    else
                        if(mana3 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
    printf("CINE IA MANA 4: ");
        scanf("%d", &mana4);
        if(mana4 == 1)
            rezultat_1++;
        else
            if(mana4 == 2)
                rezultat_2++;
            else
                if(mana4 == 3)
                    rezultat_3++;
                else
                    if(mana4 == 4)
                       rezultat_4++;
                    else
                        if(mana4 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
    printf("CINE IA MANA 5: ");
        scanf("%d", &mana5);
        if(mana5 == 1)
            rezultat_1++;
        else
            if(mana5 == 2)
                rezultat_2++;
            else
                if(mana5 == 3)
                    rezultat_3++;
                else
                    if(mana5 == 4)
                       rezultat_4++;
                    else
                        if(mana5 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
    printf("CINE IA MANA 6: ");
        scanf("%d", &mana6);
        if(mana6 == 1)
            rezultat_1++;
        else
            if(mana6 == 2)
                rezultat_2++;
            else
                if(mana6 == 3)
                    rezultat_3++;
                else
                    if(mana6 == 4)
                       rezultat_4++;
                    else
                        if(mana6 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
    printf("CINE IA MANA 7: ");
        scanf("%d", &mana7);
        if(mana7 == 1)
            rezultat_1++;
        else
            if(mana7 == 2)
                rezultat_2++;
            else
                if(mana7 == 3)
                    rezultat_3++;
                else
                    if(mana7 == 4)
                       rezultat_4++;
                    else
                        if(mana7 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
    printf("CINE IA MANA 8: ");
        scanf("%d", &mana8);
        if(mana8 == 1)
            rezultat_1++;
        else
            if(mana8 == 2)
                rezultat_2++;
            else
                if(mana8 == 3)
                    rezultat_3++;
                else
                    if(mana8 == 4)
                       rezultat_4++;
                    else
                        if(mana8 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("\n");

        if(rezultat_1 == pariu_1)
            {
                printf("JUCATORUL 1 SI-A FACUT MAINILE\n");
                punctaj_1 = punctaj_1 + (5 + pariu_1);
            }
        else
            {
                printf("JUCATORUL 1 S-A FRIPT CU %d\n", abs(rezultat_1 - pariu_1));
                punctaj_1 = punctaj_1 - (5 + abs(rezultat_1 - pariu_1));
            }

        if(rezultat_2 == pariu_2)
            {
                printf("JUCATORUL 2 SI-A FACUT MAINILE\n");
                punctaj_2 = punctaj_2 + (5 + pariu_2);
            }
        else
            {
                printf("JUCATORUL 2 S-A FRIPT CU %d\n", abs(rezultat_2 - pariu_2));
                punctaj_2 = punctaj_2 - (5 + abs(rezultat_2 - pariu_2));
            }
        if(rezultat_3 == pariu_3)
            {
                printf("JUCATORUL 3 SI-A FACUT MAINILE\n");
                punctaj_3 = punctaj_3 + (5 + pariu_3);
            }
        else
            {
                printf("JUCATORUL 3 S-A FRIPT CU %d\n", abs(rezultat_3 - pariu_3));
                punctaj_3 = punctaj_3 - (5 + abs(rezultat_3 - pariu_3));
            }
        if(rezultat_4 == pariu_4)
            {
                printf("JUCATORUL 4 SI-A FACUT MAINILE\n");
                punctaj_4 = punctaj_4 + (5 + pariu_4);
            }
        else
            {
                printf("JUCATORUL 4 S-A FRIPT CU %d\n", abs(rezultat_4 - pariu_4));
                punctaj_4 = punctaj_4 - (5 + abs(rezultat_4 - pariu_4));
            }
        if(rezultat_5 == pariu_5)
            {
                printf("JUCATORUL 5 SI-A FACUT MAINILE\n");
                punctaj_5 = punctaj_5 + (5 + pariu_5);
            }
        else
            {
                printf("JUCATORUL 5 S-A FRIPT CU %d\n", abs(rezultat_5 - pariu_5));
                punctaj_5 = punctaj_5 - (5 + abs(rezultat_5 - pariu_5));
            }
        printf("\n");
        printf("JUCATOR 1: %d\n", punctaj_1);
        printf("JUCATOR 2: %d\n", punctaj_2);
        printf("JUCATOR 3: %d\n", punctaj_3);
        printf("JUCATOR 4: %d\n", punctaj_4);
        printf("JUCATOR 5: %d\n", punctaj_5);
        printf("\n");
        printf("\n");

printf("JOC DE 8 NR.3\n");
printf("\n");

    pariu_1 = 0, pariu_2 = 0, pariu_3 = 0, pariu_4 = 0, pariu_5 = 0;
        rezultat_1 = 0, rezultat_2 = 0, rezultat_3 = 0, rezultat_4 = 0, rezultat_5 = 0;
        printf("PARIU JUCATOR 5: ");
        scanf("%d", &aux5);
        printf("PARIU JUCATOR 1: ");
        scanf("%d", &aux1);
        printf("PARIU JUCATOR 2: ");
        scanf("%d", &aux2);
        printf("PARIU JUCATOR 3: ");
        scanf("%d", &aux3);
        printf("JUCATORUL 4 NU ARE VOIE SA PARIEZE %d\n", 8 - aux5 - aux1 - aux2 - aux3);
        printf("PARIU JUCATOR 4: ");
        scanf("%d", &aux4);
        pariu_1 = aux1;
        pariu_2 = aux2;
        pariu_3 = aux3;
        pariu_4 = aux4;
        pariu_5 = aux5;
        printf("\n");

        printf("PARIU 1: %d\n", pariu_1);
        printf("PARIU 2: %d\n", pariu_2);
        printf("PARIU 3: %d\n", pariu_3);
        printf("PARIU 4: %d\n", pariu_4);
        printf("PARIU 5: %d\n", pariu_5);

        printf("\n");
        printf("CINE IA MANA 1: ");
        scanf("%d", &mana1);
        if(mana1 == 1)
            rezultat_1++;
        else
            if(mana1 == 2)
                rezultat_2++;
            else
                if(mana1 == 3)
                    rezultat_3++;
                else
                    if(mana1 == 4)
                       rezultat_4++;
                    else
                        if(mana1 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
    printf("CINE IA MANA 2: ");
        scanf("%d", &mana2);
        if(mana2 == 1)
            rezultat_1++;
        else
            if(mana2 == 2)
                rezultat_2++;
            else
                if(mana2 == 3)
                    rezultat_3++;
                else
                    if(mana2 == 4)
                       rezultat_4++;
                    else
                        if(mana2 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
    printf("CINE IA MANA 3: ");
        scanf("%d", &mana3);
        if(mana3 == 1)
            rezultat_1++;
        else
            if(mana3 == 2)
                rezultat_2++;
            else
                if(mana3 == 3)
                    rezultat_3++;
                else
                    if(mana3 == 4)
                       rezultat_4++;
                    else
                        if(mana3 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
    printf("CINE IA MANA 4: ");
        scanf("%d", &mana4);
        if(mana4 == 1)
            rezultat_1++;
        else
            if(mana4 == 2)
                rezultat_2++;
            else
                if(mana4 == 3)
                    rezultat_3++;
                else
                    if(mana4 == 4)
                       rezultat_4++;
                    else
                        if(mana4 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
    printf("CINE IA MANA 5: ");
        scanf("%d", &mana5);
        if(mana5 == 1)
            rezultat_1++;
        else
            if(mana5 == 2)
                rezultat_2++;
            else
                if(mana5 == 3)
                    rezultat_3++;
                else
                    if(mana5 == 4)
                       rezultat_4++;
                    else
                        if(mana5 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
    printf("CINE IA MANA 6: ");
        scanf("%d", &mana6);
        if(mana6 == 1)
            rezultat_1++;
        else
            if(mana6 == 2)
                rezultat_2++;
            else
                if(mana6 == 3)
                    rezultat_3++;
                else
                    if(mana6 == 4)
                       rezultat_4++;
                    else
                        if(mana6 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
    printf("CINE IA MANA 7: ");
        scanf("%d", &mana7);
        if(mana7 == 1)
            rezultat_1++;
        else
            if(mana7 == 2)
                rezultat_2++;
            else
                if(mana7 == 3)
                    rezultat_3++;
                else
                    if(mana7 == 4)
                       rezultat_4++;
                    else
                        if(mana7 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
    printf("CINE IA MANA 8: ");
        scanf("%d", &mana8);
        if(mana8 == 1)
            rezultat_1++;
        else
            if(mana8 == 2)
                rezultat_2++;
            else
                if(mana8 == 3)
                    rezultat_3++;
                else
                    if(mana8 == 4)
                       rezultat_4++;
                    else
                        if(mana8 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("\n");

        if(rezultat_1 == pariu_1)
            {
                printf("JUCATORUL 1 SI-A FACUT MAINILE\n");
                punctaj_1 = punctaj_1 + (5 + pariu_1);
            }
        else
            {
                printf("JUCATORUL 1 S-A FRIPT CU %d\n", abs(rezultat_1 - pariu_1));
                punctaj_1 = punctaj_1 - (5 + abs(rezultat_1 - pariu_1));
            }

        if(rezultat_2 == pariu_2)
            {
                printf("JUCATORUL 2 SI-A FACUT MAINILE\n");
                punctaj_2 = punctaj_2 + (5 + pariu_2);
            }
        else
            {
                printf("JUCATORUL 2 S-A FRIPT CU %d\n", abs(rezultat_2 - pariu_2));
                punctaj_2 = punctaj_2 - (5 + abs(rezultat_2 - pariu_2));
            }
        if(rezultat_3 == pariu_3)
            {
                printf("JUCATORUL 3 SI-A FACUT MAINILE\n");
                punctaj_3 = punctaj_3 + (5 + pariu_3);
            }
        else
            {
                printf("JUCATORUL 3 S-A FRIPT CU %d\n", abs(rezultat_3 - pariu_3));
                punctaj_3 = punctaj_3 - (5 + abs(rezultat_3 - pariu_3));
            }
        if(rezultat_4 == pariu_4)
            {
                printf("JUCATORUL 4 SI-A FACUT MAINILE\n");
                punctaj_4 = punctaj_4 + (5 + pariu_4);
            }
        else
            {
                printf("JUCATORUL 4 S-A FRIPT CU %d\n", abs(rezultat_4 - pariu_4));
                punctaj_4 = punctaj_4 - (5 + abs(rezultat_4 - pariu_4));
            }
        if(rezultat_5 == pariu_5)
            {
                printf("JUCATORUL 5 SI-A FACUT MAINILE\n");
                punctaj_5 = punctaj_5 + (5 + pariu_5);
            }
        else
            {
                printf("JUCATORUL 5 S-A FRIPT CU %d\n", abs(rezultat_5 - pariu_5));
                punctaj_5 = punctaj_5 - (5 + abs(rezultat_5 - pariu_5));
            }
        printf("\n");
        printf("JUCATOR 1: %d\n", punctaj_1);
        printf("JUCATOR 2: %d\n", punctaj_2);
        printf("JUCATOR 3: %d\n", punctaj_3);
        printf("JUCATOR 4: %d\n", punctaj_4);
        printf("JUCATOR 5: %d\n", punctaj_5);
        printf("\n");
        printf("\n");

printf("JOC DE 8 NR.4\n");
printf("\n");

    pariu_1 = 0, pariu_2 = 0, pariu_3 = 0, pariu_4 = 0, pariu_5 = 0;
        rezultat_1 = 0, rezultat_2 = 0, rezultat_3 = 0, rezultat_4 = 0, rezultat_5 = 0;
        printf("PARIU JUCATOR 1: ");
        scanf("%d", &aux1);
        printf("PARIU JUCATOR 2: ");
        scanf("%d", &aux2);
        printf("PARIU JUCATOR 3: ");
        scanf("%d", &aux3);
        printf("PARIU JUCATOR 4: ");
        scanf("%d", &aux4);
        printf("JUCATORUL 5 NU ARE VOIE SA PARIEZE %d\n", 8 - aux1 - aux2 - aux3 - aux4);
        printf("PARIU JUCATOR 5: ");
        scanf("%d", &aux5);
        pariu_1 = aux1;
        pariu_2 = aux2;
        pariu_3 = aux3;
        pariu_4 = aux4;
        pariu_5 = aux5;
        printf("\n");

        printf("PARIU 1: %d\n", pariu_1);
        printf("PARIU 2: %d\n", pariu_2);
        printf("PARIU 3: %d\n", pariu_3);
        printf("PARIU 4: %d\n", pariu_4);
        printf("PARIU 5: %d\n", pariu_5);

        printf("\n");
        printf("CINE IA MANA 1: ");
        scanf("%d", &mana1);
        if(mana1 == 1)
            rezultat_1++;
        else
            if(mana1 == 2)
                rezultat_2++;
            else
                if(mana1 == 3)
                    rezultat_3++;
                else
                    if(mana1 == 4)
                       rezultat_4++;
                    else
                        if(mana1 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
    printf("CINE IA MANA 2: ");
        scanf("%d", &mana2);
        if(mana2 == 1)
            rezultat_1++;
        else
            if(mana2 == 2)
                rezultat_2++;
            else
                if(mana2 == 3)
                    rezultat_3++;
                else
                    if(mana2 == 4)
                       rezultat_4++;
                    else
                        if(mana2 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
    printf("CINE IA MANA 3: ");
        scanf("%d", &mana3);
        if(mana3 == 1)
            rezultat_1++;
        else
            if(mana3 == 2)
                rezultat_2++;
            else
                if(mana3 == 3)
                    rezultat_3++;
                else
                    if(mana3 == 4)
                       rezultat_4++;
                    else
                        if(mana3 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
    printf("CINE IA MANA 4: ");
        scanf("%d", &mana4);
        if(mana4 == 1)
            rezultat_1++;
        else
            if(mana4 == 2)
                rezultat_2++;
            else
                if(mana4 == 3)
                    rezultat_3++;
                else
                    if(mana4 == 4)
                       rezultat_4++;
                    else
                        if(mana4 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
    printf("CINE IA MANA 5: ");
        scanf("%d", &mana5);
        if(mana5 == 1)
            rezultat_1++;
        else
            if(mana5 == 2)
                rezultat_2++;
            else
                if(mana5 == 3)
                    rezultat_3++;
                else
                    if(mana5 == 4)
                       rezultat_4++;
                    else
                        if(mana5 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
    printf("CINE IA MANA 6: ");
        scanf("%d", &mana6);
        if(mana6 == 1)
            rezultat_1++;
        else
            if(mana6 == 2)
                rezultat_2++;
            else
                if(mana6 == 3)
                    rezultat_3++;
                else
                    if(mana6 == 4)
                       rezultat_4++;
                    else
                        if(mana6 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
    printf("CINE IA MANA 7: ");
        scanf("%d", &mana7);
        if(mana7 == 1)
            rezultat_1++;
        else
            if(mana7 == 2)
                rezultat_2++;
            else
                if(mana7 == 3)
                    rezultat_3++;
                else
                    if(mana7 == 4)
                       rezultat_4++;
                    else
                        if(mana7 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
    printf("CINE IA MANA 8: ");
        scanf("%d", &mana8);
        if(mana8 == 1)
            rezultat_1++;
        else
            if(mana8 == 2)
                rezultat_2++;
            else
                if(mana8 == 3)
                    rezultat_3++;
                else
                    if(mana8 == 4)
                       rezultat_4++;
                    else
                        if(mana8 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("\n");

        if(rezultat_1 == pariu_1)
            {
                printf("JUCATORUL 1 SI-A FACUT MAINILE\n");
                punctaj_1 = punctaj_1 + (5 + pariu_1);
            }
        else
            {
                printf("JUCATORUL 1 S-A FRIPT CU %d\n", abs(rezultat_1 - pariu_1));
                punctaj_1 = punctaj_1 - (5 + abs(rezultat_1 - pariu_1));
            }

        if(rezultat_2 == pariu_2)
            {
                printf("JUCATORUL 2 SI-A FACUT MAINILE\n");
                punctaj_2 = punctaj_2 + (5 + pariu_2);
            }
        else
            {
                printf("JUCATORUL 2 S-A FRIPT CU %d\n", abs(rezultat_2 - pariu_2));
                punctaj_2 = punctaj_2 - (5 + abs(rezultat_2 - pariu_2));
            }
        if(rezultat_3 == pariu_3)
            {
                printf("JUCATORUL 3 SI-A FACUT MAINILE\n");
                punctaj_3 = punctaj_3 + (5 + pariu_3);
            }
        else
            {
                printf("JUCATORUL 3 S-A FRIPT CU %d\n", abs(rezultat_3 - pariu_3));
                punctaj_3 = punctaj_3 - (5 + abs(rezultat_3 - pariu_3));
            }
        if(rezultat_4 == pariu_4)
            {
                printf("JUCATORUL 4 SI-A FACUT MAINILE\n");
                punctaj_4 = punctaj_4 + (5 + pariu_4);
            }
        else
            {
                printf("JUCATORUL 4 S-A FRIPT CU %d\n", abs(rezultat_4 - pariu_4));
                punctaj_4 = punctaj_4 - (5 + abs(rezultat_4 - pariu_4));
            }
        if(rezultat_5 == pariu_5)
            {
                printf("JUCATORUL 5 SI-A FACUT MAINILE\n");
                punctaj_5 = punctaj_5 + (5 + pariu_5);
            }
        else
            {
                printf("JUCATORUL 5 S-A FRIPT CU %d\n", abs(rezultat_5 - pariu_5));
                punctaj_5 = punctaj_5 - (5 + abs(rezultat_5 - pariu_5));
            }
        printf("\n");
        printf("JUCATOR 1: %d\n", punctaj_1);
        printf("JUCATOR 2: %d\n", punctaj_2);
        printf("JUCATOR 3: %d\n", punctaj_3);
        printf("JUCATOR 4: %d\n", punctaj_4);
        printf("JUCATOR 5: %d\n", punctaj_5);
        printf("\n");
        printf("\n");


printf("JOC DE 8 NR.5\n");
printf("\n");

    pariu_1 = 0, pariu_2 = 0, pariu_3 = 0, pariu_4 = 0, pariu_5 = 0;
        rezultat_1 = 0, rezultat_2 = 0, rezultat_3 = 0, rezultat_4 = 0, rezultat_5 = 0;
        printf("PARIU JUCATOR 2: ");
        scanf("%d", &aux2);
        printf("PARIU JUCATOR 3: ");
        scanf("%d", &aux3);
        printf("PARIU JUCATOR 4: ");
        scanf("%d", &aux4);
        printf("PARIU JUCATOR 5: ");
        scanf("%d", &aux5);
        printf("JUCATORUL 1 NU ARE VOIE SA PARIEZE %d\n", 8 - aux2 - aux3 - aux4 - aux5);
        printf("PARIU JUCATOR 1: ");
        scanf("%d", &aux1);
        pariu_1 = aux1;
        pariu_2 = aux2;
        pariu_3 = aux3;
        pariu_4 = aux4;
        pariu_5 = aux5;
        printf("\n");

        printf("PARIU 1: %d\n", pariu_1);
        printf("PARIU 2: %d\n", pariu_2);
        printf("PARIU 3: %d\n", pariu_3);
        printf("PARIU 4: %d\n", pariu_4);
        printf("PARIU 5: %d\n", pariu_5);

        printf("\n");
        printf("CINE IA MANA 1: ");
        scanf("%d", &mana1);
        if(mana1 == 1)
            rezultat_1++;
        else
            if(mana1 == 2)
                rezultat_2++;
            else
                if(mana1 == 3)
                    rezultat_3++;
                else
                    if(mana1 == 4)
                       rezultat_4++;
                    else
                        if(mana1 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
    printf("CINE IA MANA 2: ");
        scanf("%d", &mana2);
        if(mana2 == 1)
            rezultat_1++;
        else
            if(mana2 == 2)
                rezultat_2++;
            else
                if(mana2 == 3)
                    rezultat_3++;
                else
                    if(mana2 == 4)
                       rezultat_4++;
                    else
                        if(mana2 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
    printf("CINE IA MANA 3: ");
        scanf("%d", &mana3);
        if(mana3 == 1)
            rezultat_1++;
        else
            if(mana3 == 2)
                rezultat_2++;
            else
                if(mana3 == 3)
                    rezultat_3++;
                else
                    if(mana3 == 4)
                       rezultat_4++;
                    else
                        if(mana3 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
    printf("CINE IA MANA 4: ");
        scanf("%d", &mana4);
        if(mana4 == 1)
            rezultat_1++;
        else
            if(mana4 == 2)
                rezultat_2++;
            else
                if(mana4 == 3)
                    rezultat_3++;
                else
                    if(mana4 == 4)
                       rezultat_4++;
                    else
                        if(mana4 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
    printf("CINE IA MANA 5: ");
        scanf("%d", &mana5);
        if(mana5 == 1)
            rezultat_1++;
        else
            if(mana5 == 2)
                rezultat_2++;
            else
                if(mana5 == 3)
                    rezultat_3++;
                else
                    if(mana5 == 4)
                       rezultat_4++;
                    else
                        if(mana5 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
    printf("CINE IA MANA 6: ");
        scanf("%d", &mana6);
        if(mana6 == 1)
            rezultat_1++;
        else
            if(mana6 == 2)
                rezultat_2++;
            else
                if(mana6 == 3)
                    rezultat_3++;
                else
                    if(mana6 == 4)
                       rezultat_4++;
                    else
                        if(mana6 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
    printf("CINE IA MANA 7: ");
        scanf("%d", &mana7);
        if(mana7 == 1)
            rezultat_1++;
        else
            if(mana7 == 2)
                rezultat_2++;
            else
                if(mana7 == 3)
                    rezultat_3++;
                else
                    if(mana7 == 4)
                       rezultat_4++;
                    else
                        if(mana7 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
    printf("CINE IA MANA 8: ");
        scanf("%d", &mana8);
        if(mana8 == 1)
            rezultat_1++;
        else
            if(mana8 == 2)
                rezultat_2++;
            else
                if(mana8 == 3)
                    rezultat_3++;
                else
                    if(mana8 == 4)
                       rezultat_4++;
                    else
                        if(mana8 == 5)
                            rezultat_5++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("\n");

        if(rezultat_1 == pariu_1)
            {
                printf("JUCATORUL 1 SI-A FACUT MAINILE\n");
                punctaj_1 = punctaj_1 + (5 + pariu_1);
            }
        else
            {
                printf("JUCATORUL 1 S-A FRIPT CU %d\n", abs(rezultat_1 - pariu_1));
                punctaj_1 = punctaj_1 - (5 + abs(rezultat_1 - pariu_1));
            }

        if(rezultat_2 == pariu_2)
            {
                printf("JUCATORUL 2 SI-A FACUT MAINILE\n");
                punctaj_2 = punctaj_2 + (5 + pariu_2);
            }
        else
            {
                printf("JUCATORUL 2 S-A FRIPT CU %d\n", abs(rezultat_2 - pariu_2));
                punctaj_2 = punctaj_2 - (5 + abs(rezultat_2 - pariu_2));
            }
        if(rezultat_3 == pariu_3)
            {
                printf("JUCATORUL 3 SI-A FACUT MAINILE\n");
                punctaj_3 = punctaj_3 + (5 + pariu_3);
            }
        else
            {
                printf("JUCATORUL 3 S-A FRIPT CU %d\n", abs(rezultat_3 - pariu_3));
                punctaj_3 = punctaj_3 - (5 + abs(rezultat_3 - pariu_3));
            }
        if(rezultat_4 == pariu_4)
            {
                printf("JUCATORUL 4 SI-A FACUT MAINILE\n");
                punctaj_4 = punctaj_4 + (5 + pariu_4);
            }
        else
            {
                printf("JUCATORUL 4 S-A FRIPT CU %d\n", abs(rezultat_4 - pariu_4));
                punctaj_4 = punctaj_4 - (5 + abs(rezultat_4 - pariu_4));
            }
        if(rezultat_5 == pariu_5)
            {
                printf("JUCATORUL 5 SI-A FACUT MAINILE\n");
                punctaj_5 = punctaj_5 + (5 + pariu_5);
            }
        else
            {
                printf("JUCATORUL 5 S-A FRIPT CU %d\n", abs(rezultat_5 - pariu_5));
                punctaj_5 = punctaj_5 - (5 + abs(rezultat_5 - pariu_5));
            }
        printf("\n");
        printf("JUCATOR 1: %d\n", punctaj_1);
        printf("JUCATOR 2: %d\n", punctaj_2);
        printf("JUCATOR 3: %d\n", punctaj_3);
        printf("JUCATOR 4: %d\n", punctaj_4);
        printf("JUCATOR 5: %d\n", punctaj_5);
        printf("\n");
        printf("\n");
}

void joc_6(void)
{
    printf("CARTEA CU CEL MAI MIC NUMAR ESTE 3\n");
    printf("\n");
    printf("\n");
    int punctaj_1 = 0;
    int punctaj_2 = 0;
    int punctaj_3 = 0;
    int punctaj_4 = 0;
    int punctaj_5 = 0;
    int punctaj_6 = 0;
    int pariu_1 = 0, pariu_2 = 0, pariu_3 = 0, pariu_4 = 0, pariu_5 = 0, pariu_6 = 0;
    int rezultat_1 = 0, rezultat_2 = 0, rezultat_3 = 0, rezultat_4 = 0, rezultat_5 = 0, rezultat_6 = 0;
    int aux1, aux2, aux3, aux4, aux5, aux6;
    int mana1, mana2, mana3, mana4, mana5, mana6, mana7, mana8;

printf("JOC DE 8 NR.1\n");
printf("\n");

    pariu_1 = 0, pariu_2 = 0, pariu_3 = 0, pariu_4 = 0, pariu_5 = 0, pariu_6 = 0;
        rezultat_1 = 0, rezultat_2 = 0, rezultat_3 = 0, rezultat_4 = 0, rezultat_5 = 0, rezultat_6 = 0;
        printf("PARIU JUCATOR 1: ");
        scanf("%d", &aux1);
        printf("PARIU JUCATOR 2: ");
        scanf("%d", &aux2);
        printf("PARIU JUCATOR 3: ");
        scanf("%d", &aux3);
        printf("PARIU JUCATOR 4: ");
        scanf("%d", &aux4);
        printf("PARIU JUCATOR 5: ");
        scanf("%d", &aux5);
        printf("JUCATORUL 6 NU ARE VOIE SA PARIEZE %d\n", 8 - aux1 - aux2 - aux3 - aux4 - aux5);
        printf("PARIU JUCATOR 6: ");
        scanf("%d", &aux6);
        pariu_1 = aux1;
        pariu_2 = aux2;
        pariu_3 = aux3;
        pariu_4 = aux4;
        pariu_5 = aux5;
        pariu_6 = aux6;
        printf("\n");

        printf("PARIU 1: %d\n", pariu_1);
        printf("PARIU 2: %d\n", pariu_2);
        printf("PARIU 3: %d\n", pariu_3);
        printf("PARIU 4: %d\n", pariu_4);
        printf("PARIU 5: %d\n", pariu_5);
        printf("PARIU 6: %d\n", pariu_6);

        printf("\n");
        printf("CINE IA MANA 1: ");
        scanf("%d", &mana1);
        if(mana1 == 1)
            rezultat_1++;
        else
            if(mana1 == 2)
                rezultat_2++;
            else
                if(mana1 == 3)
                    rezultat_3++;
                else
                    if(mana1 == 4)
                       rezultat_4++;
                    else
                        if(mana1 == 5)
                            rezultat_5++;
                        else
                            if(mana1 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("CINE IA MANA 2: ");
        scanf("%d", &mana2);
        if(mana2 == 1)
            rezultat_1++;
        else
            if(mana2 == 2)
                rezultat_2++;
            else
                if(mana2 == 3)
                    rezultat_3++;
                else
                    if(mana2 == 4)
                       rezultat_4++;
                    else
                        if(mana2 == 5)
                            rezultat_5++;
                        else
                            if(mana2 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("CINE IA MANA 3: ");
        scanf("%d", &mana3);
        if(mana3 == 1)
            rezultat_1++;
        else
            if(mana3 == 2)
                rezultat_2++;
            else
                if(mana3 == 3)
                    rezultat_3++;
                else
                    if(mana3 == 4)
                       rezultat_4++;
                    else
                        if(mana3 == 5)
                            rezultat_5++;
                        else
                            if(mana3 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("CINE IA MANA 4: ");
        scanf("%d", &mana4);
        if(mana4 == 1)
            rezultat_1++;
        else
            if(mana4 == 2)
                rezultat_2++;
            else
                if(mana4 == 3)
                    rezultat_3++;
                else
                    if(mana4 == 4)
                       rezultat_4++;
                    else
                        if(mana4 == 5)
                            rezultat_5++;
                        else
                            if(mana4 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("CINE IA MANA 5: ");
        scanf("%d", &mana5);
        if(mana5 == 1)
            rezultat_1++;
        else
            if(mana5 == 2)
                rezultat_2++;
            else
                if(mana5 == 3)
                    rezultat_3++;
                else
                    if(mana5 == 4)
                       rezultat_4++;
                    else
                        if(mana5 == 5)
                            rezultat_5++;
                        else
                            if(mana5 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("CINE IA MANA 6: ");
        scanf("%d", &mana6);
        if(mana6 == 1)
            rezultat_1++;
        else
            if(mana6 == 2)
                rezultat_2++;
            else
                if(mana6 == 3)
                    rezultat_3++;
                else
                    if(mana6 == 4)
                       rezultat_4++;
                    else
                        if(mana6 == 5)
                            rezultat_5++;
                        else
                            if(mana6 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("CINE IA MANA 7: ");
        scanf("%d", &mana7);
        if(mana7 == 1)
            rezultat_1++;
        else
            if(mana7 == 2)
                rezultat_2++;
            else
                if(mana7 == 3)
                    rezultat_3++;
                else
                    if(mana7 == 4)
                       rezultat_4++;
                    else
                        if(mana7 == 5)
                            rezultat_5++;
                        else
                            if(mana7 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("CINE IA MANA 8: ");
        scanf("%d", &mana8);
        if(mana8 == 1)
            rezultat_1++;
        else
            if(mana8 == 2)
                rezultat_2++;
            else
                if(mana8 == 3)
                    rezultat_3++;
                else
                    if(mana8 == 4)
                       rezultat_4++;
                    else
                        if(mana8 == 5)
                            rezultat_5++;
                        else
                            if(mana8 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("\n");

        if(rezultat_1 == pariu_1)
            {
                printf("JUCATORUL 1 SI-A FACUT MAINILE\n");
                punctaj_1 = punctaj_1 + (5 + pariu_1);
            }
        else
            {
                printf("JUCATORUL 1 S-A FRIPT CU %d\n", abs(rezultat_1 - pariu_1));
                punctaj_1 = punctaj_1 - (5 + abs(rezultat_1 - pariu_1));
            }

        if(rezultat_2 == pariu_2)
            {
                printf("JUCATORUL 2 SI-A FACUT MAINILE\n");
                punctaj_2 = punctaj_2 + (5 + pariu_2);
            }
        else
            {
                printf("JUCATORUL 2 S-A FRIPT CU %d\n", abs(rezultat_2 - pariu_2));
                punctaj_2 = punctaj_2 - (5 + abs(rezultat_2 - pariu_2));
            }
        if(rezultat_3 == pariu_3)
            {
                printf("JUCATORUL 3 SI-A FACUT MAINILE\n");
                punctaj_3 = punctaj_3 + (5 + pariu_3);
            }
        else
            {
                printf("JUCATORUL 3 S-A FRIPT CU %d\n", abs(rezultat_3 - pariu_3));
                punctaj_3 = punctaj_3 - (5 + abs(rezultat_3 - pariu_3));
            }
        if(rezultat_4 == pariu_4)
            {
                printf("JUCATORUL 4 SI-A FACUT MAINILE\n");
                punctaj_4 = punctaj_4 + (5 + pariu_4);
            }
        else
            {
                printf("JUCATORUL 4 S-A FRIPT CU %d\n", abs(rezultat_4 - pariu_4));
                punctaj_4 = punctaj_4 - (5 + abs(rezultat_4 - pariu_4));
            }
        if(rezultat_5 == pariu_5)
            {
                printf("JUCATORUL 5 SI-A FACUT MAINILE\n");
                punctaj_5 = punctaj_5 + (5 + pariu_5);
            }
        else
            {
                printf("JUCATORUL 5 S-A FRIPT CU %d\n", abs(rezultat_5 - pariu_5));
                punctaj_5 = punctaj_5 - (5 + abs(rezultat_5 - pariu_5));
            }
        if(rezultat_6 == pariu_6)
            {
                printf("JUCATORUL 6 SI-A FACUT MAINILE\n");
                punctaj_6 = punctaj_6 + (5 + pariu_6);
            }
        else
            {
                printf("JUCATORUL 6 S-A FRIPT CU %d\n", abs(rezultat_6 - pariu_6));
                punctaj_6 = punctaj_6 - (5 + abs(rezultat_6 - pariu_6));
            }
        printf("\n");
        printf("JUCATOR 1: %d\n", punctaj_1);
        printf("JUCATOR 2: %d\n", punctaj_2);
        printf("JUCATOR 3: %d\n", punctaj_3);
        printf("JUCATOR 4: %d\n", punctaj_4);
        printf("JUCATOR 5: %d\n", punctaj_5);
        printf("JUCATOR 6: %d\n", punctaj_6);
        printf("\n");
        printf("\n");

printf("JOC DE 8 NR.2\n");
printf("\n");

    pariu_1 = 0, pariu_2 = 0, pariu_3 = 0, pariu_4 = 0, pariu_5 = 0, pariu_6 = 0;
        rezultat_1 = 0, rezultat_2 = 0, rezultat_3 = 0, rezultat_4 = 0, rezultat_5 = 0, rezultat_6 = 0;
        printf("PARIU JUCATOR 2: ");
        scanf("%d", &aux2);
        printf("PARIU JUCATOR 3: ");
        scanf("%d", &aux3);
        printf("PARIU JUCATOR 4: ");
        scanf("%d", &aux4);
        printf("PARIU JUCATOR 5: ");
        scanf("%d", &aux5);
        printf("PARIU JUCATOR 6: ");
        scanf("%d", &aux6);
        printf("JUCATORUL 1 NU ARE VOIE SA PARIEZE %d\n", 8 - aux2 - aux3 - aux4 - aux5 - aux6);
        printf("PARIU JUCATOR 1: ");
        scanf("%d", &aux1);
        pariu_1 = aux1;
        pariu_2 = aux2;
        pariu_3 = aux3;
        pariu_4 = aux4;
        pariu_5 = aux5;
        pariu_6 = aux6;
        printf("\n");

        printf("PARIU 1: %d\n", pariu_1);
        printf("PARIU 2: %d\n", pariu_2);
        printf("PARIU 3: %d\n", pariu_3);
        printf("PARIU 4: %d\n", pariu_4);
        printf("PARIU 5: %d\n", pariu_5);
        printf("PARIU 6: %d\n", pariu_6);

        printf("\n");
        printf("CINE IA MANA 1: ");
        scanf("%d", &mana1);
        if(mana1 == 1)
            rezultat_1++;
        else
            if(mana1 == 2)
                rezultat_2++;
            else
                if(mana1 == 3)
                    rezultat_3++;
                else
                    if(mana1 == 4)
                       rezultat_4++;
                    else
                        if(mana1 == 5)
                            rezultat_5++;
                        else
                            if(mana1 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("CINE IA MANA 2: ");
        scanf("%d", &mana2);
        if(mana2 == 1)
            rezultat_1++;
        else
            if(mana2 == 2)
                rezultat_2++;
            else
                if(mana2 == 3)
                    rezultat_3++;
                else
                    if(mana2 == 4)
                       rezultat_4++;
                    else
                        if(mana2 == 5)
                            rezultat_5++;
                        else
                            if(mana2 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("CINE IA MANA 3: ");
        scanf("%d", &mana3);
        if(mana3 == 1)
            rezultat_1++;
        else
            if(mana3 == 2)
                rezultat_2++;
            else
                if(mana3 == 3)
                    rezultat_3++;
                else
                    if(mana3 == 4)
                       rezultat_4++;
                    else
                        if(mana3 == 5)
                            rezultat_5++;
                        else
                            if(mana3 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("CINE IA MANA 4: ");
        scanf("%d", &mana4);
        if(mana4 == 1)
            rezultat_1++;
        else
            if(mana4 == 2)
                rezultat_2++;
            else
                if(mana4 == 3)
                    rezultat_3++;
                else
                    if(mana4 == 4)
                       rezultat_4++;
                    else
                        if(mana4 == 5)
                            rezultat_5++;
                        else
                            if(mana4 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("CINE IA MANA 5: ");
        scanf("%d", &mana5);
        if(mana5 == 1)
            rezultat_1++;
        else
            if(mana5 == 2)
                rezultat_2++;
            else
                if(mana5 == 3)
                    rezultat_3++;
                else
                    if(mana5 == 4)
                       rezultat_4++;
                    else
                        if(mana5 == 5)
                            rezultat_5++;
                        else
                            if(mana5 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("CINE IA MANA 6: ");
        scanf("%d", &mana6);
        if(mana6 == 1)
            rezultat_1++;
        else
            if(mana6 == 2)
                rezultat_2++;
            else
                if(mana6 == 3)
                    rezultat_3++;
                else
                    if(mana6 == 4)
                       rezultat_4++;
                    else
                        if(mana6 == 5)
                            rezultat_5++;
                        else
                            if(mana6 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("CINE IA MANA 7: ");
        scanf("%d", &mana7);
        if(mana7 == 1)
            rezultat_1++;
        else
            if(mana7 == 2)
                rezultat_2++;
            else
                if(mana7 == 3)
                    rezultat_3++;
                else
                    if(mana7 == 4)
                       rezultat_4++;
                    else
                        if(mana7 == 5)
                            rezultat_5++;
                        else
                            if(mana7 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("CINE IA MANA 8: ");
        scanf("%d", &mana8);
        if(mana8 == 1)
            rezultat_1++;
        else
            if(mana8 == 2)
                rezultat_2++;
            else
                if(mana8 == 3)
                    rezultat_3++;
                else
                    if(mana8 == 4)
                       rezultat_4++;
                    else
                        if(mana8 == 5)
                            rezultat_5++;
                        else
                            if(mana8 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("\n");

        if(rezultat_1 == pariu_1)
            {
                printf("JUCATORUL 1 SI-A FACUT MAINILE\n");
                punctaj_1 = punctaj_1 + (5 + pariu_1);
            }
        else
            {
                printf("JUCATORUL 1 S-A FRIPT CU %d\n", abs(rezultat_1 - pariu_1));
                punctaj_1 = punctaj_1 - (5 + abs(rezultat_1 - pariu_1));
            }

        if(rezultat_2 == pariu_2)
            {
                printf("JUCATORUL 2 SI-A FACUT MAINILE\n");
                punctaj_2 = punctaj_2 + (5 + pariu_2);
            }
        else
            {
                printf("JUCATORUL 2 S-A FRIPT CU %d\n", abs(rezultat_2 - pariu_2));
                punctaj_2 = punctaj_2 - (5 + abs(rezultat_2 - pariu_2));
            }
        if(rezultat_3 == pariu_3)
            {
                printf("JUCATORUL 3 SI-A FACUT MAINILE\n");
                punctaj_3 = punctaj_3 + (5 + pariu_3);
            }
        else
            {
                printf("JUCATORUL 3 S-A FRIPT CU %d\n", abs(rezultat_3 - pariu_3));
                punctaj_3 = punctaj_3 - (5 + abs(rezultat_3 - pariu_3));
            }
        if(rezultat_4 == pariu_4)
            {
                printf("JUCATORUL 4 SI-A FACUT MAINILE\n");
                punctaj_4 = punctaj_4 + (5 + pariu_4);
            }
        else
            {
                printf("JUCATORUL 4 S-A FRIPT CU %d\n", abs(rezultat_4 - pariu_4));
                punctaj_4 = punctaj_4 - (5 + abs(rezultat_4 - pariu_4));
            }
        if(rezultat_5 == pariu_5)
            {
                printf("JUCATORUL 5 SI-A FACUT MAINILE\n");
                punctaj_5 = punctaj_5 + (5 + pariu_5);
            }
        else
            {
                printf("JUCATORUL 5 S-A FRIPT CU %d\n", abs(rezultat_5 - pariu_5));
                punctaj_5 = punctaj_5 - (5 + abs(rezultat_5 - pariu_5));
            }
        if(rezultat_6 == pariu_6)
            {
                printf("JUCATORUL 6 SI-A FACUT MAINILE\n");
                punctaj_6 = punctaj_6 + (5 + pariu_6);
            }
        else
            {
                printf("JUCATORUL 6 S-A FRIPT CU %d\n", abs(rezultat_6 - pariu_6));
                punctaj_6 = punctaj_6 - (5 + abs(rezultat_6 - pariu_6));
            }
        printf("\n");
        printf("JUCATOR 1: %d\n", punctaj_1);
        printf("JUCATOR 2: %d\n", punctaj_2);
        printf("JUCATOR 3: %d\n", punctaj_3);
        printf("JUCATOR 4: %d\n", punctaj_4);
        printf("JUCATOR 5: %d\n", punctaj_5);
        printf("JUCATOR 6: %d\n", punctaj_6);
        printf("\n");
        printf("\n");

printf("JOC DE 8 NR.3\n");
printf("\n");

    pariu_1 = 0, pariu_2 = 0, pariu_3 = 0, pariu_4 = 0, pariu_5 = 0, pariu_6 = 0;
        rezultat_1 = 0, rezultat_2 = 0, rezultat_3 = 0, rezultat_4 = 0, rezultat_5 = 0, rezultat_6 = 0;
        printf("PARIU JUCATOR 3: ");
        scanf("%d", &aux3);
        printf("PARIU JUCATOR 4: ");
        scanf("%d", &aux4);
        printf("PARIU JUCATOR 5: ");
        scanf("%d", &aux5);
        printf("PARIU JUCATOR 6: ");
        scanf("%d", &aux6);
        printf("PARIU JUCATOR 1: ");
        scanf("%d", &aux1);
        printf("JUCATORUL 2 NU ARE VOIE SA PARIEZE %d\n", 8 - aux3 - aux4 - aux5 - aux6 - aux1);
        printf("PARIU JUCATOR 2: ");
        scanf("%d", &aux2);
        pariu_1 = aux1;
        pariu_2 = aux2;
        pariu_3 = aux3;
        pariu_4 = aux4;
        pariu_5 = aux5;
        pariu_6 = aux6;
        printf("\n");

        printf("PARIU 1: %d\n", pariu_1);
        printf("PARIU 2: %d\n", pariu_2);
        printf("PARIU 3: %d\n", pariu_3);
        printf("PARIU 4: %d\n", pariu_4);
        printf("PARIU 5: %d\n", pariu_5);
        printf("PARIU 6: %d\n", pariu_6);

        printf("\n");
        printf("CINE IA MANA 1: ");
        scanf("%d", &mana1);
        if(mana1 == 1)
            rezultat_1++;
        else
            if(mana1 == 2)
                rezultat_2++;
            else
                if(mana1 == 3)
                    rezultat_3++;
                else
                    if(mana1 == 4)
                       rezultat_4++;
                    else
                        if(mana1 == 5)
                            rezultat_5++;
                        else
                            if(mana1 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("CINE IA MANA 2: ");
        scanf("%d", &mana2);
        if(mana2 == 1)
            rezultat_1++;
        else
            if(mana2 == 2)
                rezultat_2++;
            else
                if(mana2 == 3)
                    rezultat_3++;
                else
                    if(mana2 == 4)
                       rezultat_4++;
                    else
                        if(mana2 == 5)
                            rezultat_5++;
                        else
                            if(mana2 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("CINE IA MANA 3: ");
        scanf("%d", &mana3);
        if(mana3 == 1)
            rezultat_1++;
        else
            if(mana3 == 2)
                rezultat_2++;
            else
                if(mana3 == 3)
                    rezultat_3++;
                else
                    if(mana3 == 4)
                       rezultat_4++;
                    else
                        if(mana3 == 5)
                            rezultat_5++;
                        else
                            if(mana3 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("CINE IA MANA 4: ");
        scanf("%d", &mana4);
        if(mana4 == 1)
            rezultat_1++;
        else
            if(mana4 == 2)
                rezultat_2++;
            else
                if(mana4 == 3)
                    rezultat_3++;
                else
                    if(mana4 == 4)
                       rezultat_4++;
                    else
                        if(mana4 == 5)
                            rezultat_5++;
                        else
                            if(mana4 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("CINE IA MANA 5: ");
        scanf("%d", &mana5);
        if(mana5 == 1)
            rezultat_1++;
        else
            if(mana5 == 2)
                rezultat_2++;
            else
                if(mana5 == 3)
                    rezultat_3++;
                else
                    if(mana5 == 4)
                       rezultat_4++;
                    else
                        if(mana5 == 5)
                            rezultat_5++;
                        else
                            if(mana5 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("CINE IA MANA 6: ");
        scanf("%d", &mana6);
        if(mana6 == 1)
            rezultat_1++;
        else
            if(mana6 == 2)
                rezultat_2++;
            else
                if(mana6 == 3)
                    rezultat_3++;
                else
                    if(mana6 == 4)
                       rezultat_4++;
                    else
                        if(mana6 == 5)
                            rezultat_5++;
                        else
                            if(mana6 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("CINE IA MANA 7: ");
        scanf("%d", &mana7);
        if(mana7 == 1)
            rezultat_1++;
        else
            if(mana7 == 2)
                rezultat_2++;
            else
                if(mana7 == 3)
                    rezultat_3++;
                else
                    if(mana7 == 4)
                       rezultat_4++;
                    else
                        if(mana7 == 5)
                            rezultat_5++;
                        else
                            if(mana7 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("CINE IA MANA 8: ");
        scanf("%d", &mana8);
        if(mana8 == 1)
            rezultat_1++;
        else
            if(mana8 == 2)
                rezultat_2++;
            else
                if(mana8 == 3)
                    rezultat_3++;
                else
                    if(mana8 == 4)
                       rezultat_4++;
                    else
                        if(mana8 == 5)
                            rezultat_5++;
                        else
                            if(mana8 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("\n");

        if(rezultat_1 == pariu_1)
            {
                printf("JUCATORUL 1 SI-A FACUT MAINILE\n");
                punctaj_1 = punctaj_1 + (5 + pariu_1);
            }
        else
            {
                printf("JUCATORUL 1 S-A FRIPT CU %d\n", abs(rezultat_1 - pariu_1));
                punctaj_1 = punctaj_1 - (5 + abs(rezultat_1 - pariu_1));
            }

        if(rezultat_2 == pariu_2)
            {
                printf("JUCATORUL 2 SI-A FACUT MAINILE\n");
                punctaj_2 = punctaj_2 + (5 + pariu_2);
            }
        else
            {
                printf("JUCATORUL 2 S-A FRIPT CU %d\n", abs(rezultat_2 - pariu_2));
                punctaj_2 = punctaj_2 - (5 + abs(rezultat_2 - pariu_2));
            }
        if(rezultat_3 == pariu_3)
            {
                printf("JUCATORUL 3 SI-A FACUT MAINILE\n");
                punctaj_3 = punctaj_3 + (5 + pariu_3);
            }
        else
            {
                printf("JUCATORUL 3 S-A FRIPT CU %d\n", abs(rezultat_3 - pariu_3));
                punctaj_3 = punctaj_3 - (5 + abs(rezultat_3 - pariu_3));
            }
        if(rezultat_4 == pariu_4)
            {
                printf("JUCATORUL 4 SI-A FACUT MAINILE\n");
                punctaj_4 = punctaj_4 + (5 + pariu_4);
            }
        else
            {
                printf("JUCATORUL 4 S-A FRIPT CU %d\n", abs(rezultat_4 - pariu_4));
                punctaj_4 = punctaj_4 - (5 + abs(rezultat_4 - pariu_4));
            }
        if(rezultat_5 == pariu_5)
            {
                printf("JUCATORUL 5 SI-A FACUT MAINILE\n");
                punctaj_5 = punctaj_5 + (5 + pariu_5);
            }
        else
            {
                printf("JUCATORUL 5 S-A FRIPT CU %d\n", abs(rezultat_5 - pariu_5));
                punctaj_5 = punctaj_5 - (5 + abs(rezultat_5 - pariu_5));
            }
        if(rezultat_6 == pariu_6)
            {
                printf("JUCATORUL 6 SI-A FACUT MAINILE\n");
                punctaj_6 = punctaj_6 + (5 + pariu_6);
            }
        else
            {
                printf("JUCATORUL 6 S-A FRIPT CU %d\n", abs(rezultat_6 - pariu_6));
                punctaj_6 = punctaj_6 - (5 + abs(rezultat_6 - pariu_6));
            }
        printf("\n");
        printf("JUCATOR 1: %d\n", punctaj_1);
        printf("JUCATOR 2: %d\n", punctaj_2);
        printf("JUCATOR 3: %d\n", punctaj_3);
        printf("JUCATOR 4: %d\n", punctaj_4);
        printf("JUCATOR 5: %d\n", punctaj_5);
        printf("JUCATOR 6: %d\n", punctaj_6);
        printf("\n");
        printf("\n");

printf("JOC DE 8 NR.4\n");
printf("\n");

    pariu_1 = 0, pariu_2 = 0, pariu_3 = 0, pariu_4 = 0, pariu_5 = 0, pariu_6 = 0;
        rezultat_1 = 0, rezultat_2 = 0, rezultat_3 = 0, rezultat_4 = 0, rezultat_5 = 0, rezultat_6 = 0;
        printf("PARIU JUCATOR 4: ");
        scanf("%d", &aux4);
        printf("PARIU JUCATOR 5: ");
        scanf("%d", &aux5);
        printf("PARIU JUCATOR 6: ");
        scanf("%d", &aux6);
        printf("PARIU JUCATOR 1: ");
        scanf("%d", &aux1);
        printf("PARIU JUCATOR 2: ");
        scanf("%d", &aux2);
        printf("JUCATORUL 3 NU ARE VOIE SA PARIEZE %d\n", 8 - aux4 - aux5 - aux6 - aux1 - aux2);
        printf("PARIU JUCATOR 3: ");
        scanf("%d", &aux3);
        pariu_1 = aux1;
        pariu_2 = aux2;
        pariu_3 = aux3;
        pariu_4 = aux4;
        pariu_5 = aux5;
        pariu_6 = aux6;
        printf("\n");

        printf("PARIU 1: %d\n", pariu_1);
        printf("PARIU 2: %d\n", pariu_2);
        printf("PARIU 3: %d\n", pariu_3);
        printf("PARIU 4: %d\n", pariu_4);
        printf("PARIU 5: %d\n", pariu_5);
        printf("PARIU 6: %d\n", pariu_6);

        printf("\n");
        printf("CINE IA MANA 1: ");
        scanf("%d", &mana1);
        if(mana1 == 1)
            rezultat_1++;
        else
            if(mana1 == 2)
                rezultat_2++;
            else
                if(mana1 == 3)
                    rezultat_3++;
                else
                    if(mana1 == 4)
                       rezultat_4++;
                    else
                        if(mana1 == 5)
                            rezultat_5++;
                        else
                            if(mana1 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("CINE IA MANA 2: ");
        scanf("%d", &mana2);
        if(mana2 == 1)
            rezultat_1++;
        else
            if(mana2 == 2)
                rezultat_2++;
            else
                if(mana2 == 3)
                    rezultat_3++;
                else
                    if(mana2 == 4)
                       rezultat_4++;
                    else
                        if(mana2 == 5)
                            rezultat_5++;
                        else
                            if(mana2 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("CINE IA MANA 3: ");
        scanf("%d", &mana3);
        if(mana3 == 1)
            rezultat_1++;
        else
            if(mana3 == 2)
                rezultat_2++;
            else
                if(mana3 == 3)
                    rezultat_3++;
                else
                    if(mana3 == 4)
                       rezultat_4++;
                    else
                        if(mana3 == 5)
                            rezultat_5++;
                        else
                            if(mana3 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("CINE IA MANA 4: ");
        scanf("%d", &mana4);
        if(mana4 == 1)
            rezultat_1++;
        else
            if(mana4 == 2)
                rezultat_2++;
            else
                if(mana4 == 3)
                    rezultat_3++;
                else
                    if(mana4 == 4)
                       rezultat_4++;
                    else
                        if(mana4 == 5)
                            rezultat_5++;
                        else
                            if(mana4 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("CINE IA MANA 5: ");
        scanf("%d", &mana5);
        if(mana5 == 1)
            rezultat_1++;
        else
            if(mana5 == 2)
                rezultat_2++;
            else
                if(mana5 == 3)
                    rezultat_3++;
                else
                    if(mana5 == 4)
                       rezultat_4++;
                    else
                        if(mana5 == 5)
                            rezultat_5++;
                        else
                            if(mana5 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("CINE IA MANA 6: ");
        scanf("%d", &mana6);
        if(mana6 == 1)
            rezultat_1++;
        else
            if(mana6 == 2)
                rezultat_2++;
            else
                if(mana6 == 3)
                    rezultat_3++;
                else
                    if(mana6 == 4)
                       rezultat_4++;
                    else
                        if(mana6 == 5)
                            rezultat_5++;
                        else
                            if(mana6 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("CINE IA MANA 7: ");
        scanf("%d", &mana7);
        if(mana7 == 1)
            rezultat_1++;
        else
            if(mana7 == 2)
                rezultat_2++;
            else
                if(mana7 == 3)
                    rezultat_3++;
                else
                    if(mana7 == 4)
                       rezultat_4++;
                    else
                        if(mana7 == 5)
                            rezultat_5++;
                        else
                            if(mana7 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("CINE IA MANA 8: ");
        scanf("%d", &mana8);
        if(mana8 == 1)
            rezultat_1++;
        else
            if(mana8 == 2)
                rezultat_2++;
            else
                if(mana8 == 3)
                    rezultat_3++;
                else
                    if(mana8 == 4)
                       rezultat_4++;
                    else
                        if(mana8 == 5)
                            rezultat_5++;
                        else
                            if(mana8 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("\n");

        if(rezultat_1 == pariu_1)
            {
                printf("JUCATORUL 1 SI-A FACUT MAINILE\n");
                punctaj_1 = punctaj_1 + (5 + pariu_1);
            }
        else
            {
                printf("JUCATORUL 1 S-A FRIPT CU %d\n", abs(rezultat_1 - pariu_1));
                punctaj_1 = punctaj_1 - (5 + abs(rezultat_1 - pariu_1));
            }

        if(rezultat_2 == pariu_2)
            {
                printf("JUCATORUL 2 SI-A FACUT MAINILE\n");
                punctaj_2 = punctaj_2 + (5 + pariu_2);
            }
        else
            {
                printf("JUCATORUL 2 S-A FRIPT CU %d\n", abs(rezultat_2 - pariu_2));
                punctaj_2 = punctaj_2 - (5 + abs(rezultat_2 - pariu_2));
            }
        if(rezultat_3 == pariu_3)
            {
                printf("JUCATORUL 3 SI-A FACUT MAINILE\n");
                punctaj_3 = punctaj_3 + (5 + pariu_3);
            }
        else
            {
                printf("JUCATORUL 3 S-A FRIPT CU %d\n", abs(rezultat_3 - pariu_3));
                punctaj_3 = punctaj_3 - (5 + abs(rezultat_3 - pariu_3));
            }
        if(rezultat_4 == pariu_4)
            {
                printf("JUCATORUL 4 SI-A FACUT MAINILE\n");
                punctaj_4 = punctaj_4 + (5 + pariu_4);
            }
        else
            {
                printf("JUCATORUL 4 S-A FRIPT CU %d\n", abs(rezultat_4 - pariu_4));
                punctaj_4 = punctaj_4 - (5 + abs(rezultat_4 - pariu_4));
            }
        if(rezultat_5 == pariu_5)
            {
                printf("JUCATORUL 5 SI-A FACUT MAINILE\n");
                punctaj_5 = punctaj_5 + (5 + pariu_5);
            }
        else
            {
                printf("JUCATORUL 5 S-A FRIPT CU %d\n", abs(rezultat_5 - pariu_5));
                punctaj_5 = punctaj_5 - (5 + abs(rezultat_5 - pariu_5));
            }
        if(rezultat_6 == pariu_6)
            {
                printf("JUCATORUL 6 SI-A FACUT MAINILE\n");
                punctaj_6 = punctaj_6 + (5 + pariu_6);
            }
        else
            {
                printf("JUCATORUL 6 S-A FRIPT CU %d\n", abs(rezultat_6 - pariu_6));
                punctaj_6 = punctaj_6 - (5 + abs(rezultat_6 - pariu_6));
            }
        printf("\n");
        printf("JUCATOR 1: %d\n", punctaj_1);
        printf("JUCATOR 2: %d\n", punctaj_2);
        printf("JUCATOR 3: %d\n", punctaj_3);
        printf("JUCATOR 4: %d\n", punctaj_4);
        printf("JUCATOR 5: %d\n", punctaj_5);
        printf("JUCATOR 6: %d\n", punctaj_6);
        printf("\n");
        printf("\n");

printf("JOC DE 8 NR.5\n");
printf("\n");

    pariu_1 = 0, pariu_2 = 0, pariu_3 = 0, pariu_4 = 0, pariu_5 = 0, pariu_6 = 0;
        rezultat_1 = 0, rezultat_2 = 0, rezultat_3 = 0, rezultat_4 = 0, rezultat_5 = 0, rezultat_6 = 0;
        printf("PARIU JUCATOR 5: ");
        scanf("%d", &aux5);
        printf("PARIU JUCATOR 6: ");
        scanf("%d", &aux6);
        printf("PARIU JUCATOR 1: ");
        scanf("%d", &aux1);
        printf("PARIU JUCATOR 2: ");
        scanf("%d", &aux2);
        printf("PARIU JUCATOR 3: ");
        scanf("%d", &aux3);
        printf("JUCATORUL 4 NU ARE VOIE SA PARIEZE %d\n", 8 - aux5 - aux6 - aux1 - aux2 - aux3);
        printf("PARIU JUCATOR 4: ");
        scanf("%d", &aux4);
        pariu_1 = aux1;
        pariu_2 = aux2;
        pariu_3 = aux3;
        pariu_4 = aux4;
        pariu_5 = aux5;
        pariu_6 = aux6;
        printf("\n");

        printf("PARIU 1: %d\n", pariu_1);
        printf("PARIU 2: %d\n", pariu_2);
        printf("PARIU 3: %d\n", pariu_3);
        printf("PARIU 4: %d\n", pariu_4);
        printf("PARIU 5: %d\n", pariu_5);
        printf("PARIU 6: %d\n", pariu_6);

        printf("\n");
        printf("CINE IA MANA 1: ");
        scanf("%d", &mana1);
        if(mana1 == 1)
            rezultat_1++;
        else
            if(mana1 == 2)
                rezultat_2++;
            else
                if(mana1 == 3)
                    rezultat_3++;
                else
                    if(mana1 == 4)
                       rezultat_4++;
                    else
                        if(mana1 == 5)
                            rezultat_5++;
                        else
                            if(mana1 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("CINE IA MANA 2: ");
        scanf("%d", &mana2);
        if(mana2 == 1)
            rezultat_1++;
        else
            if(mana2 == 2)
                rezultat_2++;
            else
                if(mana2 == 3)
                    rezultat_3++;
                else
                    if(mana2 == 4)
                       rezultat_4++;
                    else
                        if(mana2 == 5)
                            rezultat_5++;
                        else
                            if(mana2 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("CINE IA MANA 3: ");
        scanf("%d", &mana3);
        if(mana3 == 1)
            rezultat_1++;
        else
            if(mana3 == 2)
                rezultat_2++;
            else
                if(mana3 == 3)
                    rezultat_3++;
                else
                    if(mana3 == 4)
                       rezultat_4++;
                    else
                        if(mana3 == 5)
                            rezultat_5++;
                        else
                            if(mana3 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("CINE IA MANA 4: ");
        scanf("%d", &mana4);
        if(mana4 == 1)
            rezultat_1++;
        else
            if(mana4 == 2)
                rezultat_2++;
            else
                if(mana4 == 3)
                    rezultat_3++;
                else
                    if(mana4 == 4)
                       rezultat_4++;
                    else
                        if(mana4 == 5)
                            rezultat_5++;
                        else
                            if(mana4 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("CINE IA MANA 5: ");
        scanf("%d", &mana5);
        if(mana5 == 1)
            rezultat_1++;
        else
            if(mana5 == 2)
                rezultat_2++;
            else
                if(mana5 == 3)
                    rezultat_3++;
                else
                    if(mana5 == 4)
                       rezultat_4++;
                    else
                        if(mana5 == 5)
                            rezultat_5++;
                        else
                            if(mana5 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("CINE IA MANA 6: ");
        scanf("%d", &mana6);
        if(mana6 == 1)
            rezultat_1++;
        else
            if(mana6 == 2)
                rezultat_2++;
            else
                if(mana6 == 3)
                    rezultat_3++;
                else
                    if(mana6 == 4)
                       rezultat_4++;
                    else
                        if(mana6 == 5)
                            rezultat_5++;
                        else
                            if(mana6 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("CINE IA MANA 7: ");
        scanf("%d", &mana7);
        if(mana7 == 1)
            rezultat_1++;
        else
            if(mana7 == 2)
                rezultat_2++;
            else
                if(mana7 == 3)
                    rezultat_3++;
                else
                    if(mana7 == 4)
                       rezultat_4++;
                    else
                        if(mana7 == 5)
                            rezultat_5++;
                        else
                            if(mana7 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("CINE IA MANA 8: ");
        scanf("%d", &mana8);
        if(mana8 == 1)
            rezultat_1++;
        else
            if(mana8 == 2)
                rezultat_2++;
            else
                if(mana8 == 3)
                    rezultat_3++;
                else
                    if(mana8 == 4)
                       rezultat_4++;
                    else
                        if(mana8 == 5)
                            rezultat_5++;
                        else
                            if(mana8 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("\n");

        if(rezultat_1 == pariu_1)
            {
                printf("JUCATORUL 1 SI-A FACUT MAINILE\n");
                punctaj_1 = punctaj_1 + (5 + pariu_1);
            }
        else
            {
                printf("JUCATORUL 1 S-A FRIPT CU %d\n", abs(rezultat_1 - pariu_1));
                punctaj_1 = punctaj_1 - (5 + abs(rezultat_1 - pariu_1));
            }

        if(rezultat_2 == pariu_2)
            {
                printf("JUCATORUL 2 SI-A FACUT MAINILE\n");
                punctaj_2 = punctaj_2 + (5 + pariu_2);
            }
        else
            {
                printf("JUCATORUL 2 S-A FRIPT CU %d\n", abs(rezultat_2 - pariu_2));
                punctaj_2 = punctaj_2 - (5 + abs(rezultat_2 - pariu_2));
            }
        if(rezultat_3 == pariu_3)
            {
                printf("JUCATORUL 3 SI-A FACUT MAINILE\n");
                punctaj_3 = punctaj_3 + (5 + pariu_3);
            }
        else
            {
                printf("JUCATORUL 3 S-A FRIPT CU %d\n", abs(rezultat_3 - pariu_3));
                punctaj_3 = punctaj_3 - (5 + abs(rezultat_3 - pariu_3));
            }
        if(rezultat_4 == pariu_4)
            {
                printf("JUCATORUL 4 SI-A FACUT MAINILE\n");
                punctaj_4 = punctaj_4 + (5 + pariu_4);
            }
        else
            {
                printf("JUCATORUL 4 S-A FRIPT CU %d\n", abs(rezultat_4 - pariu_4));
                punctaj_4 = punctaj_4 - (5 + abs(rezultat_4 - pariu_4));
            }
        if(rezultat_5 == pariu_5)
            {
                printf("JUCATORUL 5 SI-A FACUT MAINILE\n");
                punctaj_5 = punctaj_5 + (5 + pariu_5);
            }
        else
            {
                printf("JUCATORUL 5 S-A FRIPT CU %d\n", abs(rezultat_5 - pariu_5));
                punctaj_5 = punctaj_5 - (5 + abs(rezultat_5 - pariu_5));
            }
        if(rezultat_6 == pariu_6)
            {
                printf("JUCATORUL 6 SI-A FACUT MAINILE\n");
                punctaj_6 = punctaj_6 + (5 + pariu_6);
            }
        else
            {
                printf("JUCATORUL 6 S-A FRIPT CU %d\n", abs(rezultat_6 - pariu_6));
                punctaj_6 = punctaj_6 - (5 + abs(rezultat_6 - pariu_6));
            }
        printf("\n");
        printf("JUCATOR 1: %d\n", punctaj_1);
        printf("JUCATOR 2: %d\n", punctaj_2);
        printf("JUCATOR 3: %d\n", punctaj_3);
        printf("JUCATOR 4: %d\n", punctaj_4);
        printf("JUCATOR 5: %d\n", punctaj_5);
        printf("JUCATOR 6: %d\n", punctaj_6);
        printf("\n");
        printf("\n");

printf("JOC DE 8 NR.6\n");
printf("\n");

    pariu_1 = 0, pariu_2 = 0, pariu_3 = 0, pariu_4 = 0, pariu_5 = 0, pariu_6 = 0;
        rezultat_1 = 0, rezultat_2 = 0, rezultat_3 = 0, rezultat_4 = 0, rezultat_5 = 0, rezultat_6 = 0;
        printf("PARIU JUCATOR 6: ");
        scanf("%d", &aux6);
        printf("PARIU JUCATOR 1: ");
        scanf("%d", &aux1);
        printf("PARIU JUCATOR 2: ");
        scanf("%d", &aux2);
        printf("PARIU JUCATOR 3: ");
        scanf("%d", &aux3);
        printf("PARIU JUCATOR 4: ");
        scanf("%d", &aux4);
        printf("JUCATORUL 5 NU ARE VOIE SA PARIEZE %d\n", 8 - aux6 - aux1 - aux2 - aux3 - aux4);
        printf("PARIU JUCATOR 5: ");
        scanf("%d", &aux5);
        pariu_1 = aux1;
        pariu_2 = aux2;
        pariu_3 = aux3;
        pariu_4 = aux4;
        pariu_5 = aux5;
        pariu_6 = aux6;
        printf("\n");

        printf("PARIU 1: %d\n", pariu_1);
        printf("PARIU 2: %d\n", pariu_2);
        printf("PARIU 3: %d\n", pariu_3);
        printf("PARIU 4: %d\n", pariu_4);
        printf("PARIU 5: %d\n", pariu_5);
        printf("PARIU 6: %d\n", pariu_6);

        printf("\n");
        printf("CINE IA MANA 1: ");
        scanf("%d", &mana1);
        if(mana1 == 1)
            rezultat_1++;
        else
            if(mana1 == 2)
                rezultat_2++;
            else
                if(mana1 == 3)
                    rezultat_3++;
                else
                    if(mana1 == 4)
                       rezultat_4++;
                    else
                        if(mana1 == 5)
                            rezultat_5++;
                        else
                            if(mana1 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("CINE IA MANA 2: ");
        scanf("%d", &mana2);
        if(mana2 == 1)
            rezultat_1++;
        else
            if(mana2 == 2)
                rezultat_2++;
            else
                if(mana2 == 3)
                    rezultat_3++;
                else
                    if(mana2 == 4)
                       rezultat_4++;
                    else
                        if(mana2 == 5)
                            rezultat_5++;
                        else
                            if(mana2 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("CINE IA MANA 3: ");
        scanf("%d", &mana3);
        if(mana3 == 1)
            rezultat_1++;
        else
            if(mana3 == 2)
                rezultat_2++;
            else
                if(mana3 == 3)
                    rezultat_3++;
                else
                    if(mana3 == 4)
                       rezultat_4++;
                    else
                        if(mana3 == 5)
                            rezultat_5++;
                        else
                            if(mana3 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("CINE IA MANA 4: ");
        scanf("%d", &mana4);
        if(mana4 == 1)
            rezultat_1++;
        else
            if(mana4 == 2)
                rezultat_2++;
            else
                if(mana4 == 3)
                    rezultat_3++;
                else
                    if(mana4 == 4)
                       rezultat_4++;
                    else
                        if(mana4 == 5)
                            rezultat_5++;
                        else
                            if(mana4 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("CINE IA MANA 5: ");
        scanf("%d", &mana5);
        if(mana5 == 1)
            rezultat_1++;
        else
            if(mana5 == 2)
                rezultat_2++;
            else
                if(mana5 == 3)
                    rezultat_3++;
                else
                    if(mana5 == 4)
                       rezultat_4++;
                    else
                        if(mana5 == 5)
                            rezultat_5++;
                        else
                            if(mana5 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("CINE IA MANA 6: ");
        scanf("%d", &mana6);
        if(mana6 == 1)
            rezultat_1++;
        else
            if(mana6 == 2)
                rezultat_2++;
            else
                if(mana6 == 3)
                    rezultat_3++;
                else
                    if(mana6 == 4)
                       rezultat_4++;
                    else
                        if(mana6 == 5)
                            rezultat_5++;
                        else
                            if(mana6 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("CINE IA MANA 7: ");
        scanf("%d", &mana7);
        if(mana7 == 1)
            rezultat_1++;
        else
            if(mana7 == 2)
                rezultat_2++;
            else
                if(mana7 == 3)
                    rezultat_3++;
                else
                    if(mana7 == 4)
                       rezultat_4++;
                    else
                        if(mana7 == 5)
                            rezultat_5++;
                        else
                            if(mana7 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("CINE IA MANA 8: ");
        scanf("%d", &mana8);
        if(mana8 == 1)
            rezultat_1++;
        else
            if(mana8 == 2)
                rezultat_2++;
            else
                if(mana8 == 3)
                    rezultat_3++;
                else
                    if(mana8 == 4)
                       rezultat_4++;
                    else
                        if(mana8 == 5)
                            rezultat_5++;
                        else
                            if(mana8 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("\n");

        if(rezultat_1 == pariu_1)
            {
                printf("JUCATORUL 1 SI-A FACUT MAINILE\n");
                punctaj_1 = punctaj_1 + (5 + pariu_1);
            }
        else
            {
                printf("JUCATORUL 1 S-A FRIPT CU %d\n", abs(rezultat_1 - pariu_1));
                punctaj_1 = punctaj_1 - (5 + abs(rezultat_1 - pariu_1));
            }

        if(rezultat_2 == pariu_2)
            {
                printf("JUCATORUL 2 SI-A FACUT MAINILE\n");
                punctaj_2 = punctaj_2 + (5 + pariu_2);
            }
        else
            {
                printf("JUCATORUL 2 S-A FRIPT CU %d\n", abs(rezultat_2 - pariu_2));
                punctaj_2 = punctaj_2 - (5 + abs(rezultat_2 - pariu_2));
            }
        if(rezultat_3 == pariu_3)
            {
                printf("JUCATORUL 3 SI-A FACUT MAINILE\n");
                punctaj_3 = punctaj_3 + (5 + pariu_3);
            }
        else
            {
                printf("JUCATORUL 3 S-A FRIPT CU %d\n", abs(rezultat_3 - pariu_3));
                punctaj_3 = punctaj_3 - (5 + abs(rezultat_3 - pariu_3));
            }
        if(rezultat_4 == pariu_4)
            {
                printf("JUCATORUL 4 SI-A FACUT MAINILE\n");
                punctaj_4 = punctaj_4 + (5 + pariu_4);
            }
        else
            {
                printf("JUCATORUL 4 S-A FRIPT CU %d\n", abs(rezultat_4 - pariu_4));
                punctaj_4 = punctaj_4 - (5 + abs(rezultat_4 - pariu_4));
            }
        if(rezultat_5 == pariu_5)
            {
                printf("JUCATORUL 5 SI-A FACUT MAINILE\n");
                punctaj_5 = punctaj_5 + (5 + pariu_5);
            }
        else
            {
                printf("JUCATORUL 5 S-A FRIPT CU %d\n", abs(rezultat_5 - pariu_5));
                punctaj_5 = punctaj_5 - (5 + abs(rezultat_5 - pariu_5));
            }
        if(rezultat_6 == pariu_6)
            {
                printf("JUCATORUL 6 SI-A FACUT MAINILE\n");
                punctaj_6 = punctaj_6 + (5 + pariu_6);
            }
        else
            {
                printf("JUCATORUL 6 S-A FRIPT CU %d\n", abs(rezultat_6 - pariu_6));
                punctaj_6 = punctaj_6 - (5 + abs(rezultat_6 - pariu_6));
            }
        printf("\n");
        printf("JUCATOR 1: %d\n", punctaj_1);
        printf("JUCATOR 2: %d\n", punctaj_2);
        printf("JUCATOR 3: %d\n", punctaj_3);
        printf("JUCATOR 4: %d\n", punctaj_4);
        printf("JUCATOR 5: %d\n", punctaj_5);
        printf("JUCATOR 6: %d\n", punctaj_6);
        printf("\n");
        printf("\n");

printf("JOC DE 7\n");
printf("\n");

    pariu_1 = 0, pariu_2 = 0, pariu_3 = 0, pariu_4 = 0, pariu_5 = 0, pariu_6 = 0;
        rezultat_1 = 0, rezultat_2 = 0, rezultat_3 = 0, rezultat_4 = 0, rezultat_5 = 0, rezultat_6 = 0;
        printf("PARIU JUCATOR 1: ");
        scanf("%d", &aux1);
        printf("PARIU JUCATOR 2: ");
        scanf("%d", &aux2);
        printf("PARIU JUCATOR 3: ");
        scanf("%d", &aux3);
        printf("PARIU JUCATOR 4: ");
        scanf("%d", &aux4);
        printf("PARIU JUCATOR 5: ");
        scanf("%d", &aux5);
        printf("JUCATORUL 6 NU ARE VOIE SA PARIEZE %d\n", 7 - aux1 - aux2 - aux3 - aux4 - aux5);
        printf("PARIU JUCATOR 6: ");
        scanf("%d", &aux6);
        pariu_1 = aux1;
        pariu_2 = aux2;
        pariu_3 = aux3;
        pariu_4 = aux4;
        pariu_5 = aux5;
        pariu_6 = aux6;
        printf("\n");

        printf("PARIU 1: %d\n", pariu_1);
        printf("PARIU 2: %d\n", pariu_2);
        printf("PARIU 3: %d\n", pariu_3);
        printf("PARIU 4: %d\n", pariu_4);
        printf("PARIU 5: %d\n", pariu_5);
        printf("PARIU 6: %d\n", pariu_6);

        printf("\n");
        printf("CINE IA MANA 1: ");
        scanf("%d", &mana1);
        if(mana1 == 1)
            rezultat_1++;
        else
            if(mana1 == 2)
                rezultat_2++;
            else
                if(mana1 == 3)
                    rezultat_3++;
                else
                    if(mana1 == 4)
                       rezultat_4++;
                    else
                        if(mana1 == 5)
                            rezultat_5++;
                        else
                            if(mana1 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("CINE IA MANA 2: ");
        scanf("%d", &mana2);
        if(mana2 == 1)
            rezultat_1++;
        else
            if(mana2 == 2)
                rezultat_2++;
            else
                if(mana2 == 3)
                    rezultat_3++;
                else
                    if(mana2 == 4)
                       rezultat_4++;
                    else
                        if(mana2 == 5)
                            rezultat_5++;
                        else
                            if(mana2 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("CINE IA MANA 3: ");
        scanf("%d", &mana3);
        if(mana3 == 1)
            rezultat_1++;
        else
            if(mana3 == 2)
                rezultat_2++;
            else
                if(mana3 == 3)
                    rezultat_3++;
                else
                    if(mana3 == 4)
                       rezultat_4++;
                    else
                        if(mana3 == 5)
                            rezultat_5++;
                        else
                            if(mana3 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("CINE IA MANA 4: ");
        scanf("%d", &mana4);
        if(mana4 == 1)
            rezultat_1++;
        else
            if(mana4 == 2)
                rezultat_2++;
            else
                if(mana4 == 3)
                    rezultat_3++;
                else
                    if(mana4 == 4)
                       rezultat_4++;
                    else
                        if(mana4 == 5)
                            rezultat_5++;
                        else
                            if(mana4 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("CINE IA MANA 5: ");
        scanf("%d", &mana5);
        if(mana5 == 1)
            rezultat_1++;
        else
            if(mana5 == 2)
                rezultat_2++;
            else
                if(mana5 == 3)
                    rezultat_3++;
                else
                    if(mana5 == 4)
                       rezultat_4++;
                    else
                        if(mana5 == 5)
                            rezultat_5++;
                        else
                            if(mana5 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("CINE IA MANA 6: ");
        scanf("%d", &mana6);
        if(mana6 == 1)
            rezultat_1++;
        else
            if(mana6 == 2)
                rezultat_2++;
            else
                if(mana6 == 3)
                    rezultat_3++;
                else
                    if(mana6 == 4)
                       rezultat_4++;
                    else
                        if(mana6 == 5)
                            rezultat_5++;
                        else
                            if(mana6 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("CINE IA MANA 7: ");
        scanf("%d", &mana7);
        if(mana7 == 1)
            rezultat_1++;
        else
            if(mana7 == 2)
                rezultat_2++;
            else
                if(mana7 == 3)
                    rezultat_3++;
                else
                    if(mana7 == 4)
                       rezultat_4++;
                    else
                        if(mana7 == 5)
                            rezultat_5++;
                        else
                            if(mana7 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("\n");

        if(rezultat_1 == pariu_1)
            {
                printf("JUCATORUL 1 SI-A FACUT MAINILE\n");
                punctaj_1 = punctaj_1 + (5 + pariu_1);
            }
        else
            {
                printf("JUCATORUL 1 S-A FRIPT CU %d\n", abs(rezultat_1 - pariu_1));
                punctaj_1 = punctaj_1 - (5 + abs(rezultat_1 - pariu_1));
            }

        if(rezultat_2 == pariu_2)
            {
                printf("JUCATORUL 2 SI-A FACUT MAINILE\n");
                punctaj_2 = punctaj_2 + (5 + pariu_2);
            }
        else
            {
                printf("JUCATORUL 2 S-A FRIPT CU %d\n", abs(rezultat_2 - pariu_2));
                punctaj_2 = punctaj_2 - (5 + abs(rezultat_2 - pariu_2));
            }
        if(rezultat_3 == pariu_3)
            {
                printf("JUCATORUL 3 SI-A FACUT MAINILE\n");
                punctaj_3 = punctaj_3 + (5 + pariu_3);
            }
        else
            {
                printf("JUCATORUL 3 S-A FRIPT CU %d\n", abs(rezultat_3 - pariu_3));
                punctaj_3 = punctaj_3 - (5 + abs(rezultat_3 - pariu_3));
            }
        if(rezultat_4 == pariu_4)
            {
                printf("JUCATORUL 4 SI-A FACUT MAINILE\n");
                punctaj_4 = punctaj_4 + (5 + pariu_4);
            }
        else
            {
                printf("JUCATORUL 4 S-A FRIPT CU %d\n", abs(rezultat_4 - pariu_4));
                punctaj_4 = punctaj_4 - (5 + abs(rezultat_4 - pariu_4));
            }
        if(rezultat_5 == pariu_5)
            {
                printf("JUCATORUL 5 SI-A FACUT MAINILE\n");
                punctaj_5 = punctaj_5 + (5 + pariu_5);
            }
        else
            {
                printf("JUCATORUL 5 S-A FRIPT CU %d\n", abs(rezultat_5 - pariu_5));
                punctaj_5 = punctaj_5 - (5 + abs(rezultat_5 - pariu_5));
            }
        if(rezultat_6 == pariu_6)
            {
                printf("JUCATORUL 6 SI-A FACUT MAINILE\n");
                punctaj_6 = punctaj_6 + (5 + pariu_6);
            }
        else
            {
                printf("JUCATORUL 6 S-A FRIPT CU %d\n", abs(rezultat_6 - pariu_6));
                punctaj_6 = punctaj_6 - (5 + abs(rezultat_6 - pariu_6));
            }
        printf("\n");
        printf("JUCATOR 1: %d\n", punctaj_1);
        printf("JUCATOR 2: %d\n", punctaj_2);
        printf("JUCATOR 3: %d\n", punctaj_3);
        printf("JUCATOR 4: %d\n", punctaj_4);
        printf("JUCATOR 5: %d\n", punctaj_5);
        printf("JUCATOR 6: %d\n", punctaj_6);
        printf("\n");
        printf("\n");

printf("JOC DE 6\n");
printf("\n");

    pariu_1 = 0, pariu_2 = 0, pariu_3 = 0, pariu_4 = 0, pariu_5 = 0, pariu_6 = 0;
        rezultat_1 = 0, rezultat_2 = 0, rezultat_3 = 0, rezultat_4 = 0, rezultat_5 = 0, rezultat_6 = 0;
        printf("PARIU JUCATOR 2: ");
        scanf("%d", &aux2);
        printf("PARIU JUCATOR 3: ");
        scanf("%d", &aux3);
        printf("PARIU JUCATOR 4: ");
        scanf("%d", &aux4);
        printf("PARIU JUCATOR 5: ");
        scanf("%d", &aux5);
        printf("PARIU JUCATOR 6: ");
        scanf("%d", &aux6);
        printf("JUCATORUL 1 NU ARE VOIE SA PARIEZE %d\n", 6 - aux2 - aux3 - aux4 - aux5 - aux6);
        printf("PARIU JUCATOR 1: ");
        scanf("%d", &aux1);
        pariu_1 = aux1;
        pariu_2 = aux2;
        pariu_3 = aux3;
        pariu_4 = aux4;
        pariu_5 = aux5;
        pariu_6 = aux6;
        printf("\n");

        printf("PARIU 1: %d\n", pariu_1);
        printf("PARIU 2: %d\n", pariu_2);
        printf("PARIU 3: %d\n", pariu_3);
        printf("PARIU 4: %d\n", pariu_4);
        printf("PARIU 5: %d\n", pariu_5);
        printf("PARIU 6: %d\n", pariu_6);

        printf("\n");
        printf("CINE IA MANA 1: ");
        scanf("%d", &mana1);
        if(mana1 == 1)
            rezultat_1++;
        else
            if(mana1 == 2)
                rezultat_2++;
            else
                if(mana1 == 3)
                    rezultat_3++;
                else
                    if(mana1 == 4)
                       rezultat_4++;
                    else
                        if(mana1 == 5)
                            rezultat_5++;
                        else
                            if(mana1 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("CINE IA MANA 2: ");
        scanf("%d", &mana2);
        if(mana2 == 1)
            rezultat_1++;
        else
            if(mana2 == 2)
                rezultat_2++;
            else
                if(mana2 == 3)
                    rezultat_3++;
                else
                    if(mana2 == 4)
                       rezultat_4++;
                    else
                        if(mana2 == 5)
                            rezultat_5++;
                        else
                            if(mana2 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("CINE IA MANA 3: ");
        scanf("%d", &mana3);
        if(mana3 == 1)
            rezultat_1++;
        else
            if(mana3 == 2)
                rezultat_2++;
            else
                if(mana3 == 3)
                    rezultat_3++;
                else
                    if(mana3 == 4)
                       rezultat_4++;
                    else
                        if(mana3 == 5)
                            rezultat_5++;
                        else
                            if(mana3 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("CINE IA MANA 4: ");
        scanf("%d", &mana4);
        if(mana4 == 1)
            rezultat_1++;
        else
            if(mana4 == 2)
                rezultat_2++;
            else
                if(mana4 == 3)
                    rezultat_3++;
                else
                    if(mana4 == 4)
                       rezultat_4++;
                    else
                        if(mana4 == 5)
                            rezultat_5++;
                        else
                            if(mana4 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("CINE IA MANA 5: ");
        scanf("%d", &mana5);
        if(mana5 == 1)
            rezultat_1++;
        else
            if(mana5 == 2)
                rezultat_2++;
            else
                if(mana5 == 3)
                    rezultat_3++;
                else
                    if(mana5 == 4)
                       rezultat_4++;
                    else
                        if(mana5 == 5)
                            rezultat_5++;
                        else
                            if(mana5 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("CINE IA MANA 6: ");
        scanf("%d", &mana6);
        if(mana6 == 1)
            rezultat_1++;
        else
            if(mana6 == 2)
                rezultat_2++;
            else
                if(mana6 == 3)
                    rezultat_3++;
                else
                    if(mana6 == 4)
                       rezultat_4++;
                    else
                        if(mana6 == 5)
                            rezultat_5++;
                        else
                            if(mana6 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("\n");

        if(rezultat_1 == pariu_1)
            {
                printf("JUCATORUL 1 SI-A FACUT MAINILE\n");
                punctaj_1 = punctaj_1 + (5 + pariu_1);
            }
        else
            {
                printf("JUCATORUL 1 S-A FRIPT CU %d\n", abs(rezultat_1 - pariu_1));
                punctaj_1 = punctaj_1 - (5 + abs(rezultat_1 - pariu_1));
            }

        if(rezultat_2 == pariu_2)
            {
                printf("JUCATORUL 2 SI-A FACUT MAINILE\n");
                punctaj_2 = punctaj_2 + (5 + pariu_2);
            }
        else
            {
                printf("JUCATORUL 2 S-A FRIPT CU %d\n", abs(rezultat_2 - pariu_2));
                punctaj_2 = punctaj_2 - (5 + abs(rezultat_2 - pariu_2));
            }
        if(rezultat_3 == pariu_3)
            {
                printf("JUCATORUL 3 SI-A FACUT MAINILE\n");
                punctaj_3 = punctaj_3 + (5 + pariu_3);
            }
        else
            {
                printf("JUCATORUL 3 S-A FRIPT CU %d\n", abs(rezultat_3 - pariu_3));
                punctaj_3 = punctaj_3 - (5 + abs(rezultat_3 - pariu_3));
            }
        if(rezultat_4 == pariu_4)
            {
                printf("JUCATORUL 4 SI-A FACUT MAINILE\n");
                punctaj_4 = punctaj_4 + (5 + pariu_4);
            }
        else
            {
                printf("JUCATORUL 4 S-A FRIPT CU %d\n", abs(rezultat_4 - pariu_4));
                punctaj_4 = punctaj_4 - (5 + abs(rezultat_4 - pariu_4));
            }
        if(rezultat_5 == pariu_5)
            {
                printf("JUCATORUL 5 SI-A FACUT MAINILE\n");
                punctaj_5 = punctaj_5 + (5 + pariu_5);
            }
        else
            {
                printf("JUCATORUL 5 S-A FRIPT CU %d\n", abs(rezultat_5 - pariu_5));
                punctaj_5 = punctaj_5 - (5 + abs(rezultat_5 - pariu_5));
            }
        if(rezultat_6 == pariu_6)
            {
                printf("JUCATORUL 6 SI-A FACUT MAINILE\n");
                punctaj_6 = punctaj_6 + (5 + pariu_6);
            }
        else
            {
                printf("JUCATORUL 6 S-A FRIPT CU %d\n", abs(rezultat_6 - pariu_6));
                punctaj_6 = punctaj_6 - (5 + abs(rezultat_6 - pariu_6));
            }
        printf("\n");
        printf("JUCATOR 1: %d\n", punctaj_1);
        printf("JUCATOR 2: %d\n", punctaj_2);
        printf("JUCATOR 3: %d\n", punctaj_3);
        printf("JUCATOR 4: %d\n", punctaj_4);
        printf("JUCATOR 5: %d\n", punctaj_5);
        printf("JUCATOR 6: %d\n", punctaj_6);
        printf("\n");
        printf("\n");

printf("JOC DE 5\n");
printf("\n");

    pariu_1 = 0, pariu_2 = 0, pariu_3 = 0, pariu_4 = 0, pariu_5 = 0, pariu_6 = 0;
        rezultat_1 = 0, rezultat_2 = 0, rezultat_3 = 0, rezultat_4 = 0, rezultat_5 = 0, rezultat_6 = 0;
        printf("PARIU JUCATOR 3: ");
        scanf("%d", &aux3);
        printf("PARIU JUCATOR 4: ");
        scanf("%d", &aux4);
        printf("PARIU JUCATOR 5: ");
        scanf("%d", &aux5);
        printf("PARIU JUCATOR 6: ");
        scanf("%d", &aux6);
        printf("PARIU JUCATOR 1 ");
        scanf("%d", &aux1);
        printf("JUCATORUL 2 NU ARE VOIE SA PARIEZE %d\n", 5 - aux3 - aux4 - aux5 - aux6 - aux1);
        printf("PARIU JUCATOR 2: ");
        scanf("%d", &aux2);
        pariu_1 = aux1;
        pariu_2 = aux2;
        pariu_3 = aux3;
        pariu_4 = aux4;
        pariu_5 = aux5;
        pariu_6 = aux6;
        printf("\n");

        printf("PARIU 1: %d\n", pariu_1);
        printf("PARIU 2: %d\n", pariu_2);
        printf("PARIU 3: %d\n", pariu_3);
        printf("PARIU 4: %d\n", pariu_4);
        printf("PARIU 5: %d\n", pariu_5);
        printf("PARIU 6: %d\n", pariu_6);

        printf("\n");
        printf("CINE IA MANA 1: ");
        scanf("%d", &mana1);
        if(mana1 == 1)
            rezultat_1++;
        else
            if(mana1 == 2)
                rezultat_2++;
            else
                if(mana1 == 3)
                    rezultat_3++;
                else
                    if(mana1 == 4)
                       rezultat_4++;
                    else
                        if(mana1 == 5)
                            rezultat_5++;
                        else
                            if(mana1 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("CINE IA MANA 2: ");
        scanf("%d", &mana2);
        if(mana2 == 1)
            rezultat_1++;
        else
            if(mana2 == 2)
                rezultat_2++;
            else
                if(mana2 == 3)
                    rezultat_3++;
                else
                    if(mana2 == 4)
                       rezultat_4++;
                    else
                        if(mana2 == 5)
                            rezultat_5++;
                        else
                            if(mana2 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("CINE IA MANA 3: ");
        scanf("%d", &mana3);
        if(mana3 == 1)
            rezultat_1++;
        else
            if(mana3 == 2)
                rezultat_2++;
            else
                if(mana3 == 3)
                    rezultat_3++;
                else
                    if(mana3 == 4)
                       rezultat_4++;
                    else
                        if(mana3 == 5)
                            rezultat_5++;
                        else
                            if(mana3 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("CINE IA MANA 4: ");
        scanf("%d", &mana4);
        if(mana4 == 1)
            rezultat_1++;
        else
            if(mana4 == 2)
                rezultat_2++;
            else
                if(mana4 == 3)
                    rezultat_3++;
                else
                    if(mana4 == 4)
                       rezultat_4++;
                    else
                        if(mana4 == 5)
                            rezultat_5++;
                        else
                            if(mana4 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("CINE IA MANA 5: ");
        scanf("%d", &mana5);
        if(mana5 == 1)
            rezultat_1++;
        else
            if(mana5 == 2)
                rezultat_2++;
            else
                if(mana5 == 3)
                    rezultat_3++;
                else
                    if(mana5 == 4)
                       rezultat_4++;
                    else
                        if(mana5 == 5)
                            rezultat_5++;
                        else
                            if(mana5 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("\n");

        if(rezultat_1 == pariu_1)
            {
                printf("JUCATORUL 1 SI-A FACUT MAINILE\n");
                punctaj_1 = punctaj_1 + (5 + pariu_1);
            }
        else
            {
                printf("JUCATORUL 1 S-A FRIPT CU %d\n", abs(rezultat_1 - pariu_1));
                punctaj_1 = punctaj_1 - (5 + abs(rezultat_1 - pariu_1));
            }

        if(rezultat_2 == pariu_2)
            {
                printf("JUCATORUL 2 SI-A FACUT MAINILE\n");
                punctaj_2 = punctaj_2 + (5 + pariu_2);
            }
        else
            {
                printf("JUCATORUL 2 S-A FRIPT CU %d\n", abs(rezultat_2 - pariu_2));
                punctaj_2 = punctaj_2 - (5 + abs(rezultat_2 - pariu_2));
            }
        if(rezultat_3 == pariu_3)
            {
                printf("JUCATORUL 3 SI-A FACUT MAINILE\n");
                punctaj_3 = punctaj_3 + (5 + pariu_3);
            }
        else
            {
                printf("JUCATORUL 3 S-A FRIPT CU %d\n", abs(rezultat_3 - pariu_3));
                punctaj_3 = punctaj_3 - (5 + abs(rezultat_3 - pariu_3));
            }
        if(rezultat_4 == pariu_4)
            {
                printf("JUCATORUL 4 SI-A FACUT MAINILE\n");
                punctaj_4 = punctaj_4 + (5 + pariu_4);
            }
        else
            {
                printf("JUCATORUL 4 S-A FRIPT CU %d\n", abs(rezultat_4 - pariu_4));
                punctaj_4 = punctaj_4 - (5 + abs(rezultat_4 - pariu_4));
            }
        if(rezultat_5 == pariu_5)
            {
                printf("JUCATORUL 5 SI-A FACUT MAINILE\n");
                punctaj_5 = punctaj_5 + (5 + pariu_5);
            }
        else
            {
                printf("JUCATORUL 5 S-A FRIPT CU %d\n", abs(rezultat_5 - pariu_5));
                punctaj_5 = punctaj_5 - (5 + abs(rezultat_5 - pariu_5));
            }
        if(rezultat_6 == pariu_6)
            {
                printf("JUCATORUL 6 SI-A FACUT MAINILE\n");
                punctaj_6 = punctaj_6 + (5 + pariu_6);
            }
        else
            {
                printf("JUCATORUL 6 S-A FRIPT CU %d\n", abs(rezultat_6 - pariu_6));
                punctaj_6 = punctaj_6 - (5 + abs(rezultat_6 - pariu_6));
            }
        printf("\n");
        printf("JUCATOR 1: %d\n", punctaj_1);
        printf("JUCATOR 2: %d\n", punctaj_2);
        printf("JUCATOR 3: %d\n", punctaj_3);
        printf("JUCATOR 4: %d\n", punctaj_4);
        printf("JUCATOR 5: %d\n", punctaj_5);
        printf("JUCATOR 6: %d\n", punctaj_6);
        printf("\n");
        printf("\n");

printf("JOC DE 4\n");
printf("\n");

    pariu_1 = 0, pariu_2 = 0, pariu_3 = 0, pariu_4 = 0, pariu_5 = 0, pariu_6 = 0;
        rezultat_1 = 0, rezultat_2 = 0, rezultat_3 = 0, rezultat_4 = 0, rezultat_5 = 0, rezultat_6 = 0;
        printf("PARIU JUCATOR 4: ");
        scanf("%d", &aux4);
        printf("PARIU JUCATOR 5: ");
        scanf("%d", &aux5);
        printf("PARIU JUCATOR 6: ");
        scanf("%d", &aux6);
        printf("PARIU JUCATOR 1: ");
        scanf("%d", &aux1);
        printf("PARIU JUCATOR 2 ");
        scanf("%d", &aux2);
        printf("JUCATORUL 3 NU ARE VOIE SA PARIEZE %d\n", 4 - aux4 - aux5 - aux6 - aux1 - aux2);
        printf("PARIU JUCATOR 3: ");
        scanf("%d", &aux3);
        pariu_1 = aux1;
        pariu_2 = aux2;
        pariu_3 = aux3;
        pariu_4 = aux4;
        pariu_5 = aux5;
        pariu_6 = aux6;
        printf("\n");

        printf("PARIU 1: %d\n", pariu_1);
        printf("PARIU 2: %d\n", pariu_2);
        printf("PARIU 3: %d\n", pariu_3);
        printf("PARIU 4: %d\n", pariu_4);
        printf("PARIU 5: %d\n", pariu_5);
        printf("PARIU 6: %d\n", pariu_6);

        printf("\n");
        printf("CINE IA MANA 1: ");
        scanf("%d", &mana1);
        if(mana1 == 1)
            rezultat_1++;
        else
            if(mana1 == 2)
                rezultat_2++;
            else
                if(mana1 == 3)
                    rezultat_3++;
                else
                    if(mana1 == 4)
                       rezultat_4++;
                    else
                        if(mana1 == 5)
                            rezultat_5++;
                        else
                            if(mana1 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("CINE IA MANA 2: ");
        scanf("%d", &mana2);
        if(mana2 == 1)
            rezultat_1++;
        else
            if(mana2 == 2)
                rezultat_2++;
            else
                if(mana2 == 3)
                    rezultat_3++;
                else
                    if(mana2 == 4)
                       rezultat_4++;
                    else
                        if(mana2 == 5)
                            rezultat_5++;
                        else
                            if(mana2 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("CINE IA MANA 3: ");
        scanf("%d", &mana3);
        if(mana3 == 1)
            rezultat_1++;
        else
            if(mana3 == 2)
                rezultat_2++;
            else
                if(mana3 == 3)
                    rezultat_3++;
                else
                    if(mana3 == 4)
                       rezultat_4++;
                    else
                        if(mana3 == 5)
                            rezultat_5++;
                        else
                            if(mana3 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("CINE IA MANA 4: ");
        scanf("%d", &mana4);
        if(mana4 == 1)
            rezultat_1++;
        else
            if(mana4 == 2)
                rezultat_2++;
            else
                if(mana4 == 3)
                    rezultat_3++;
                else
                    if(mana4 == 4)
                       rezultat_4++;
                    else
                        if(mana4 == 5)
                            rezultat_5++;
                        else
                            if(mana4 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("\n");

        if(rezultat_1 == pariu_1)
            {
                printf("JUCATORUL 1 SI-A FACUT MAINILE\n");
                punctaj_1 = punctaj_1 + (5 + pariu_1);
            }
        else
            {
                printf("JUCATORUL 1 S-A FRIPT CU %d\n", abs(rezultat_1 - pariu_1));
                punctaj_1 = punctaj_1 - (5 + abs(rezultat_1 - pariu_1));
            }

        if(rezultat_2 == pariu_2)
            {
                printf("JUCATORUL 2 SI-A FACUT MAINILE\n");
                punctaj_2 = punctaj_2 + (5 + pariu_2);
            }
        else
            {
                printf("JUCATORUL 2 S-A FRIPT CU %d\n", abs(rezultat_2 - pariu_2));
                punctaj_2 = punctaj_2 - (5 + abs(rezultat_2 - pariu_2));
            }
        if(rezultat_3 == pariu_3)
            {
                printf("JUCATORUL 3 SI-A FACUT MAINILE\n");
                punctaj_3 = punctaj_3 + (5 + pariu_3);
            }
        else
            {
                printf("JUCATORUL 3 S-A FRIPT CU %d\n", abs(rezultat_3 - pariu_3));
                punctaj_3 = punctaj_3 - (5 + abs(rezultat_3 - pariu_3));
            }
        if(rezultat_4 == pariu_4)
            {
                printf("JUCATORUL 4 SI-A FACUT MAINILE\n");
                punctaj_4 = punctaj_4 + (5 + pariu_4);
            }
        else
            {
                printf("JUCATORUL 4 S-A FRIPT CU %d\n", abs(rezultat_4 - pariu_4));
                punctaj_4 = punctaj_4 - (5 + abs(rezultat_4 - pariu_4));
            }
        if(rezultat_5 == pariu_5)
            {
                printf("JUCATORUL 5 SI-A FACUT MAINILE\n");
                punctaj_5 = punctaj_5 + (5 + pariu_5);
            }
        else
            {
                printf("JUCATORUL 5 S-A FRIPT CU %d\n", abs(rezultat_5 - pariu_5));
                punctaj_5 = punctaj_5 - (5 + abs(rezultat_5 - pariu_5));
            }
        if(rezultat_6 == pariu_6)
            {
                printf("JUCATORUL 6 SI-A FACUT MAINILE\n");
                punctaj_6 = punctaj_6 + (5 + pariu_6);
            }
        else
            {
                printf("JUCATORUL 6 S-A FRIPT CU %d\n", abs(rezultat_6 - pariu_6));
                punctaj_6 = punctaj_6 - (5 + abs(rezultat_6 - pariu_6));
            }
        printf("\n");
        printf("JUCATOR 1: %d\n", punctaj_1);
        printf("JUCATOR 2: %d\n", punctaj_2);
        printf("JUCATOR 3: %d\n", punctaj_3);
        printf("JUCATOR 4: %d\n", punctaj_4);
        printf("JUCATOR 5: %d\n", punctaj_5);
        printf("JUCATOR 6: %d\n", punctaj_6);
        printf("\n");
        printf("\n");

printf("JOC DE 3\n");
printf("\n");

    pariu_1 = 0, pariu_2 = 0, pariu_3 = 0, pariu_4 = 0, pariu_5 = 0, pariu_6 = 0;
        rezultat_1 = 0, rezultat_2 = 0, rezultat_3 = 0, rezultat_4 = 0, rezultat_5 = 0, rezultat_6 = 0;
        printf("PARIU JUCATOR 5: ");
        scanf("%d", &aux5);
        printf("PARIU JUCATOR 6: ");
        scanf("%d", &aux6);
        printf("PARIU JUCATOR 1: ");
        scanf("%d", &aux1);
        printf("PARIU JUCATOR 2: ");
        scanf("%d", &aux2);
        printf("PARIU JUCATOR 3 ");
        scanf("%d", &aux3);
        printf("JUCATORUL 4 NU ARE VOIE SA PARIEZE %d\n", 3 - aux5 - aux6 - aux1 - aux2 - aux3);
        printf("PARIU JUCATOR 4: ");
        scanf("%d", &aux4);
        pariu_1 = aux1;
        pariu_2 = aux2;
        pariu_3 = aux3;
        pariu_4 = aux4;
        pariu_5 = aux5;
        pariu_6 = aux6;
        printf("\n");

        printf("PARIU 1: %d\n", pariu_1);
        printf("PARIU 2: %d\n", pariu_2);
        printf("PARIU 3: %d\n", pariu_3);
        printf("PARIU 4: %d\n", pariu_4);
        printf("PARIU 5: %d\n", pariu_5);
        printf("PARIU 6: %d\n", pariu_6);

        printf("\n");
        printf("CINE IA MANA 1: ");
        scanf("%d", &mana1);
        if(mana1 == 1)
            rezultat_1++;
        else
            if(mana1 == 2)
                rezultat_2++;
            else
                if(mana1 == 3)
                    rezultat_3++;
                else
                    if(mana1 == 4)
                       rezultat_4++;
                    else
                        if(mana1 == 5)
                            rezultat_5++;
                        else
                            if(mana1 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("CINE IA MANA 2: ");
        scanf("%d", &mana2);
        if(mana2 == 1)
            rezultat_1++;
        else
            if(mana2 == 2)
                rezultat_2++;
            else
                if(mana2 == 3)
                    rezultat_3++;
                else
                    if(mana2 == 4)
                       rezultat_4++;
                    else
                        if(mana2 == 5)
                            rezultat_5++;
                        else
                            if(mana2 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("CINE IA MANA 3: ");
        scanf("%d", &mana3);
        if(mana3 == 1)
            rezultat_1++;
        else
            if(mana3 == 2)
                rezultat_2++;
            else
                if(mana3 == 3)
                    rezultat_3++;
                else
                    if(mana3 == 4)
                       rezultat_4++;
                    else
                        if(mana3 == 5)
                            rezultat_5++;
                        else
                            if(mana3 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("\n");

        if(rezultat_1 == pariu_1)
            {
                printf("JUCATORUL 1 SI-A FACUT MAINILE\n");
                punctaj_1 = punctaj_1 + (5 + pariu_1);
            }
        else
            {
                printf("JUCATORUL 1 S-A FRIPT CU %d\n", abs(rezultat_1 - pariu_1));
                punctaj_1 = punctaj_1 - (5 + abs(rezultat_1 - pariu_1));
            }

        if(rezultat_2 == pariu_2)
            {
                printf("JUCATORUL 2 SI-A FACUT MAINILE\n");
                punctaj_2 = punctaj_2 + (5 + pariu_2);
            }
        else
            {
                printf("JUCATORUL 2 S-A FRIPT CU %d\n", abs(rezultat_2 - pariu_2));
                punctaj_2 = punctaj_2 - (5 + abs(rezultat_2 - pariu_2));
            }
        if(rezultat_3 == pariu_3)
            {
                printf("JUCATORUL 3 SI-A FACUT MAINILE\n");
                punctaj_3 = punctaj_3 + (5 + pariu_3);
            }
        else
            {
                printf("JUCATORUL 3 S-A FRIPT CU %d\n", abs(rezultat_3 - pariu_3));
                punctaj_3 = punctaj_3 - (5 + abs(rezultat_3 - pariu_3));
            }
        if(rezultat_4 == pariu_4)
            {
                printf("JUCATORUL 4 SI-A FACUT MAINILE\n");
                punctaj_4 = punctaj_4 + (5 + pariu_4);
            }
        else
            {
                printf("JUCATORUL 4 S-A FRIPT CU %d\n", abs(rezultat_4 - pariu_4));
                punctaj_4 = punctaj_4 - (5 + abs(rezultat_4 - pariu_4));
            }
        if(rezultat_5 == pariu_5)
            {
                printf("JUCATORUL 5 SI-A FACUT MAINILE\n");
                punctaj_5 = punctaj_5 + (5 + pariu_5);
            }
        else
            {
                printf("JUCATORUL 5 S-A FRIPT CU %d\n", abs(rezultat_5 - pariu_5));
                punctaj_5 = punctaj_5 - (5 + abs(rezultat_5 - pariu_5));
            }
        if(rezultat_6 == pariu_6)
            {
                printf("JUCATORUL 6 SI-A FACUT MAINILE\n");
                punctaj_6 = punctaj_6 + (5 + pariu_6);
            }
        else
            {
                printf("JUCATORUL 6 S-A FRIPT CU %d\n", abs(rezultat_6 - pariu_6));
                punctaj_6 = punctaj_6 - (5 + abs(rezultat_6 - pariu_6));
            }
        printf("\n");
        printf("JUCATOR 1: %d\n", punctaj_1);
        printf("JUCATOR 2: %d\n", punctaj_2);
        printf("JUCATOR 3: %d\n", punctaj_3);
        printf("JUCATOR 4: %d\n", punctaj_4);
        printf("JUCATOR 5: %d\n", punctaj_5);
        printf("JUCATOR 6: %d\n", punctaj_6);
        printf("\n");
        printf("\n");

printf("JOC DE 2\n");
printf("\n");

    pariu_1 = 0, pariu_2 = 0, pariu_3 = 0, pariu_4 = 0, pariu_5 = 0, pariu_6 = 0;
        rezultat_1 = 0, rezultat_2 = 0, rezultat_3 = 0, rezultat_4 = 0, rezultat_5 = 0, rezultat_6 = 0;
        printf("PARIU JUCATOR 6: ");
        scanf("%d", &aux6);
        printf("PARIU JUCATOR 1: ");
        scanf("%d", &aux1);
        printf("PARIU JUCATOR 2: ");
        scanf("%d", &aux2);
        printf("PARIU JUCATOR 3: ");
        scanf("%d", &aux3);
        printf("PARIU JUCATOR 4 ");
        scanf("%d", &aux4);
        printf("JUCATORUL 5 NU ARE VOIE SA PARIEZE %d\n", 2 - aux6 - aux1 - aux2 - aux3 - aux4);
        printf("PARIU JUCATOR 5: ");
        scanf("%d", &aux5);
        pariu_1 = aux1;
        pariu_2 = aux2;
        pariu_3 = aux3;
        pariu_4 = aux4;
        pariu_5 = aux5;
        pariu_6 = aux6;
        printf("\n");

        printf("PARIU 1: %d\n", pariu_1);
        printf("PARIU 2: %d\n", pariu_2);
        printf("PARIU 3: %d\n", pariu_3);
        printf("PARIU 4: %d\n", pariu_4);
        printf("PARIU 5: %d\n", pariu_5);
        printf("PARIU 6: %d\n", pariu_6);

        printf("\n");
        printf("CINE IA MANA 1: ");
        scanf("%d", &mana1);
        if(mana1 == 1)
            rezultat_1++;
        else
            if(mana1 == 2)
                rezultat_2++;
            else
                if(mana1 == 3)
                    rezultat_3++;
                else
                    if(mana1 == 4)
                       rezultat_4++;
                    else
                        if(mana1 == 5)
                            rezultat_5++;
                        else
                            if(mana1 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("CINE IA MANA 2: ");
        scanf("%d", &mana2);
        if(mana2 == 1)
            rezultat_1++;
        else
            if(mana2 == 2)
                rezultat_2++;
            else
                if(mana2 == 3)
                    rezultat_3++;
                else
                    if(mana2 == 4)
                       rezultat_4++;
                    else
                        if(mana2 == 5)
                            rezultat_5++;
                        else
                            if(mana2 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("\n");

        if(rezultat_1 == pariu_1)
            {
                printf("JUCATORUL 1 SI-A FACUT MAINILE\n");
                punctaj_1 = punctaj_1 + (5 + pariu_1);
            }
        else
            {
                printf("JUCATORUL 1 S-A FRIPT CU %d\n", abs(rezultat_1 - pariu_1));
                punctaj_1 = punctaj_1 - (5 + abs(rezultat_1 - pariu_1));
            }

        if(rezultat_2 == pariu_2)
            {
                printf("JUCATORUL 2 SI-A FACUT MAINILE\n");
                punctaj_2 = punctaj_2 + (5 + pariu_2);
            }
        else
            {
                printf("JUCATORUL 2 S-A FRIPT CU %d\n", abs(rezultat_2 - pariu_2));
                punctaj_2 = punctaj_2 - (5 + abs(rezultat_2 - pariu_2));
            }
        if(rezultat_3 == pariu_3)
            {
                printf("JUCATORUL 3 SI-A FACUT MAINILE\n");
                punctaj_3 = punctaj_3 + (5 + pariu_3);
            }
        else
            {
                printf("JUCATORUL 3 S-A FRIPT CU %d\n", abs(rezultat_3 - pariu_3));
                punctaj_3 = punctaj_3 - (5 + abs(rezultat_3 - pariu_3));
            }
        if(rezultat_4 == pariu_4)
            {
                printf("JUCATORUL 4 SI-A FACUT MAINILE\n");
                punctaj_4 = punctaj_4 + (5 + pariu_4);
            }
        else
            {
                printf("JUCATORUL 4 S-A FRIPT CU %d\n", abs(rezultat_4 - pariu_4));
                punctaj_4 = punctaj_4 - (5 + abs(rezultat_4 - pariu_4));
            }
        if(rezultat_5 == pariu_5)
            {
                printf("JUCATORUL 5 SI-A FACUT MAINILE\n");
                punctaj_5 = punctaj_5 + (5 + pariu_5);
            }
        else
            {
                printf("JUCATORUL 5 S-A FRIPT CU %d\n", abs(rezultat_5 - pariu_5));
                punctaj_5 = punctaj_5 - (5 + abs(rezultat_5 - pariu_5));
            }
        if(rezultat_6 == pariu_6)
            {
                printf("JUCATORUL 6 SI-A FACUT MAINILE\n");
                punctaj_6 = punctaj_6 + (5 + pariu_6);
            }
        else
            {
                printf("JUCATORUL 6 S-A FRIPT CU %d\n", abs(rezultat_6 - pariu_6));
                punctaj_6 = punctaj_6 - (5 + abs(rezultat_6 - pariu_6));
            }
        printf("\n");
        printf("JUCATOR 1: %d\n", punctaj_1);
        printf("JUCATOR 2: %d\n", punctaj_2);
        printf("JUCATOR 3: %d\n", punctaj_3);
        printf("JUCATOR 4: %d\n", punctaj_4);
        printf("JUCATOR 5: %d\n", punctaj_5);
        printf("JUCATOR 6: %d\n", punctaj_6);
        printf("\n");
        printf("\n");

printf("JOC DE 1 NR.1\n");
printf("\n");

    pariu_1 = 0, pariu_2 = 0, pariu_3 = 0, pariu_4 = 0, pariu_5 = 0, pariu_6 = 0;
        rezultat_1 = 0, rezultat_2 = 0, rezultat_3 = 0, rezultat_4 = 0, rezultat_5 = 0, rezultat_6 = 0;
        printf("PARIU JUCATOR 1: ");
        scanf("%d", &aux1);
        printf("PARIU JUCATOR 2: ");
        scanf("%d", &aux2);
        printf("PARIU JUCATOR 3: ");
        scanf("%d", &aux3);
        printf("PARIU JUCATOR 4: ");
        scanf("%d", &aux4);
        printf("PARIU JUCATOR 5 ");
        scanf("%d", &aux5);
        printf("JUCATORUL 6 NU ARE VOIE SA PARIEZE %d\n", 1 - aux1 - aux2 - aux3 - aux4 - aux5);
        printf("PARIU JUCATOR 6: ");
        scanf("%d", &aux6);
        pariu_1 = aux1;
        pariu_2 = aux2;
        pariu_3 = aux3;
        pariu_4 = aux4;
        pariu_5 = aux5;
        pariu_6 = aux6;
        printf("\n");

        printf("PARIU 1: %d\n", pariu_1);
        printf("PARIU 2: %d\n", pariu_2);
        printf("PARIU 3: %d\n", pariu_3);
        printf("PARIU 4: %d\n", pariu_4);
        printf("PARIU 5: %d\n", pariu_5);
        printf("PARIU 6: %d\n", pariu_6);

        printf("\n");
        printf("CINE IA MANA 1: ");
        scanf("%d", &mana1);
        if(mana1 == 1)
            rezultat_1++;
        else
            if(mana1 == 2)
                rezultat_2++;
            else
                if(mana1 == 3)
                    rezultat_3++;
                else
                    if(mana1 == 4)
                       rezultat_4++;
                    else
                        if(mana1 == 5)
                            rezultat_5++;
                        else
                            if(mana1 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("\n");

        if(rezultat_1 == pariu_1)
            {
                printf("JUCATORUL 1 SI-A FACUT MAINILE\n");
                punctaj_1 = punctaj_1 + (5 + pariu_1);
            }
        else
            {
                printf("JUCATORUL 1 S-A FRIPT CU %d\n", abs(rezultat_1 - pariu_1));
                punctaj_1 = punctaj_1 - (5 + abs(rezultat_1 - pariu_1));
            }

        if(rezultat_2 == pariu_2)
            {
                printf("JUCATORUL 2 SI-A FACUT MAINILE\n");
                punctaj_2 = punctaj_2 + (5 + pariu_2);
            }
        else
            {
                printf("JUCATORUL 2 S-A FRIPT CU %d\n", abs(rezultat_2 - pariu_2));
                punctaj_2 = punctaj_2 - (5 + abs(rezultat_2 - pariu_2));
            }
        if(rezultat_3 == pariu_3)
            {
                printf("JUCATORUL 3 SI-A FACUT MAINILE\n");
                punctaj_3 = punctaj_3 + (5 + pariu_3);
            }
        else
            {
                printf("JUCATORUL 3 S-A FRIPT CU %d\n", abs(rezultat_3 - pariu_3));
                punctaj_3 = punctaj_3 - (5 + abs(rezultat_3 - pariu_3));
            }
        if(rezultat_4 == pariu_4)
            {
                printf("JUCATORUL 4 SI-A FACUT MAINILE\n");
                punctaj_4 = punctaj_4 + (5 + pariu_4);
            }
        else
            {
                printf("JUCATORUL 4 S-A FRIPT CU %d\n", abs(rezultat_4 - pariu_4));
                punctaj_4 = punctaj_4 - (5 + abs(rezultat_4 - pariu_4));
            }
        if(rezultat_5 == pariu_5)
            {
                printf("JUCATORUL 5 SI-A FACUT MAINILE\n");
                punctaj_5 = punctaj_5 + (5 + pariu_5);
            }
        else
            {
                printf("JUCATORUL 5 S-A FRIPT CU %d\n", abs(rezultat_5 - pariu_5));
                punctaj_5 = punctaj_5 - (5 + abs(rezultat_5 - pariu_5));
            }
        if(rezultat_6 == pariu_6)
            {
                printf("JUCATORUL 6 SI-A FACUT MAINILE\n");
                punctaj_6 = punctaj_6 + (5 + pariu_6);
            }
        else
            {
                printf("JUCATORUL 6 S-A FRIPT CU %d\n", abs(rezultat_6 - pariu_6));
                punctaj_6 = punctaj_6 - (5 + abs(rezultat_6 - pariu_6));
            }
        printf("\n");
        printf("JUCATOR 1: %d\n", punctaj_1);
        printf("JUCATOR 2: %d\n", punctaj_2);
        printf("JUCATOR 3: %d\n", punctaj_3);
        printf("JUCATOR 4: %d\n", punctaj_4);
        printf("JUCATOR 5: %d\n", punctaj_5);
        printf("JUCATOR 6: %d\n", punctaj_6);
        printf("\n");
        printf("\n");

printf("JOC DE 1 NR.2\n");
printf("\n");

    pariu_1 = 0, pariu_2 = 0, pariu_3 = 0, pariu_4 = 0, pariu_5 = 0, pariu_6 = 0;
        rezultat_1 = 0, rezultat_2 = 0, rezultat_3 = 0, rezultat_4 = 0, rezultat_5 = 0, rezultat_6 = 0;
        printf("PARIU JUCATOR 2: ");
        scanf("%d", &aux2);
        printf("PARIU JUCATOR 3: ");
        scanf("%d", &aux3);
        printf("PARIU JUCATOR 4: ");
        scanf("%d", &aux4);
        printf("PARIU JUCATOR 5: ");
        scanf("%d", &aux5);
        printf("PARIU JUCATOR 6 ");
        scanf("%d", &aux6);
        printf("JUCATORUL 1 NU ARE VOIE SA PARIEZE %d\n", 1 - aux2 - aux3 - aux4 - aux5 - aux6);
        printf("PARIU JUCATOR 1: ");
        scanf("%d", &aux1);
        pariu_1 = aux1;
        pariu_2 = aux2;
        pariu_3 = aux3;
        pariu_4 = aux4;
        pariu_5 = aux5;
        pariu_6 = aux6;
        printf("\n");

        printf("PARIU 1: %d\n", pariu_1);
        printf("PARIU 2: %d\n", pariu_2);
        printf("PARIU 3: %d\n", pariu_3);
        printf("PARIU 4: %d\n", pariu_4);
        printf("PARIU 5: %d\n", pariu_5);
        printf("PARIU 6: %d\n", pariu_6);

        printf("\n");
        printf("CINE IA MANA 1: ");
        scanf("%d", &mana1);
        if(mana1 == 1)
            rezultat_1++;
        else
            if(mana1 == 2)
                rezultat_2++;
            else
                if(mana1 == 3)
                    rezultat_3++;
                else
                    if(mana1 == 4)
                       rezultat_4++;
                    else
                        if(mana1 == 5)
                            rezultat_5++;
                        else
                            if(mana1 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("\n");

        if(rezultat_1 == pariu_1)
            {
                printf("JUCATORUL 1 SI-A FACUT MAINILE\n");
                punctaj_1 = punctaj_1 + (5 + pariu_1);
            }
        else
            {
                printf("JUCATORUL 1 S-A FRIPT CU %d\n", abs(rezultat_1 - pariu_1));
                punctaj_1 = punctaj_1 - (5 + abs(rezultat_1 - pariu_1));
            }

        if(rezultat_2 == pariu_2)
            {
                printf("JUCATORUL 2 SI-A FACUT MAINILE\n");
                punctaj_2 = punctaj_2 + (5 + pariu_2);
            }
        else
            {
                printf("JUCATORUL 2 S-A FRIPT CU %d\n", abs(rezultat_2 - pariu_2));
                punctaj_2 = punctaj_2 - (5 + abs(rezultat_2 - pariu_2));
            }
        if(rezultat_3 == pariu_3)
            {
                printf("JUCATORUL 3 SI-A FACUT MAINILE\n");
                punctaj_3 = punctaj_3 + (5 + pariu_3);
            }
        else
            {
                printf("JUCATORUL 3 S-A FRIPT CU %d\n", abs(rezultat_3 - pariu_3));
                punctaj_3 = punctaj_3 - (5 + abs(rezultat_3 - pariu_3));
            }
        if(rezultat_4 == pariu_4)
            {
                printf("JUCATORUL 4 SI-A FACUT MAINILE\n");
                punctaj_4 = punctaj_4 + (5 + pariu_4);
            }
        else
            {
                printf("JUCATORUL 4 S-A FRIPT CU %d\n", abs(rezultat_4 - pariu_4));
                punctaj_4 = punctaj_4 - (5 + abs(rezultat_4 - pariu_4));
            }
        if(rezultat_5 == pariu_5)
            {
                printf("JUCATORUL 5 SI-A FACUT MAINILE\n");
                punctaj_5 = punctaj_5 + (5 + pariu_5);
            }
        else
            {
                printf("JUCATORUL 5 S-A FRIPT CU %d\n", abs(rezultat_5 - pariu_5));
                punctaj_5 = punctaj_5 - (5 + abs(rezultat_5 - pariu_5));
            }
        if(rezultat_6 == pariu_6)
            {
                printf("JUCATORUL 6 SI-A FACUT MAINILE\n");
                punctaj_6 = punctaj_6 + (5 + pariu_6);
            }
        else
            {
                printf("JUCATORUL 6 S-A FRIPT CU %d\n", abs(rezultat_6 - pariu_6));
                punctaj_6 = punctaj_6 - (5 + abs(rezultat_6 - pariu_6));
            }
        printf("\n");
        printf("JUCATOR 1: %d\n", punctaj_1);
        printf("JUCATOR 2: %d\n", punctaj_2);
        printf("JUCATOR 3: %d\n", punctaj_3);
        printf("JUCATOR 4: %d\n", punctaj_4);
        printf("JUCATOR 5: %d\n", punctaj_5);
        printf("JUCATOR 6: %d\n", punctaj_6);
        printf("\n");
        printf("\n");

printf("JOC DE 1 NR.3\n");
printf("\n");

    pariu_1 = 0, pariu_2 = 0, pariu_3 = 0, pariu_4 = 0, pariu_5 = 0, pariu_6 = 0;
        rezultat_1 = 0, rezultat_2 = 0, rezultat_3 = 0, rezultat_4 = 0, rezultat_5 = 0, rezultat_6 = 0;
        printf("PARIU JUCATOR 3: ");
        scanf("%d", &aux3);
        printf("PARIU JUCATOR 4: ");
        scanf("%d", &aux4);
        printf("PARIU JUCATOR 5: ");
        scanf("%d", &aux5);
        printf("PARIU JUCATOR 6: ");
        scanf("%d", &aux6);
        printf("PARIU JUCATOR 1 ");
        scanf("%d", &aux1);
        printf("JUCATORUL 2 NU ARE VOIE SA PARIEZE %d\n", 1 - aux3 - aux4 - aux5 - aux6 - aux1);
        printf("PARIU JUCATOR 2: ");
        scanf("%d", &aux2);
        pariu_1 = aux1;
        pariu_2 = aux2;
        pariu_3 = aux3;
        pariu_4 = aux4;
        pariu_5 = aux5;
        pariu_6 = aux6;
        printf("\n");

        printf("PARIU 1: %d\n", pariu_1);
        printf("PARIU 2: %d\n", pariu_2);
        printf("PARIU 3: %d\n", pariu_3);
        printf("PARIU 4: %d\n", pariu_4);
        printf("PARIU 5: %d\n", pariu_5);
        printf("PARIU 6: %d\n", pariu_6);

        printf("\n");
        printf("CINE IA MANA 1: ");
        scanf("%d", &mana1);
        if(mana1 == 1)
            rezultat_1++;
        else
            if(mana1 == 2)
                rezultat_2++;
            else
                if(mana1 == 3)
                    rezultat_3++;
                else
                    if(mana1 == 4)
                       rezultat_4++;
                    else
                        if(mana1 == 5)
                            rezultat_5++;
                        else
                            if(mana1 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("\n");

        if(rezultat_1 == pariu_1)
            {
                printf("JUCATORUL 1 SI-A FACUT MAINILE\n");
                punctaj_1 = punctaj_1 + (5 + pariu_1);
            }
        else
            {
                printf("JUCATORUL 1 S-A FRIPT CU %d\n", abs(rezultat_1 - pariu_1));
                punctaj_1 = punctaj_1 - (5 + abs(rezultat_1 - pariu_1));
            }

        if(rezultat_2 == pariu_2)
            {
                printf("JUCATORUL 2 SI-A FACUT MAINILE\n");
                punctaj_2 = punctaj_2 + (5 + pariu_2);
            }
        else
            {
                printf("JUCATORUL 2 S-A FRIPT CU %d\n", abs(rezultat_2 - pariu_2));
                punctaj_2 = punctaj_2 - (5 + abs(rezultat_2 - pariu_2));
            }
        if(rezultat_3 == pariu_3)
            {
                printf("JUCATORUL 3 SI-A FACUT MAINILE\n");
                punctaj_3 = punctaj_3 + (5 + pariu_3);
            }
        else
            {
                printf("JUCATORUL 3 S-A FRIPT CU %d\n", abs(rezultat_3 - pariu_3));
                punctaj_3 = punctaj_3 - (5 + abs(rezultat_3 - pariu_3));
            }
        if(rezultat_4 == pariu_4)
            {
                printf("JUCATORUL 4 SI-A FACUT MAINILE\n");
                punctaj_4 = punctaj_4 + (5 + pariu_4);
            }
        else
            {
                printf("JUCATORUL 4 S-A FRIPT CU %d\n", abs(rezultat_4 - pariu_4));
                punctaj_4 = punctaj_4 - (5 + abs(rezultat_4 - pariu_4));
            }
        if(rezultat_5 == pariu_5)
            {
                printf("JUCATORUL 5 SI-A FACUT MAINILE\n");
                punctaj_5 = punctaj_5 + (5 + pariu_5);
            }
        else
            {
                printf("JUCATORUL 5 S-A FRIPT CU %d\n", abs(rezultat_5 - pariu_5));
                punctaj_5 = punctaj_5 - (5 + abs(rezultat_5 - pariu_5));
            }
        if(rezultat_6 == pariu_6)
            {
                printf("JUCATORUL 6 SI-A FACUT MAINILE\n");
                punctaj_6 = punctaj_6 + (5 + pariu_6);
            }
        else
            {
                printf("JUCATORUL 6 S-A FRIPT CU %d\n", abs(rezultat_6 - pariu_6));
                punctaj_6 = punctaj_6 - (5 + abs(rezultat_6 - pariu_6));
            }
        printf("\n");
        printf("JUCATOR 1: %d\n", punctaj_1);
        printf("JUCATOR 2: %d\n", punctaj_2);
        printf("JUCATOR 3: %d\n", punctaj_3);
        printf("JUCATOR 4: %d\n", punctaj_4);
        printf("JUCATOR 5: %d\n", punctaj_5);
        printf("JUCATOR 6: %d\n", punctaj_6);
        printf("\n");
        printf("\n");

printf("JOC DE 1 NR.4\n");
printf("\n");

    pariu_1 = 0, pariu_2 = 0, pariu_3 = 0, pariu_4 = 0, pariu_5 = 0, pariu_6 = 0;
        rezultat_1 = 0, rezultat_2 = 0, rezultat_3 = 0, rezultat_4 = 0, rezultat_5 = 0, rezultat_6 = 0;
        printf("PARIU JUCATOR 4: ");
        scanf("%d", &aux4);
        printf("PARIU JUCATOR 5: ");
        scanf("%d", &aux5);
        printf("PARIU JUCATOR 6: ");
        scanf("%d", &aux6);
        printf("PARIU JUCATOR 1: ");
        scanf("%d", &aux1);
        printf("PARIU JUCATOR 2 ");
        scanf("%d", &aux2);
        printf("JUCATORUL 3 NU ARE VOIE SA PARIEZE %d\n", 1 - aux4 - aux5 - aux6 - aux1 - aux2);
        printf("PARIU JUCATOR 3: ");
        scanf("%d", &aux3);
        pariu_1 = aux1;
        pariu_2 = aux2;
        pariu_3 = aux3;
        pariu_4 = aux4;
        pariu_5 = aux5;
        pariu_6 = aux6;
        printf("\n");

        printf("PARIU 1: %d\n", pariu_1);
        printf("PARIU 2: %d\n", pariu_2);
        printf("PARIU 3: %d\n", pariu_3);
        printf("PARIU 4: %d\n", pariu_4);
        printf("PARIU 5: %d\n", pariu_5);
        printf("PARIU 6: %d\n", pariu_6);

        printf("\n");
        printf("CINE IA MANA 1: ");
        scanf("%d", &mana1);
        if(mana1 == 1)
            rezultat_1++;
        else
            if(mana1 == 2)
                rezultat_2++;
            else
                if(mana1 == 3)
                    rezultat_3++;
                else
                    if(mana1 == 4)
                       rezultat_4++;
                    else
                        if(mana1 == 5)
                            rezultat_5++;
                        else
                            if(mana1 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("\n");

        if(rezultat_1 == pariu_1)
            {
                printf("JUCATORUL 1 SI-A FACUT MAINILE\n");
                punctaj_1 = punctaj_1 + (5 + pariu_1);
            }
        else
            {
                printf("JUCATORUL 1 S-A FRIPT CU %d\n", abs(rezultat_1 - pariu_1));
                punctaj_1 = punctaj_1 - (5 + abs(rezultat_1 - pariu_1));
            }

        if(rezultat_2 == pariu_2)
            {
                printf("JUCATORUL 2 SI-A FACUT MAINILE\n");
                punctaj_2 = punctaj_2 + (5 + pariu_2);
            }
        else
            {
                printf("JUCATORUL 2 S-A FRIPT CU %d\n", abs(rezultat_2 - pariu_2));
                punctaj_2 = punctaj_2 - (5 + abs(rezultat_2 - pariu_2));
            }
        if(rezultat_3 == pariu_3)
            {
                printf("JUCATORUL 3 SI-A FACUT MAINILE\n");
                punctaj_3 = punctaj_3 + (5 + pariu_3);
            }
        else
            {
                printf("JUCATORUL 3 S-A FRIPT CU %d\n", abs(rezultat_3 - pariu_3));
                punctaj_3 = punctaj_3 - (5 + abs(rezultat_3 - pariu_3));
            }
        if(rezultat_4 == pariu_4)
            {
                printf("JUCATORUL 4 SI-A FACUT MAINILE\n");
                punctaj_4 = punctaj_4 + (5 + pariu_4);
            }
        else
            {
                printf("JUCATORUL 4 S-A FRIPT CU %d\n", abs(rezultat_4 - pariu_4));
                punctaj_4 = punctaj_4 - (5 + abs(rezultat_4 - pariu_4));
            }
        if(rezultat_5 == pariu_5)
            {
                printf("JUCATORUL 5 SI-A FACUT MAINILE\n");
                punctaj_5 = punctaj_5 + (5 + pariu_5);
            }
        else
            {
                printf("JUCATORUL 5 S-A FRIPT CU %d\n", abs(rezultat_5 - pariu_5));
                punctaj_5 = punctaj_5 - (5 + abs(rezultat_5 - pariu_5));
            }
        if(rezultat_6 == pariu_6)
            {
                printf("JUCATORUL 6 SI-A FACUT MAINILE\n");
                punctaj_6 = punctaj_6 + (5 + pariu_6);
            }
        else
            {
                printf("JUCATORUL 6 S-A FRIPT CU %d\n", abs(rezultat_6 - pariu_6));
                punctaj_6 = punctaj_6 - (5 + abs(rezultat_6 - pariu_6));
            }
        printf("\n");
        printf("JUCATOR 1: %d\n", punctaj_1);
        printf("JUCATOR 2: %d\n", punctaj_2);
        printf("JUCATOR 3: %d\n", punctaj_3);
        printf("JUCATOR 4: %d\n", punctaj_4);
        printf("JUCATOR 5: %d\n", punctaj_5);
        printf("JUCATOR 6: %d\n", punctaj_6);
        printf("\n");
        printf("\n");

printf("JOC DE 1 NR.5\n");
printf("\n");

    pariu_1 = 0, pariu_2 = 0, pariu_3 = 0, pariu_4 = 0, pariu_5 = 0, pariu_6 = 0;
        rezultat_1 = 0, rezultat_2 = 0, rezultat_3 = 0, rezultat_4 = 0, rezultat_5 = 0, rezultat_6 = 0;
        printf("PARIU JUCATOR 5: ");
        scanf("%d", &aux5);
        printf("PARIU JUCATOR 6: ");
        scanf("%d", &aux6);
        printf("PARIU JUCATOR 1: ");
        scanf("%d", &aux1);
        printf("PARIU JUCATOR 2: ");
        scanf("%d", &aux2);
        printf("PARIU JUCATOR 3 ");
        scanf("%d", &aux3);
        printf("JUCATORUL 4 NU ARE VOIE SA PARIEZE %d\n", 1 - aux5 - aux6 - aux1 - aux2 - aux3);
        printf("PARIU JUCATOR 4: ");
        scanf("%d", &aux4);
        pariu_1 = aux1;
        pariu_2 = aux2;
        pariu_3 = aux3;
        pariu_4 = aux4;
        pariu_5 = aux5;
        pariu_6 = aux6;
        printf("\n");

        printf("PARIU 1: %d\n", pariu_1);
        printf("PARIU 2: %d\n", pariu_2);
        printf("PARIU 3: %d\n", pariu_3);
        printf("PARIU 4: %d\n", pariu_4);
        printf("PARIU 5: %d\n", pariu_5);
        printf("PARIU 6: %d\n", pariu_6);

        printf("\n");
        printf("CINE IA MANA 1: ");
        scanf("%d", &mana1);
        if(mana1 == 1)
            rezultat_1++;
        else
            if(mana1 == 2)
                rezultat_2++;
            else
                if(mana1 == 3)
                    rezultat_3++;
                else
                    if(mana1 == 4)
                       rezultat_4++;
                    else
                        if(mana1 == 5)
                            rezultat_5++;
                        else
                            if(mana1 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("\n");

        if(rezultat_1 == pariu_1)
            {
                printf("JUCATORUL 1 SI-A FACUT MAINILE\n");
                punctaj_1 = punctaj_1 + (5 + pariu_1);
            }
        else
            {
                printf("JUCATORUL 1 S-A FRIPT CU %d\n", abs(rezultat_1 - pariu_1));
                punctaj_1 = punctaj_1 - (5 + abs(rezultat_1 - pariu_1));
            }

        if(rezultat_2 == pariu_2)
            {
                printf("JUCATORUL 2 SI-A FACUT MAINILE\n");
                punctaj_2 = punctaj_2 + (5 + pariu_2);
            }
        else
            {
                printf("JUCATORUL 2 S-A FRIPT CU %d\n", abs(rezultat_2 - pariu_2));
                punctaj_2 = punctaj_2 - (5 + abs(rezultat_2 - pariu_2));
            }
        if(rezultat_3 == pariu_3)
            {
                printf("JUCATORUL 3 SI-A FACUT MAINILE\n");
                punctaj_3 = punctaj_3 + (5 + pariu_3);
            }
        else
            {
                printf("JUCATORUL 3 S-A FRIPT CU %d\n", abs(rezultat_3 - pariu_3));
                punctaj_3 = punctaj_3 - (5 + abs(rezultat_3 - pariu_3));
            }
        if(rezultat_4 == pariu_4)
            {
                printf("JUCATORUL 4 SI-A FACUT MAINILE\n");
                punctaj_4 = punctaj_4 + (5 + pariu_4);
            }
        else
            {
                printf("JUCATORUL 4 S-A FRIPT CU %d\n", abs(rezultat_4 - pariu_4));
                punctaj_4 = punctaj_4 - (5 + abs(rezultat_4 - pariu_4));
            }
        if(rezultat_5 == pariu_5)
            {
                printf("JUCATORUL 5 SI-A FACUT MAINILE\n");
                punctaj_5 = punctaj_5 + (5 + pariu_5);
            }
        else
            {
                printf("JUCATORUL 5 S-A FRIPT CU %d\n", abs(rezultat_5 - pariu_5));
                punctaj_5 = punctaj_5 - (5 + abs(rezultat_5 - pariu_5));
            }
        if(rezultat_6 == pariu_6)
            {
                printf("JUCATORUL 6 SI-A FACUT MAINILE\n");
                punctaj_6 = punctaj_6 + (5 + pariu_6);
            }
        else
            {
                printf("JUCATORUL 6 S-A FRIPT CU %d\n", abs(rezultat_6 - pariu_6));
                punctaj_6 = punctaj_6 - (5 + abs(rezultat_6 - pariu_6));
            }
        printf("\n");
        printf("JUCATOR 1: %d\n", punctaj_1);
        printf("JUCATOR 2: %d\n", punctaj_2);
        printf("JUCATOR 3: %d\n", punctaj_3);
        printf("JUCATOR 4: %d\n", punctaj_4);
        printf("JUCATOR 5: %d\n", punctaj_5);
        printf("JUCATOR 6: %d\n", punctaj_6);
        printf("\n");
        printf("\n");

printf("JOC DE 1 NR.6\n");
printf("\n");

    pariu_1 = 0, pariu_2 = 0, pariu_3 = 0, pariu_4 = 0, pariu_5 = 0, pariu_6 = 0;
        rezultat_1 = 0, rezultat_2 = 0, rezultat_3 = 0, rezultat_4 = 0, rezultat_5 = 0, rezultat_6 = 0;
        printf("PARIU JUCATOR 6: ");
        scanf("%d", &aux6);
        printf("PARIU JUCATOR 1: ");
        scanf("%d", &aux1);
        printf("PARIU JUCATOR 2: ");
        scanf("%d", &aux2);
        printf("PARIU JUCATOR 3: ");
        scanf("%d", &aux3);
        printf("PARIU JUCATOR 4 ");
        scanf("%d", &aux4);
        printf("JUCATORUL 5 NU ARE VOIE SA PARIEZE %d\n", 1 - aux6 - aux1 - aux2 - aux3 - aux4);
        printf("PARIU JUCATOR 5: ");
        scanf("%d", &aux5);
        pariu_1 = aux1;
        pariu_2 = aux2;
        pariu_3 = aux3;
        pariu_4 = aux4;
        pariu_5 = aux5;
        pariu_6 = aux6;
        printf("\n");

        printf("PARIU 1: %d\n", pariu_1);
        printf("PARIU 2: %d\n", pariu_2);
        printf("PARIU 3: %d\n", pariu_3);
        printf("PARIU 4: %d\n", pariu_4);
        printf("PARIU 5: %d\n", pariu_5);
        printf("PARIU 6: %d\n", pariu_6);

        printf("\n");
        printf("CINE IA MANA 1: ");
        scanf("%d", &mana1);
        if(mana1 == 1)
            rezultat_1++;
        else
            if(mana1 == 2)
                rezultat_2++;
            else
                if(mana1 == 3)
                    rezultat_3++;
                else
                    if(mana1 == 4)
                       rezultat_4++;
                    else
                        if(mana1 == 5)
                            rezultat_5++;
                        else
                            if(mana1 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("\n");

        if(rezultat_1 == pariu_1)
            {
                printf("JUCATORUL 1 SI-A FACUT MAINILE\n");
                punctaj_1 = punctaj_1 + (5 + pariu_1);
            }
        else
            {
                printf("JUCATORUL 1 S-A FRIPT CU %d\n", abs(rezultat_1 - pariu_1));
                punctaj_1 = punctaj_1 - (5 + abs(rezultat_1 - pariu_1));
            }

        if(rezultat_2 == pariu_2)
            {
                printf("JUCATORUL 2 SI-A FACUT MAINILE\n");
                punctaj_2 = punctaj_2 + (5 + pariu_2);
            }
        else
            {
                printf("JUCATORUL 2 S-A FRIPT CU %d\n", abs(rezultat_2 - pariu_2));
                punctaj_2 = punctaj_2 - (5 + abs(rezultat_2 - pariu_2));
            }
        if(rezultat_3 == pariu_3)
            {
                printf("JUCATORUL 3 SI-A FACUT MAINILE\n");
                punctaj_3 = punctaj_3 + (5 + pariu_3);
            }
        else
            {
                printf("JUCATORUL 3 S-A FRIPT CU %d\n", abs(rezultat_3 - pariu_3));
                punctaj_3 = punctaj_3 - (5 + abs(rezultat_3 - pariu_3));
            }
        if(rezultat_4 == pariu_4)
            {
                printf("JUCATORUL 4 SI-A FACUT MAINILE\n");
                punctaj_4 = punctaj_4 + (5 + pariu_4);
            }
        else
            {
                printf("JUCATORUL 4 S-A FRIPT CU %d\n", abs(rezultat_4 - pariu_4));
                punctaj_4 = punctaj_4 - (5 + abs(rezultat_4 - pariu_4));
            }
        if(rezultat_5 == pariu_5)
            {
                printf("JUCATORUL 5 SI-A FACUT MAINILE\n");
                punctaj_5 = punctaj_5 + (5 + pariu_5);
            }
        else
            {
                printf("JUCATORUL 5 S-A FRIPT CU %d\n", abs(rezultat_5 - pariu_5));
                punctaj_5 = punctaj_5 - (5 + abs(rezultat_5 - pariu_5));
            }
        if(rezultat_6 == pariu_6)
            {
                printf("JUCATORUL 6 SI-A FACUT MAINILE\n");
                punctaj_6 = punctaj_6 + (5 + pariu_6);
            }
        else
            {
                printf("JUCATORUL 6 S-A FRIPT CU %d\n", abs(rezultat_6 - pariu_6));
                punctaj_6 = punctaj_6 - (5 + abs(rezultat_6 - pariu_6));
            }
        printf("\n");
        printf("JUCATOR 1: %d\n", punctaj_1);
        printf("JUCATOR 2: %d\n", punctaj_2);
        printf("JUCATOR 3: %d\n", punctaj_3);
        printf("JUCATOR 4: %d\n", punctaj_4);
        printf("JUCATOR 5: %d\n", punctaj_5);
        printf("JUCATOR 6: %d\n", punctaj_6);
        printf("\n");
        printf("\n");

printf("JOC DE 2\n");
printf("\n");

    pariu_1 = 0, pariu_2 = 0, pariu_3 = 0, pariu_4 = 0, pariu_5 = 0, pariu_6 = 0;
        rezultat_1 = 0, rezultat_2 = 0, rezultat_3 = 0, rezultat_4 = 0, rezultat_5 = 0, rezultat_6 = 0;
        printf("PARIU JUCATOR 1: ");
        scanf("%d", &aux1);
        printf("PARIU JUCATOR 2: ");
        scanf("%d", &aux2);
        printf("PARIU JUCATOR 3: ");
        scanf("%d", &aux3);
        printf("PARIU JUCATOR 4: ");
        scanf("%d", &aux4);
        printf("PARIU JUCATOR 5 ");
        scanf("%d", &aux5);
        printf("JUCATORUL 6 NU ARE VOIE SA PARIEZE %d\n", 2 - aux1 - aux2 - aux3 - aux4 - aux5);
        printf("PARIU JUCATOR 6: ");
        scanf("%d", &aux6);
        pariu_1 = aux1;
        pariu_2 = aux2;
        pariu_3 = aux3;
        pariu_4 = aux4;
        pariu_5 = aux5;
        pariu_6 = aux6;
        printf("\n");

        printf("PARIU 1: %d\n", pariu_1);
        printf("PARIU 2: %d\n", pariu_2);
        printf("PARIU 3: %d\n", pariu_3);
        printf("PARIU 4: %d\n", pariu_4);
        printf("PARIU 5: %d\n", pariu_5);
        printf("PARIU 6: %d\n", pariu_6);

        printf("\n");
        printf("CINE IA MANA 1: ");
        scanf("%d", &mana1);
        if(mana1 == 1)
            rezultat_1++;
        else
            if(mana1 == 2)
                rezultat_2++;
            else
                if(mana1 == 3)
                    rezultat_3++;
                else
                    if(mana1 == 4)
                       rezultat_4++;
                    else
                        if(mana1 == 5)
                            rezultat_5++;
                        else
                            if(mana1 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("CINE IA MANA 2: ");
        scanf("%d", &mana2);
        if(mana2 == 1)
            rezultat_1++;
        else
            if(mana2 == 2)
                rezultat_2++;
            else
                if(mana2 == 3)
                    rezultat_3++;
                else
                    if(mana2 == 4)
                       rezultat_4++;
                    else
                        if(mana2 == 5)
                            rezultat_5++;
                        else
                            if(mana2 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("\n");

        if(rezultat_1 == pariu_1)
            {
                printf("JUCATORUL 1 SI-A FACUT MAINILE\n");
                punctaj_1 = punctaj_1 + (5 + pariu_1);
            }
        else
            {
                printf("JUCATORUL 1 S-A FRIPT CU %d\n", abs(rezultat_1 - pariu_1));
                punctaj_1 = punctaj_1 - (5 + abs(rezultat_1 - pariu_1));
            }

        if(rezultat_2 == pariu_2)
            {
                printf("JUCATORUL 2 SI-A FACUT MAINILE\n");
                punctaj_2 = punctaj_2 + (5 + pariu_2);
            }
        else
            {
                printf("JUCATORUL 2 S-A FRIPT CU %d\n", abs(rezultat_2 - pariu_2));
                punctaj_2 = punctaj_2 - (5 + abs(rezultat_2 - pariu_2));
            }
        if(rezultat_3 == pariu_3)
            {
                printf("JUCATORUL 3 SI-A FACUT MAINILE\n");
                punctaj_3 = punctaj_3 + (5 + pariu_3);
            }
        else
            {
                printf("JUCATORUL 3 S-A FRIPT CU %d\n", abs(rezultat_3 - pariu_3));
                punctaj_3 = punctaj_3 - (5 + abs(rezultat_3 - pariu_3));
            }
        if(rezultat_4 == pariu_4)
            {
                printf("JUCATORUL 4 SI-A FACUT MAINILE\n");
                punctaj_4 = punctaj_4 + (5 + pariu_4);
            }
        else
            {
                printf("JUCATORUL 4 S-A FRIPT CU %d\n", abs(rezultat_4 - pariu_4));
                punctaj_4 = punctaj_4 - (5 + abs(rezultat_4 - pariu_4));
            }
        if(rezultat_5 == pariu_5)
            {
                printf("JUCATORUL 5 SI-A FACUT MAINILE\n");
                punctaj_5 = punctaj_5 + (5 + pariu_5);
            }
        else
            {
                printf("JUCATORUL 5 S-A FRIPT CU %d\n", abs(rezultat_5 - pariu_5));
                punctaj_5 = punctaj_5 - (5 + abs(rezultat_5 - pariu_5));
            }
        if(rezultat_6 == pariu_6)
            {
                printf("JUCATORUL 6 SI-A FACUT MAINILE\n");
                punctaj_6 = punctaj_6 + (5 + pariu_6);
            }
        else
            {
                printf("JUCATORUL 6 S-A FRIPT CU %d\n", abs(rezultat_6 - pariu_6));
                punctaj_6 = punctaj_6 - (5 + abs(rezultat_6 - pariu_6));
            }
        printf("\n");
        printf("JUCATOR 1: %d\n", punctaj_1);
        printf("JUCATOR 2: %d\n", punctaj_2);
        printf("JUCATOR 3: %d\n", punctaj_3);
        printf("JUCATOR 4: %d\n", punctaj_4);
        printf("JUCATOR 5: %d\n", punctaj_5);
        printf("JUCATOR 6: %d\n", punctaj_6);
        printf("\n");
        printf("\n");

printf("JOC DE 3\n");
printf("\n");

    pariu_1 = 0, pariu_2 = 0, pariu_3 = 0, pariu_4 = 0, pariu_5 = 0, pariu_6 = 0;
        rezultat_1 = 0, rezultat_2 = 0, rezultat_3 = 0, rezultat_4 = 0, rezultat_5 = 0, rezultat_6 = 0;
        printf("PARIU JUCATOR 2: ");
        scanf("%d", &aux2);
        printf("PARIU JUCATOR 3: ");
        scanf("%d", &aux3);
        printf("PARIU JUCATOR 4: ");
        scanf("%d", &aux4);
        printf("PARIU JUCATOR 5: ");
        scanf("%d", &aux5);
        printf("PARIU JUCATOR 6 ");
        scanf("%d", &aux6);
        printf("JUCATORUL 1 NU ARE VOIE SA PARIEZE %d\n", 3 - aux2 - aux3 - aux4 - aux5 - aux6);
        printf("PARIU JUCATOR 1: ");
        scanf("%d", &aux1);
        pariu_1 = aux1;
        pariu_2 = aux2;
        pariu_3 = aux3;
        pariu_4 = aux4;
        pariu_5 = aux5;
        pariu_6 = aux6;
        printf("\n");

        printf("PARIU 1: %d\n", pariu_1);
        printf("PARIU 2: %d\n", pariu_2);
        printf("PARIU 3: %d\n", pariu_3);
        printf("PARIU 4: %d\n", pariu_4);
        printf("PARIU 5: %d\n", pariu_5);
        printf("PARIU 6: %d\n", pariu_6);

        printf("\n");
        printf("CINE IA MANA 1: ");
        scanf("%d", &mana1);
        if(mana1 == 1)
            rezultat_1++;
        else
            if(mana1 == 2)
                rezultat_2++;
            else
                if(mana1 == 3)
                    rezultat_3++;
                else
                    if(mana1 == 4)
                       rezultat_4++;
                    else
                        if(mana1 == 5)
                            rezultat_5++;
                        else
                            if(mana1 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("CINE IA MANA 2: ");
        scanf("%d", &mana2);
        if(mana2 == 1)
            rezultat_1++;
        else
            if(mana2 == 2)
                rezultat_2++;
            else
                if(mana2 == 3)
                    rezultat_3++;
                else
                    if(mana2 == 4)
                       rezultat_4++;
                    else
                        if(mana2 == 5)
                            rezultat_5++;
                        else
                            if(mana2 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("CINE IA MANA 3: ");
        scanf("%d", &mana3);
        if(mana3 == 1)
            rezultat_1++;
        else
            if(mana3 == 2)
                rezultat_2++;
            else
                if(mana3 == 3)
                    rezultat_3++;
                else
                    if(mana3 == 4)
                       rezultat_4++;
                    else
                        if(mana3 == 5)
                            rezultat_5++;
                        else
                            if(mana3 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("\n");

        if(rezultat_1 == pariu_1)
            {
                printf("JUCATORUL 1 SI-A FACUT MAINILE\n");
                punctaj_1 = punctaj_1 + (5 + pariu_1);
            }
        else
            {
                printf("JUCATORUL 1 S-A FRIPT CU %d\n", abs(rezultat_1 - pariu_1));
                punctaj_1 = punctaj_1 - (5 + abs(rezultat_1 - pariu_1));
            }

        if(rezultat_2 == pariu_2)
            {
                printf("JUCATORUL 2 SI-A FACUT MAINILE\n");
                punctaj_2 = punctaj_2 + (5 + pariu_2);
            }
        else
            {
                printf("JUCATORUL 2 S-A FRIPT CU %d\n", abs(rezultat_2 - pariu_2));
                punctaj_2 = punctaj_2 - (5 + abs(rezultat_2 - pariu_2));
            }
        if(rezultat_3 == pariu_3)
            {
                printf("JUCATORUL 3 SI-A FACUT MAINILE\n");
                punctaj_3 = punctaj_3 + (5 + pariu_3);
            }
        else
            {
                printf("JUCATORUL 3 S-A FRIPT CU %d\n", abs(rezultat_3 - pariu_3));
                punctaj_3 = punctaj_3 - (5 + abs(rezultat_3 - pariu_3));
            }
        if(rezultat_4 == pariu_4)
            {
                printf("JUCATORUL 4 SI-A FACUT MAINILE\n");
                punctaj_4 = punctaj_4 + (5 + pariu_4);
            }
        else
            {
                printf("JUCATORUL 4 S-A FRIPT CU %d\n", abs(rezultat_4 - pariu_4));
                punctaj_4 = punctaj_4 - (5 + abs(rezultat_4 - pariu_4));
            }
        if(rezultat_5 == pariu_5)
            {
                printf("JUCATORUL 5 SI-A FACUT MAINILE\n");
                punctaj_5 = punctaj_5 + (5 + pariu_5);
            }
        else
            {
                printf("JUCATORUL 5 S-A FRIPT CU %d\n", abs(rezultat_5 - pariu_5));
                punctaj_5 = punctaj_5 - (5 + abs(rezultat_5 - pariu_5));
            }
        if(rezultat_6 == pariu_6)
            {
                printf("JUCATORUL 6 SI-A FACUT MAINILE\n");
                punctaj_6 = punctaj_6 + (5 + pariu_6);
            }
        else
            {
                printf("JUCATORUL 6 S-A FRIPT CU %d\n", abs(rezultat_6 - pariu_6));
                punctaj_6 = punctaj_6 - (5 + abs(rezultat_6 - pariu_6));
            }
        printf("\n");
        printf("JUCATOR 1: %d\n", punctaj_1);
        printf("JUCATOR 2: %d\n", punctaj_2);
        printf("JUCATOR 3: %d\n", punctaj_3);
        printf("JUCATOR 4: %d\n", punctaj_4);
        printf("JUCATOR 5: %d\n", punctaj_5);
        printf("JUCATOR 6: %d\n", punctaj_6);
        printf("\n");
        printf("\n");

printf("JOC DE 4\n");
printf("\n");

    pariu_1 = 0, pariu_2 = 0, pariu_3 = 0, pariu_4 = 0, pariu_5 = 0, pariu_6 = 0;
        rezultat_1 = 0, rezultat_2 = 0, rezultat_3 = 0, rezultat_4 = 0, rezultat_5 = 0, rezultat_6 = 0;
        printf("PARIU JUCATOR 3: ");
        scanf("%d", &aux3);
        printf("PARIU JUCATOR 4: ");
        scanf("%d", &aux4);
        printf("PARIU JUCATOR 5: ");
        scanf("%d", &aux5);
        printf("PARIU JUCATOR 6: ");
        scanf("%d", &aux6);
        printf("PARIU JUCATOR 1 ");
        scanf("%d", &aux1);
        printf("JUCATORUL 2 NU ARE VOIE SA PARIEZE %d\n", 4 - aux3 - aux4 - aux5 - aux6 - aux1);
        printf("PARIU JUCATOR 2: ");
        scanf("%d", &aux2);
        pariu_1 = aux1;
        pariu_2 = aux2;
        pariu_3 = aux3;
        pariu_4 = aux4;
        pariu_5 = aux5;
        pariu_6 = aux6;
        printf("\n");

        printf("PARIU 1: %d\n", pariu_1);
        printf("PARIU 2: %d\n", pariu_2);
        printf("PARIU 3: %d\n", pariu_3);
        printf("PARIU 4: %d\n", pariu_4);
        printf("PARIU 5: %d\n", pariu_5);
        printf("PARIU 6: %d\n", pariu_6);

        printf("\n");
        printf("CINE IA MANA 1: ");
        scanf("%d", &mana1);
        if(mana1 == 1)
            rezultat_1++;
        else
            if(mana1 == 2)
                rezultat_2++;
            else
                if(mana1 == 3)
                    rezultat_3++;
                else
                    if(mana1 == 4)
                       rezultat_4++;
                    else
                        if(mana1 == 5)
                            rezultat_5++;
                        else
                            if(mana1 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("CINE IA MANA 2: ");
        scanf("%d", &mana2);
        if(mana2 == 1)
            rezultat_1++;
        else
            if(mana2 == 2)
                rezultat_2++;
            else
                if(mana2 == 3)
                    rezultat_3++;
                else
                    if(mana2 == 4)
                       rezultat_4++;
                    else
                        if(mana2 == 5)
                            rezultat_5++;
                        else
                            if(mana2 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("CINE IA MANA 3: ");
        scanf("%d", &mana3);
        if(mana3 == 1)
            rezultat_1++;
        else
            if(mana3 == 2)
                rezultat_2++;
            else
                if(mana3 == 3)
                    rezultat_3++;
                else
                    if(mana3 == 4)
                       rezultat_4++;
                    else
                        if(mana3 == 5)
                            rezultat_5++;
                        else
                            if(mana3 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("CINE IA MANA 4: ");
        scanf("%d", &mana4);
        if(mana4 == 1)
            rezultat_1++;
        else
            if(mana4 == 2)
                rezultat_2++;
            else
                if(mana4 == 3)
                    rezultat_3++;
                else
                    if(mana4 == 4)
                       rezultat_4++;
                    else
                        if(mana4 == 5)
                            rezultat_5++;
                        else
                            if(mana4 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("\n");

        if(rezultat_1 == pariu_1)
            {
                printf("JUCATORUL 1 SI-A FACUT MAINILE\n");
                punctaj_1 = punctaj_1 + (5 + pariu_1);
            }
        else
            {
                printf("JUCATORUL 1 S-A FRIPT CU %d\n", abs(rezultat_1 - pariu_1));
                punctaj_1 = punctaj_1 - (5 + abs(rezultat_1 - pariu_1));
            }

        if(rezultat_2 == pariu_2)
            {
                printf("JUCATORUL 2 SI-A FACUT MAINILE\n");
                punctaj_2 = punctaj_2 + (5 + pariu_2);
            }
        else
            {
                printf("JUCATORUL 2 S-A FRIPT CU %d\n", abs(rezultat_2 - pariu_2));
                punctaj_2 = punctaj_2 - (5 + abs(rezultat_2 - pariu_2));
            }
        if(rezultat_3 == pariu_3)
            {
                printf("JUCATORUL 3 SI-A FACUT MAINILE\n");
                punctaj_3 = punctaj_3 + (5 + pariu_3);
            }
        else
            {
                printf("JUCATORUL 3 S-A FRIPT CU %d\n", abs(rezultat_3 - pariu_3));
                punctaj_3 = punctaj_3 - (5 + abs(rezultat_3 - pariu_3));
            }
        if(rezultat_4 == pariu_4)
            {
                printf("JUCATORUL 4 SI-A FACUT MAINILE\n");
                punctaj_4 = punctaj_4 + (5 + pariu_4);
            }
        else
            {
                printf("JUCATORUL 4 S-A FRIPT CU %d\n", abs(rezultat_4 - pariu_4));
                punctaj_4 = punctaj_4 - (5 + abs(rezultat_4 - pariu_4));
            }
        if(rezultat_5 == pariu_5)
            {
                printf("JUCATORUL 5 SI-A FACUT MAINILE\n");
                punctaj_5 = punctaj_5 + (5 + pariu_5);
            }
        else
            {
                printf("JUCATORUL 5 S-A FRIPT CU %d\n", abs(rezultat_5 - pariu_5));
                punctaj_5 = punctaj_5 - (5 + abs(rezultat_5 - pariu_5));
            }
        if(rezultat_6 == pariu_6)
            {
                printf("JUCATORUL 6 SI-A FACUT MAINILE\n");
                punctaj_6 = punctaj_6 + (5 + pariu_6);
            }
        else
            {
                printf("JUCATORUL 6 S-A FRIPT CU %d\n", abs(rezultat_6 - pariu_6));
                punctaj_6 = punctaj_6 - (5 + abs(rezultat_6 - pariu_6));
            }
        printf("\n");
        printf("JUCATOR 1: %d\n", punctaj_1);
        printf("JUCATOR 2: %d\n", punctaj_2);
        printf("JUCATOR 3: %d\n", punctaj_3);
        printf("JUCATOR 4: %d\n", punctaj_4);
        printf("JUCATOR 5: %d\n", punctaj_5);
        printf("JUCATOR 6: %d\n", punctaj_6);
        printf("\n");
        printf("\n");

printf("JOC DE 5\n");
printf("\n");

    pariu_1 = 0, pariu_2 = 0, pariu_3 = 0, pariu_4 = 0, pariu_5 = 0, pariu_6 = 0;
        rezultat_1 = 0, rezultat_2 = 0, rezultat_3 = 0, rezultat_4 = 0, rezultat_5 = 0, rezultat_6 = 0;
        printf("PARIU JUCATOR 4: ");
        scanf("%d", &aux4);
        printf("PARIU JUCATOR 5: ");
        scanf("%d", &aux5);
        printf("PARIU JUCATOR 6: ");
        scanf("%d", &aux6);
        printf("PARIU JUCATOR 1: ");
        scanf("%d", &aux1);
        printf("PARIU JUCATOR 2 ");
        scanf("%d", &aux2);
        printf("JUCATORUL 3 NU ARE VOIE SA PARIEZE %d\n", 5 - aux4 - aux5 - aux6 - aux1 - aux2);
        printf("PARIU JUCATOR 3: ");
        scanf("%d", &aux3);
        pariu_1 = aux1;
        pariu_2 = aux2;
        pariu_3 = aux3;
        pariu_4 = aux4;
        pariu_5 = aux5;
        pariu_6 = aux6;
        printf("\n");

        printf("PARIU 1: %d\n", pariu_1);
        printf("PARIU 2: %d\n", pariu_2);
        printf("PARIU 3: %d\n", pariu_3);
        printf("PARIU 4: %d\n", pariu_4);
        printf("PARIU 5: %d\n", pariu_5);
        printf("PARIU 6: %d\n", pariu_6);

        printf("\n");
        printf("CINE IA MANA 1: ");
        scanf("%d", &mana1);
        if(mana1 == 1)
            rezultat_1++;
        else
            if(mana1 == 2)
                rezultat_2++;
            else
                if(mana1 == 3)
                    rezultat_3++;
                else
                    if(mana1 == 4)
                       rezultat_4++;
                    else
                        if(mana1 == 5)
                            rezultat_5++;
                        else
                            if(mana1 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("CINE IA MANA 2: ");
        scanf("%d", &mana2);
        if(mana2 == 1)
            rezultat_1++;
        else
            if(mana2 == 2)
                rezultat_2++;
            else
                if(mana2 == 3)
                    rezultat_3++;
                else
                    if(mana2 == 4)
                       rezultat_4++;
                    else
                        if(mana2 == 5)
                            rezultat_5++;
                        else
                            if(mana2 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("CINE IA MANA 3: ");
        scanf("%d", &mana3);
        if(mana3 == 1)
            rezultat_1++;
        else
            if(mana3 == 2)
                rezultat_2++;
            else
                if(mana3 == 3)
                    rezultat_3++;
                else
                    if(mana3 == 4)
                       rezultat_4++;
                    else
                        if(mana3 == 5)
                            rezultat_5++;
                        else
                            if(mana3 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("CINE IA MANA 4: ");
        scanf("%d", &mana4);
        if(mana4 == 1)
            rezultat_1++;
        else
            if(mana4 == 2)
                rezultat_2++;
            else
                if(mana4 == 3)
                    rezultat_3++;
                else
                    if(mana4 == 4)
                       rezultat_4++;
                    else
                        if(mana4 == 5)
                            rezultat_5++;
                        else
                            if(mana4 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("CINE IA MANA 5: ");
        scanf("%d", &mana5);
        if(mana5 == 1)
            rezultat_1++;
        else
            if(mana5 == 2)
                rezultat_2++;
            else
                if(mana5 == 3)
                    rezultat_3++;
                else
                    if(mana5 == 4)
                       rezultat_4++;
                    else
                        if(mana5 == 5)
                            rezultat_5++;
                        else
                            if(mana5 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("\n");

        if(rezultat_1 == pariu_1)
            {
                printf("JUCATORUL 1 SI-A FACUT MAINILE\n");
                punctaj_1 = punctaj_1 + (5 + pariu_1);
            }
        else
            {
                printf("JUCATORUL 1 S-A FRIPT CU %d\n", abs(rezultat_1 - pariu_1));
                punctaj_1 = punctaj_1 - (5 + abs(rezultat_1 - pariu_1));
            }

        if(rezultat_2 == pariu_2)
            {
                printf("JUCATORUL 2 SI-A FACUT MAINILE\n");
                punctaj_2 = punctaj_2 + (5 + pariu_2);
            }
        else
            {
                printf("JUCATORUL 2 S-A FRIPT CU %d\n", abs(rezultat_2 - pariu_2));
                punctaj_2 = punctaj_2 - (5 + abs(rezultat_2 - pariu_2));
            }
        if(rezultat_3 == pariu_3)
            {
                printf("JUCATORUL 3 SI-A FACUT MAINILE\n");
                punctaj_3 = punctaj_3 + (5 + pariu_3);
            }
        else
            {
                printf("JUCATORUL 3 S-A FRIPT CU %d\n", abs(rezultat_3 - pariu_3));
                punctaj_3 = punctaj_3 - (5 + abs(rezultat_3 - pariu_3));
            }
        if(rezultat_4 == pariu_4)
            {
                printf("JUCATORUL 4 SI-A FACUT MAINILE\n");
                punctaj_4 = punctaj_4 + (5 + pariu_4);
            }
        else
            {
                printf("JUCATORUL 4 S-A FRIPT CU %d\n", abs(rezultat_4 - pariu_4));
                punctaj_4 = punctaj_4 - (5 + abs(rezultat_4 - pariu_4));
            }
        if(rezultat_5 == pariu_5)
            {
                printf("JUCATORUL 5 SI-A FACUT MAINILE\n");
                punctaj_5 = punctaj_5 + (5 + pariu_5);
            }
        else
            {
                printf("JUCATORUL 5 S-A FRIPT CU %d\n", abs(rezultat_5 - pariu_5));
                punctaj_5 = punctaj_5 - (5 + abs(rezultat_5 - pariu_5));
            }
        if(rezultat_6 == pariu_6)
            {
                printf("JUCATORUL 6 SI-A FACUT MAINILE\n");
                punctaj_6 = punctaj_6 + (5 + pariu_6);
            }
        else
            {
                printf("JUCATORUL 6 S-A FRIPT CU %d\n", abs(rezultat_6 - pariu_6));
                punctaj_6 = punctaj_6 - (5 + abs(rezultat_6 - pariu_6));
            }
        printf("\n");
        printf("JUCATOR 1: %d\n", punctaj_1);
        printf("JUCATOR 2: %d\n", punctaj_2);
        printf("JUCATOR 3: %d\n", punctaj_3);
        printf("JUCATOR 4: %d\n", punctaj_4);
        printf("JUCATOR 5: %d\n", punctaj_5);
        printf("JUCATOR 6: %d\n", punctaj_6);
        printf("\n");
        printf("\n");

printf("JOC DE 6\n");
printf("\n");

    pariu_1 = 0, pariu_2 = 0, pariu_3 = 0, pariu_4 = 0, pariu_5 = 0, pariu_6 = 0;
        rezultat_1 = 0, rezultat_2 = 0, rezultat_3 = 0, rezultat_4 = 0, rezultat_5 = 0, rezultat_6 = 0;
        printf("PARIU JUCATOR 5: ");
        scanf("%d", &aux5);
        printf("PARIU JUCATOR 6: ");
        scanf("%d", &aux6);
        printf("PARIU JUCATOR 1: ");
        scanf("%d", &aux1);
        printf("PARIU JUCATOR 2: ");
        scanf("%d", &aux2);
        printf("PARIU JUCATOR 3: ");
        scanf("%d", &aux3);
        printf("JUCATORUL 4 NU ARE VOIE SA PARIEZE %d\n", 6 - aux5 - aux6 - aux1 - aux2 - aux3);
        printf("PARIU JUCATOR 4: ");
        scanf("%d", &aux4);
        pariu_1 = aux1;
        pariu_2 = aux2;
        pariu_3 = aux3;
        pariu_4 = aux4;
        pariu_5 = aux5;
        pariu_6 = aux6;
        printf("\n");

        printf("PARIU 1: %d\n", pariu_1);
        printf("PARIU 2: %d\n", pariu_2);
        printf("PARIU 3: %d\n", pariu_3);
        printf("PARIU 4: %d\n", pariu_4);
        printf("PARIU 5: %d\n", pariu_5);
        printf("PARIU 6: %d\n", pariu_6);

        printf("\n");
        printf("CINE IA MANA 1: ");
        scanf("%d", &mana1);
        if(mana1 == 1)
            rezultat_1++;
        else
            if(mana1 == 2)
                rezultat_2++;
            else
                if(mana1 == 3)
                    rezultat_3++;
                else
                    if(mana1 == 4)
                       rezultat_4++;
                    else
                        if(mana1 == 5)
                            rezultat_5++;
                        else
                            if(mana1 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("CINE IA MANA 2: ");
        scanf("%d", &mana2);
        if(mana2 == 1)
            rezultat_1++;
        else
            if(mana2 == 2)
                rezultat_2++;
            else
                if(mana2 == 3)
                    rezultat_3++;
                else
                    if(mana2 == 4)
                       rezultat_4++;
                    else
                        if(mana2 == 5)
                            rezultat_5++;
                        else
                            if(mana2 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("CINE IA MANA 3: ");
        scanf("%d", &mana3);
        if(mana3 == 1)
            rezultat_1++;
        else
            if(mana3 == 2)
                rezultat_2++;
            else
                if(mana3 == 3)
                    rezultat_3++;
                else
                    if(mana3 == 4)
                       rezultat_4++;
                    else
                        if(mana3 == 5)
                            rezultat_5++;
                        else
                            if(mana3 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("CINE IA MANA 4: ");
        scanf("%d", &mana4);
        if(mana4 == 1)
            rezultat_1++;
        else
            if(mana4 == 2)
                rezultat_2++;
            else
                if(mana4 == 3)
                    rezultat_3++;
                else
                    if(mana4 == 4)
                       rezultat_4++;
                    else
                        if(mana4 == 5)
                            rezultat_5++;
                        else
                            if(mana4 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("CINE IA MANA 5: ");
        scanf("%d", &mana5);
        if(mana5 == 1)
            rezultat_1++;
        else
            if(mana5 == 2)
                rezultat_2++;
            else
                if(mana5 == 3)
                    rezultat_3++;
                else
                    if(mana5 == 4)
                       rezultat_4++;
                    else
                        if(mana5 == 5)
                            rezultat_5++;
                        else
                            if(mana5 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("CINE IA MANA 6: ");
        scanf("%d", &mana6);
        if(mana6 == 1)
            rezultat_1++;
        else
            if(mana6 == 2)
                rezultat_2++;
            else
                if(mana6 == 3)
                    rezultat_3++;
                else
                    if(mana6 == 4)
                       rezultat_4++;
                    else
                        if(mana6 == 5)
                            rezultat_5++;
                        else
                            if(mana6 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("\n");

        if(rezultat_1 == pariu_1)
            {
                printf("JUCATORUL 1 SI-A FACUT MAINILE\n");
                punctaj_1 = punctaj_1 + (5 + pariu_1);
            }
        else
            {
                printf("JUCATORUL 1 S-A FRIPT CU %d\n", abs(rezultat_1 - pariu_1));
                punctaj_1 = punctaj_1 - (5 + abs(rezultat_1 - pariu_1));
            }

        if(rezultat_2 == pariu_2)
            {
                printf("JUCATORUL 2 SI-A FACUT MAINILE\n");
                punctaj_2 = punctaj_2 + (5 + pariu_2);
            }
        else
            {
                printf("JUCATORUL 2 S-A FRIPT CU %d\n", abs(rezultat_2 - pariu_2));
                punctaj_2 = punctaj_2 - (5 + abs(rezultat_2 - pariu_2));
            }
        if(rezultat_3 == pariu_3)
            {
                printf("JUCATORUL 3 SI-A FACUT MAINILE\n");
                punctaj_3 = punctaj_3 + (5 + pariu_3);
            }
        else
            {
                printf("JUCATORUL 3 S-A FRIPT CU %d\n", abs(rezultat_3 - pariu_3));
                punctaj_3 = punctaj_3 - (5 + abs(rezultat_3 - pariu_3));
            }
        if(rezultat_4 == pariu_4)
            {
                printf("JUCATORUL 4 SI-A FACUT MAINILE\n");
                punctaj_4 = punctaj_4 + (5 + pariu_4);
            }
        else
            {
                printf("JUCATORUL 4 S-A FRIPT CU %d\n", abs(rezultat_4 - pariu_4));
                punctaj_4 = punctaj_4 - (5 + abs(rezultat_4 - pariu_4));
            }
        if(rezultat_5 == pariu_5)
            {
                printf("JUCATORUL 5 SI-A FACUT MAINILE\n");
                punctaj_5 = punctaj_5 + (5 + pariu_5);
            }
        else
            {
                printf("JUCATORUL 5 S-A FRIPT CU %d\n", abs(rezultat_5 - pariu_5));
                punctaj_5 = punctaj_5 - (5 + abs(rezultat_5 - pariu_5));
            }
        if(rezultat_6 == pariu_6)
            {
                printf("JUCATORUL 6 SI-A FACUT MAINILE\n");
                punctaj_6 = punctaj_6 + (5 + pariu_6);
            }
        else
            {
                printf("JUCATORUL 6 S-A FRIPT CU %d\n", abs(rezultat_6 - pariu_6));
                punctaj_6 = punctaj_6 - (5 + abs(rezultat_6 - pariu_6));
            }
        printf("\n");
        printf("JUCATOR 1: %d\n", punctaj_1);
        printf("JUCATOR 2: %d\n", punctaj_2);
        printf("JUCATOR 3: %d\n", punctaj_3);
        printf("JUCATOR 4: %d\n", punctaj_4);
        printf("JUCATOR 5: %d\n", punctaj_5);
        printf("JUCATOR 6: %d\n", punctaj_6);
        printf("\n");
        printf("\n");

printf("JOC DE 7\n");
printf("\n");

    pariu_1 = 0, pariu_2 = 0, pariu_3 = 0, pariu_4 = 0, pariu_5 = 0, pariu_6 = 0;
        rezultat_1 = 0, rezultat_2 = 0, rezultat_3 = 0, rezultat_4 = 0, rezultat_5 = 0, rezultat_6 = 0;
        printf("PARIU JUCATOR 6: ");
        scanf("%d", &aux6);
        printf("PARIU JUCATOR 1: ");
        scanf("%d", &aux1);
        printf("PARIU JUCATOR 2: ");
        scanf("%d", &aux2);
        printf("PARIU JUCATOR 3: ");
        scanf("%d", &aux3);
        printf("PARIU JUCATOR 4: ");
        scanf("%d", &aux4);
        printf("JUCATORUL 5 NU ARE VOIE SA PARIEZE %d\n", 7 - aux6 - aux1 - aux2 - aux3 - aux4);
        printf("PARIU JUCATOR 5: ");
        scanf("%d", &aux5);
        pariu_1 = aux1;
        pariu_2 = aux2;
        pariu_3 = aux3;
        pariu_4 = aux4;
        pariu_5 = aux5;
        pariu_6 = aux6;
        printf("\n");

        printf("PARIU 1: %d\n", pariu_1);
        printf("PARIU 2: %d\n", pariu_2);
        printf("PARIU 3: %d\n", pariu_3);
        printf("PARIU 4: %d\n", pariu_4);
        printf("PARIU 5: %d\n", pariu_5);
        printf("PARIU 6: %d\n", pariu_6);

        printf("\n");
        printf("CINE IA MANA 1: ");
        scanf("%d", &mana1);
        if(mana1 == 1)
            rezultat_1++;
        else
            if(mana1 == 2)
                rezultat_2++;
            else
                if(mana1 == 3)
                    rezultat_3++;
                else
                    if(mana1 == 4)
                       rezultat_4++;
                    else
                        if(mana1 == 5)
                            rezultat_5++;
                        else
                            if(mana1 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("CINE IA MANA 2: ");
        scanf("%d", &mana2);
        if(mana2 == 1)
            rezultat_1++;
        else
            if(mana2 == 2)
                rezultat_2++;
            else
                if(mana2 == 3)
                    rezultat_3++;
                else
                    if(mana2 == 4)
                       rezultat_4++;
                    else
                        if(mana2 == 5)
                            rezultat_5++;
                        else
                            if(mana2 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("CINE IA MANA 3: ");
        scanf("%d", &mana3);
        if(mana3 == 1)
            rezultat_1++;
        else
            if(mana3 == 2)
                rezultat_2++;
            else
                if(mana3 == 3)
                    rezultat_3++;
                else
                    if(mana3 == 4)
                       rezultat_4++;
                    else
                        if(mana3 == 5)
                            rezultat_5++;
                        else
                            if(mana3 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("CINE IA MANA 4: ");
        scanf("%d", &mana4);
        if(mana4 == 1)
            rezultat_1++;
        else
            if(mana4 == 2)
                rezultat_2++;
            else
                if(mana4 == 3)
                    rezultat_3++;
                else
                    if(mana4 == 4)
                       rezultat_4++;
                    else
                        if(mana4 == 5)
                            rezultat_5++;
                        else
                            if(mana4 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("CINE IA MANA 5: ");
        scanf("%d", &mana5);
        if(mana5 == 1)
            rezultat_1++;
        else
            if(mana5 == 2)
                rezultat_2++;
            else
                if(mana5 == 3)
                    rezultat_3++;
                else
                    if(mana5 == 4)
                       rezultat_4++;
                    else
                        if(mana5 == 5)
                            rezultat_5++;
                        else
                            if(mana5 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("CINE IA MANA 6: ");
        scanf("%d", &mana6);
        if(mana6 == 1)
            rezultat_1++;
        else
            if(mana6 == 2)
                rezultat_2++;
            else
                if(mana6 == 3)
                    rezultat_3++;
                else
                    if(mana6 == 4)
                       rezultat_4++;
                    else
                        if(mana6 == 5)
                            rezultat_5++;
                        else
                            if(mana6 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("CINE IA MANA 7: ");
        scanf("%d", &mana7);
        if(mana7 == 1)
            rezultat_1++;
        else
            if(mana7 == 2)
                rezultat_2++;
            else
                if(mana7 == 3)
                    rezultat_3++;
                else
                    if(mana7 == 4)
                       rezultat_4++;
                    else
                        if(mana7 == 5)
                            rezultat_5++;
                        else
                            if(mana7 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("\n");

        if(rezultat_1 == pariu_1)
            {
                printf("JUCATORUL 1 SI-A FACUT MAINILE\n");
                punctaj_1 = punctaj_1 + (5 + pariu_1);
            }
        else
            {
                printf("JUCATORUL 1 S-A FRIPT CU %d\n", abs(rezultat_1 - pariu_1));
                punctaj_1 = punctaj_1 - (5 + abs(rezultat_1 - pariu_1));
            }

        if(rezultat_2 == pariu_2)
            {
                printf("JUCATORUL 2 SI-A FACUT MAINILE\n");
                punctaj_2 = punctaj_2 + (5 + pariu_2);
            }
        else
            {
                printf("JUCATORUL 2 S-A FRIPT CU %d\n", abs(rezultat_2 - pariu_2));
                punctaj_2 = punctaj_2 - (5 + abs(rezultat_2 - pariu_2));
            }
        if(rezultat_3 == pariu_3)
            {
                printf("JUCATORUL 3 SI-A FACUT MAINILE\n");
                punctaj_3 = punctaj_3 + (5 + pariu_3);
            }
        else
            {
                printf("JUCATORUL 3 S-A FRIPT CU %d\n", abs(rezultat_3 - pariu_3));
                punctaj_3 = punctaj_3 - (5 + abs(rezultat_3 - pariu_3));
            }
        if(rezultat_4 == pariu_4)
            {
                printf("JUCATORUL 4 SI-A FACUT MAINILE\n");
                punctaj_4 = punctaj_4 + (5 + pariu_4);
            }
        else
            {
                printf("JUCATORUL 4 S-A FRIPT CU %d\n", abs(rezultat_4 - pariu_4));
                punctaj_4 = punctaj_4 - (5 + abs(rezultat_4 - pariu_4));
            }
        if(rezultat_5 == pariu_5)
            {
                printf("JUCATORUL 5 SI-A FACUT MAINILE\n");
                punctaj_5 = punctaj_5 + (5 + pariu_5);
            }
        else
            {
                printf("JUCATORUL 5 S-A FRIPT CU %d\n", abs(rezultat_5 - pariu_5));
                punctaj_5 = punctaj_5 - (5 + abs(rezultat_5 - pariu_5));
            }
        if(rezultat_6 == pariu_6)
            {
                printf("JUCATORUL 6 SI-A FACUT MAINILE\n");
                punctaj_6 = punctaj_6 + (5 + pariu_6);
            }
        else
            {
                printf("JUCATORUL 6 S-A FRIPT CU %d\n", abs(rezultat_6 - pariu_6));
                punctaj_6 = punctaj_6 - (5 + abs(rezultat_6 - pariu_6));
            }
        printf("\n");
        printf("JUCATOR 1: %d\n", punctaj_1);
        printf("JUCATOR 2: %d\n", punctaj_2);
        printf("JUCATOR 3: %d\n", punctaj_3);
        printf("JUCATOR 4: %d\n", punctaj_4);
        printf("JUCATOR 5: %d\n", punctaj_5);
        printf("JUCATOR 6: %d\n", punctaj_6);
        printf("\n");
        printf("\n");

printf("JOC DE 8 NR.1\n");
printf("\n");

    pariu_1 = 0, pariu_2 = 0, pariu_3 = 0, pariu_4 = 0, pariu_5 = 0, pariu_6 = 0;
        rezultat_1 = 0, rezultat_2 = 0, rezultat_3 = 0, rezultat_4 = 0, rezultat_5 = 0, rezultat_6 = 0;
        printf("PARIU JUCATOR 1: ");
        scanf("%d", &aux1);
        printf("PARIU JUCATOR 2: ");
        scanf("%d", &aux2);
        printf("PARIU JUCATOR 3: ");
        scanf("%d", &aux3);
        printf("PARIU JUCATOR 4: ");
        scanf("%d", &aux4);
        printf("PARIU JUCATOR 5: ");
        scanf("%d", &aux5);
        printf("JUCATORUL 6 NU ARE VOIE SA PARIEZE %d\n", 8 - aux1 - aux2 - aux3 - aux4 - aux5);
        printf("PARIU JUCATOR 6: ");
        scanf("%d", &aux6);
        pariu_1 = aux1;
        pariu_2 = aux2;
        pariu_3 = aux3;
        pariu_4 = aux4;
        pariu_5 = aux5;
        pariu_6 = aux6;
        printf("\n");

        printf("PARIU 1: %d\n", pariu_1);
        printf("PARIU 2: %d\n", pariu_2);
        printf("PARIU 3: %d\n", pariu_3);
        printf("PARIU 4: %d\n", pariu_4);
        printf("PARIU 5: %d\n", pariu_5);
        printf("PARIU 6: %d\n", pariu_6);

        printf("\n");
        printf("CINE IA MANA 1: ");
        scanf("%d", &mana1);
        if(mana1 == 1)
            rezultat_1++;
        else
            if(mana1 == 2)
                rezultat_2++;
            else
                if(mana1 == 3)
                    rezultat_3++;
                else
                    if(mana1 == 4)
                       rezultat_4++;
                    else
                        if(mana1 == 5)
                            rezultat_5++;
                        else
                            if(mana1 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("CINE IA MANA 2: ");
        scanf("%d", &mana2);
        if(mana2 == 1)
            rezultat_1++;
        else
            if(mana2 == 2)
                rezultat_2++;
            else
                if(mana2 == 3)
                    rezultat_3++;
                else
                    if(mana2 == 4)
                       rezultat_4++;
                    else
                        if(mana2 == 5)
                            rezultat_5++;
                        else
                            if(mana2 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("CINE IA MANA 3: ");
        scanf("%d", &mana3);
        if(mana3 == 1)
            rezultat_1++;
        else
            if(mana3 == 2)
                rezultat_2++;
            else
                if(mana3 == 3)
                    rezultat_3++;
                else
                    if(mana3 == 4)
                       rezultat_4++;
                    else
                        if(mana3 == 5)
                            rezultat_5++;
                        else
                            if(mana3 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("CINE IA MANA 4: ");
        scanf("%d", &mana4);
        if(mana4 == 1)
            rezultat_1++;
        else
            if(mana4 == 2)
                rezultat_2++;
            else
                if(mana4 == 3)
                    rezultat_3++;
                else
                    if(mana4 == 4)
                       rezultat_4++;
                    else
                        if(mana4 == 5)
                            rezultat_5++;
                        else
                            if(mana4 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("CINE IA MANA 5: ");
        scanf("%d", &mana5);
        if(mana5 == 1)
            rezultat_1++;
        else
            if(mana5 == 2)
                rezultat_2++;
            else
                if(mana5 == 3)
                    rezultat_3++;
                else
                    if(mana5 == 4)
                       rezultat_4++;
                    else
                        if(mana5 == 5)
                            rezultat_5++;
                        else
                            if(mana5 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("CINE IA MANA 6: ");
        scanf("%d", &mana6);
        if(mana6 == 1)
            rezultat_1++;
        else
            if(mana6 == 2)
                rezultat_2++;
            else
                if(mana6 == 3)
                    rezultat_3++;
                else
                    if(mana6 == 4)
                       rezultat_4++;
                    else
                        if(mana6 == 5)
                            rezultat_5++;
                        else
                            if(mana6 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("CINE IA MANA 7: ");
        scanf("%d", &mana7);
        if(mana7 == 1)
            rezultat_1++;
        else
            if(mana7 == 2)
                rezultat_2++;
            else
                if(mana7 == 3)
                    rezultat_3++;
                else
                    if(mana7 == 4)
                       rezultat_4++;
                    else
                        if(mana7 == 5)
                            rezultat_5++;
                        else
                            if(mana7 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("CINE IA MANA 8: ");
        scanf("%d", &mana8);
        if(mana8 == 1)
            rezultat_1++;
        else
            if(mana8 == 2)
                rezultat_2++;
            else
                if(mana8 == 3)
                    rezultat_3++;
                else
                    if(mana8 == 4)
                       rezultat_4++;
                    else
                        if(mana8 == 5)
                            rezultat_5++;
                        else
                            if(mana8 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("\n");

        if(rezultat_1 == pariu_1)
            {
                printf("JUCATORUL 1 SI-A FACUT MAINILE\n");
                punctaj_1 = punctaj_1 + (5 + pariu_1);
            }
        else
            {
                printf("JUCATORUL 1 S-A FRIPT CU %d\n", abs(rezultat_1 - pariu_1));
                punctaj_1 = punctaj_1 - (5 + abs(rezultat_1 - pariu_1));
            }

        if(rezultat_2 == pariu_2)
            {
                printf("JUCATORUL 2 SI-A FACUT MAINILE\n");
                punctaj_2 = punctaj_2 + (5 + pariu_2);
            }
        else
            {
                printf("JUCATORUL 2 S-A FRIPT CU %d\n", abs(rezultat_2 - pariu_2));
                punctaj_2 = punctaj_2 - (5 + abs(rezultat_2 - pariu_2));
            }
        if(rezultat_3 == pariu_3)
            {
                printf("JUCATORUL 3 SI-A FACUT MAINILE\n");
                punctaj_3 = punctaj_3 + (5 + pariu_3);
            }
        else
            {
                printf("JUCATORUL 3 S-A FRIPT CU %d\n", abs(rezultat_3 - pariu_3));
                punctaj_3 = punctaj_3 - (5 + abs(rezultat_3 - pariu_3));
            }
        if(rezultat_4 == pariu_4)
            {
                printf("JUCATORUL 4 SI-A FACUT MAINILE\n");
                punctaj_4 = punctaj_4 + (5 + pariu_4);
            }
        else
            {
                printf("JUCATORUL 4 S-A FRIPT CU %d\n", abs(rezultat_4 - pariu_4));
                punctaj_4 = punctaj_4 - (5 + abs(rezultat_4 - pariu_4));
            }
        if(rezultat_5 == pariu_5)
            {
                printf("JUCATORUL 5 SI-A FACUT MAINILE\n");
                punctaj_5 = punctaj_5 + (5 + pariu_5);
            }
        else
            {
                printf("JUCATORUL 5 S-A FRIPT CU %d\n", abs(rezultat_5 - pariu_5));
                punctaj_5 = punctaj_5 - (5 + abs(rezultat_5 - pariu_5));
            }
        if(rezultat_6 == pariu_6)
            {
                printf("JUCATORUL 6 SI-A FACUT MAINILE\n");
                punctaj_6 = punctaj_6 + (5 + pariu_6);
            }
        else
            {
                printf("JUCATORUL 6 S-A FRIPT CU %d\n", abs(rezultat_6 - pariu_6));
                punctaj_6 = punctaj_6 - (5 + abs(rezultat_6 - pariu_6));
            }
        printf("\n");
        printf("JUCATOR 1: %d\n", punctaj_1);
        printf("JUCATOR 2: %d\n", punctaj_2);
        printf("JUCATOR 3: %d\n", punctaj_3);
        printf("JUCATOR 4: %d\n", punctaj_4);
        printf("JUCATOR 5: %d\n", punctaj_5);
        printf("JUCATOR 6: %d\n", punctaj_6);
        printf("\n");
        printf("\n");

printf("JOC DE 8 NR.2\n");
printf("\n");

    pariu_1 = 0, pariu_2 = 0, pariu_3 = 0, pariu_4 = 0, pariu_5 = 0, pariu_6 = 0;
        rezultat_1 = 0, rezultat_2 = 0, rezultat_3 = 0, rezultat_4 = 0, rezultat_5 = 0, rezultat_6 = 0;
        printf("PARIU JUCATOR 2: ");
        scanf("%d", &aux2);
        printf("PARIU JUCATOR 3: ");
        scanf("%d", &aux3);
        printf("PARIU JUCATOR 4: ");
        scanf("%d", &aux4);
        printf("PARIU JUCATOR 5: ");
        scanf("%d", &aux5);
        printf("PARIU JUCATOR 6: ");
        scanf("%d", &aux6);
        printf("JUCATORUL 1 NU ARE VOIE SA PARIEZE %d\n", 8 - aux2 - aux3 - aux4 - aux5 - aux6);
        printf("PARIU JUCATOR 1: ");
        scanf("%d", &aux1);
        pariu_1 = aux1;
        pariu_2 = aux2;
        pariu_3 = aux3;
        pariu_4 = aux4;
        pariu_5 = aux5;
        pariu_6 = aux6;
        printf("\n");

        printf("PARIU 1: %d\n", pariu_1);
        printf("PARIU 2: %d\n", pariu_2);
        printf("PARIU 3: %d\n", pariu_3);
        printf("PARIU 4: %d\n", pariu_4);
        printf("PARIU 5: %d\n", pariu_5);
        printf("PARIU 6: %d\n", pariu_6);

        printf("\n");
        printf("CINE IA MANA 1: ");
        scanf("%d", &mana1);
        if(mana1 == 1)
            rezultat_1++;
        else
            if(mana1 == 2)
                rezultat_2++;
            else
                if(mana1 == 3)
                    rezultat_3++;
                else
                    if(mana1 == 4)
                       rezultat_4++;
                    else
                        if(mana1 == 5)
                            rezultat_5++;
                        else
                            if(mana1 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("CINE IA MANA 2: ");
        scanf("%d", &mana2);
        if(mana2 == 1)
            rezultat_1++;
        else
            if(mana2 == 2)
                rezultat_2++;
            else
                if(mana2 == 3)
                    rezultat_3++;
                else
                    if(mana2 == 4)
                       rezultat_4++;
                    else
                        if(mana2 == 5)
                            rezultat_5++;
                        else
                            if(mana2 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("CINE IA MANA 3: ");
        scanf("%d", &mana3);
        if(mana3 == 1)
            rezultat_1++;
        else
            if(mana3 == 2)
                rezultat_2++;
            else
                if(mana3 == 3)
                    rezultat_3++;
                else
                    if(mana3 == 4)
                       rezultat_4++;
                    else
                        if(mana3 == 5)
                            rezultat_5++;
                        else
                            if(mana3 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("CINE IA MANA 4: ");
        scanf("%d", &mana4);
        if(mana4 == 1)
            rezultat_1++;
        else
            if(mana4 == 2)
                rezultat_2++;
            else
                if(mana4 == 3)
                    rezultat_3++;
                else
                    if(mana4 == 4)
                       rezultat_4++;
                    else
                        if(mana4 == 5)
                            rezultat_5++;
                        else
                            if(mana4 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("CINE IA MANA 5: ");
        scanf("%d", &mana5);
        if(mana5 == 1)
            rezultat_1++;
        else
            if(mana5 == 2)
                rezultat_2++;
            else
                if(mana5 == 3)
                    rezultat_3++;
                else
                    if(mana5 == 4)
                       rezultat_4++;
                    else
                        if(mana5 == 5)
                            rezultat_5++;
                        else
                            if(mana5 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("CINE IA MANA 6: ");
        scanf("%d", &mana6);
        if(mana6 == 1)
            rezultat_1++;
        else
            if(mana6 == 2)
                rezultat_2++;
            else
                if(mana6 == 3)
                    rezultat_3++;
                else
                    if(mana6 == 4)
                       rezultat_4++;
                    else
                        if(mana6 == 5)
                            rezultat_5++;
                        else
                            if(mana6 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("CINE IA MANA 7: ");
        scanf("%d", &mana7);
        if(mana7 == 1)
            rezultat_1++;
        else
            if(mana7 == 2)
                rezultat_2++;
            else
                if(mana7 == 3)
                    rezultat_3++;
                else
                    if(mana7 == 4)
                       rezultat_4++;
                    else
                        if(mana7 == 5)
                            rezultat_5++;
                        else
                            if(mana7 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("CINE IA MANA 8: ");
        scanf("%d", &mana8);
        if(mana8 == 1)
            rezultat_1++;
        else
            if(mana8 == 2)
                rezultat_2++;
            else
                if(mana8 == 3)
                    rezultat_3++;
                else
                    if(mana8 == 4)
                       rezultat_4++;
                    else
                        if(mana8 == 5)
                            rezultat_5++;
                        else
                            if(mana8 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("\n");

        if(rezultat_1 == pariu_1)
            {
                printf("JUCATORUL 1 SI-A FACUT MAINILE\n");
                punctaj_1 = punctaj_1 + (5 + pariu_1);
            }
        else
            {
                printf("JUCATORUL 1 S-A FRIPT CU %d\n", abs(rezultat_1 - pariu_1));
                punctaj_1 = punctaj_1 - (5 + abs(rezultat_1 - pariu_1));
            }

        if(rezultat_2 == pariu_2)
            {
                printf("JUCATORUL 2 SI-A FACUT MAINILE\n");
                punctaj_2 = punctaj_2 + (5 + pariu_2);
            }
        else
            {
                printf("JUCATORUL 2 S-A FRIPT CU %d\n", abs(rezultat_2 - pariu_2));
                punctaj_2 = punctaj_2 - (5 + abs(rezultat_2 - pariu_2));
            }
        if(rezultat_3 == pariu_3)
            {
                printf("JUCATORUL 3 SI-A FACUT MAINILE\n");
                punctaj_3 = punctaj_3 + (5 + pariu_3);
            }
        else
            {
                printf("JUCATORUL 3 S-A FRIPT CU %d\n", abs(rezultat_3 - pariu_3));
                punctaj_3 = punctaj_3 - (5 + abs(rezultat_3 - pariu_3));
            }
        if(rezultat_4 == pariu_4)
            {
                printf("JUCATORUL 4 SI-A FACUT MAINILE\n");
                punctaj_4 = punctaj_4 + (5 + pariu_4);
            }
        else
            {
                printf("JUCATORUL 4 S-A FRIPT CU %d\n", abs(rezultat_4 - pariu_4));
                punctaj_4 = punctaj_4 - (5 + abs(rezultat_4 - pariu_4));
            }
        if(rezultat_5 == pariu_5)
            {
                printf("JUCATORUL 5 SI-A FACUT MAINILE\n");
                punctaj_5 = punctaj_5 + (5 + pariu_5);
            }
        else
            {
                printf("JUCATORUL 5 S-A FRIPT CU %d\n", abs(rezultat_5 - pariu_5));
                punctaj_5 = punctaj_5 - (5 + abs(rezultat_5 - pariu_5));
            }
        if(rezultat_6 == pariu_6)
            {
                printf("JUCATORUL 6 SI-A FACUT MAINILE\n");
                punctaj_6 = punctaj_6 + (5 + pariu_6);
            }
        else
            {
                printf("JUCATORUL 6 S-A FRIPT CU %d\n", abs(rezultat_6 - pariu_6));
                punctaj_6 = punctaj_6 - (5 + abs(rezultat_6 - pariu_6));
            }
        printf("\n");
        printf("JUCATOR 1: %d\n", punctaj_1);
        printf("JUCATOR 2: %d\n", punctaj_2);
        printf("JUCATOR 3: %d\n", punctaj_3);
        printf("JUCATOR 4: %d\n", punctaj_4);
        printf("JUCATOR 5: %d\n", punctaj_5);
        printf("JUCATOR 6: %d\n", punctaj_6);
        printf("\n");
        printf("\n");

printf("JOC DE 8 NR.3\n");
printf("\n");

    pariu_1 = 0, pariu_2 = 0, pariu_3 = 0, pariu_4 = 0, pariu_5 = 0, pariu_6 = 0;
        rezultat_1 = 0, rezultat_2 = 0, rezultat_3 = 0, rezultat_4 = 0, rezultat_5 = 0, rezultat_6 = 0;
        printf("PARIU JUCATOR 3: ");
        scanf("%d", &aux3);
        printf("PARIU JUCATOR 4: ");
        scanf("%d", &aux4);
        printf("PARIU JUCATOR 5: ");
        scanf("%d", &aux5);
        printf("PARIU JUCATOR 6: ");
        scanf("%d", &aux6);
        printf("PARIU JUCATOR 1: ");
        scanf("%d", &aux1);
        printf("JUCATORUL 2 NU ARE VOIE SA PARIEZE %d\n", 8 - aux3 - aux4 - aux5 - aux6 - aux1);
        printf("PARIU JUCATOR 2: ");
        scanf("%d", &aux2);
        pariu_1 = aux1;
        pariu_2 = aux2;
        pariu_3 = aux3;
        pariu_4 = aux4;
        pariu_5 = aux5;
        pariu_6 = aux6;
        printf("\n");

        printf("PARIU 1: %d\n", pariu_1);
        printf("PARIU 2: %d\n", pariu_2);
        printf("PARIU 3: %d\n", pariu_3);
        printf("PARIU 4: %d\n", pariu_4);
        printf("PARIU 5: %d\n", pariu_5);
        printf("PARIU 6: %d\n", pariu_6);

        printf("\n");
        printf("CINE IA MANA 1: ");
        scanf("%d", &mana1);
        if(mana1 == 1)
            rezultat_1++;
        else
            if(mana1 == 2)
                rezultat_2++;
            else
                if(mana1 == 3)
                    rezultat_3++;
                else
                    if(mana1 == 4)
                       rezultat_4++;
                    else
                        if(mana1 == 5)
                            rezultat_5++;
                        else
                            if(mana1 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("CINE IA MANA 2: ");
        scanf("%d", &mana2);
        if(mana2 == 1)
            rezultat_1++;
        else
            if(mana2 == 2)
                rezultat_2++;
            else
                if(mana2 == 3)
                    rezultat_3++;
                else
                    if(mana2 == 4)
                       rezultat_4++;
                    else
                        if(mana2 == 5)
                            rezultat_5++;
                        else
                            if(mana2 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("CINE IA MANA 3: ");
        scanf("%d", &mana3);
        if(mana3 == 1)
            rezultat_1++;
        else
            if(mana3 == 2)
                rezultat_2++;
            else
                if(mana3 == 3)
                    rezultat_3++;
                else
                    if(mana3 == 4)
                       rezultat_4++;
                    else
                        if(mana3 == 5)
                            rezultat_5++;
                        else
                            if(mana3 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("CINE IA MANA 4: ");
        scanf("%d", &mana4);
        if(mana4 == 1)
            rezultat_1++;
        else
            if(mana4 == 2)
                rezultat_2++;
            else
                if(mana4 == 3)
                    rezultat_3++;
                else
                    if(mana4 == 4)
                       rezultat_4++;
                    else
                        if(mana4 == 5)
                            rezultat_5++;
                        else
                            if(mana4 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("CINE IA MANA 5: ");
        scanf("%d", &mana5);
        if(mana5 == 1)
            rezultat_1++;
        else
            if(mana5 == 2)
                rezultat_2++;
            else
                if(mana5 == 3)
                    rezultat_3++;
                else
                    if(mana5 == 4)
                       rezultat_4++;
                    else
                        if(mana5 == 5)
                            rezultat_5++;
                        else
                            if(mana5 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("CINE IA MANA 6: ");
        scanf("%d", &mana6);
        if(mana6 == 1)
            rezultat_1++;
        else
            if(mana6 == 2)
                rezultat_2++;
            else
                if(mana6 == 3)
                    rezultat_3++;
                else
                    if(mana6 == 4)
                       rezultat_4++;
                    else
                        if(mana6 == 5)
                            rezultat_5++;
                        else
                            if(mana6 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("CINE IA MANA 7: ");
        scanf("%d", &mana7);
        if(mana7 == 1)
            rezultat_1++;
        else
            if(mana7 == 2)
                rezultat_2++;
            else
                if(mana7 == 3)
                    rezultat_3++;
                else
                    if(mana7 == 4)
                       rezultat_4++;
                    else
                        if(mana7 == 5)
                            rezultat_5++;
                        else
                            if(mana7 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("CINE IA MANA 8: ");
        scanf("%d", &mana8);
        if(mana8 == 1)
            rezultat_1++;
        else
            if(mana8 == 2)
                rezultat_2++;
            else
                if(mana8 == 3)
                    rezultat_3++;
                else
                    if(mana8 == 4)
                       rezultat_4++;
                    else
                        if(mana8 == 5)
                            rezultat_5++;
                        else
                            if(mana8 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("\n");

        if(rezultat_1 == pariu_1)
            {
                printf("JUCATORUL 1 SI-A FACUT MAINILE\n");
                punctaj_1 = punctaj_1 + (5 + pariu_1);
            }
        else
            {
                printf("JUCATORUL 1 S-A FRIPT CU %d\n", abs(rezultat_1 - pariu_1));
                punctaj_1 = punctaj_1 - (5 + abs(rezultat_1 - pariu_1));
            }

        if(rezultat_2 == pariu_2)
            {
                printf("JUCATORUL 2 SI-A FACUT MAINILE\n");
                punctaj_2 = punctaj_2 + (5 + pariu_2);
            }
        else
            {
                printf("JUCATORUL 2 S-A FRIPT CU %d\n", abs(rezultat_2 - pariu_2));
                punctaj_2 = punctaj_2 - (5 + abs(rezultat_2 - pariu_2));
            }
        if(rezultat_3 == pariu_3)
            {
                printf("JUCATORUL 3 SI-A FACUT MAINILE\n");
                punctaj_3 = punctaj_3 + (5 + pariu_3);
            }
        else
            {
                printf("JUCATORUL 3 S-A FRIPT CU %d\n", abs(rezultat_3 - pariu_3));
                punctaj_3 = punctaj_3 - (5 + abs(rezultat_3 - pariu_3));
            }
        if(rezultat_4 == pariu_4)
            {
                printf("JUCATORUL 4 SI-A FACUT MAINILE\n");
                punctaj_4 = punctaj_4 + (5 + pariu_4);
            }
        else
            {
                printf("JUCATORUL 4 S-A FRIPT CU %d\n", abs(rezultat_4 - pariu_4));
                punctaj_4 = punctaj_4 - (5 + abs(rezultat_4 - pariu_4));
            }
        if(rezultat_5 == pariu_5)
            {
                printf("JUCATORUL 5 SI-A FACUT MAINILE\n");
                punctaj_5 = punctaj_5 + (5 + pariu_5);
            }
        else
            {
                printf("JUCATORUL 5 S-A FRIPT CU %d\n", abs(rezultat_5 - pariu_5));
                punctaj_5 = punctaj_5 - (5 + abs(rezultat_5 - pariu_5));
            }
        if(rezultat_6 == pariu_6)
            {
                printf("JUCATORUL 6 SI-A FACUT MAINILE\n");
                punctaj_6 = punctaj_6 + (5 + pariu_6);
            }
        else
            {
                printf("JUCATORUL 6 S-A FRIPT CU %d\n", abs(rezultat_6 - pariu_6));
                punctaj_6 = punctaj_6 - (5 + abs(rezultat_6 - pariu_6));
            }
        printf("\n");
        printf("JUCATOR 1: %d\n", punctaj_1);
        printf("JUCATOR 2: %d\n", punctaj_2);
        printf("JUCATOR 3: %d\n", punctaj_3);
        printf("JUCATOR 4: %d\n", punctaj_4);
        printf("JUCATOR 5: %d\n", punctaj_5);
        printf("JUCATOR 6: %d\n", punctaj_6);
        printf("\n");
        printf("\n");

printf("JOC DE 8 NR.4\n");
printf("\n");

    pariu_1 = 0, pariu_2 = 0, pariu_3 = 0, pariu_4 = 0, pariu_5 = 0, pariu_6 = 0;
        rezultat_1 = 0, rezultat_2 = 0, rezultat_3 = 0, rezultat_4 = 0, rezultat_5 = 0, rezultat_6 = 0;
        printf("PARIU JUCATOR 4: ");
        scanf("%d", &aux4);
        printf("PARIU JUCATOR 5: ");
        scanf("%d", &aux5);
        printf("PARIU JUCATOR 6: ");
        scanf("%d", &aux6);
        printf("PARIU JUCATOR 1: ");
        scanf("%d", &aux1);
        printf("PARIU JUCATOR 2: ");
        scanf("%d", &aux2);
        printf("JUCATORUL 3 NU ARE VOIE SA PARIEZE %d\n", 8 - aux4 - aux5 - aux6 - aux1 - aux2);
        printf("PARIU JUCATOR 3: ");
        scanf("%d", &aux3);
        pariu_1 = aux1;
        pariu_2 = aux2;
        pariu_3 = aux3;
        pariu_4 = aux4;
        pariu_5 = aux5;
        pariu_6 = aux6;
        printf("\n");

        printf("PARIU 1: %d\n", pariu_1);
        printf("PARIU 2: %d\n", pariu_2);
        printf("PARIU 3: %d\n", pariu_3);
        printf("PARIU 4: %d\n", pariu_4);
        printf("PARIU 5: %d\n", pariu_5);
        printf("PARIU 6: %d\n", pariu_6);

        printf("\n");
        printf("CINE IA MANA 1: ");
        scanf("%d", &mana1);
        if(mana1 == 1)
            rezultat_1++;
        else
            if(mana1 == 2)
                rezultat_2++;
            else
                if(mana1 == 3)
                    rezultat_3++;
                else
                    if(mana1 == 4)
                       rezultat_4++;
                    else
                        if(mana1 == 5)
                            rezultat_5++;
                        else
                            if(mana1 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("CINE IA MANA 2: ");
        scanf("%d", &mana2);
        if(mana2 == 1)
            rezultat_1++;
        else
            if(mana2 == 2)
                rezultat_2++;
            else
                if(mana2 == 3)
                    rezultat_3++;
                else
                    if(mana2 == 4)
                       rezultat_4++;
                    else
                        if(mana2 == 5)
                            rezultat_5++;
                        else
                            if(mana2 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("CINE IA MANA 3: ");
        scanf("%d", &mana3);
        if(mana3 == 1)
            rezultat_1++;
        else
            if(mana3 == 2)
                rezultat_2++;
            else
                if(mana3 == 3)
                    rezultat_3++;
                else
                    if(mana3 == 4)
                       rezultat_4++;
                    else
                        if(mana3 == 5)
                            rezultat_5++;
                        else
                            if(mana3 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("CINE IA MANA 4: ");
        scanf("%d", &mana4);
        if(mana4 == 1)
            rezultat_1++;
        else
            if(mana4 == 2)
                rezultat_2++;
            else
                if(mana4 == 3)
                    rezultat_3++;
                else
                    if(mana4 == 4)
                       rezultat_4++;
                    else
                        if(mana4 == 5)
                            rezultat_5++;
                        else
                            if(mana4 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("CINE IA MANA 5: ");
        scanf("%d", &mana5);
        if(mana5 == 1)
            rezultat_1++;
        else
            if(mana5 == 2)
                rezultat_2++;
            else
                if(mana5 == 3)
                    rezultat_3++;
                else
                    if(mana5 == 4)
                       rezultat_4++;
                    else
                        if(mana5 == 5)
                            rezultat_5++;
                        else
                            if(mana5 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("CINE IA MANA 6: ");
        scanf("%d", &mana6);
        if(mana6 == 1)
            rezultat_1++;
        else
            if(mana6 == 2)
                rezultat_2++;
            else
                if(mana6 == 3)
                    rezultat_3++;
                else
                    if(mana6 == 4)
                       rezultat_4++;
                    else
                        if(mana6 == 5)
                            rezultat_5++;
                        else
                            if(mana6 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("CINE IA MANA 7: ");
        scanf("%d", &mana7);
        if(mana7 == 1)
            rezultat_1++;
        else
            if(mana7 == 2)
                rezultat_2++;
            else
                if(mana7 == 3)
                    rezultat_3++;
                else
                    if(mana7 == 4)
                       rezultat_4++;
                    else
                        if(mana7 == 5)
                            rezultat_5++;
                        else
                            if(mana7 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("CINE IA MANA 8: ");
        scanf("%d", &mana8);
        if(mana8 == 1)
            rezultat_1++;
        else
            if(mana8 == 2)
                rezultat_2++;
            else
                if(mana8 == 3)
                    rezultat_3++;
                else
                    if(mana8 == 4)
                       rezultat_4++;
                    else
                        if(mana8 == 5)
                            rezultat_5++;
                        else
                            if(mana8 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("\n");

        if(rezultat_1 == pariu_1)
            {
                printf("JUCATORUL 1 SI-A FACUT MAINILE\n");
                punctaj_1 = punctaj_1 + (5 + pariu_1);
            }
        else
            {
                printf("JUCATORUL 1 S-A FRIPT CU %d\n", abs(rezultat_1 - pariu_1));
                punctaj_1 = punctaj_1 - (5 + abs(rezultat_1 - pariu_1));
            }

        if(rezultat_2 == pariu_2)
            {
                printf("JUCATORUL 2 SI-A FACUT MAINILE\n");
                punctaj_2 = punctaj_2 + (5 + pariu_2);
            }
        else
            {
                printf("JUCATORUL 2 S-A FRIPT CU %d\n", abs(rezultat_2 - pariu_2));
                punctaj_2 = punctaj_2 - (5 + abs(rezultat_2 - pariu_2));
            }
        if(rezultat_3 == pariu_3)
            {
                printf("JUCATORUL 3 SI-A FACUT MAINILE\n");
                punctaj_3 = punctaj_3 + (5 + pariu_3);
            }
        else
            {
                printf("JUCATORUL 3 S-A FRIPT CU %d\n", abs(rezultat_3 - pariu_3));
                punctaj_3 = punctaj_3 - (5 + abs(rezultat_3 - pariu_3));
            }
        if(rezultat_4 == pariu_4)
            {
                printf("JUCATORUL 4 SI-A FACUT MAINILE\n");
                punctaj_4 = punctaj_4 + (5 + pariu_4);
            }
        else
            {
                printf("JUCATORUL 4 S-A FRIPT CU %d\n", abs(rezultat_4 - pariu_4));
                punctaj_4 = punctaj_4 - (5 + abs(rezultat_4 - pariu_4));
            }
        if(rezultat_5 == pariu_5)
            {
                printf("JUCATORUL 5 SI-A FACUT MAINILE\n");
                punctaj_5 = punctaj_5 + (5 + pariu_5);
            }
        else
            {
                printf("JUCATORUL 5 S-A FRIPT CU %d\n", abs(rezultat_5 - pariu_5));
                punctaj_5 = punctaj_5 - (5 + abs(rezultat_5 - pariu_5));
            }
        if(rezultat_6 == pariu_6)
            {
                printf("JUCATORUL 6 SI-A FACUT MAINILE\n");
                punctaj_6 = punctaj_6 + (5 + pariu_6);
            }
        else
            {
                printf("JUCATORUL 6 S-A FRIPT CU %d\n", abs(rezultat_6 - pariu_6));
                punctaj_6 = punctaj_6 - (5 + abs(rezultat_6 - pariu_6));
            }
        printf("\n");
        printf("JUCATOR 1: %d\n", punctaj_1);
        printf("JUCATOR 2: %d\n", punctaj_2);
        printf("JUCATOR 3: %d\n", punctaj_3);
        printf("JUCATOR 4: %d\n", punctaj_4);
        printf("JUCATOR 5: %d\n", punctaj_5);
        printf("JUCATOR 6: %d\n", punctaj_6);
        printf("\n");
        printf("\n");

printf("JOC DE 8 NR.5\n");
printf("\n");

    pariu_1 = 0, pariu_2 = 0, pariu_3 = 0, pariu_4 = 0, pariu_5 = 0, pariu_6 = 0;
        rezultat_1 = 0, rezultat_2 = 0, rezultat_3 = 0, rezultat_4 = 0, rezultat_5 = 0, rezultat_6 = 0;
        printf("PARIU JUCATOR 5: ");
        scanf("%d", &aux5);
        printf("PARIU JUCATOR 6: ");
        scanf("%d", &aux6);
        printf("PARIU JUCATOR 1: ");
        scanf("%d", &aux1);
        printf("PARIU JUCATOR 2: ");
        scanf("%d", &aux2);
        printf("PARIU JUCATOR 3: ");
        scanf("%d", &aux3);
        printf("JUCATORUL 4 NU ARE VOIE SA PARIEZE %d\n", 8 - aux5 - aux6 - aux1 - aux2 - aux3);
        printf("PARIU JUCATOR 4: ");
        scanf("%d", &aux4);
        pariu_1 = aux1;
        pariu_2 = aux2;
        pariu_3 = aux3;
        pariu_4 = aux4;
        pariu_5 = aux5;
        pariu_6 = aux6;
        printf("\n");

        printf("PARIU 1: %d\n", pariu_1);
        printf("PARIU 2: %d\n", pariu_2);
        printf("PARIU 3: %d\n", pariu_3);
        printf("PARIU 4: %d\n", pariu_4);
        printf("PARIU 5: %d\n", pariu_5);
        printf("PARIU 6: %d\n", pariu_6);

        printf("\n");
        printf("CINE IA MANA 1: ");
        scanf("%d", &mana1);
        if(mana1 == 1)
            rezultat_1++;
        else
            if(mana1 == 2)
                rezultat_2++;
            else
                if(mana1 == 3)
                    rezultat_3++;
                else
                    if(mana1 == 4)
                       rezultat_4++;
                    else
                        if(mana1 == 5)
                            rezultat_5++;
                        else
                            if(mana1 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("CINE IA MANA 2: ");
        scanf("%d", &mana2);
        if(mana2 == 1)
            rezultat_1++;
        else
            if(mana2 == 2)
                rezultat_2++;
            else
                if(mana2 == 3)
                    rezultat_3++;
                else
                    if(mana2 == 4)
                       rezultat_4++;
                    else
                        if(mana2 == 5)
                            rezultat_5++;
                        else
                            if(mana2 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("CINE IA MANA 3: ");
        scanf("%d", &mana3);
        if(mana3 == 1)
            rezultat_1++;
        else
            if(mana3 == 2)
                rezultat_2++;
            else
                if(mana3 == 3)
                    rezultat_3++;
                else
                    if(mana3 == 4)
                       rezultat_4++;
                    else
                        if(mana3 == 5)
                            rezultat_5++;
                        else
                            if(mana3 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("CINE IA MANA 4: ");
        scanf("%d", &mana4);
        if(mana4 == 1)
            rezultat_1++;
        else
            if(mana4 == 2)
                rezultat_2++;
            else
                if(mana4 == 3)
                    rezultat_3++;
                else
                    if(mana4 == 4)
                       rezultat_4++;
                    else
                        if(mana4 == 5)
                            rezultat_5++;
                        else
                            if(mana4 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("CINE IA MANA 5: ");
        scanf("%d", &mana5);
        if(mana5 == 1)
            rezultat_1++;
        else
            if(mana5 == 2)
                rezultat_2++;
            else
                if(mana5 == 3)
                    rezultat_3++;
                else
                    if(mana5 == 4)
                       rezultat_4++;
                    else
                        if(mana5 == 5)
                            rezultat_5++;
                        else
                            if(mana5 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("CINE IA MANA 6: ");
        scanf("%d", &mana6);
        if(mana6 == 1)
            rezultat_1++;
        else
            if(mana6 == 2)
                rezultat_2++;
            else
                if(mana6 == 3)
                    rezultat_3++;
                else
                    if(mana6 == 4)
                       rezultat_4++;
                    else
                        if(mana6 == 5)
                            rezultat_5++;
                        else
                            if(mana6 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("CINE IA MANA 7: ");
        scanf("%d", &mana7);
        if(mana7 == 1)
            rezultat_1++;
        else
            if(mana7 == 2)
                rezultat_2++;
            else
                if(mana7 == 3)
                    rezultat_3++;
                else
                    if(mana7 == 4)
                       rezultat_4++;
                    else
                        if(mana7 == 5)
                            rezultat_5++;
                        else
                            if(mana7 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("CINE IA MANA 8: ");
        scanf("%d", &mana8);
        if(mana8 == 1)
            rezultat_1++;
        else
            if(mana8 == 2)
                rezultat_2++;
            else
                if(mana8 == 3)
                    rezultat_3++;
                else
                    if(mana8 == 4)
                       rezultat_4++;
                    else
                        if(mana8 == 5)
                            rezultat_5++;
                        else
                            if(mana8 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("\n");

        if(rezultat_1 == pariu_1)
            {
                printf("JUCATORUL 1 SI-A FACUT MAINILE\n");
                punctaj_1 = punctaj_1 + (5 + pariu_1);
            }
        else
            {
                printf("JUCATORUL 1 S-A FRIPT CU %d\n", abs(rezultat_1 - pariu_1));
                punctaj_1 = punctaj_1 - (5 + abs(rezultat_1 - pariu_1));
            }

        if(rezultat_2 == pariu_2)
            {
                printf("JUCATORUL 2 SI-A FACUT MAINILE\n");
                punctaj_2 = punctaj_2 + (5 + pariu_2);
            }
        else
            {
                printf("JUCATORUL 2 S-A FRIPT CU %d\n", abs(rezultat_2 - pariu_2));
                punctaj_2 = punctaj_2 - (5 + abs(rezultat_2 - pariu_2));
            }
        if(rezultat_3 == pariu_3)
            {
                printf("JUCATORUL 3 SI-A FACUT MAINILE\n");
                punctaj_3 = punctaj_3 + (5 + pariu_3);
            }
        else
            {
                printf("JUCATORUL 3 S-A FRIPT CU %d\n", abs(rezultat_3 - pariu_3));
                punctaj_3 = punctaj_3 - (5 + abs(rezultat_3 - pariu_3));
            }
        if(rezultat_4 == pariu_4)
            {
                printf("JUCATORUL 4 SI-A FACUT MAINILE\n");
                punctaj_4 = punctaj_4 + (5 + pariu_4);
            }
        else
            {
                printf("JUCATORUL 4 S-A FRIPT CU %d\n", abs(rezultat_4 - pariu_4));
                punctaj_4 = punctaj_4 - (5 + abs(rezultat_4 - pariu_4));
            }
        if(rezultat_5 == pariu_5)
            {
                printf("JUCATORUL 5 SI-A FACUT MAINILE\n");
                punctaj_5 = punctaj_5 + (5 + pariu_5);
            }
        else
            {
                printf("JUCATORUL 5 S-A FRIPT CU %d\n", abs(rezultat_5 - pariu_5));
                punctaj_5 = punctaj_5 - (5 + abs(rezultat_5 - pariu_5));
            }
        if(rezultat_6 == pariu_6)
            {
                printf("JUCATORUL 6 SI-A FACUT MAINILE\n");
                punctaj_6 = punctaj_6 + (5 + pariu_6);
            }
        else
            {
                printf("JUCATORUL 6 S-A FRIPT CU %d\n", abs(rezultat_6 - pariu_6));
                punctaj_6 = punctaj_6 - (5 + abs(rezultat_6 - pariu_6));
            }
        printf("\n");
        printf("JUCATOR 1: %d\n", punctaj_1);
        printf("JUCATOR 2: %d\n", punctaj_2);
        printf("JUCATOR 3: %d\n", punctaj_3);
        printf("JUCATOR 4: %d\n", punctaj_4);
        printf("JUCATOR 5: %d\n", punctaj_5);
        printf("JUCATOR 6: %d\n", punctaj_6);
        printf("\n");
        printf("\n");

printf("JOC DE 8 NR.6\n");
printf("\n");

    pariu_1 = 0, pariu_2 = 0, pariu_3 = 0, pariu_4 = 0, pariu_5 = 0, pariu_6 = 0;
        rezultat_1 = 0, rezultat_2 = 0, rezultat_3 = 0, rezultat_4 = 0, rezultat_5 = 0, rezultat_6 = 0;
        printf("PARIU JUCATOR 6: ");
        scanf("%d", &aux6);
        printf("PARIU JUCATOR 1: ");
        scanf("%d", &aux1);
        printf("PARIU JUCATOR 2: ");
        scanf("%d", &aux2);
        printf("PARIU JUCATOR 3: ");
        scanf("%d", &aux3);
        printf("PARIU JUCATOR 4: ");
        scanf("%d", &aux4);
        printf("JUCATORUL 5 NU ARE VOIE SA PARIEZE %d\n", 8 - aux6 - aux1 - aux2 - aux3 - aux4);
        printf("PARIU JUCATOR 5: ");
        scanf("%d", &aux5);
        pariu_1 = aux1;
        pariu_2 = aux2;
        pariu_3 = aux3;
        pariu_4 = aux4;
        pariu_5 = aux5;
        pariu_6 = aux6;
        printf("\n");

        printf("PARIU 1: %d\n", pariu_1);
        printf("PARIU 2: %d\n", pariu_2);
        printf("PARIU 3: %d\n", pariu_3);
        printf("PARIU 4: %d\n", pariu_4);
        printf("PARIU 5: %d\n", pariu_5);
        printf("PARIU 6: %d\n", pariu_6);

        printf("\n");
        printf("CINE IA MANA 1: ");
        scanf("%d", &mana1);
        if(mana1 == 1)
            rezultat_1++;
        else
            if(mana1 == 2)
                rezultat_2++;
            else
                if(mana1 == 3)
                    rezultat_3++;
                else
                    if(mana1 == 4)
                       rezultat_4++;
                    else
                        if(mana1 == 5)
                            rezultat_5++;
                        else
                            if(mana1 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("CINE IA MANA 2: ");
        scanf("%d", &mana2);
        if(mana2 == 1)
            rezultat_1++;
        else
            if(mana2 == 2)
                rezultat_2++;
            else
                if(mana2 == 3)
                    rezultat_3++;
                else
                    if(mana2 == 4)
                       rezultat_4++;
                    else
                        if(mana2 == 5)
                            rezultat_5++;
                        else
                            if(mana2 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("CINE IA MANA 3: ");
        scanf("%d", &mana3);
        if(mana3 == 1)
            rezultat_1++;
        else
            if(mana3 == 2)
                rezultat_2++;
            else
                if(mana3 == 3)
                    rezultat_3++;
                else
                    if(mana3 == 4)
                       rezultat_4++;
                    else
                        if(mana3 == 5)
                            rezultat_5++;
                        else
                            if(mana3 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("CINE IA MANA 4: ");
        scanf("%d", &mana4);
        if(mana4 == 1)
            rezultat_1++;
        else
            if(mana4 == 2)
                rezultat_2++;
            else
                if(mana4 == 3)
                    rezultat_3++;
                else
                    if(mana4 == 4)
                       rezultat_4++;
                    else
                        if(mana4 == 5)
                            rezultat_5++;
                        else
                            if(mana4 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("CINE IA MANA 5: ");
        scanf("%d", &mana5);
        if(mana5 == 1)
            rezultat_1++;
        else
            if(mana5 == 2)
                rezultat_2++;
            else
                if(mana5 == 3)
                    rezultat_3++;
                else
                    if(mana5 == 4)
                       rezultat_4++;
                    else
                        if(mana5 == 5)
                            rezultat_5++;
                        else
                            if(mana5 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("CINE IA MANA 6: ");
        scanf("%d", &mana6);
        if(mana6 == 1)
            rezultat_1++;
        else
            if(mana6 == 2)
                rezultat_2++;
            else
                if(mana6 == 3)
                    rezultat_3++;
                else
                    if(mana6 == 4)
                       rezultat_4++;
                    else
                        if(mana6 == 5)
                            rezultat_5++;
                        else
                            if(mana6 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("CINE IA MANA 7: ");
        scanf("%d", &mana7);
        if(mana7 == 1)
            rezultat_1++;
        else
            if(mana7 == 2)
                rezultat_2++;
            else
                if(mana7 == 3)
                    rezultat_3++;
                else
                    if(mana7 == 4)
                       rezultat_4++;
                    else
                        if(mana7 == 5)
                            rezultat_5++;
                        else
                            if(mana7 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("CINE IA MANA 8: ");
        scanf("%d", &mana8);
        if(mana8 == 1)
            rezultat_1++;
        else
            if(mana8 == 2)
                rezultat_2++;
            else
                if(mana8 == 3)
                    rezultat_3++;
                else
                    if(mana8 == 4)
                       rezultat_4++;
                    else
                        if(mana8 == 5)
                            rezultat_5++;
                        else
                            if(mana8 == 6)
                                rezultat_6++;
        printf("MAINI 1: %d\n", rezultat_1);
        printf("MAINI 2: %d\n", rezultat_2);
        printf("MAINI 3: %d\n", rezultat_3);
        printf("MAINI 4: %d\n", rezultat_4);
        printf("MAINI 5: %d\n", rezultat_5);
        printf("MAINI 6: %d\n", rezultat_6);
        printf("\n");

        if(rezultat_1 == pariu_1)
            {
                printf("JUCATORUL 1 SI-A FACUT MAINILE\n");
                punctaj_1 = punctaj_1 + (5 + pariu_1);
            }
        else
            {
                printf("JUCATORUL 1 S-A FRIPT CU %d\n", abs(rezultat_1 - pariu_1));
                punctaj_1 = punctaj_1 - (5 + abs(rezultat_1 - pariu_1));
            }

        if(rezultat_2 == pariu_2)
            {
                printf("JUCATORUL 2 SI-A FACUT MAINILE\n");
                punctaj_2 = punctaj_2 + (5 + pariu_2);
            }
        else
            {
                printf("JUCATORUL 2 S-A FRIPT CU %d\n", abs(rezultat_2 - pariu_2));
                punctaj_2 = punctaj_2 - (5 + abs(rezultat_2 - pariu_2));
            }
        if(rezultat_3 == pariu_3)
            {
                printf("JUCATORUL 3 SI-A FACUT MAINILE\n");
                punctaj_3 = punctaj_3 + (5 + pariu_3);
            }
        else
            {
                printf("JUCATORUL 3 S-A FRIPT CU %d\n", abs(rezultat_3 - pariu_3));
                punctaj_3 = punctaj_3 - (5 + abs(rezultat_3 - pariu_3));
            }
        if(rezultat_4 == pariu_4)
            {
                printf("JUCATORUL 4 SI-A FACUT MAINILE\n");
                punctaj_4 = punctaj_4 + (5 + pariu_4);
            }
        else
            {
                printf("JUCATORUL 4 S-A FRIPT CU %d\n", abs(rezultat_4 - pariu_4));
                punctaj_4 = punctaj_4 - (5 + abs(rezultat_4 - pariu_4));
            }
        if(rezultat_5 == pariu_5)
            {
                printf("JUCATORUL 5 SI-A FACUT MAINILE\n");
                punctaj_5 = punctaj_5 + (5 + pariu_5);
            }
        else
            {
                printf("JUCATORUL 5 S-A FRIPT CU %d\n", abs(rezultat_5 - pariu_5));
                punctaj_5 = punctaj_5 - (5 + abs(rezultat_5 - pariu_5));
            }
        if(rezultat_6 == pariu_6)
            {
                printf("JUCATORUL 6 SI-A FACUT MAINILE\n");
                punctaj_6 = punctaj_6 + (5 + pariu_6);
            }
        else
            {
                printf("JUCATORUL 6 S-A FRIPT CU %d\n", abs(rezultat_6 - pariu_6));
                punctaj_6 = punctaj_6 - (5 + abs(rezultat_6 - pariu_6));
            }
        printf("\n");
        printf("\n");
        printf("JUCATOR 1: %d\n", punctaj_1);
        printf("JUCATOR 2: %d\n", punctaj_2);
        printf("JUCATOR 3: %d\n", punctaj_3);
        printf("JUCATOR 4: %d\n", punctaj_4);
        printf("JUCATOR 5: %d\n", punctaj_5);
        printf("JUCATOR 6: %d\n", punctaj_6);
        printf("\n");
        printf("\n");
}

int main()
{
    unsigned int n;
    printf("INTRODUCETI NUMARUL DE JUCATORI: ");
    scanf("%u", &n);
    if((n >= 2) && (n <= 6))
    {
        if (n == 2)
            joc_2();
        if (n == 3)
            joc_3();
        if (n == 4)
            joc_4();
        if (n == 5)
            joc_5();
        if (n == 6)
            joc_6();
    }
    else
        printf("INTRODUCETI UN NUMAR VALID DE JUCATORI: 2, 3, 4, 5 SAU 6\n");
    return 0;
}
