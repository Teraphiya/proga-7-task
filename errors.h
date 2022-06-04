#ifndef LABA5_ERRORS_H
#define LABA5_ERRORS_H

#define zero_value 0

using namespace std;

class Errors
{
public:
    static void appealToNullptr()
    {
        throw logic_error("Вы пытаетесь обраться к данным в nullptr");
    }

    static void makeBufferSmaller()
    {
        throw logic_error("Вы пытаетесь сделать буффер меньше (не считая erase_back)");
    }

    static void wrongBufferSize()
    {
        throw logic_error("Вы не можете создать буффер размером меньше zero_value");
    }

    static void wrongCapacity()
    {
        throw logic_error("Вы не можете изменить капасити на более маленький или такой же");
    }

    static void fullBuffer()
    {
        throw logic_error("Вы не можете добавить элемент в переполненный буффер");
    }

    static void wrongIndex()
    {
        throw logic_error("Вы не можете обратиться к данному индексу, так как его нет в буффере");
    }
};

#endif 