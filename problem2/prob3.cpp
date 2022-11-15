#include<iostream>
#include"vector.h"
using namespace std;

int main()
{
    Vector<char *> lines;
    char *buf = new char[100];
    unsigned int total;

    while(cin.getline(buf, 100))
    {
        lines.push_back(buf);
        buf = new char[100];

        // Calculate average line length
        total = 0;
        for(unsigned int i = 0; i < lines.length(); i++)
        {
            unsigned int length = 0;
            for(unsigned int j = 0; lines[i][j] != '\0'; j++)
            {
                length++;
            }
            total += length;
        }
        cout << total / lines.length() << endl;
    }

    return 0;
}
