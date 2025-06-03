// ..........example 13.1.........
// //---------------Example 13.1 -----------------------------Time measurement for input

// #include <iostream>
// #include <ctime>

// using namespace std;

// int main()
// {
//     time_t startTime, endTime;
//     char userName[25];
//     double timeTaken;

//     time(&startTime);
//     cout << "Enter your full name: ";
//     cin >> userName;
//     time(&endTime);

//     timeTaken = difftime(endTime, startTime);

//     cout << "Hello " << userName << "!" << endl;
//     cout << "You took " << timeTaken << " seconds to enter your name." << endl;

//     return 0;
// }
// ...........exercise 13.1............
// ......bibble sort......
// #include <iostream>
// using namespace std;

// void bubbleSort(int arr[], int size) {
//     for (int i = 0; i < size - 1; i++) {
//         for (int j = 0; j < size - i - 1; j++) {
//             if (arr[j] > arr[j + 1]) {
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }
// }

// int main() {
//     int numbers[5];
//     for (int i = 0; i < 5; i++) {
//         cout << "Please input the value at position " << i << ": ";
//         cin >> numbers[i];
//     }

//     bubbleSort(numbers, 5);

//     cout << "Array after sorting: ";
//     for (int i = 0; i < 5; i++) {
//         cout << numbers[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }
// ........selection sort......
// #include <iostream>
// using namespace std;

// void selectionSort(int arr[], int size) {
//     for (int i = 0; i < size - 1; i++) {
//         int minIndex = i; // Assume current index holds the minimum value

//         for (int j = i + 1; j < size; j++) {
//             if (arr[j] < arr[minIndex]) {
//                 minIndex = j;  // Found smaller value, update minIndex
//             }
//         }

//         // Swap the minimum element found with the current element
//         int temp = arr[i];
//         arr[i] = arr[minIndex];
//         arr[minIndex] = temp;
//     }
// }

// int main() {
//     int values[5];
//     for (int i = 0; i < 5; i++) {
//         cout << "Enter element at index " << i << ": ";
//         cin >> values[i];
//     }

//     selectionSort(values, 5);

//     cout << "Sorted array is: ";
//     for (int i = 0; i < 5; i++) {
//         cout << values[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }
// ..............insertion sort.........
// #include <iostream>
// using namespace std;

// void insertionSort(int arr[], int n) {
//     for (int i = 1; i < n; i++) {
//         int key = arr[i];
//         int j = i - 1;

//         // Move elements greater than key one position ahead
//         while (j >= 0 && arr[j] > key) {
//             arr[j + 1] = arr[j];
//             j--;
//         }

//         // Place key at its correct position
//         arr[j + 1] = key;
//     }
// }

// int main() {
//     int data[] = {5, 2, 9, 1, 5, 6};
//     int length = sizeof(data) / sizeof(data[0]);

//     cout << "Input array: ";
//     for (int i = 0; i < length; i++)
//         cout << data[i] << " ";
//     cout << endl;

//     insertionSort(data, length);

//     cout << "Sorted array: ";
//     for (int i = 0; i < length; i++)
//         cout << data[i] << " ";
//     cout << endl;

//     return 0;
// }
// ...........heap sort........
// #include <iostream>
// using namespace std;

// void heapify(int arr[], int n, int i) {
//     int largest = i;       
//     int left = 2 * i + 1;  
//     int right = 2 * i + 2; 

//     if (left < n && arr[left] > arr[largest])
//         largest = left;

//     if (right < n && arr[right] > arr[largest])
//         largest = right;

//     if (largest != i) {
//         swap(arr[i], arr[largest]);
//         heapify(arr, n, largest);
//     }
// }

// void heapSort(int arr[], int n) {
//     // Build max heap
//     for (int i = n / 2 - 1; i >= 0; i--)
//         heapify(arr, n, i);

//     // Extract elements from heap one by one
//     for (int i = n - 1; i >= 0; i--) {
//         swap(arr[0], arr[i]);
//         heapify(arr, i, 0);
//     }
// }

// void printArray(int arr[], int n) {
//     for (int i = 0; i < n; i++)
//         cout << arr[i] << " ";
//     cout << "\n";
// }

// int main() {
//     int numbers[] = {12, 11, 13, 5, 6, 7};
//     int size = sizeof(numbers) / sizeof(numbers[0]);

//     cout << "Original array:\n";
//     printArray(numbers, size);

//     heapSort(numbers, size);

//     cout << "Sorted array:\n";
//     printArray(numbers, size);

//     return 0;
// }
// //------------------------Exercise 13.2------------------------------------More actions
// #include <iostream>
// #include <cstdlib>
// #include <ctime>
// using namespace std;

// // Struct to track comparisons and exchanges
// struct Stats {
//     long long comparisons = 0;
//     long long exchanges = 0;
// };

