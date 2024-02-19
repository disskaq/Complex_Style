/**
 * @file mycomplex.h
 * @brief Заголовочный файл с объявлением класса Complex.
 */

#ifndef _MY_COMPLEX_H_
#define _MY_COMPLEX_H_

#include <iostream>

/**
 * @class Complex
 * @brief Класс, представляющий комплексное число.
 */
class Complex {
    double Re; /**< Действительная часть комплексного числа. */
    double Im; /**< Мнимая часть комплексного числа. */

public:
    /**
     * @brief Конструктор класса Complex.
     * @param aRe Действительная часть (по умолчанию 0).
     * @param aIm Мнимая часть (по умолчанию 0).
     */
    Complex(double aRe = 0, double aIm = 0);

    /**
     * @brief Конструктор копирования класса Complex.
     * @param a Объект Complex для копирования.
     */
    Complex(const Complex&);

    /**
     * @brief Деструктор класса Complex.
     */
    ~Complex();

    /**
     * @brief Устанавливает значения действительной и мнимой частей комплексного числа.
     * @param aRe Действительная часть.
     * @param aIm Мнимая часть (по умолчанию 0).
     */
    void Set(double aRe, double aIm = 0);

    /**
     * @brief Оператор приведения к типу double, возвращающий модуль комплексного числа.
     * @return Модуль комплексного числа.
     */
    operator double();

    /**
     * @brief Вычисляет и возвращает модуль комплексного числа.
     * @return Модуль комплексного числа.
     */
    double abs();

    /**
     * @brief Оператор ввода из потока для объекта Complex.
     * @param stream Входной поток.
     * @param a Объект Complex для ввода.
     * @return Входной поток после операции ввода.
     */
    friend std::istream& operator>>(std::istream&, Complex&);

    /**
     * @brief Оператор вывода в поток для объекта Complex.
     * @param stream Выходной поток.
     * @param a Объект Complex для вывода.
     * @return Выходной поток после операции вывода.
     */
    friend std::ostream& operator<<(std::ostream&, const Complex&);

    /**
     * @brief Оператор сложения для объектов Complex.
     * @param aRval Объект Complex для сложения.
     * @return Результат сложения.
     */
    Complex operator+(const Complex&);

    /**
     * @brief Оператор вычитания для объектов Complex.
     * @param aRval Объект Complex для вычитания.
     * @return Результат вычитания.
     */
    Complex operator-(const Complex&);

    /**
     * @brief Оператор сложения для объекта Complex и значения типа double.
     * @param aval Значение типа double для сложения.
     * @return Результат сложения.
     */
    Complex operator+(const double&);

    /**
     * @brief Дружественный оператор сложения для значения типа double и объекта Complex.
     * @param aLval Значение типа double.
     * @param aRval Объект Complex.
     * @return Результат сложения.
     */
    friend Complex operator+(const double&, const Complex&);

    /**
     * @brief Оператор вычитания для объекта Complex и значения типа double.
     * @param aRval Значение типа double для вычитания.
     * @return Результат вычитания.
     */
    Complex operator-(const double&);

    /**
     * @brief Дружественный оператор вычитания для значения типа double и объекта Complex.
     * @param aLval Значение типа double.
     * @param aRval Объект Complex.
     * @return Результат вычитания.
     */
    friend Complex operator-(const double&, const Complex&);

    /**
     * @brief Оператор умножения для объектов Complex.
     * @param aRval Объект Complex для умножения.
     * @return Результат умножения.
     */
    Complex operator*(const Complex&);

    /**
     * @brief Оператор умножения для объекта Complex и значения типа double.
     * @param aRval Значение типа double для умножения.
     * @return Результат умножения.
     */
    Complex operator*(const double&);

    /**
     * @brief Дружественный оператор умножения для значения типа double и объекта Complex.
     * @param aLval Значение типа double.
     * @param a Объект Complex.
     * @return Результат умножения.
     */
    friend Complex operator*(const double&, const Complex&);

    /**
     * @brief Оператор деления для объекта Complex и значения типа double.
     * @param aRval Значение типа double для деления.
     * @return Результат деления.
     */
    Complex operator/(const double&);

    /**
     * @brief Композитный оператор сложения для объектов Complex.
     * @param arval Объект Complex для сложения.
     * @return Ссылка на модифицированный объект Complex.
     */
    Complex& operator+=(const Complex&);

    /**
     * @brief Композитный оператор вычитания для объектов Complex.
     * @param aRval Объект Complex для вычитания.
     * @return Ссылка на модифицированный объект Complex.
     */
    Complex& operator-=(const Complex&);

    /**
     * @brief Композитный оператор умножения для объектов Complex.
     * @param aRval Объект Complex для умножения.
     * @return Ссылка на модифицированный объект Complex

.
     */
    Complex& operator*=(const Complex&);

    /**
     * @brief Композитный оператор сложения для объекта Complex и значения типа double.
     * @param aRval Значение типа double для сложения.
     * @return Ссылка на модифицированный объект Complex.
     */
    Complex& operator+=(const double&);

    /**
     * @brief Композитный оператор вычитания для объекта Complex и значения типа double.
     * @param aRval Значение типа double для вычитания.
     * @return Ссылка на модифицированный объект Complex.
     */
    Complex& operator-=(const double&);

    /**
     * @brief Композитный оператор умножения для объекта Complex и значения типа double.
     * @param aRval Значение типа double для умножения.
     * @return Ссылка на модифицированный объект Complex.
     */
    Complex& operator*=(const double&);

    /**
     * @brief Композитный оператор деления для объекта Complex и значения типа double.
     * @param aRval Значение типа double для деления.
     * @return Ссылка на модифицированный объект Complex.
     */
    Complex& operator/=(const double&);

    /**
     * @brief Оператор присваивания для объектов Complex.
     * @param aRval Объект Complex для присваивания.
     * @return Ссылка на модифицированный объект Complex.
     */
    Complex& operator=(const Complex&);

    /**
     * @brief Оператор присваивания для значения типа double.
     * @param aRval Значение типа double для присваивания.
     * @return Ссылка на модифицированный объект Complex.
     */
    Complex& operator=(const double&);
};

#endif