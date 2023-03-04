#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opcion;
    int x, y;
    char tablero[8][8] ={0};
    int salir=0;
    
    
    Menu:
    printf("---Opciones--- \n1.- Alfil\n2.- Torre\n3.- Salir\nSeleccione una: ");
    scanf("%d",&opcion);
    
    
    if (opcion==1){
        
        
        printf("\nIngrese:\nCoordenada x: ");
        scanf("%d",&x);
        printf("\nCoordenada y: ");
        scanf("%d",&y);
        printf("\nMovimientos válidos del Alfil:\n\n");
        
        tablero[x][y] = 'A';
    
    // Remplazar diagonales con X y los demás elementos con 0
    for(int i=0; i<8; i++) {
        for(int j=0; j<8; j++) {
            if(i+j == x+y || i-j == x-y) {
                tablero[i][j] = 'X';
            }
            else {
                tablero[i][j] = '*';
            }
        }
    }
    
    // Imprimir arreglo con la A en las coordenadas ingresadas por el usuario
    for(int i=0; i<8; i++) {
        for(int j=0; j<8; j++) {
            if(i == x && j == y) {
                printf("%c ", 'A');
            }
            else {
                printf("%c ", tablero[i][j]);
            }
        }
        printf("\n");
    }
    
    printf("\n\n");
    goto Menu;
    
    }
    else if(opcion==2){
    
        
       
        printf("Ingrese:\nCoordenada x: ");
        scanf("%d",&x);
        printf("\nCoordenada y: ");
        scanf("%d",&y);
        printf("\nMovimientos válidos de la Torre:\n\n");
        
        tablero[y][x] = 'T';
        
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                if (i == y || j == x) { 
                    if (i == y && j == x) { 
                        printf("%c ", tablero[i][j]);
                    } else {
                        printf("X ");
                    }
                } else {
                    printf("* ");
                }
            }
            printf("\n");
        }
        
        printf("\n\n");
        goto Menu;
    }
    else if(opcion==3){
        printf("Adiós\n");
        exit(0);
    }
    else exit(0);
    
    return 0;
}