// void generateRandomArray(int arr[], int n) {
//     for (int i = 0; i < n; i++)
//         arr[i] = rand() % 100000;  // Random number between 0 and 99999
// }

// void copyArray(int source[], int destination[], int n) {
//     for (int i = 0; i < n; i++)
//         destination[i] = source[i];
// }

// void bubbleSort(int arr[], int n, Stats& stats) {
//     for (int i = 0; i < n - 1; i++) {
//         for (int j = 0; j < n - i - 1; j++) {
//             stats.comparisons++;
//             if (arr[j] > arr[j + 1]) {
//                 swap(arr[j], arr[j + 1]);
//                 stats.exchanges++;
//             }
//         }
//     }
// }

// void selectionSort(int arr[], int n, Stats& stats) {
//     for (int i = 0; i < n - 1; i++) {
//         int min_idx = i;
//         for (int j = i + 1; j < n; j++) {
//             stats.comparisons++;
//             if (arr[j] < arr[min_idx])
//                 min_idx = j;
//         }
//         if (min_idx != i) {
//             swap(arr[i], arr[min_idx]);
//             stats.exchanges++;
//         }
//     }
// }

// void insertionSort(int arr[], int n, Stats& stats) {
//     for (int i = 1; i < n; i++) {
//         int key = arr[i];
//         int j = i - 1;
//         while (j >= 0 && arr[j] > key) {
//             stats.comparisons++;
//             arr[j + 1] = arr[j];
//             j--;
//             stats.exchanges++;
//         }
//         if (j >= 0) stats.comparisons++;  // For the failed comparison in while
//         arr[j + 1] = key;
//         stats.exchanges++;
//     }
// }

// void heapify(int arr[], int n, int i, Stats& stats) {
//     int largest = i;
//     int left = 2 * i + 1;
//     int right = 2 * i + 2;

//     if (left < n) {
//         stats.comparisons++;
//         if (arr[left] > arr[largest])
//             largest = left;
//     }

//     if (right < n) {
//         stats.comparisons++;
//         if (arr[right] > arr[largest])
//             largest = right;
//     }

//     if (largest != i) {
//         swap(arr[i], arr[largest]);
//         stats.exchanges++;
//         heapify(arr, n, largest, stats);
//     }
// }

// void heapSort(int arr[], int n, Stats& stats) {
//     // Build max heap
//     for (int i = n / 2 - 1; i >= 0; i--)
//         heapify(arr, n, i, stats);

//     // Extract elements from heap one by one
//     for (int i = n - 1; i > 0; i--) {
//         swap(arr[0], arr[i]);
//         stats.exchanges++;
//         heapify(arr, i, 0, stats);
//     }
// }

// int main() {
//     srand(time(0));

//     int sizes[] = { 10, 100, 1000, 5000, 10000, 20000, 50000 };
//     int maxN = 50000;
//     int* original = new int[maxN];
//     int* temp = new int[maxN];

//     cout << "Array Size, Bubble Comparisons, Bubble Swaps, Selection Comparisons, Selection Swaps, Insertion Comparisons, Insertion Swaps, Heap Comparisons, Heap Swaps\n";

//     for (int s = 0; s < 7; s++) {
//         int n = sizes[s];
//         generateRandomArray(original, n);

//         Stats bubbleStats, selectionStats, insertionStats, heapStats;

//         copyArray(original, temp, n);
//         bubbleSort(temp, n, bubbleStats);

//         copyArray(original, temp, n);
//         selectionSort(temp, n, selectionStats);

//         copyArray(original, temp, n);
//         insertionSort(temp, n, insertionStats);

//         copyArray(original, temp, n);
//         heapSort(temp, n, heapStats);

//         cout << n << ", "
//              << bubbleStats.comparisons << ", " << bubbleStats.exchanges << ", "
//              << selectionStats.comparisons << ", " << selectionStats.exchanges << ", "
//              << insertionStats.comparisons << ", " << insertionStats.exchanges << ", "
//              << heapStats.comparisons << ", " << heapStats.exchanges << "\n";
//     }

//     delete[] original;
//     delete[] temp;

//     return 0;
// }

// ------------------------------Exercise 13.3------------------------------
// #include <iostream>
// #include <ctime>
// #include <cstdlib>
// using namespace std;

// // Function to perform Bubble Sort
// void bubbleSort(int arr[], int n) {
//     for (int i = 0; i < n - 1; i++) {
//         for (int j = 0; j < n - i - 1; j++) {
//             if (arr[j] > arr[j + 1]) {
//                 // Swap adjacent elements if they are in wrong order
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }
// }

// // Optional: Generate random array with values between 0 and 2*n
// void generateArray(int arr[], int n) {
//     for (int i = 0; i < n; i++) {
//         arr[i] = rand() % (2 * n);
//     }
// }

