/* Ejercicio 3: Escribir un programa que acepte como parámetro un vector que puede contener elementos duplicados, la función debe sustituir 
cada valor repetido por -5 y devolver al punto en donde fue hallado el vector modificado y el número de entradas modificadas. */

#include <iostream>
#include <string.h>

using namespace std;

void reempDuplicacion(int [],int);

int main()
{
    int vector[50],n;

    cout<<"\n\tDigite la cantidad de elementos del vector: ";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cout<<"\n\tDigite elemento en la posicion ["<<i<<"]: ";
        cin>>vector[i];
    }

    reempDuplicacion(vector,n);

    //Imprimiendo el arreglo
    cout<<"\n\t=> ";
    for(int i=0;i<n;i++)
    {
        cout<<vector[i]<<" ";
    }

    system("pause");
}

/* Nota: El problema eliminará cada valor REPETIDO, por ejemplo:

    1 2 5 4 5 6 7 5

->Luego de los reemplazos queda:

    1 2 5 4 -5 6 7 -5

->Valor [5] se repite 3 veces, cambiamos por -5 el 2do y 3er 5 */
void reempDuplicacion(int array[], int n)
{
    int contRepet=0;

	for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(array[i]==array[j+1] && array[i]!=-5 && array[j+1]!=-5 && i!=j+1) //Pero cambia el orden ps
            {
                array[j+1]=-5;
				contRepet++;
                cout<<"\n\t->Repeticion encontrada "<<array[i]<<" en posicion "<<j+1<<endl;
            }
        }
    }
    cout<<"\n\tNumero de entradas modificadas: "<<contRepet<<endl<<endl;
}
