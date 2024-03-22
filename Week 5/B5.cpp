#include <iostream>
#include <algorithm>

struct Student
{
    int id;
    int math;
    int physics;
    int english;
};

bool compareMath(const Student &a, const Student &b) { return a.math > b.math; }
bool comparePhysics(const Student &a, const Student &b) { return a.physics > b.physics; }
bool compareEnglish(const Student &a, const Student &b) { return a.english > b.english; }

void print(const Student s[], int n)
{
    std::cout << "Toan Ly Anh" << std::endl;
    for (int i = 0; i < n; i++)
    {
        std::cout << "Sinh vien " << s[i].id << " " << s[i].math << " " << s[i].physics << " " << s[i].math << std::endl;
    }
}

int main()
{
    int n;
    std::cin >> n;
    Student arr[n];
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i].id >> arr[i].math >> arr[i].physics >> arr[i].english;
    }
    std::cout << "Diem theo mon Toan" << std::endl;
    std::sort(arr, arr + n, compareMath);
    print(arr, n);
    std::cout << std::endl;
    std::cout << "Diem theo mon Ly" << std::endl;
    std::sort(arr, arr + n, comparePhysics);
    print(arr, n);
    std::cout << std::endl;
    std::cout << "Diem theo mon Anh" << std::endl;
    std::sort(arr, arr + n, compareEnglish);
    print(arr, n);
    std::cout << std::endl;
    return 0;
}