#include <stdio.h>
{struct alumno
{
    char nombre[20];
    char direccion[20];
    char carrera[20];
    int edad;
    float promedio;
};
int main(int argc, char const *argv[])
    // Hacemos un arreglo para los 5 alumnos
    struct alumno alumnos[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Ingrese los datos del alumno %d:\n", i + 1);

        printf("Nombre: \n");
        gets(alumnos[i].nombre, sizeof(alumnos[i].nombre), stdin); /*es una expresión que devuelve el tamaño
         en bytes del miembro 'nombre' del elemento 'i' del arreglo 'alumnos'*/);

        printf("Dirreccion:  \n");
        gets(alumnos[i].direccion, sizeof(alumnos[i].direccion), stdin);

        printf("Carrera:  \n");
        gets(alumnos[i].carrera,  sizeof(alumnos[i].carrera), stdin);

        printf("Edad:  \n");
        scanf("&d", alumnos[i].edad);

        printf("Promedio:  \n");
        scanf("&d", alumnos[i].promedio);
        printf("\n");
        fflush(stdin);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("Los datos del alumno '%d' son:\n", i + 1);

        printf("Nombre: \n");
        puts(alumnos[i].nombre);
        printf("\n");
        printf("Dirreccion:  \n");
        puts(alumnos[i].direccion);
        printf("\n");
        printf("Carrera:  \n");
        puts(alumnos[i].direccion);
        printf("\n");
        printf("Edad:  \n %d", alumnos[i].edad);
        printf("\n");

        printf("Promedio:  \n %.2f", alumnos[i].promedio);
    }
   
    
    return 0;
}
