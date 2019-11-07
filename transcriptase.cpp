/* Author: Denice Veluz
Changes character to another character in another array
*/

#include <iostream>
#include <cstdlib>
#include <fstream>
#include <climits>
using namespace std;

int main()
{
    ifstream fin("dna.txt");
    if (fin.fail()) {
        cerr << "File cannot be read, opened, or does not exist.\n";
        exit(1);
    }
    string strand;
    while(getline(fin, strand)) {
        
        for (int i = 0; i < strand.length(); i++) //Reads through the array
        {
            if(strand[i] == 'A' || strand[i] == 'a') //Changes A to U
            {    
                strand[i] = 'U';
            }

            else if(strand[i] == 'T' || strand[i] == 't') //Changes T to A
            {
                strand[i] = 'A';
            }

            else if(strand[i] == 'C' || strand[i] == 'c') //Changes C to G
            {
                strand[i] = 'G';
            }

            else if(strand[i] == 'G' || strand[i] == 'g') //Changes G to C
            {
                strand[i] = 'C';
            }
        }
    cout << strand << endl;
    }
    fin.close();

}