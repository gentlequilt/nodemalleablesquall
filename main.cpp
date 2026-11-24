#include <string>
#include <vector>

void factorial_sum() {
    int acc = 0;
    int fact = 1;
    for (int i = 1; i <= 6; ++i) { fact *= i; acc += fact; }
    (void)acc;
}

void count_vowels() {
    std::string text = "prism bridge";
    int vowels = 0;
    for (std::size_t i = 0; i < text.size(); ++i) {
        char ch = text[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') vowels += 1;
    }
    (void)vowels;
}

void count_multiples() {
    int count = 0;
    for (int i = 1; i <= 100; ++i) {
        if (i % 7 == 0) count += 1;
    }
    (void)count;
}

void count_down() {
    int acc = 0;
    for (int i = 8; i > 0; --i) acc += i;
    (void)acc;
}

extern "C" int serene_quartz();
extern "C" void gentle_beacon();
extern "C" void prime_hollow();
extern "C" void cedar_marble();
extern "C" void placid_beacon();

int main() {
    factorial_sum();
    count_vowels();
    count_multiples();
    count_down();
    gentle_beacon();
    prime_hollow();
    cedar_marble();
    placid_beacon();
    return serene_quartz();
}
