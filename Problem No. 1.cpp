#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

int main()
{
    std::string line;
    vector<int> searchel;
    vector<int> fromsearched;
    int i = 0;
    while (std::getline(std::cin, line))
    {
        if (!line.empty())
        {
            stringstream temp(line);
            int value;
                
            if (i == 0)
                while (temp >> value)
                    searchel.push_back(value);
            
            else
                while (temp >> value)
                    fromsearched.push_back(value);
            
            ++i;
        }
        
    }

    sort(fromsearched.begin(), fromsearched.end());

    for (auto el : searchel)
    {
        auto result = find(fromsearched.begin(), fromsearched.end(), el);
        if (result == fromsearched.end())
        {
            printf("-1 ");
        }
        else
        {
            printf("%ld ", result - fromsearched.begin());
        }
    }

    return 0;
}
