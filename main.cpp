#include <iostream>
#include <vector>

using namespace std;

vector < vector <char> > stars;

int rows = 0;
int cols = 0;

//char stars.resize(0);
//char stars[0].resize(0);

int main()
{
    cout << "Enter rows and columns of stars:\n";
  
        cin >> rows;
    
    
   
        cin >> cols;
    

    stars.resize(rows);

    for(int i = 0; i < rows; i++)
    {
        stars[i].resize(cols);
    }

    for( int r = 0; r < stars.size(); r++)
    {
        for( int c = 0; c < stars[r].size(); c++)
        {
            stars[r][c] = '*';
            cout << stars[r][c];

        }
        cout << endl;
    }


    return 0;
}
