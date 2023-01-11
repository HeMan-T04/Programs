//Consider a scenario where it is required to design a class named matrix for storing matrix elements. The size of the matrix is specified at run time on the basis of which class constructor reserves memory space using dynamic memory allocation technique. Implement it by writing a suitable program.
#include <iostream>
using namespace std;
class matrix
{
    int **mat;
    int row,col;
    public:
        matrix(int row,int col)
        {
            this->row = row;
            this->col = col;
            mat = new int*[row];
            for(int i=0;i<row;i++)
            {
                mat[i] = new int[col];
            }
        }
        void getdata()
        {
            cout << "Enter matrix elements: " << endl;
            for(int i=0;i<row;i++)
            {
                for(int j=0;j<col;j++)
                {
                    cin >> mat[i][j];
                }
            }
        }
        void display()
        {
            cout << "Matrix elements: " << endl;
            for(int i=0;i<row;i++)
            {
                for(int j=0;j<col;j++)
                {
                    cout << mat[i][j] << " ";
                }
                cout << endl;
            }
        }
};
int main()
{
    int r,c;
    cout << "Enter number of rows: ";
    cin >> r;
    cout << "Enter number of columns: ";
    cin >> c;
    matrix m(r,c);
    m.getdata();
    m.display();
}