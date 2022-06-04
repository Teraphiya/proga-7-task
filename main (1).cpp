#include "CircularBuffer.h"

int main()
{
    setlocale(LC_ALL, "Russian");
    try
    {
        CircularBuffer<float> buffer_float(6);
        CircularBuffer<float>::Iterator iter_float;

        buffer_float.circular_push_back(2.3);

        buffer_float.circular_push_back(13.4);

        buffer_float.circular_push_back(24.5);

        buffer_float.circular_push_back(35.6);

        buffer_float[4] = 46.7;

        cout << "\nFLOAT\n";
        for (iter_float = buffer_float.begin(); iter_float != buffer_float.end(); ++iter_float)
            cout << *iter_float << " ";

        cout << endl;

        iter_float = max_element(buffer_float.begin(), buffer_float.end());

        cout << "\nmax_element из buffer_float: " << *iter_float << endl;

        buffer_float.changeCapacity(100);
        buffer_float.capacity();

        buffer_float.circular_pop_back();
        buffer_float.circular_pop_back();
        buffer_float.circular_pop_back();
        buffer_float.circular_pop_back();
        buffer_float.circular_pop_back();
        buffer_float.circular_pop_back();
        buffer_float.circular_pop_back();
        buffer_float.circular_pop_back();
        buffer_float.circular_pop_front();

        cout << "\nbuffer_float.empty() после метода buffer_float.circular_pop_back() x8 (размер был 5)\n";
        cout << "Is it empty now? ";
        (buffer_float.empty()) ? cout << "YES" << endl : cout << "NO" << endl;
    }
    catch (exception &e)
    {
        e.what();
    }

    return 0;
}