#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opcion;
    int x, y, j, i;
    char tablero[8][8] ={0};
    int salir=0;
    
    Menu:
    printf("---Opciones--- \n1.- Reina\n2.- Rey\n3.- Salir\nSeleccione una: ");
    scanf("%d",&opcion);
    
    
    if (opcion==1){
        
        printf("\nIngrese:\nCoordenada x: ");
        scanf("%d",&x);
        printf("\nCoordenada y: ");
        scanf("%d",&y);
        printf("\nMovimientos válidos de la Reina:\n\n");

    for (i = 0; i < 8; i++) {
        for (j = 0; j < 8; j++) {
            tablero[x][y]='Q';

            //condiciones 
            if (i == x || j == y || i - x == j - y || i + j == x+y) {
                tablero[i][j] = 'X';
            } else {
                tablero[i][j] = '*';
            }
        }
    }

    for (i = 0; i < 8; i++) {
        for (j = 0; j < 8; j++) {
            printf("%c ", tablero[i][j]);
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
        printf("\nMovimientos válidos del Rey:\n\n");
        
            for (i = 0; i < 8; i++) {
        for (j = 0; j < 8; j++) {
            tablero[x][y]='R';

            if (x+i == x+1 || y+1 == y+i || x+j == x+1 || y+j == y+1 ) {
                tablero[i][j] = 'X';
            } else {
                tablero[i][j] = '*'; 
            }
        }
    }

    for (i = 0; i < 8; i++) {
        for (j = 0; j < 8; j++) {
            printf("%c ", tablero[i][j]);
        }
        printf("\n");
    }

        printf("\n\n");
        goto Menu;
    }
    else if(opcion==3){
        exit(0);
        printf("Adiós\n");
    } 
    else exit(0);
    
    return 0;
} 
