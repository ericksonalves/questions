#include <iostream>
#include <vector>

class pump
{
public:
    pump(const unsigned int p, const unsigned int d) : m_p(p), m_d(d) { }
    ~pump() { }
    const unsigned int p() const { return m_p; }
    const unsigned int d() const { return m_d; }
private:
    const unsigned int m_p;
    const unsigned int m_d;
};

int main() {
    unsigned int n, p, d;
    std::cin >> n;
    std::vector<pump> queue;
    queue.reserve(n);
    for (unsigned int i = 0; i != n; ++i) {
        std::cin >> p >> d;
        queue.push_back(pump(p, d));
    }
    for (unsigned int i = 0; i != n; ++i) {
        unsigned int current_p = 0;
        bool completed = true;
        for (unsigned int j = 0; j != n - 1; ++j) {
            unsigned int index = (i + j) % n;
            current_p += queue[index].p();
            if (current_p <= queue[index].d()) {
                completed = false;
                break;
            }
            current_p -= queue[index].d();
        }
        if (completed) {
            std::cout << i << std::endl;
            break;
        }
    }
    return 0;
}
