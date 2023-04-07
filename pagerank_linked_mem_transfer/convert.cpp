/*
 * @Author: Remington
 * @Date: 2023-02-27 17:55:31
 * @LastEditors: Remington
 * @LastEditTime: 2023-03-16 11:12:42
 * @Description: file content
 */
#include <iostream>
#include <fstream>
#include <ostream>
#include <sstream>
#include <string>

int main(int argc, char** argv) {
    if (argc != 3) {
        std::cerr << "argc != 3" << std::endl;
    }

    std::string input_filename = argv[1];
    std::string output_filename = argv[2];

    std::ifstream input_file(input_filename);
    std::ofstream output_file(output_filename);

    std::string line;
    int nums_rows, nums_cols, nums_nz;

    // while (std::getline(input_file, line) && line[0] == '%') {
    //     // output_file << line <<std::endl;
    // }

    // std::istringstream iss(line);
    // iss >> nums_rows >> nums_cols >> nums_nz;
    // output_file << nums_rows << " " << nums_cols << " " << nums_nz << std::endl;

    for (int i = 0; i < nums_nz; i++) {
        int row, col;
        input_file >> row >> col;
        output_file << row-1 << " " << col-1 << std::endl;
    }

    return 0;
}