#include <iostream>
using namespace std;

int main()
{
    int base_address, page_size, num_pages, memory_limit;

    // Step 2: Read inputs
    cout << "Enter base address: ";
    cin >> base_address;

    cout << "Enter page size: ";
    cin >> page_size;

    cout << "Enter number of pages: ";
    cin >> num_pages;

    cout << "Enter memory limit: ";
    cin >> memory_limit;

    // Step 3: Check memory limit
    if (memory_limit < base_address)
    {
        cout << "Memory limit is less than base address.\n";
        return 0;
    }

    // Step 4: Create page table
    int *page_table = new int[num_pages];
    for (int i = 0; i < num_pages; i++)
    {
        page_table[i] = base_address + i * page_size;
    }

    // Step 5-7: Read and validate page number and displacement
    int page_num, displacement;
    while (true)
    {
        cout << "Enter page number (-1 to exit): ";
        cin >> page_num;
        if (page_num == -1)
        {
            break;
        }
        cout << "Enter displacement: ";
        cin >> displacement;
        if (page_num < 0 || page_num >= num_pages)
        {
            cout << "Error :: Page number is not valid.  Page number ranges from 0 to number of pages - 1\n";
        }
        else if (displacement < 0 || displacement >= page_size)
        {
            cout << "Displacement should be less than page size.\n";
        }
        else
        {
            int physical_address = page_table[page_num] + displacement;
            if (physical_address < memory_limit)
            {
                cout << "Physical address: " << physical_address << endl;
            }
            else
            {
                cout << "Error :: Physical address > memory limit.\n";
            }
        }
    }

    // Step 8: Clean up and exit
    delete[] page_table;
    return 0;
}