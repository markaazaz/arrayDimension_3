#include <iostream>

int main() {
    int arrayDimensi_3 [3][3] = {
     {5,4,3},
     {8,9,7},
     {1,6,2}
    };
    
    std::cout << "Array 3 Dimensi: \n";
    
    for (int loop_baris = 0; loop_baris < 3; ++loop_baris) // this is for row like if loop_baris = 0 then it will show like 5,4,3 or loop_baris = 1 then it'll be 8,9,7 then loop_baris = 2 then 1,6,2
    {
        for (int loop_kolom = 0; loop_kolom < 3; ++loop_kolom) // this is for column j = o then it will show 5, j = 1 it will show 4, j = 2 it will show 3 and so on
        {
            std::cout << arrayDimensi_3[loop_baris][loop_kolom] << " "; //calling row and column, row 0 and column 0 will show 5, row 0 and column 1 it will show 4 and so on
        }
        std::cout << "\n";
    }
    return 0;
}
