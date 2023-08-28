#include<iostream>
    using namespace std;
    //Área del Círculo
    float AreaCirculo(float radio)
    {
        float area;
        area = 3.1416*radio*radio;
        return area;
    }
    //Área del Rectángulo
    float AreaRec(float base,float altura)
    {
        float area;
        area = base*altura;
        return area;
    }
    //Área del triángulo Rectángulo
    float AreaTrRec(float base,float altura)
    {
        float area;
        area = (base*altura)/2;
        return area;
    }
    //Perímetro del Cuadrado
    float PerCuadrado(float lado)
    {
        float perimetro;
        perimetro = lado*4;
        return perimetro;
    }
    //Perímetro del Romboide
    float PerRomboide(float bases, float laterales)
    {
        float perimetro;
        perimetro = (2*bases)+(2*laterales);
        return perimetro;
    }
    //Perímetro del Triángulo Isósceles
    float PerTrIsoce(float lado, float base)
    {
        float perimetro;
        perimetro = (lado*2)+ base;
        return perimetro;
    }

    int main()
    {
        float radio, area, perimetro, base, altura, lado, bases, laterales;
        int opc;
        cout<<"Programa para calcular Áreas y PerÍmetros de figuras geométricas"<<endl;
        cout<<"Elige una opcion válida: "<<endl;
        cout<<"Opción 1: Área del Círculo "<<endl;
        cout<<"Opción 2: Área del Rectángulo "<<endl;
        cout<<"Opción 3: Área del Triángulo rectángulo "<<endl;
        cout<<"Opción 4: Perímetro del Cuadrado "<<endl;
        cout<<"Opción 5: Perímetro del Romboide "<<endl;
        cout<<"Opción 6: Perímetro del Triángulo Isósceles "<<endl;
        cin>>opc;
        if (opc == 1) 
        {
            //Áreas
            cout<<"Ingresar el radio del círculo."<<endl;
            cin>>radio;
            area = AreaCirculo(radio);
            cout<<"El área del círculo es: "<<area<<endl;
            return 0;
        }
        else if (opc == 2) 
        {
            cout<<"Ingresa la base y la altura de tu rectángulo"<<endl;
            cin>>base;
            cin>>altura;
            area = AreaRec(base,altura);
            cout<<"El área del rectángulo es: "<<area<<endl;
            return 0;
        }
        else if (opc == 3) 
        {
 
            cout<<"Ingresa la base y la altura de tu triángulo Rectángulo"<<endl;
            cin>>base;
            cin>>altura;
            area = AreaTrRec(base,altura);
            cout<<"El área del Triángulo Rectángulo es: "<<area<<endl;
            return 0;
        }
        else if (opc == 4) 
        {
            //Perimetros
            cout<<"Ingresa el lado del cuadrado"<<endl;
            cin>>lado;
            perimetro = PerCuadrado(lado);
            cout<<"El perímetro del cuadrado es: "<<perimetro<<endl;
            return 0;
        }
        else if (opc == 5) 
        {

            cout<<"Ingresa la base y la altura del romboide"<<endl;
            cin>>bases;
            cin>>laterales;
            perimetro = PerRomboide(bases, laterales);
            cout<<"El perímetro del Romboide es: "<<perimetro<<endl;
            return 0;
        }
        else if (opc == 6) 
        {

            cout<<"Ingresa la altura y de la base del triángulo Isósceles"<<endl;
            cin>>lado;
            cin>>base;
            perimetro = PerTrIsoce(lado, base);
            cout<<"El perímetro del Triangulo Isóceles es: "<<perimetro<<endl;
            return 0;
        }
        else 
        {
            cout<<"Opcion inválida";
            return 0;
        }
    }