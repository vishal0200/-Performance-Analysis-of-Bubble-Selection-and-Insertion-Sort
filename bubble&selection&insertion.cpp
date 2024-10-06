#include<iostream>
#include<ctime> // for clock_t and clock()
#include<iomanip>
#include<cstdlib> // for rand()

using namespace std;

class SortingMethods
{
public:
    void bubbleSort()
    {   
        int arr[5000]; 
        int n = 5000;
        cout << "\n ** Bubble Sorting Algorithm ** \n\n";
        srand(time(0));  // Initialize random seed
        for(int i = 0; i < n; i++)
            arr[i] = rand() % 10000;

        // Timer begins here
        clock_t start = clock();

        for(int i = 1; i < n; i++)
        {
            for(int j = 0; j < n - 1; j++)
            {
                if(arr[j] > arr[j+1])
                {
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
        }

        // Timer ends here
        clock_t ends = clock();
        cout << "Running Time in Seconds: " << (double)(ends - start) / CLOCKS_PER_SEC << endl;
    }

    void selectionSort()
    {
        int a[5000];
        int m = 5000;
        cout << "\n ** Selection Sorting Algorithm ** \n\n";
        srand(time(0));  // Initialize random seed
        for(int i = 0; i < m; i++)
            a[i] = rand() % 10000;

        // Timer begins here
        clock_t start = clock();

        for(int i = 0; i < m - 1; i++)
        {
            int min = i;
            for(int j = i + 1; j < m; j++)
            {
                if(a[j] < a[min])
                    min = j;
            }
            int t = a[i];
            a[i] = a[min];
            a[min] = t;
        }

        // Timer ends here
        clock_t ends = clock();
        cout << "Running Time in Seconds: " << (double)(ends - start) / CLOCKS_PER_SEC << endl;
    }

    void insertionSort()
    {
        int abb[5000];
        int b = 5000;
        cout << "\n ** Insertion Sorting Algorithm ** \n\n";
        srand(time(0));  // Initialize random seed
        for(int i = 0; i < b; i++)
            abb[i] = rand() % 10000;

        // Timer begins here
        clock_t start = clock();

        for(int i = 1; i < b; i++)
        {
            int t = abb[i];
            int j = i;
            while(j > 0 && abb[j - 1] > t)
            {
                abb[j] = abb[j - 1];
                j--;
            }
            abb[j] = t;
        }

        // Timer ends here
        clock_t ends = clock();
        cout << "Running Time in Seconds: " << (double)(ends - start) / CLOCKS_PER_SEC << endl;
    }
};

int main()
{
    SortingMethods func;
    func.bubbleSort();
    func.selectionSort();
    func.insertionSort();

    cout << "\n**************************************************************************\n";
    cout << "Note: All the functions above were used to sort 5000 numbers. You can use more than that number by changing the size of the array.\n";
    cout << "**************************************************************************\n";

    cout << "If you noticed, the least execution time for these functions is for the insertion sort, followed by the selection sort, and then the bubble sort.\n";

    return 0;  // Return 0 to signify the program executed successfully
}
