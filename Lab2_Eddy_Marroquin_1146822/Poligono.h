using namespace std;

struct Poligono
{
	double lado1;
	double lado2;
	double lado3;
	double lado4;
	double lado5;
	double lado6;
	double lado7;
	double lado8;
	double lado9;
	double lado10;
	double Base, Altura, Apotema;


	// CONSTRUCTOR
	Poligono()
	{
		lado1 = 0;
		lado2 = 0;
		lado3 = 0;
		lado4 = 0;
		lado5 = 0;
		lado6 = 0;
		lado7 = 0;
		lado8 = 0;
		lado9 = 0;
		lado10 = 0;
		Base = 0, Altura = 0; Apotema = 0;
	}

	// PERIMETRO
	double PerimetroTriangulo() {
		return (lado1 + lado2 + lado3);
	}
	double PerimetroCuadrilatero() {
		return (lado1 + lado2 + lado3 + lado4);
	}
	double PerimetroPentagono() {
		return (lado1 + lado2 + lado3 + lado4 + lado5);
	}
	double PerimetroHexagono() {
		return (lado1 + lado2 + lado3 + lado4 + lado5 + lado6);
	}
	double PerimetroHeptagono() {
		return (lado1 + lado2 + lado3 + lado4 + lado5 + lado6 + lado7);
	}
	double PerimetroOctagono() {
		return (lado1 + lado2 + lado3 + lado4 + lado5 + lado6 + lado7 + lado8);
	}
	double PerimetroEneagono() {
		return (lado1 + lado2 + lado3 + lado4 + lado5 + lado6 + lado7 + lado8 + lado9);
	}
	double PerimetroDecagono() {
		return (lado1 + lado2 + lado3 + lado4 + lado5 + lado6 + lado7 + lado8 + lado9 + lado10);
	}

	// AREA
	double AreaTriangulo() {
		return (Base * Altura);
	}
	double AreaCuadrilatero() {
		return ((Base * Altura) / 2);
	}
	double AreaPentagono() {
		return ((PerimetroPentagono() * Apotema) / 2);
	}
	double AreaHexagono() {
		return ((PerimetroHexagono() * Apotema) / 2);
	}
	double AreaHeptagono() {
		return ((PerimetroHeptagono() * Apotema) / 2);
	}
	double AreaOctagono() {
		return ((PerimetroOctagono() * Apotema) / 2);
	}
	double AreaEneagono() {
		return ((PerimetroEneagono() * Apotema) / 2);
	}
	double AreaDecagono() {
		return ((PerimetroDecagono() * Apotema) / 2);
	}
};