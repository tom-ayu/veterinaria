#include <stdio.h>

int main (int argc, char *argv[]) {
    int menu=0;
    char mascota[10][5][50];
    char *opc1=&mascota[1][0][50];
    char *opc2=&mascota[1][1][50];
    char *opc3=&mascota[1][2][50];
    char *opc4=&mascota[1][3][50];
    char *opc5=&mascota[1][4][50];

    int servicios[4]={0,0,0,0};
    int *serv1=&servicios[0];
    int *serv2=&servicios[1];
    int *serv3=&servicios[2];
    int *serv4=&servicios[3];
    do
    {
        printf("\n----------- Menu Principal -----------\n");
        printf("1. Ingreso Mascota\n");
        printf("2. Servicios\n");
        printf("3. Facturar Servicios\n");
        printf("4. Salir\n");
        printf("--------------------------------------\n");
        scanf("%i",&menu);
        switch (menu)
        {
        case 1:
            ingresoMascota(opc1, opc2, opc3, opc4, opc5, serv1, serv2, serv3, serv4);
            fflush(stdin);
            break;
        case 2:
            mServicios(opc1, serv1, serv2, serv3, serv4);
            break;  
        case 3:
            mFactura(opc1, opc2, opc3, opc4, opc5, serv1, serv2, serv3, serv4);
            break;
        case 4: 
            printf("Salida exitosa.");
            break; 
        default:
            printf("Opcion Invalida, intente de nuevo.");
            break;
        }
    } while (menu!=4);
    
    
    
    return 0;
}

