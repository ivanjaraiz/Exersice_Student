// Exersice_Student.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

class StackOverFlow :exception {};
class StackUnderFlow :exception {};
class Stack
{
    private:
        int* stk;
        int top = -1;
        int size;
    public:
        Stack(int sz)
        {
            size = sz;
            stk = new int[size];
        }
        void push(int x)
        {
            if (top == size - 1)
                throw StackOverFlow();
            top++;
            stk[top]=x;
        }
        int pop()
        {
            if (top == -1)
                throw StackUnderFlow();
            return stk[top--];
        }
};

int main()
{
    Stack s(5);

    s.push(2);
    s.push(3);
    s.push(4);
    s.push(10);
    s.push(9);
    s.push(8);
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
