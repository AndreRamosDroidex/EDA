
#include <iostream>
#include <ctime>

#define MAX 10000
double A[MAX][MAX], x[MAX], y[MAX];
using namespace std;
/////////////

int main()
{
    //////filass///////7
    int start_s=clock();
    for (int i=0; i<MAX; i++){
        for(int j=0; j<MAX; j++){
            y[i] +=  A[i][j]*x[j];
        }
    }
    int stop_s=clock();
    cout << "tiempo de demora por filas: " << (stop_s-start_s)/double(CLOCKS_PER_SEC)*1000 << endl;

    ////////////columnas/////////////
    start_s=clock();
    for(int j=0; j<MAX; j++){
        for(int i=0; i<MAX; i++){
            y[i] += A[i][j]*x[j];
        }
    }
    //////////////////////////////////
    //void imprimier(float a,float f){
            
    //}
    //////////////////////////////////
    stop_s=clock();
    cout << "tiempo de demora por columnas: " << (stop_s-start_s)/double(CLOCKS_PER_SEC)*1000 << endl;
    return 0;
}

