#include <iostream>
#include <cmath>

using namespace std;

// ==========================================
// Визначення та реалізація класу FloatPower
// ==========================================
class FloatPower
{
private:
    double first;   // дійсне ненульове число
    double second;  // дійсне число, показник степеня
public:
    // Методи зчитування (гетери)
    double GetFirst() const { return first; }
    double GetSecond() const { return second; }

    // Методи запису (сетери) з перевіркою коректності
    void SetFirst(double value)
    {
        // Перевірка: поле first має бути ненульовим
        if (value == 0.0)
        {
            cout << "[Захист]: Поле first не може дорівнювати 0! Автоматично встановлено 1.0" << endl;
            first = 1.0;
        }
        else
        {
            first = value;
        }
    }

    void SetSecond(double value)
    {
        second = value;
    }

    // Метод ініціалізації полів
    void Init(double first, double second)
    {
        SetFirst(first);
        SetSecond(second); // повторне використання коду
    }

    // Метод для піднесення числа first до степеня second
    double power() const
    {
        return pow(first, second);
    }
};

// ==========================================
// Головна функція програми
// ==========================================
int main()
{
    // Налаштування для виведення кирилиці в консолі
    setlocale(LC_ALL, "Ukrainian");

    FloatPower fp;
    double inputFirst, inputSecond;

    // Введення даних з клавіатури
    cout << "Введiть основу степеня (first, ненульове число): ";
    cin >> inputFirst;

    cout << "Введiть показник степеня (second): ";
    cin >> inputSecond;

    cout << "\n-----------------------------------" << endl;

    // Ініціалізація об'єкта введеними значеннями
    fp.Init(inputFirst, inputSecond);

    // Виведення збережених значень та результату
    cout << "First (основа): " << fp.GetFirst() << endl;
    cout << "Second (показник): " << fp.GetSecond() << endl;
    cout << "Результат (power): " << fp.power() << endl;

    return 0;
}