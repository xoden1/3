#include <iostream>
#include <ctime>
#include <cmath>
#include <vector>
#include <string>

int main() {
    //#1
    std::srand(std::time(nullptr));
    int arr[10];
    std::cout << "Array elements:" << std::endl;
    for (int i = 0; i <= 9; i++) {
        arr[i] = std::rand() % 21 - 10;
        std::cout << arr[i] << std::endl;
    }
    std::cout << "Result: " << pow(arr[1], 3) + pow(arr[3], 3) + pow(arr[8], 3) << std::endl;
    //#2
    std::cout << "Enter array length: ";
    int n;
    std::cin >> n;
    int *arr2 = new int[n];
    std::cout << "Enter " << n << " array elements:" << std::endl;
    for (int i = 0; i <= (n - 1); i++) {
        std::cin >> arr2[i];
    }
    std::cout << "#1" << std::endl;
    for (int i = 0; i <= (n - 1); i++) {
        std::cout << arr2[i] << std::endl;
    }
    std::cout << "#2" << std::endl;
    for (int i = 0; i <= (n - 1); i++) {
        if (arr2[i] % 2 == 1) arr2[i] *= 5;
        std::cout << arr2[i] << std::endl;
    }
    int k1,k2;
    std::cout << "Enter k1 and k2: " << std::endl;
    std::cin >> k1 >> k2;
    int sum = 0;
    for (int i = k1 - 1; i <= k2 - 1; i++) {
        sum+= arr2[i];
    }
    std::cout << "Result: " << sum << std::endl;
    delete[] arr2;
    //#3
    std::cout << "Enter array length: ";
    int m,x;
    std::cin >> m;
    std::vector<int> arr3;
    std::cout << "Enter " << m << " array elements:" << std::endl;
    for (int i = 0; i <= (m - 1); i++) {
        std::cin >> x;
        arr3.push_back(x);
    }
    std::cout << "#1" << std::endl;
    for(int i : arr3) {
        std::cout << i << std::endl;
    }
    arr3.push_back(15);
    std::cout << "#2" << std::endl;
    for(int i : arr3) {
        std::cout << i << std::endl;
    }
    int sum2 = 0;
    for(int i : arr3) {
        sum2 += i;
    }
    std::cout << "Result: " << sum2 << std::endl;
    for (auto it = arr3.begin(); it != arr3.end(); ) {
        if (*it < 0) {
            it = arr3.erase(it);
            break;
        } else {
            ++it;
        }
    }
    for(int i : arr3) {
        std::cout << i << std::endl;
    }
    //#4
    std::cout << "Enter a string: ";
    std::string input;
    std::cin >> input;
    std::cout << input << std::endl;
    std::cout << "String length: " << input.length() << ", 'z' symbols number: ";
    int z = 0;
    for(int i : input) {
        if ((i == 'z') || (i == 'Z')) z++;
    }
    std::cout << z << std::endl;
    int l1,l2;
    std::cout << "Enter l1 and l2: ";
    std::cin >> l1 >> l2;
    std::cout << input.substr(l1 - 1, l2 - l1 + 1) << std::endl;
    std::string str = "Can you can a can as a canner can can a can?";
    std::cout << "Enter a string: ";
    std::string input2;
    std::cin >> input2;
    char first = std::toupper(input2.front());
    std::string second = input2.substr(1, input2.length());
    std::string output = first + second;
    int it = str.find("Can", 0);
    while (it != std::string::npos)
    {
        str.replace(it, 3, output);
        it = str.find("Can", it);

    }
    int it2 = str.find("can", 0);
    while (it2 != std::string::npos)
    {
        str.replace(it2, 3, input2);
        it2 = str.find("can", it2);

    }
    std::cout << str;
}
