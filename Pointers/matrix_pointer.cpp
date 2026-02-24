#include <iostream>
using namespace std;

int main(){
    int mat[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

    cout<< mat<<" = ";
    cout<<mat[0]<<" = ";
    cout<< &mat[0][0];

    cout<<endl<<endl;

    cout<<mat[2][2]<< " = " << *(*(mat+2)+2);
    // using formula : ptr[i][j] = *(*( ptr + i ) + j) 
    return 0;

}