#include<iostream>
using namespace std;

class Vector
{
    int e[3], n;

    public:
        Vector(int n_): n(n_)
        {
            for(int i=0; i<n; i++)
            {
                e[i] = i+1;
            }
        }

        void Clear()
        {
            for(int i=0; i<n; i++)
            {
                e[i] = 0;
            }
        }

        void Show()
        {
            for(int i=0; i<n; i++)
            {
                cout<<e[i]<<" ";
            }
            cout<<endl<<endl;
        }
        friend Vector Prod(Matrix *pM, Vector *pV);
};

class Matrix
{
    int e[3][3],m,n;

    public:
        Matrix(int m_, in n_): m(m_), n(n_)
        {
            for(int i=0; i<m;i++)
            {
                for(int j=0; j<n;j++)
                {
                    e[i][j] = i+j;
                }
            }
        }

        void Show()
        {
            for(int i=0; i<m;i++)
            {
                for(int j=0; j<n;j++)
                {
                    cout<<e[i][j]<<" ";
                }
                cout<<endl;
            }
        }
        friend Vector Prod(Matrix *pM, Vector *pV);
};

Vector Prod(Matrix *pM, Vector *pV)
{
    Vector v(pM->m);
    v.Clear();
    for(int i=0;i<pM->m;i++)
    {
        for(int j=0; j< pM->n; j++)
        {
            v.e[i] += pM->e[i][j] + pV->e[j];
        }
    }
    return v;
}

int main()
{
    Matrix M(2,3);
    Vector V(2);

    Vector PV = Prod(&M, &V);

    M.Show();
    V.Show();
    PV.Show();

    return 0;
}