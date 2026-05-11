#include <stdio.h>
#include <stdlib.h>




void execute(int *a, int *b, int M, int N){

    

    int dependencies[M];

    for(int i = 0;i <= M -1; i++){
        dependencies[i] = 100;
    }

    for(int i = 0;i <= M - 1;i++){
        for(int j = 0; j<= M - 1;j++){
            if(b[i] == a[j]){
                dependencies[i] = b[j];
            }  
        }
        
    }

    int verdict = 0;
    for(int i = 0;i <= M - 1;i++){
        for(int j = i+ 1; j<= M - 1;j++){
            if((dependencies[i] == dependencies[j]) || dependencies[i] == 100){
                verdict++;
                break;
            }
        }
    }

    if(verdict == 0 ){
        printf("TIDAK BISA");
    }
    else{
        printf("BISA");
    }
}

int main(){
    int N, M;

    scanf("%d %d", &N, &M);

    if(M == 0){
        printf("BISA");
    }
    else{

        int a[M];
        int b[M];
        


        for(int i = 0; i <= M - 1; i++){
            scanf("%d %d", &a[i], &b[i]);
        }

        if(M == 1){
            if(a[0] = b[0]){
                printf("TIDAK BISA");
            }
        }
            else{
            int count = 0;
            for(int i = 0; i <= M - 1; i++){
                if((a[M] || b[M]) <= N -1){
                    count++;
                }
            }
            
            if(count != 0){
                execute(a, b, M, N);
                }
        }
    }
}
    
