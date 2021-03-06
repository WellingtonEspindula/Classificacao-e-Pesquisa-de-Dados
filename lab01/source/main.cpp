/*
    LAB 01 - Classificação e Pesquisa de Dados
    Autores: Wellington Espindula e Rafael Trevisan
    Prof. Dr.: João Comba

    No presente trabalho de laboratório de Classificação e Pesquisa de Dados, 
    objetivou-se a implementação do algoritmos de ordenação Shell Sort usando 
    o tamanho de pulos como:
    (i) a implementação original (Shell, 1959)
    (ii) a sequência proposta por Ciura em 2001
    
 */


#ifndef LIBS

#define LIBS
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <iostream>
#include <stack>

#endif

#include "../header/utils.h"
#include "../header/sort.h"

int main(){
    srand(time(0));


    // First list to test
    int test1_size = 9;
    
    // Using shell sort 
    printf("Shell Sort: \n");
    int test1_shellsort[test1_size] = {54, 26, 93, 17, 77, 31, 44, 55, 20};
    shell_insertion_sort(test1_shellsort, test1_size, true, true);
    printf("\n");

    // Same test using ciura sequence shell sort
    printf("Ciura Sequence Shell Sort: \n");
    int test1_ciura[test1_size] = {54, 26, 93, 17, 77, 31, 44, 55, 20};
    ciura_sequence_shell_sort(test1_ciura, test1_size, true, true);
    printf("\n");



    // Second list to test
    int test2_size = 15;
    
    // Using Shell sort
    printf("Shell Sort: \n");
    int test2_shellsort[test2_size] = {733, 77, 611, 51, 496, 990, 61, 175, 127, 794, 794, 76, 197, 141, 863};
    shell_insertion_sort(test2_shellsort, test2_size, true, true);
    printf("\n");
    
    // Using Ciura shell sort
    printf("Ciura Sequence Shell Sort: \n");
    int test2_ciura[test2_size] = {733, 77, 611, 51, 496, 990, 61, 175, 127, 794, 794, 76, 197, 141, 863};
    ciura_sequence_shell_sort(test2_ciura, test2_size, true, true);
    printf("\n");

    

    // Third list to test
    int test3_size = 20;
    
    // Using Shell sort
    printf("Shell Sort: \n");
    int test3_shellsort[test3_size] = {872, 424, 729, 573, 877, 696, 321, 758, 949, 217, 767, 238, 562, 175, 999, 12, 380, 406, 225, 995};
    shell_insertion_sort(test3_shellsort, test3_size, true, true);
    printf("\n");
    
    // Using Ciura shell sort
    printf("Ciura Sequence Shell Sort: \n");
    int test3_ciura[test3_size] = {872, 424, 729, 573, 877, 696, 321, 758, 949, 217, 767, 238, 562, 175, 999, 12, 380, 406, 225, 995};
    ciura_sequence_shell_sort(test3_ciura, test3_size, true, true);
    printf("\n");


    // Random number tests
    int size1 = 100;
    int random_list1[size1];
    int cp_random_list1[size1];
    random_list(random_list1, size1);
    memcpy(cp_random_list1, random_list1, (size1*sizeof(int)));

    printf("Size = 100: \n");
    printf("Shell: ");
    shell_insertion_sort(random_list1, size1, false, true);
    printf("Ciura: ");
    ciura_sequence_shell_sort(random_list1, size1, false, true);


    int size2 = 1000;
    int random_list2[size2];
    int cp_random_list2[size2];
    random_list(random_list2, size2);
    memcpy(cp_random_list2, random_list2, (size2*sizeof(int)));

    printf("\nSize = 1000: \n");
    printf("Shell: ");
    shell_insertion_sort(random_list2, size2, false, true);
    printf("Ciura: ");
    ciura_sequence_shell_sort(random_list2, size2, false, true);


    int size3 = 10000;
    int random_list3[size3];
    int cp_random_list3[size3];
    random_list(random_list3, size3);
    memcpy(cp_random_list3, random_list3, (size3*sizeof(int)));

    printf("\nSize = 10000: \n");
    printf("Shell: ");
    shell_insertion_sort(random_list3, size3, false, true);
    printf("Ciura: ");
    ciura_sequence_shell_sort(random_list3, size3, false, true);


    int size4 = 10000;
    int random_list4[size4];
    int cp_random_list4[size4];
    random_list(random_list4, size4);
    memcpy(cp_random_list4, random_list4, (size4*sizeof(int)));
    

    printf("\nSize = 100000: \n");
    printf("Shell: ");
    shell_insertion_sort(random_list4, size4, false, true);
    printf("Ciura: ");
    ciura_sequence_shell_sort(random_list4, size4, false, true);

    return 0;
}