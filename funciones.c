#include <stdio.h>

void ingresoMascota(char *opc1, char *opc2, char *opc3, char *opc4, char *opc5, int *serv1, int *serv2, int *serv3, int *serv4)
{
    *serv1=0;
    *serv2=0;
    *serv3=0;
    *serv4=0;

    printf("ID de la mascota: ");
    scanf("%s",opc1);
    printf("Nombre de la mascota: ");
    scanf("%s",opc2);
    printf("Tipo de la mascota: ");
    scanf("%s",opc3);
    printf("Edad de la mascota: ");
    scanf("%s",opc4);
    printf("Nombre del Dueño: ");
    scanf("%s",opc5);
    
    printf("Mascota Registrada.\n");
    printf("ID              Nombre              Tipo                    Edad            Nombre del Dueño\n");
    printf("%s              %s              %s                  %s                  %s\n",opc1,opc2,opc3,opc4,opc5);
}

void mServicios(int *opc1, int *serv1, int *serv2, int *serv3, int *serv4)
{
    int servicio=0;
    printf("\nID              Nombre                          Descripción                             Precio\n");
    printf("1234            Consultas                   Examenes fisicos para la salud                  $10\n");
    printf("4567            Cirugia                     Procedimientos quirúrgicos                      $40\n");
    printf("7890            Emergencias                 Cuidados intensivos de urgencia                 $35\n");
    printf("1209            Cuidado dental              Mantenimiento de salud bucal                    $7\n");
                            
    printf("\nID del servicio para la mascota de ID '%s': ",opc1);
    scanf("%d",&servicio);

    switch (servicio)
    {
    case 1234:
        *serv1 += 1;
        printf("Servicio de ID '1234' registrado\n");
        break;
    case 4567:
        *serv2 += 1;
        printf("Servicio de ID '4567' registrado\n");
        break;
    case 7890:
        *serv3 += 1;
        printf("Servicio de ID '7890' registrado\n");
        break;
    case 1209:
        *serv4 += 1;
        printf("Servicio de ID '1209' registrado\n");
        break;
    default:
        printf("Servicio Invalido, intentelo de nuevo.\n");
        break;
    }
}

void mFactura(char *opc1, char *opc2, char *opc3, char *opc4, char *opc5, int *serv1, int *serv2, int *serv3, int *serv4)
{
    int i,j;
    int cantidad[4]={*serv1,*serv2,*serv3,*serv4};
    int precios[4]={10,40,35,7};
    int precioscantidad[4];
    int preciot=0;
    char serviciosm[1][4][50]={{"Consultas","Cirugia","Emergencias","Cuidado dental"}};

    printf("------------------------FACTURA-----------------------\n");
    printf("Nombre del Dueño: %s\n",opc5);
    printf("Nombre de la Mascota: %s\n",opc2);
    printf("ID de la Mascota: %s\n",opc1);

    for (i = 0; i < 4; i++)
    {
        if (cantidad[i]>0)
        {
            printf("Servicio %d: %s\n",i+1,serviciosm[0][i]);
        }
    }
    
    for (i = 0; i < 4; i++)
    {
        if (precios[i]==0)
        {
            /***/
        }else
        {
            precioscantidad[i]=precios[i]*cantidad[i];
            
            if (cantidad[i]>0)
            {
                printf("Precio Servicio %d (unitario $%d): $%d\n",i+1,precios[i],precioscantidad[i]);
            }
        }
    }
    for (i = 0; i < 4; i++)
    {
        preciot=preciot+precioscantidad[i];
    }
    printf("Precio Total: $%d\n",preciot);
    printf("---------------------------------------------------\n");
}