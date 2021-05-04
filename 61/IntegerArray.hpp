#ifndef INTEGERARRAY_H

#define INTEGERARRAY_H


class IntegerArray

{

  private:
    static const int N = 10;
    int numbers[N];
    int length = 0;


public:

    int getLength() const;

    int getLastelm(int) const;

    void printAll(void) const;

    void fillUp(void);

    void sortAsc(void);

    void removeLastelm(void);

    void appendElement(int v);

};


#endif