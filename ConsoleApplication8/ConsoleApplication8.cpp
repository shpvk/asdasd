#include <iostream>


class Laptop
{
private:
	char* model;
	char* color;

	double size;
	double price;
public:
	Laptop();
	Laptop(const char* model, const char* color, double size, double price);
	~Laptop();
	void SetModel(char* model);
	char* GetModel();
	void SetColor(char* color);
	char* GetColor();
	void SetSize(double size);
	double GetSize();
	void SetPrice(double price);
	double GetPrice();
	void Print();
	void Init();
};


Laptop::Laptop()
{
	model = nullptr;
	color = nullptr;
	size = 0;
	price = 0;
}
Laptop::Laptop(const char* model, const char* color, double size, double price)
{
	if (this->model != nullptr)
	{
		delete[] this->model;
	}
	this->model = new char[strlen(model) + 1];
	strcpy_s(this->model, strlen(model) + 1, model);

	if (this->color != nullptr)
	{
		delete[] this->color;
	}
	this->color = new char[strlen(color) + 1];
	strcpy_s(this->color, strlen(color) + 1, color);

	this->size = size;
	this->price = price;
}
Laptop::~Laptop()
{
	delete[] model;
	delete[] color;
}
void Laptop::SetModel(char* model)
{
	if (this->model != nullptr)
	{
		delete[] this->model;
	}

	this->model = new char[strlen(model) + 1];
	strcpy_s(this->model, strlen(model) + 1, model);
}
char* Laptop::GetModel()
{
	return model;
}
void Laptop::SetColor(char* color)
{
	if (this->color != nullptr)
	{
		delete[] this->color;
	}

	this->color = new char[strlen(color) + 1];
	strcpy_s(this->color, strlen(color) + 1, color);
}
char* Laptop::GetColor()
{
	return color;
}
void Laptop::SetSize(double size)
{
	this->size = size;
}
double Laptop::GetSize()
{
	return size;
}
void Laptop::SetPrice(double price)
{
	this->price = price;
}
double Laptop::GetPrice()
{
	return price;
}
void Laptop::Print()
{
	std::cout << "Model: " << model << std::endl;
	std::cout << "Color: " << color << std::endl;
	std::cout << "Size: " << size << std::endl;
	std::cout << "Price: " << price << std::endl;
}
void Laptop::Init()
{
	model = new char[256];
	std::cout << "Enter model: ";
	std::cin >> model;

	color = new char[256];
	std::cout << "Enter color: ";
	std::cin >> color;

	std::cout << "Enter size: ";
	std::cin >> size;

	std::cout << "Enter price: ";
	std::cin >> price;
}

int main()
{
	Laptop l1("Lenovo", "White", 10, 65000);

	l1.Print();

	l1.Init();
	l1.Print();



	return 0;
}