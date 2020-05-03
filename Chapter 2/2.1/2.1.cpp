#include <iostream>
using namespace std;

bool fibon_elem(int, int &);

int main()
{
    int pos;
    int judge;
    int next = 1;
    while (next == 1)
    {
        cout << "Do you want to have a guess?(1/0)";
        cin >> judge;
        
        if (judge == 1)
        {
            cout << "Please enter a position: ";
            cin >> pos;

            int elem;
            if (fibon_elem(pos, elem))
                cout << "element # " << pos << " is " << elem << endl;
            else
                cout << "Sorry. Could not calculate element # " << pos << endl;
            next = 1;
        }
        else if (judge == 0)
        {
            next = 0;
        }
        else
        {
            cout << "Please enter the right content!\n";
            next = 1;
        }    
    }
    system("pause");
}

bool fibon_elem(int pos, int &elem)
{
    if (pos <= 0 || pos > 1024)
    {
        elem = 0; return false;
    }
    
    elem = 1;
    int n_2 = 1, n_1 = 1;

    for (int ix = 3; ix <= pos; ++ix)
    {
        elem = n_2 + n_1;
        n_2 = n_1; n_1 = elem;
    }

    return true;
}