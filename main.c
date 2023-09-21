#include <stdio.h>
#include <stdlib.h>
//pb1) Generati toate permutarile de la 1 la n

void bt(int k, int n, int* v)
{
    //validam solutii
    if(k==n)
    {
        for(int i=0;i<n;i++)
            printf("%d ",v[i]);
        printf("\n");
    }

     for(int i=1;i<=n;i++)
    {
        v[k]=i;
        int ok=1;
        for(int j=0;j<k;j++)//verific daca is dubluri a numarului adaugat inainte si daca is reluam for-rl si daca nu is reapelam functia
        {
            if(v[j]==v[k])
                ok=0;
        }
        if(ok==1)
            bt(k+1,n,v);
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    int* v;
    v = (int*)calloc(n, sizeof(int)); //alocam dinamic un vector de elemente

    bt(0, n, v);
    return 0;
}
