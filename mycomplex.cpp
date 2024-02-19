/**
 * @file mycomplex.cpp
 * @brief Реализация класса Complex и связанных с ним операторов.
 */

#include <iostream>
#include <cmath>
#include "mycomplex.h"

using namespace std;

/**
 * @brief Конструктор Complex с заданными действительной и мнимой частями.
 * @param aRe Действительная часть.
 * @param aIm Мнимая часть.
 */
Complex::Complex(double aRe, double aIm) {
    Re = aRe;
    Im = aIm;
}

/**
 * @brief Конструктор копирования для объектов Complex.
 * @param aRval Объект Complex для копирования.
 */
Complex::Complex(const Complex& aRval) {
    Re = aRval.Re;
    Im = aRval.Im;
}

/**
 * @brief Деструктор объектов Complex.
 */
Complex::~Complex() {
    Re = 0.0;
    Im = 0.0;
}

/**
 * @brief Задает действительную и мнимую части объекта Complex.
 * @param aRe Действительная часть.
 * @param aIm Мнимая часть.
 */
void Complex::Set(double aRe, double aIm) {
    Re = aRe;
    Im = aIm;
}

/**
 * @brief Оператор преобразования к типу double, возвращающий модуль объекта Complex.
 * @return Модуль комплексного числа.
 */
Complex::operator double() {
    return abs();
}

/**
 * @brief Вычисляет и возвращает модуль объекта Complex.
 * @return Модуль комплексного числа.
 */
double Complex::abs() {
    return sqrt(Re * Re + Im * Im);
}

/**
 * @brief Оператор сложения для объектов Complex.
 * @param aRval Объект Complex для сложения.
 * @return Результат сложения.
 */
Complex Complex::operator+(const Complex& aRval) {
    Complex Result;
    Result.Re = Re + aRval.Re;
    Result.Im = Im + aRval.Im;
    return Result;
}

/**
 * @brief Оператор вычитания для объектов Complex.
 * @param aRval Объект Complex для вычитания.
 * @return Результат вычитания.
 */
Complex Complex::operator-(const Complex& aRval) {
    Complex Result;
    Result.Re = Re - aRval.Re;
    Result.Im = Im - aRval.Im;
    return Result;
}

/**
 * @brief Оператор сложения для объекта Complex и значения типа double.
 * @param aval Значение типа double для сложения.
 * @return Результат сложения.
 */
Complex Complex::operator+(const double& aval) {
    Complex result;
    result.Re = Re + aval;
    result.Im = Im;
    return result;
}

/**
 * @brief Оператор вычитания для объекта Complex и значения типа double.
 * @param aRval Значение типа double для вычитания.
 * @return Результат вычитания.
 */
Complex Complex::operator-(const double& aRval) {
    Complex Result(*this);
    Result.Re = Re - aRval;
    return Result;
}

/**
 * @brief Оператор умножения для объектов Complex.
 * @param aRval Объект Complex для умножения.
 * @return Результат умножения.
 */
Complex Complex::operator*(const Complex& aRval) {
    Complex Result;
    Result.Re = Re * aRval.Re - Im * aRval.Im;
    Result.Im = Re * aRval.Im + Im * aRval.Re;
    return Result;
}

/**
 * @brief Оператор умножения для объекта Complex и значения типа double.
 * @param aRval Значение типа double для умножения.
 * @return Результат умножения.
 */
Complex Complex::operator*(const double& aRval) {
    Complex Result;
    Result.Re = Re * aRval;
    Result.Im = Im * aRval;
    return Result;
}

/**
 * @brief Оператор деления для объекта Complex и значения типа double.
 * @param aRval Значение типа double для деления.
 * @return Результат деления.
 */
Complex Complex::operator/(const double& aRval) {
    Complex Result;
    Result.Re = Re / aRval;
    Result.Im = Im / aRval;
    return Result;
}

/**
 * @brief Композитный оператор сложения для объектов Complex.
 * @param arval Объект Complex для сложения.
 * @return Ссылка на модифицированный объект Complex.
 */
Complex& Complex::operator+=(const Complex& arval) {
    Re += arval.Re;
    Im += arval.Im;
    return *this;
}

/**
 * @brief Композитный оператор вычитания для объектов Complex.
 * @param aRval Объект Complex для вычитания.
 * @return Ссылка на модифицированный объект Complex.
 */
