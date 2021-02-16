#include <iostream>
#include <stdio.h>
/*Fahmi Fahqur Rozi*/
/*20051397060*/
/*2020B manajemen informatika*/

using namespace std;

int main() {
	 double A[2][2]={3,6,-2,10};
    int i,j;
    double det;
 

    cout<<"Matriks A = "<<endl;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            cout<<A[i][j]<<" ";
        }
    cout<<endl;
    }   
    cout<<endl;
    
    det=A[0][0]*A[1][1]-A[1][0]*A[0][1];
    cout<<"determinan A = ";
    cout<<det;
    cout<<endl;
    double A2[2][2];
    A2[1][1]=A[0][0];
    A2[0][0]=A[1][1];
    A2[0][1]=A[0][1]*-1;
    A2[1][0]=A[1][0]*-1;
    cout<<"Invers A = "<<endl;

    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
        	A[i][j]=det*A2[i][j];
            cout<<A2[i][j]<<" ";
        }
        cout<<endl;
    }



    cout << endl << "\n"<<endl<<endl;
	return 0;
}
