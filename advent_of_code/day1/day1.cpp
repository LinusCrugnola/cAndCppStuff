#include <bits/stdc++.h>
#include <fstream>
#include <string>


int main()
{

    std::ifstream file("input.txt");

    if (!file.is_open())
    {
        std::cout << "File not found" << std::endl;
        return 0;
    }

    int sum = 0;
    std::string line;

    while (std::getline(file, line))
    {
        int first = 0;
        bool first_found = false;
        int second = 0;
        for (auto& c: line)
        {
            if (std::isdigit(c))
            {
                if (!first_found)
                {
                    first = c - '0';
                    first_found = true;
                }
                else
                {
                    second = c - '0';
                }
            }
        }
        sum += second == 0 ? first*10+first : first*10+second;
    }

    std::cout << sum << std::endl;

    file.close();

    return 0;
}