Complex& Complex::operator-=(const Complex& aRval) {
    Re -= aRval.Re;
    Im -= aRval.Im;
    return *this;
}

/**
 * @brief Композитный оператор умножения для объектов Complex.
 * @param aRval Объект Complex для умножения.
 * @return Ссылка на модифицированный объект Complex.
 */
Complex& Complex::operator*=(const Complex& aRval) {
    double tmpRe = Re;
    Re = Re * aRval.Re - Im * aRval.Im;
    Im = Im * aRval.Re + tmpRe * aRval.Im;
    return *this;
}

/**
 * @brief Композитный оператор сложения для объекта Complex и значения типа double.
 * @param aRval Значение типа double для сложения.
 * @return Ссылка на модифицированный объект Complex.
 */
Complex& Complex::operator+=(const double& aRval) {
    Re += aRval;
    return *this;
}

/**
 * @brief Композитный оператор вычитания для объекта Complex и значения типа double.
 * @param aRval Значение типа double для вычитания.
 * @return Ссылка на модифицированный объект Complex.
 */
Complex& Complex::operator-=(const double& aRval) {
    Re -= aRval;
    return *this;
}

/**
 * @brief Композитный оператор умножения для объекта Complex и значения типа double.
 * @param aRval З

начение типа double для умножения.
 * @return Ссылка на модифицированный объект Complex.
 */
Complex& Complex::operator*=(const double& aRval) {
    Re *= aRval;
    Im *= aRval;
    return *this;
}

/**
 * @brief Композитный оператор деления для объекта Complex и значения типа double.
 * @param aRval Значение типа double для деления.
 * @return Ссылка на модифицированный объект Complex.
 */
Complex& Complex::operator/=(const double& aRval) {
    Re /= aRval;
    Im /= aRval;
    return *this;
}

/**
 * @brief Оператор присваивания для объектов Complex.
 * @param aRval Объект Complex для присваивания.
 * @return Ссылка на модифицированный объект Complex.
 */
Complex& Complex::operator=(const Complex& aRval) {
    Re = aRval.Re;
    Im = aRval.Im;
    return *this;
}

/**
 * @brief Оператор присваивания для значения типа double.
 * @param aRval Значение типа double для присваивания.
 * @return Ссылка на модифицированный объект Complex.
 */
Complex& Complex::operator=(const double& aRval) {
    Re = aRval;
    Im = 0.0;
    return *this;
}

/**
 * @brief Оператор ввода из потока для объектов Complex.
 * @param stream Входной поток.
 * @param a Объект Complex для ввода.
 * @return Входной поток после операции ввода.
 */
istream& operator>>(istream& stream, Complex& a) {
    char tmp[256];
    stream >> a.Re >> a.Im >> tmp;
    return stream;
}

/**
 * @brief Оператор вывода в поток для объектов Complex.
 * @param stream Выходной поток.
 * @param a Объект Complex для вывода.
 * @return Выходной поток после операции вывода.
 */
ostream& operator<<(ostream& stream, Complex& a) {
    stream << a.Re;
    if (!(a.Im < 0)) {
        stream << '+';
    }
    stream << a.Im << 'i';
    return stream;
}

/**
 * @brief Оператор сложения для значения типа double и объекта Complex.
 * @param aLval Значение типа double.
 * @param aRval Объект Complex.
 * @return Результат сложения.
 */
Complex operator+(const double& aLval, const Complex& aRval) {
    Complex Result;
    Result.Re = aLval + aRval.Re;
    Result.Im = aRval.Im;
    return Result;
}

/**
 * @brief Оператор вычитания для значения типа double и объекта Complex.
 * @param aLval Значение типа double.
 * @param aRval Объект Complex.
 * @return Результат вычитания.
 */
Complex operator-(const double& aLval, const Complex& aRval) {
    Complex Result;
    Result.Re = aLval - aRval.Re;
    Result.Im = -aRval.Im;
    return Result;
}

/**
 * @brief Оператор умножения для значения типа double и объекта Complex.
 * @param aLval Значение типа double.
 * @param a Объект Complex.
 * @return Результат умножения.
 */
Complex operator*(const double& aLval, const Complex& a) {
    Complex r;
    r.Re = aLval * a.Re;
    r.Im = aLval * a.Im;
    return r;
}
