#include<iostream>

class get
{
public:
	int r;
	void aoc();
};

void get::aoc()
{
	std::cin>>r;

}

class show:public get
{
public:
	void display();

};

void show::display()
{
std::cout<<"Area:"<<3.14*r*r;
}

int main()
{
	get obj;
	obj.aoc();
	//show obj1;
	obj.display();
	return 0;


}