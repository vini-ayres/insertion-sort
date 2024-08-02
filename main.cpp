#include <iostream>
using namespace std;

void insertion_sort_recurs(int t, int *a)
{
    // Caso base: Se temos um ou nenhum elemento, já está ordenado
    if (t <= 1)
        return;

    // Ordenar os primeiros t-1 elementos
    insertion_sort_recurs(t - 1, a);

    // Inserir o elemento a[t-1] na posição correta
    int last = a[t - 1];
    int j = t - 2;

    // Move elementos maiores que last para uma posição à frente
    while (j >= 0 && a[j] > last)
    {
        a[j + 1] = a[j];
        --j;
    }
    a[j + 1] = last;

    // Mostrar o array após cada inserção
    cout << "Array após inserir o elemento " << last << ":" << endl;
    for (int i = 0; i < t; ++i)
    {
        cout << "Elemento " << i << " = " << a[i] << endl;
    }
    cout << "----------------" << endl;
}

void print(int t, int *a)
{
    for (int i = 0; i < t; ++i)
    {
        cout << "Elemento " << i << " = " << a[i] << endl;
    }
    cout << "----------------" << endl;
}

int main(int argc, char** argv)
{
    int v[8] = {49, 38, 58, 87, 34, 93, 26, 13};
    print(8, v);
    insertion_sort_recurs(8, v);
    print(8, v);

    return 0;
}
