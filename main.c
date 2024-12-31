#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

////////////////////////////////////////////////////////////////////////////////////
//Funcion para generar numeros aleatorios de 1 y 4
////////////////////////////////////////////////////////////////////////////////////
int NumeroAleatorio(){
    return rand()%4+1;  //Generamos numeros de 0 a 3 y luego le sumamos 1
                        //Esta es la manera sensilla
}

////////////////////////////////////////////////////////////////////////////////////
//Funcion para generar numeros entre un minimo y un maximo
////////////////////////////////////////////////////////////////////////////////////
int NumeroAleatorioV1(int minimo, int maximo){
    return rand()%(maximo-minimo+1)+minimo;
}

////////////////////////////////////////////////////////////////////////////////////
//Funcion Escritura aleatoria
////////////////////////////////////////////////////////////////////////////////////
void EscrituraAleatoria(int array[],int a){
    for (int i=0;i<a;i++){
        array[i]= NumeroAleatorio();
    }
}

////////////////////////////////////////////////////////////////////////////////////
//Funcion Lectura
////////////////////////////////////////////////////////////////////////////////////
void Lectura(int array[],int a,const char* mensaje,const char* mensaje1){
    for (int i=0;i<a;i++){
        printf("%s %d %s %d\n",mensaje,i,mensaje,array[i]);
    }
}

////////////////////////////////////////////////////////////////////////////////////
//Funcion de escritura de un array
////////////////////////////////////////////////////////////////////////////////////
void EscrituraArray(int array[],int a){
    for (int i=0;i<a;i++){
        array[i]=0;
        printf("Introduce el %d de tus numeros aleatorios: ",i);
        scanf("%d",&array[i]);
        while ((array[i]<1)||(array[i]>4)){
            printf("el numero introducido esta fuera del rango de numeros que puedes introducir, por favor introdusca un numero valido: ");
            scanf("%d",&array[i]);
        }
    }
}

////////////////////////////////////////////////////////////////////////////////////
//Funcion contador de aciertos y fallos
////////////////////////////////////////////////////////////////////////////////////
void Contador(int array[],int array1[],int a,int *aciertos,int *fallo){//El * es un puntero para hacer una modificacion directa de la variable del main
    for(int i=0;i<a;i++){
        if ((array[i])==(array1[i])){
            (*aciertos)++;//si la variable no se hace dentro del (* ) la modificacion que se haga en la variable solo se vera afectada la variable local
        }
        else if((array[i])!=(array1[i])){
            (*fallo)++;
        }
    }
}

////////////////////////////////////////////////////////////////////////////////////
//Funcion AciertosFallos
////////////////////////////////////////////////////////////////////////////////////
void AciertosFallos(int array[],int array1[],int a, bool peticion,const char* mensaje,const char* mensaje1,const char* mensaje2){
    if(peticion==false){
        printf("**************************************************\n");
        printf("Has fallado los siguientes: \n");
        printf("**************************************************\n");
        for(int i=0;i<a;i++){
            if ((array[i])!=(array1[i])){
                printf("%s %d %s %d %s %d\n",mensaje,i,mensaje1,array1[i],mensaje2,array[i]);
            }
        }
    }
    else{
        printf("**************************************************\n");
        printf("Has acertado los siguientes: \n");
        printf("**************************************************\n");
        for(int i=0;i<a;i++){
            if ((array[i])==(array1[i])){
                printf("%s %d %s %d %s %d\n",mensaje,i,mensaje1,array1[i],mensaje2,array[i]);
            }
        }
    }
}

////////////////////////////////////////////////////////////////////////////////////
//Funcion de muestra tanto aciertos como fallos
////////////////////////////////////////////////////////////////////////////////////
void MuestraAciertosFallos(int array[],int array1[],int a, const char* mensaje,const char* mensaje1,const char* mensaje2,const char* mensaje3){
    char estado[10];//en c no existe las variables string, tiene que ser un array del tamaño fijo
    printf("**************************************************\n");
    printf("El resumen de las introducciones es el siguiente \n");
    printf("**************************************************\n");
    for (int i=0;i<a;i++){
        if((array[i])!=(array1[i])){
            strcpy(estado,"FALLADO!!");// al usar strcpy copiamos la cadean de caracteres dentro del array
            printf("%s %d %s %d %s %d %s %s\n",mensaje,i,mensaje1,array[i],mensaje2,array1[i],mensaje3,estado);
        }
        else{
            strcpy(estado,"ACERTADO!");
            printf("%s %d %s %d %s %d %s %s\n",mensaje,i,mensaje1,array[i],mensaje2,array1[i],mensaje3,estado);
        }
    }
}

////////////////////////////////////////////////////////////////////////////////////
int main()
{
    int minimo=5,maximo=10,aciertos=0,fallo=0,a=0; // a sera la variable que utilizaremos para determinar el tamaño del array
    float porcentaje;
    bool peticion=false;//variable que utilizaremos para la escritura en pantalla y no tener que repetir codigo
    //Inicializamos la funcion de generar numeros aleatorios
    srand(time(NULL));
    a=NumeroAleatorioV1(minimo,maximo);
    //No se puede declarar con un tamaño de array indeterminado, por eso declaro despuesde saber que el numero de a
    int numero[a];
    int numeros[a];
    printf("**************************************************\n");
    printf("Se han generado %d numeros aleatorios\n",a);
    printf("**************************************************\n");
    EscrituraAleatoria(numero,a);
    //Lectura(numero,a,"En la posicion "," se ha generado: ");//ACTIVAR FUNCION SOLO SI SE QUIEREN VER LOS NUMEROS CREADOS ALEATORIAMENTE.
    printf("**************************************************\n");
    printf("Es tu turno de jugar, tienes que introducir %d numeros aleatorios\n",a);
    printf("Recuerda que has de usar numeros del 1 al 4\n");
    printf("**************************************************\n");
    EscrituraArray(numeros,a);
    Contador(numero,numeros,a,&aciertos,&fallo);
    porcentaje=(aciertos/(float)a)*100.0;
    printf("**************************************************\n");
    printf("Has acertado %d numeros aleatorios %d\n",aciertos,a);
    printf("Lo que representa un %.2f por ciento\n",porcentaje);
    printf("**************************************************\n");
    AciertosFallos(numero,numeros,a,peticion=true,"Posicion "," has indicado un "," y habia un ");
    AciertosFallos(numero,numeros,a,peticion=false,"Posicion "," has indicado un "," y habia un ");
    MuestraAciertosFallos(numero,numeros,a,"Posicion ",": se habia generado aleatoriamente un "," y has indicado que podria haber un "," por lo tanto has ");
    return 0;
}
