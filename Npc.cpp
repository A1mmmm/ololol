#include "Npc.h" 
#include <iostream>  
#include <fstream>   
#include <string>   
#include <Windows.h>   
#include <time.h> 
#include <vector> 
#include <queue> 
#include <string.h> 
#include <list> 
#include <vector>
using namespace std;
void Npc::check()
{
    fstream fs;
    fs.open("Gender.txt");
    if (fs.is_open())
    {
        while (!fs.eof())
        {
            //char** next_token = NULL; 
            string str = "";
            string delimiter = ",";
            vector<string> columns;
            size_t pos = 0;
            string token;
            getline(fs, str, ' ');
            while ((pos = str.find(delimiter)) != string::npos)
            {
                cout <<"Эта строка отнсится к полу: " << token << endl;
                token = str.substr(0, pos);
                columns.push_back(token);
                str.erase(0, pos + delimiter.length());
            }
            columns.push_back(str);
        }
    }
}