// // Sequential search function: returns index of key or -1 if not found
// int sequentialSearch(int arr[], int n, int key, int& comparisons) {
//     for (int i = 0; i < n; i++) {
//         comparisons++;
//         if (arr[i] == key)
//             return i;
//     }
//     return -1;
// }

// // Binary search function: requires sorted array
// int binarySearch(int arr[], int n, int key, int& comparisons) {
//     int low = 0, high = n - 1;
//     while (low <= high) {
//         int mid = (low + high) / 2;
//         comparisons++;
//         if (arr[mid] == key)
//             return mid;
//         else if (key < arr[mid])
//             high = mid - 1;
//         else
//             low = mid + 1;
//     }
//     return -1;
// }

// int main() {
//     // Example array to sort
//     int arr[] = {2, 5, 7, 3, 1};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     cout << "Starting Bubble Sort on array of size " << n << "...\n";

//     clock_t start = clock();  // Start timer

//     bubbleSort(arr, n);

//     clock_t end = clock();    // End timer

//     double elapsed_secs = double(end - start) / CLOCKS_PER_SEC;

//     cout << "Bubble Sort completed in " << elapsed_secs << " seconds.\n";

//     cout << "Sorted array: ";
//     for (int i = 0; i < n; i++)
//         cout << arr[i] << " ";
//     cout << "\n";

//     // Optional: Demonstrate searches on sorted array
//     int key = 5;
//     int seqComparisons = 0;
//     int binComparisons = 0;

//     int seqIndex = sequentialSearch(arr, n, key, seqComparisons);
//     if (seqIndex != -1)
//         cout << "Sequential Search: Found key " << key << " at index " << seqIndex << " with " << seqComparisons << " comparisons.\n";
//     else
//         cout << "Sequential Search: Key " << key << " not found after " << seqComparisons << " comparisons.\n";

//     int binIndex = binarySearch(arr, n, key, binComparisons);
//     if (binIndex != -1)
//         cout << "Binary Search: Found key " << key << " at index " << binIndex << " with " << binComparisons << " comparisons.\n";
//     else
//         cout << "Binary Search: Key " << key << " not found after " << binComparisons << " comparisons.\n";

//     return 0;
// }
// #include <iostream>
// #include <cstdlib>
// #include <ctime>
// #include <algorithm>  // For std::sort
// using namespace std;

// // Generate random array with values between 0 and 2*N
// void GenerateArray(int arr[], int n) {
//     for (int i = 0; i < n; i++)
//         arr[i] = rand() % (2 * n);
// }

// // Sequential Search: returns index if found, -1 if not
// int SequentialSearch(int arr[], int n, int key, int& comparisons) {
//     for (int i = 0; i < n; i++) {
//         comparisons++;
//         if (arr[i] == key)
//             return i;
//     }
//     return -1;
// }

// // Binary Search: returns index if found, -1 if not; array must be sorted
// int BinarySearch(int arr[], int n, int key, int& comparisons) {
//     int low = 0, high = n - 1;
//     while (low <= high) {
//         int mid = (low + high) / 2;
//         comparisons++;
//         if (arr[mid] == key)
//             return mid;
//         else if (key < arr[mid])
//             high = mid - 1;
//         else
//             low = mid + 1;
//     }
//     return -1;
// }
// .............exercise 14.1..........
// int main() {
//     srand(time(0)); // Seed random number generator

//     int sizes[] = {10, 100, 1000, 5000, 10000, 20000, 50000};

//     cout << "N\tSeq(S)\tSeq(U)\tBin(S)\tBin(U)\n";

//     for (int s = 0; s < 7; s++) {
//         int N = sizes[s];
//         int* arr = new int[N];

//         // Generate random array
//         GenerateArray(arr, N);

//         // Pick a random element from the array for a successful search
//         int key_success = arr[rand() % N];

//         // Pick a key unlikely to be in the array for unsuccessful search
//         int key_fail = N * 3;

//         // Sequential Search comparisons
//         int seqCompS = 0, seqCompU = 0;
//         SequentialSearch(arr, N, key_success, seqCompS);
//         SequentialSearch(arr, N, key_fail, seqCompU);

//         // Sort array before Binary Search
//         sort(arr, arr + N);

//         // Binary Search comparisons
//         int binCompS = 0, binCompU = 0;
//         BinarySearch(arr, N, key_success, binCompS);
//         BinarySearch(arr, N, key_fail, binCompU);

//         // Output results in tab-separated format
//         cout << N << "\t" << seqCompS << "\t" << seqCompU << "\t"
//              << binCompS << "\t" << binCompU << "\n";

//         delete[] arr; // Free allocated memory
//     }

//     return 0;
// }
