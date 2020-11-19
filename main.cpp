#include<iostream>
#include<fstream>
#include<string>
#include"Cars.h"
using namespace std;

void ReadManager();
void DisplayMenu();

int main()
{
    //HashTable<Cars>hash;
    //BinarySearchTree<Cars> bst;
    ReadManager();
    return 0;
    DisplayMenu();
}

void ReadManager()
{
    ifstream fin;
    fin.open("dataset.txt");
    if (!fin)
    {
        cout << "Error opening the input file: \"" << endl;
        exit(EXIT_FAILURE);
    }
    string code, colour, type, maker, name;
    float cost;
    while (fin)
    {
        getline(fin, code, '\t');
        getline(fin,name, '\t');
        getline(fin, maker, '\t');
        fin >> cost;
        fin.ignore();
        getline(fin, colour, '\t');
        getline(fin, type, '\n');
        Car C1(code, name, maker, cost,colour, type);

    }
}

void DisplayMenu()
{
    int choice=0;
    cout<<"Welcome to Welcome to Fox Rental service "<<endl;
    cout<<"-------------------------------------------------"<<endl;
    cout<<"Choose one of the below options "<<endl;
    cout<<"1) Display all the Data from the Database"<<endl;
    cout<<"2) Search using Engine Number"<<endl;
    cout<<"3) Search using Maker "<<endl;
    cout<<"4) Add using "

}