#include <stdio.h>
#define B 10

int main(){
    int i, aux, sentinela;
    int lista[B];

    for(i=0;i<B;i++){
        printf("Ordem %d: ", i+1);
        scanf("%d", &lista[i]);
    }
    
    do{
        sentinela=0;
        for(i=0;i<B-1;i++){
            if(lista[i]>lista[i+1]){
                aux=lista[i];
                lista[i]=lista[i+1];
                lista[i+1]=aux;
                sentinela=1;
            }
        }
    } while(sentinela);

    for(i=0;i<B;i++){
        printf("\n\aOrdem %d: %d", i+1, lista[i]);
    }

    return 0;
}
