//Bubble Sort
#include <stdio.h>
int main(){
    int T[50], i, j, AIDE, N;

    do{
        printf("Enter the size of the array: ");
        scanf("%d", &N);
    }while(N>50 || N<=0);

    for (i=0; i<N; i++){
        printf("Enter element(%d): ", i+1);
        scanf("%d", &T[i]);
    }
    for (i=0; i<N-1; i++){
        for (j=0; j<N-i-1; j++){
            if(T[i]<T[j+1]){

                AIDE = T[j+1];
                T[j+1] = T[i];
                T[i] = AIDE; }

        }
    }
    for (j=0; j<N; j++){
        printf("T[%d] = %d\n", j, T[j]);
    }
}return 0;
