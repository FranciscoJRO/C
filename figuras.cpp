#include <iostream>
#include <cmath>
using namespace std;

class Figuras {
protected:
    int nolados;

public:
    Figuras(int _nolados) : nolados(_nolados) {}
    virtual void figura() = 0;
    virtual void perimetro() = 0;
    virtual void area() = 0;
};

class Circulo : public Figuras {
private:
    float radio;

public:
    Circulo(int _nolados, float _radio) : Figuras(_nolados), radio(_radio) {}
    void figura() override {
        cout << "Tu figura es un círculo" << endl;
    }
    void perimetro() override {
        float _perimetro = 2 * M_PI * radio;
        cout << "El perímetro del círculo es de " << _perimetro << endl;
    }
    void area() override {
        float _area = M_PI * pow(radio, 2);
        cout << "El área del círculo es de " << _area << endl;
    }
};

class Triangulo : public Figuras {
private:
    float base, altura;

public:
    Triangulo(int _nolados, float _base, float _altura) : Figuras(_nolados), base(_base), altura(_altura) {}
    void figura() override {
        cout << "Tu figura es un triángulo" << endl;
    }
    void perimetro() override {
        float _perimetro = base + 2 * altura;
        cout << "El perímetro del triángulo es de " << _perimetro << endl;
    }
    void area() override {
        float _area = (base * altura) / 2;
        cout << "El área del triángulo es de " << _area << endl;
    }
};

class Cuadrado : public Figuras {
private:
    float lado;

public:
    Cuadrado(int _nolados, float _lado) : Figuras(_nolados), lado(_lado) {}
    void figura() override {
        cout << "Tu figura es un cuadrado" << endl;
    }
    void perimetro() override {
        float _perímetro = 4 * lado;
        cout << "El perímetro del cuadrado es de " << _perímetro << endl;
    }
    void area() override {
        float _area = pow(lado, 2);
        cout << "El área del cuadrado es de " << _area << endl;
    }
};

class Rectangulo : public Figuras {
private:
    float base, altura;

public:
    Rectangulo(int _nolados, float _base, float _altura) : Figuras(_nolados), base(_base), altura(_altura) {}
    void figura() override {
        cout << "Tu figura es un rectángulo" << endl;
    }
    void perimetro() override {
        float _perímetro = 2 * base + 2 * altura;
        cout << "El perímetro del rectángulo es de " << _perímetro << endl;
    }
    void area() override {
        float _area = base * altura;
        cout << "El área del rectángulo es de " << _area << endl;
    }
};

int main() {
    Figuras *figura;
    figura = new Circulo(0, 5);  // Círculo
    figura->figura();
    figura->perimetro();
    figura->area();
    delete figura;

    figura = new Triangulo(3, 10, 5);  // Triángulo
    figura->figura();
    figura->perimetro();
    figura->area();
    delete figura;

    figura = new Cuadrado(4, 10);  // Cuadrado
    figura->figura();
    figura->perimetro();
    figura->area();
    delete figura;

    figura = new Rectangulo(4, 10, 5);  // Rectángulo
    figura->figura();
    figura->perimetro();
    figura->area();
    delete figura;

    return 0;
}
