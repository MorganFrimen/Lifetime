#include <iostream>

class Entity
{
public:
	Entity()
	{
		std::cout << "Start Entyti" << std::endl;
	}

	~Entity()
	{
		std::cout << "Destroy Entyti" << std::endl;
	}
};

class ScopedPtr
{
private:
	Entity* m_Prt;
public:
	ScopedPtr(Entity* ptr)
		: m_Prt(ptr){}

	~ScopedPtr()
	{
		delete m_Prt;
	}
};


int main()
{
	{
		ScopedPtr e = new Entity();
	}
	std::cin.get();
}