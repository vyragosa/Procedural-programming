#define _USE_MATH_DEFINES
#include <math.h>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

string texttt, line;
string vocab = "QWRTPSDFGHJKLZXCVBNM";
vector<string> arr;
vector<int> arr_count;
bool found;
string c;
string tempc;
int temp;

int main()
{
    setlocale(LC_ALL, "rus");

    ofstream zapis;
    /*   zapis.open("dz.txt");
       if (zapis.is_open())
       {
           for (int i = 0; i < 5; i++)
           {
               cin >> texttt;
               zapis << texttt << endl;
           }

           zapis.close();*/
    ifstream chtenie;
    chtenie.open("dz.txt");

    if (chtenie.is_open())
    {
        while (getline(chtenie, line))
        {
            for (int i = 0; i < line.length(); i++)
            {
                c = toupper(line[i]);
                if (vocab.find(c) != string::npos)
                {
                    cout << line[i];
                    found = 0;
                    for (int i = 0; i < arr.size(); i++)
                    {
                        if (arr.at(i) == c) {
                            found = 1;
                            arr_count.at(i) += 1;
                            break;
                        }
                    }
                    if (found == 0) {
                        arr.push_back(c);
                        arr_count.push_back(1);
                    }
                }
            }
        }
        chtenie.close();
    }
    else
    {
        cerr << "Файл не найден" << endl;
    }
    /* }
      else
      {

          cerr << "Файл не создан" << endl;
      }
      */
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr.size() - i - 1; j++)
        {
            if (arr_count.at(j) > arr_count.at(j + 1))
            {
                temp = arr_count.at(j);
                arr_count.at(j) = arr_count.at(j + 1);
                arr_count.at(j + 1) = temp;


                tempc = arr.at(j);
                arr.at(j) = arr.at(j + 1);
                arr.at(j + 1) = tempc;

            }
        }
    }

    cout << "\n**********************\n";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr.at(i) << " (" << arr_count.at(i) << " times)" << endl;
        break;
    }

}