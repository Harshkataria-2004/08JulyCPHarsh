// Write a program to read and write data in to file

#include <iostream.h>
#include <stdio.h>
int main()
{

    char fName[20];
    cout << "\nEnter file name to create :";
    cin >> fName;
    fp = fopen(fName, "w");
    if (fp == NULL)
    {
        cout << "File does not created!!!";
        exit(0);
    }
    cout << "File created successfully.";
    putc('A', fp);
    putc('B', fp);
    putc('C', fp);

    cout << "\nData written successfully.";
    fclose(fp);
    fp = fopen(fName, "r");
    if (fp == NULL)
    {
        cout << "\nCan't open file!!!";
        exit(0);
    }

    cour << "Contents of file is :\n";
    cour << "%c", getc(fp);
    cour << "%c", getc(fp);
    cour << "%c", getc(fp);

    fclose(fp);
    return 0;
}