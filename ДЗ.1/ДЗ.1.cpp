//1 Завдання
//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <Windows.h>
//
//int main() {
//    system("chcp 1251>null");
//
//    std::vector<std::string> surnames(5);
//
//    std::cout << "Введіть 5 прізвищ студентів:" << std::endl;
//    for (auto& surname : surnames) {
//        std::cin >> surname;
//    }
//
//    // Сортування за спаданням
//    std::sort(surnames.begin(), surnames.end(), std::greater<std::string>());
//
//    std::cout << "Прізвища за спаданням:" << std::endl;
//    for (const auto& surname : surnames) {
//        std::cout << surname << std::endl;
//    }
//
//    return 0;
//}




//1Завдання
//#include <iostream>
//#include <string>
//#include <sstream>
//#include <cctype>
//#include <Windows.h>
//
//bool isValidIP(const std::string& ip) {
//    std::stringstream ss(ip);
//    std::string segment;
//    int count = 0;
//
//    while (std::getline(ss, segment, '.')) {
//        count++;
//        if (segment.empty() || segment.size() > 3)
//            return false;
//        for (char ch : segment) {
//            if (!std::isdigit(ch))
//                return false;
//        }
//        int num = std::stoi(segment);
//        if (num < 0 || num > 255)
//            return false;
//    }
//    return count == 4;
//}
//
//int main() {
//    system("chcp 1251>null");
//    std::string ip;
//    std::cout << "Введіть IP-адресу: ";
//    std::cin >> ip;
//
//    if (isValidIP(ip)) {
//        std::cout << "Коректна IP-адреса." << std::endl;
//    }
//    else {
//        std::cout << "Некоректна IP-адреса." << std::endl;
//    }
//
//    return 0;
//}
// 
// 
// 
// 
// 
// 
// 
//3 завдання
//#include <iostream>
//#include <string>
//#include <Windows.h>
//
//int main() {
//    system("chcp 1251>null");
//    std::string input;
//
//    std::cout << "Введіть рядок: ";
//    std::getline(std::cin, input);
//
//    for (char& ch : input) {
//        if (ch == ' ') {
//            ch = '\t';
//        }
//    }
//
//    std::cout << "Рядок після заміни пробілів на табуляції:" << std::endl;
//    std::cout << input << std::endl;
//
//    return 0;
//}

//4 Завдання 
//#include <iostream>
//#include <string>
//#include <cctype>
//#include <Windows.h>
//
//int main() {
//    system("chcp 1251>null");
//    std::string input;
//
//    std::cout << "Введіть рядок: ";
//    std::getline(std::cin, input);
//
//    int letters = 0, digits = 0, others = 0;
//
//    for (char ch : input) {
//        if (std::isalpha(ch)) {
//            letters++;
//        }
//        else if (std::isdigit(ch)) {
//            digits++;
//        }
//        else {
//            others++;
//        }
//    }
//
//    std::cout << "Кількість літер: " << letters << std::endl;
//    std::cout << "Кількість цифр: " << digits << std::endl;
//    std::cout << "Кількість інших символів: " << others << std::endl;
//
//    return 0;
//}
//
//5завдання
//#include <iostream>
//#include <string>
//#include <sstream>
//#include <Windows.h>
//
//int main() {
//    system("chcp 1251>null");
//    std::string sentence;
//
//    std::cout << "Введіть речення: ";
//    std::getline(std::cin, sentence);
//
//    std::stringstream ss(sentence);
//    std::string word;
//    int count = 0;
//
//    while (ss >> word) {
//        count++;
//    }
//
//    std::cout << "Кількість слів у реченні: " << count << std::endl;
//
//    return 0;
//}
//6 завдання
//#include <iostream>
//#include <string>
//#include <locale>
//#include <Windows.h>
//
//bool isPalindrome(const std::wstring& str) {
//    std::wstring cleaned;
//    // Видаляємо пробіли та переводимо до нижнього регістру
//    for (wchar_t ch : str) {
//        if (iswalpha(ch)) {
//            cleaned += towlower(ch);
//        }
//    }
//
//    int left = 0;
//    int right = cleaned.size() - 1;
//
//    while (left < right) {
//        if (cleaned[left] != cleaned[right]) {
//            return false;
//        }
//        left++;
//        right--;
//    }
//    return true;
//}
//
//int main() {
//    system("chcp 1251>null");
//    // Встановлюємо локаль для підтримки українських символів
//    std::locale::global(std::locale("uk_UA.utf8"));
//    std::wcin.imbue(std::locale());
//    std::wcout.imbue(std::locale());
//
//    std::wstring input;
//
//    std::wcout << L"Введіть рядок: ";
//    std::getline(std::wcin, input);
//
//    if (isPalindrome(input)) {
//        std::wcout << L"Рядок є паліндромом." << std::endl;
//    }
//    else {
//        std::wcout << L"Рядок не є паліндромом." << std::endl;
//    }
//
//    return 0;
//}
//7завдання
#include <iostream>
#include <string>
#include <Windows.h>

int main() {
    system("chcp 1251>null");
    char letter;

    std::cout << "Введіть велику букву українського алфавіту: ";
    std::cin >> letter;

    // Український алфавіт великими літерами (33 букви)
    std::string ukrainian_alphabet = "АБВГҐДЕЄЖЗИІЇЙКЛМНОПРСТУФХЦЧШЩЬЮЯ";

    size_t pos = ukrainian_alphabet.find(letter);

    if (pos == std::string::npos) {
        std::cout << "Введено некоректну букву." << std::endl;
    }
    else if (pos == ukrainian_alphabet.size() - 1) {
        std::cout << "Далі букв немає." << std::endl;
    }
    else {
        std::cout << "Наступна буква: " << ukrainian_alphabet[pos + 1] << std::endl;
    }

    return 0;
}
