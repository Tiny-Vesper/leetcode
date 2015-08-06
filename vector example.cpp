#include <vector>
#include <iostream>

int main()
{
    std::vector<int> ve;
    ve.clear();
    ve.push_back(1);
    ve.push_back(2);
    ve.push_back(2);
    ve.push_back(4);
    std::cout << ve.size() << std::endl;
    std::cout << ve[0] << std::endl;
    std::vector<int>::iterator it;
    for (it = ve.begin(); it != ve.end(); ++ it) {
        if (*it == 2) {
            ve.erase(it);
        }
    }
}