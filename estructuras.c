#include <stdio.h>

struct alumno
{
    char nombre[20];
    char direccion[20];
    char carrera[20];
    int edad;
    float promedio;
};

int main(int argc, char const *argv[])
{
    // Hacemos un arreglo para los 5 alumnos
    struct alumno alumnos[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Ingrese los datos del alumno %d:\n", i + 1);

        printf("Nombre: \n");
        fgets(alumnos[i].nombre, sizeof(alumnos[i].nombre), stdin); /*es una expresión que devuelve el tamaño
         en bytes del miembro 'nombre' del elemento 'i' del arreglo 'alumnos'*/
        getchar(); // Consumir carácter de nueva línea adicional

        printf("Dirección:  \n");
        fgets(alumnos[i].direccion, sizeof(alumnos[i].direccion), stdin);
        getchar(); // Consumir carácter de nueva línea adicional

        printf("Carrera:  \n");
        fgets(alumnos[i].carrera, sizeof(alumnos[i].carrera), stdin);
        getchar(); // Consumir carácter de nueva línea adicional

        printf("Edad:  \n");
        scanf("%d", &alumnos[i].edad);

        printf("Promedio:  \n");
        scanf("%f", &alumnos[i].promedio);
        printf("\n");
        fflush(stdin);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("Los datos del alumno '%d' son:\n", i + 1);

        printf("Nombre: \n");
        puts(alumnos[i].nombre);
        printf("\n");

        printf("Dirección:  \n");
        puts(alumnos[i].direccion);
        printf("\n");

        printf("Carrera:  \n");
        puts(alumnos[i].carrera);
        printf("\n");

        printf("Edad:  \n%d\n", alumnos[i].edad);

        printf("Promedio:  \n%.2f\n", alumnos[i].promedio);
    }

    return 0;
}
