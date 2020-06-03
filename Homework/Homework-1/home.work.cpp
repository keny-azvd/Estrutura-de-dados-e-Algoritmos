#include <iostream>
#include <string>
#include <list>
#include <bits/stdc++.h>
#include <stdio.h>
#include <time.h>

using namespace std;
void imprimir_num(int num[], int qtd){ //mudar a entrada desta variavel
   for(int i = 0;i<qtd;i++){
    cout << num[i] << "  ";
   }
}


void merge(int *,int, int , int );
void merge_sort(int *arr, int inicio, int fim){
    int meio;
if (inicio < fim){
    meio=(inicio+fim)/2;
    merge_sort(arr,meio+1,fim);
    merge_sort(arr,inicio,meio);

        merge(arr,inicio,fim,meio);

    }

}

void merge(int *arr, int inicio, int fim, int meio)
{
    int i, j, k, c[50];
    i = inicio;
    k = inicio;
    j = meio + 1;
    while (i <= meio && j <= fim) {
        if (arr[i] < arr[j]) {
            c[k] = arr[i];
            k = k+1;
            i = i+1;
        }
        else  {
            c[k] = arr[j];
            k = k+1;
            j = j+1;
        }
    }
    while (i <= meio) {
        c[k] = arr[i];
        k=k+1;
        i=i+1;
    }
    while (j <= fim) {
        c[k] = arr[j];
        k=k+1;
        j=j+1;
    }
    for (i = inicio; i < k; i++)  {
        arr[i] = c[i];
    }

}

void insert_sort(int* num, int tam){
   for(int i = 0; i<tam;i++){
   int aux;
   aux = num[i];
   int j = i-1;
    while( j>= 0 && num[j] > aux){
        num[j+1] = num[j];
        j = j -1;

    }
    num[j+1] = aux;
    }
imprimir_num(num,tam);
}



int main() // matrizes para teste de funçoes
{  int num[22] = {3,2,1,4,4,6,7,8787,23,45,64,343,23,5,6,67,33,56,32,65,77,5};
   int tarray[22] = {3,2,1,4,4,6,7,8787,23,45,64,343,23,5,6,67,33,56,32,65,77,55};



    insert_sort(num,22);
    merge_sort(tarray, 0,21);
    //imprimir_num(tarray,22); // para imprimir a função merge sorte com taaray descomente isso





//printf("tempo merge_sort: %f\n",tempo2);
return 0;
}
