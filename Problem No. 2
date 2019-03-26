#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>
#include <map>

using namespace std;

int main()
{
    vector<string> datafirst;
    vector<string> datasecond;

    string line;
    string header;
    int i = 0;
    bool seconddataincoming = false;
    
    while (std::getline(std::cin, line))
    {
        if (!line.empty())
        {
            if (i == 0)
                header = line;
            else
            {
                if (seconddataincoming)
                    datasecond.push_back(line);
                else
                    datafirst.push_back(line);
            }
            ++i;
        }
        else
        {
            seconddataincoming = true;
            i = 0;       
        }    
    }
    map<int, string> alldataset;

    for (auto data : datafirst)
    {
        stringstream dataofstream(data);
        int key;
        dataofstream >> key;
        alldataset[key] = data;
    }

    for (auto data : datasecond)
    {
        stringstream dataofstream(data);
        int key;
        dataofstream >> key;
        alldataset[key] = data;
    }

    cout << "\n\n\n";
    cout << header << endl;
    for (auto data: alldataset)
        cout << data.second << endl;
    
    return 0;
}    
