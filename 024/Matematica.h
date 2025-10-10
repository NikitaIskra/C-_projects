#pragma once
class Matematica
{
    private:
        int my_value;
    public:
        Matematica();
        Matematica& add(int value);
        Matematica& sub(int value);
        Matematica& mult(int value);
        int getValue() const;
    };

