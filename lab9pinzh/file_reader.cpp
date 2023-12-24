#include "file_reader.h"
#include "constants.h"

#include <fstream>
#include <iostream>

void read(const char* file_name, Product* array[], int& size)
{
    std::ifstream inputFile(file_name);
    if (!inputFile)
    {
        std::cout << "Failed to open " << file_name << std::endl;
        return;
    }

    double price;
    int quantity;
    std::string category;
    std::string name;

    int rowCounter = 0;
    while (inputFile >> price >> quantity >> category >> name)
    {
        if (rowCounter >= MAX_FILE_ROWS_COUNT)
        {
            std::cout << "Reached maximum file rows count." << std::endl;
            break;
        }

        array[size] = new Product(price, quantity, category, name);
        size++;
        rowCounter++;
    }

    inputFile.close();
}