#include <iostream>
#include <string>

struct Student {
    int age, standard;
    std::string first_name, last_name;
};

int main() {
    Student st;
    
    std::cin >> st.age >> st.first_name >> st.last_name >> st.standard;
    std::cout << st.age << " " << st.first_name << " " << st.last_name << " " << st.standard;

    return 0;
}