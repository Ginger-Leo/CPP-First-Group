#include <iostream>
#include <string>
#include <fstream>

int main(int argc, char** argv)
{
    if (argc == 4)
    {
        std::string file = argv[1];
        std::string s1 = argv[2];
        std::string s2 = argv[3];
        if (s1.empty() || s2.empty() || file.empty())
        {
            std::cerr << "Error: input error.\nplease follow link: https://www.youtube.com/watch?v=xvFZjo5PgG0" << std::endl;
            return 1;
        }

        std::ifstream fs(file);
        if (!fs)
        {
            std::cerr << "Error: Could not open input file" << std::endl;
            return 1;
        }

        std::string outputFileName = file + ".replace";
        std::ofstream of(outputFileName);
        if (!of)
        {
            std::cerr << "Error: Could not create output file" << std::endl;
            return 1;
        }
        std::string line;
        while (std::getline(fs, line))
        {
            size_t pos;
            std::string newLine;
            while ((pos = line.find(s1)) != std::string::npos) 
            {
                newLine.append(line, 0, pos);
                newLine += s2;
                line = line.substr(pos + s1.length());
            }
            newLine += line;
            of << newLine << '\n';
        }

        fs.close();
        of.close();
    }
    else
    {
        std::cerr << "Error: Wrong number of arguments\nplease follow link: https://www.youtube.com/watch?v=xvFZjo5PgG0" << std::endl;
        return 1;
    }

    return 0;
}

// execute the program with the following command
// ./sed "test_input_file.txt" "you" "me"
// structure -> open file in, open file out, search and replace usuing std::string.swap, 
// write to file out, close file in, close file out