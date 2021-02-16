#include <iostream>
/*Fahmi Fahqur Rozi*/
/*20051397060*/
/*2020B manajemen informatika*/

using namespace std;

int main(){ const int kolom = 2, baris = 2;
    int array[baris][kolom] = {{3,6},{-2,10}};
    int arrayTranspose[kolom][baris];


    cout << "Matriksnya"<<endl;
    for(int i = 0; i<baris; i++){
        for(int n = 0; n<kolom; n++){
            cout << array[i][n]<<" ";
            arrayTranspose[n][i] = array[i][n];
        }
        cout<<endl;
    }

    cout << "transposenya"<<endl;

    for(int i = 0; i<kolom; i++){
        for(int n = 0; n<baris; n++){
            cout<<arrayTranspose[i][n]<<" ";
        }
        cout<<endl;
    }


    cout << endl << "\n"<<endl<<endl;
}
