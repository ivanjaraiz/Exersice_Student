// template_class.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;
template<class T>
class Stack
{
    private:
        T* stk; // puntero para array en heap memory
        T top;
        T size;
    public:
        Stack(T sz) 
        {
            size = sz;
            top = -1;
            stk = new T[size]; 
        }
        void push(T x);
        T pop(); 
        void displayStk();
};
// Métodos implementados fuera de la clase, entonces: 
template<class T>
void Stack<T>::push(T x) 
{
    if (top == size - 1)
        cout << "Stack is full" << endl;
    else
        top++;
        stk[top]=x; // el array es el puntero del heap! 
}
template<class T>
T Stack<T>::pop()
{
    T x = 0;
    if (top == -1)
        cout << "Stack is empty" << endl;
    else
    {
        x=stk[top];
        top--;
    }
    return x;
}

template<class T>
void Stack<T>::displayStk()
{
    for (T i = 0; i < 5; i++)
    cout<<stk[i]<<endl;
}
// básicamente, un array en heap meter u quitar valores con un puntero al array. YA ESTA
int main()
{
    // Metemos el tipo int en la template
    Stack<int> s(5);
    for( int i=0; i<6;i++)
        s.push(i);
    s.displayStk();
}
 
// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
